/*
 * Scala (https://www.scala-lang.org)
 *
 * Copyright EPFL and Lightbend, Inc.
 *
 * Licensed under Apache License 2.0
 * (http://www.apache.org/licenses/LICENSE-2.0).
 *
 * See the NOTICE file distributed with this work for
 * additional information regarding copyright ownership.
 */

package scala.tools.nsc
package typechecker

import scala.collection.mutable
import scala.collection.mutable.ListBuffer
import scala.reflect.internal.util.CodeAction
import scala.tools.nsc.Reporting.WarningCategory
import scala.tools.nsc.settings.ScalaVersion
import scala.tools.nsc.settings.NoScalaVersion
import symtab.Flags._
import transform.Transform

/** Post-attribution checking and transformation.
 *
 *  This phase checks the following postconditions:
 *
 *  - All overrides conform to rules.
 *  - All type arguments conform to bounds.
 *  - Every use of a type variable conforms to the variance annotation of that variable.
 *  - No forward reference to a term symbol extends beyond a value definition.
 *
 *  It performs the following transformations:
 *
 *  - Local modules are replaced by variables and classes.
 *  - Calls to case factory methods are replaced by new's.
 *  - Eliminate branches in a conditional if the condition is a constant.
 *
 *  @author  Martin Odersky
 */
abstract class RefChecks extends Transform {

  val global: Global               // need to repeat here because otherwise last mixin defines global as
                                   // SymbolTable. If we had DOT this would not be an issue

  import global._
  import definitions._
  import typer.typed

  /** the following two members override abstract members in Transform */
  val phaseName: String = "refchecks"

  def newTransformer(unit: CompilationUnit): RefCheckTransformer =
    new RefCheckTransformer(unit)

  val toJavaRepeatedParam  = SubstSymMap(RepeatedParamClass -> JavaRepeatedParamClass)
  val toScalaRepeatedParam = SubstSymMap(JavaRepeatedParamClass -> RepeatedParamClass)

  def accessFlagsToString(sym: Symbol) = flagsToString(
    sym getFlag (PRIVATE | PROTECTED),
    if (sym.hasAccessBoundary) "" + sym.privateWithin.name else ""
  )

  def overridesTypeInPrefix(tp1: Type, tp2: Type, prefix: Type): Boolean = (tp1.dealiasWiden, tp2.dealiasWiden) match {
    case (MethodType(List(), rtp1), NullaryMethodType(rtp2)) => rtp1 <:< rtp2
    case (NullaryMethodType(rtp1), MethodType(List(), rtp2)) => rtp1 <:< rtp2
    case (TypeRef(_, sym, _), _) if sym.isModuleClass        => overridesTypeInPrefix(NullaryMethodType(tp1), tp2, prefix)
    case (_, TypeRef(_, sym, _)) if sym.isModuleClass        => overridesTypeInPrefix(tp1, NullaryMethodType(tp2), prefix)
    case _                                                   => tp1 <:< tp2
  }

  private val separatelyCompiledScalaSuperclass = perRunCaches.newAnyRefMap[Symbol, Unit]()
  final def isSeparatelyCompiledScalaSuperclass(sym: Symbol) = if (globalPhase.refChecked){
    separatelyCompiledScalaSuperclass.contains(sym)
  } else {
    // conservative approximation in case someone in pre-refchecks phase asks for `exitingFields(someClass.info)`
    // and we haven't run the refchecks tree transform which populates `separatelyCompiledScalaSuperclass`
    false
  }

  class RefCheckTransformer(unit: CompilationUnit) extends AstTransformer {
    private final val indent = "  "

    var localTyper: analyzer.Typer = typer
    var currentApplication: Tree = EmptyTree
    var inAnnotation: Boolean = false
    var inPattern: Boolean = false
    @inline final def savingInPattern[A](body: => A): A = {
      val saved = inPattern
      try body finally inPattern = saved
    }

    // Track symbols of the refinement's parents and the base at which we've checked them,
    // as well as the entire refinement type seen at that base.
    // No need to check the same symbols again in a base that's a subclass of a previously checked base
    private val checkedCombinations = mutable.Map[List[Symbol], (Symbol, Type)]()
    private def notYetCheckedOrAdd(rt: RefinedType, currentBase: Symbol) = {
      val seen = checkedCombinations.get(rt.parents.map(_.typeSymbol)).exists {
        case (prevBase, prevTp) => currentBase.isSubClass(prevBase) && rt =:= prevTp.asSeenFrom(currentBase.thisType, prevBase)
      }

      if (!seen) checkedCombinations.addOne((rt.parents.map(_.typeSymbol), (currentBase, rt)))

      !seen
    }

    private def refchecksWarning(pos: Position, msg: String, cat: WarningCategory, actions: List[CodeAction] = Nil): Unit =
      runReporting.warning(pos, msg, cat, currentOwner, actions)

    // only one overloaded alternative is allowed to define default arguments
    private def checkOverloadedRestrictions(clazz: Symbol, defaultClass: Symbol): Unit = {
      // Using the default getters (such as methodName$default$1) as a cheap way of
      // finding methods with default parameters. This way, we can limit the members to
      // those with the DEFAULTPARAM flag, and infer the methods. Looking for the methods
      // directly requires inspecting the parameter list of every one. That modification
      // shaved 95% off the time spent in this method.
      val defaultGetters     = defaultClass.info.findMembers(excludedFlags = PARAM, requiredFlags = DEFAULTPARAM)
      val defaultMethodNames = defaultGetters map (sym => nme.defaultGetterToMethod(sym.name))

      defaultMethodNames.toList.distinct foreach { name =>
        val methods      = clazz.info.findMember(name, 0L, requiredFlags = METHOD, stableOnly = false).alternatives
        def hasDefaultParam(tpe: Type): Boolean = tpe match {
          case MethodType(params, restpe) => (params exists (_.hasDefault)) || hasDefaultParam(restpe)
          case _                          => false
        }
        val haveDefaults = methods.filter(sym => mexists(sym.info.paramss)(_.hasDefault) && !nme.isProtectedAccessorName(sym.name))

        if (haveDefaults.lengthCompare(1) > 0) {
          val owners = haveDefaults map (_.owner)
           // constructors of different classes are allowed to have defaults
          if (haveDefaults.exists(x => !x.isConstructor) || owners.distinct.size < haveDefaults.size) {
            reporter.error(clazz.pos,
              "in "+ clazz +
              ", multiple overloaded alternatives of "+ haveDefaults.head +
              " define default arguments" + (
                if (owners.forall(_ == clazz)) "."
                else ".\nThe members with defaults are defined in "+owners.map(_.fullLocationString).mkString("", " and ", ".")
              )
            )
          }
        }
      }

      // Check for doomed attempt to overload applyDynamic
      if (clazz isSubClass DynamicClass) {
        for ((_, m1 :: m2 :: _) <- (clazz.info member nme.applyDynamic).alternatives groupBy (_.typeParams.length)) {
          reporter.error(m1.pos, "implementation restriction: applyDynamic cannot be overloaded except by methods with different numbers of type parameters, e.g. applyDynamic[T1](method: String)(arg: T1) and applyDynamic[T1, T2](method: String)(arg1: T1, arg2: T2)")
        }
      }

      // This has become noisy with implicit classes.
      if (settings.isDeveloper && settings.warnPolyImplicitOverload) {
        clazz.info.decls.foreach(sym => if (sym.isImplicit && sym.typeParams.nonEmpty) {
          // implicit classes leave both a module symbol and a method symbol as residue
          val alts = clazz.info.decl(sym.name).alternatives filterNot (_.isModule)
          if (alts.size > 1)
            alts foreach (x => refchecksWarning(x.pos, "parameterized overloaded implicit methods are not visible as view bounds", WarningCategory.LintPolyImplicitOverload))
        })
      }
    }

// Override checking ------------------------------------------------------------

    /** Add bridges for vararg methods that extend Java vararg methods
     */
    def addVarargBridges(clazz: Symbol): List[Tree] = {
      // This is quite expensive, so attempt to skip it completely.
      // Insist there at least be a java-defined ancestor which
      // defines a varargs method. TODO: Find a cheaper way to exclude.
      if (inheritsJavaVarArgsMethod(clazz)) {
        log("Found java varargs ancestor in " + clazz.fullLocationString + ".")
        val self = clazz.thisType
        val bridges = new ListBuffer[Tree]

        def varargBridge(member: Symbol, bridgetpe: Type): Tree = {
          log(s"Generating varargs bridge for ${member.fullLocationString} of type $bridgetpe")

          val newFlags = (member.flags | VBRIDGE) & ~PRIVATE
          val bridge   = member.cloneSymbolImpl(clazz, newFlags) setPos clazz.pos
          bridge.setInfo(bridgetpe.cloneInfo(bridge))
          clazz.info.decls enter bridge

          val params  = bridge.paramss.head
          val elemtp  = params.last.tpe.typeArgs.head
          val idents  = params map Ident
          val lastarg = gen.wildcardStar(gen.mkWrapVarargsArray(idents.last, elemtp))
          val body    = Apply(Select(This(clazz), member), idents.init :+ lastarg)

          localTyper typed DefDef(bridge, body)
        }

        // For all concrete non-private members (but: see below) that have a (Scala) repeated
        //   parameter: compute the corresponding method type `jtpe` with a Java repeated parameter
        //   if a method with type `jtpe` exists and that method is not a varargs bridge
        //   then create a varargs bridge of type `jtpe` that forwards to the
        //   member method with the Scala vararg type.
        //
        // @PP: Can't call nonPrivateMembers because we will miss refinement members,
        //   which have been marked private. See scala/bug#4729.
        for (member <- nonTrivialMembers(clazz)) {
          log(s"Considering $member for java varargs bridge in $clazz")
          if (!member.isDeferred && member.isMethod && hasRepeatedParam(member.info)) {
            val inherited = clazz.info.nonPrivateMemberAdmitting(member.name, VBRIDGE)

            // Delaying calling memberType as long as possible
            if (inherited.exists) {
              val jtpe = toJavaRepeatedParam(self memberType member)
              // this is a bit tortuous: we look for non-private members or bridges
              // if we find a bridge everything is OK. If we find another member,
              // we need to create a bridge
              val inherited1 = inherited filter (sym => !(sym hasFlag VBRIDGE) && (self memberType sym matches jtpe))
              if (inherited1.exists)
                bridges += varargBridge(member, jtpe)
            }
          }
        }

        if (bridges.size > 0)
          log(s"Adding ${bridges.size} bridges for methods extending java varargs.")

        bridges.toList
      }
      else Nil
    }

    /** 1. Check all members of class `clazz` for overriding conditions.
     *  That is for overriding member M and overridden member O:
     *
     *    1.1. M must have the same or stronger access privileges as O.
     *    1.2. O must not be final.
     *    1.3. O is deferred, or M has `override` modifier.
     *    1.4. If O is stable, then so is M.
     *    1.6. If O is a type alias, then M is an alias of O.
     *    1.7. If O is an abstract type then
     *       1.7.1 either M is an abstract type, and M's bounds are sharper than O's bounds.
     *             or M is a type alias or class which conforms to O's bounds.
     *       1.7.2 higher-order type arguments must respect bounds on higher-order type parameters  -- @M
     *              (explicit bounds and those implied by variance annotations) -- @see checkKindBounds
     *    1.8. If O and M are values, then
     *    1.8.1  M's type is a subtype of O's type, or
     *    1.8.2  M is of type []S, O is of type ()T and S <: T, or
     *    1.8.3  M is of type ()S, O is of type []T and S <: T, or
     *    1.9.  If M is a macro def, O cannot be deferred unless there's a concrete method overriding O.
     *    1.10. If M is not a macro def, O cannot be a macro def.
     *  2. Check that only abstract classes have deferred members
     *  3. Check that concrete classes do not have deferred definitions
     *     that are not implemented in a subclass.
     *  4. Check that every member with an `override` modifier
     *     overrides some other member.
     *  5. Check that the nested class do not shadow other nested classes from outer class's parent.
     */
    private def checkAllOverrides(clazz: Symbol, typesOnly: Boolean = false): Unit = {
      val self = clazz.thisType

      case class MixinOverrideError(member: Symbol, msg: String, actions: List[CodeAction], s3Migration: Boolean)

      val mixinOverrideErrors = new ListBuffer[MixinOverrideError]()

      def issue(pos: Position, msg: String, actions: List[CodeAction], s3Migration: Boolean) =
        if (s3Migration) runReporting.warning(pos, msg, WarningCategory.Scala3Migration, currentOwner, actions)
        else runReporting.error(pos, msg, actions)

      def printMixinOverrideErrors(): Unit = {
        mixinOverrideErrors.toList match {
          case List() =>
          case List(MixinOverrideError(_, msg, actions, s3Migration)) =>
            issue(clazz.pos, msg, actions, s3Migration)
          case MixinOverrideError(member, msg, actions, s3Migration) :: others =>
            val others1 = others.map(_.member.name.decode).filter(member.name.decode != _).distinct
            issue(
              clazz.pos,
              if (others1.isEmpty) msg
              else s"$msg;\n other members with override errors are: ${others1.mkString(", ")}",
              actions,
              s3Migration)
        }
      }

      def infoString(sym: Symbol) = infoString0(sym, sym.owner != clazz)
      def infoStringWithLocation(sym: Symbol) = infoString0(sym, showLocation = true)

      def infoString0(member: Symbol, showLocation: Boolean) = {
        val location =
          if (!showLocation) ""
          else member.ownsString match {
            case ""   => ""
            case s    => s" (defined in $s)"
          }
        val macroStr = if (member.isTermMacro) "macro " else ""

        macroStr + member.defStringSeenAs(self.memberInfo(member)) + location
      }

      /* Check that all conditions for overriding `other` by `member` of class `clazz` are met.
       *
       * TODO: error messages could really be improved, including how they are composed
       */
      def checkOverride(pair: SymbolPair): Unit = {
        import pair.{highType, lowType, highInfo, rootType}

        val member = pair.low
        val other = pair.high
        val memberClass = member.owner
        val otherClass = other.owner

        // debuglog(s"Checking validity of ${member.fullLocationString} overriding ${other.fullLocationString}")

        def noErrorType = !pair.isErroneous
        def isRootOrNone(sym: Symbol) = sym != null && sym.isRoot || sym == NoSymbol
        val isMemberClass = memberClass == clazz
        def isNeitherInClass = !isMemberClass && otherClass != clazz

        /** Emit an error if member is owned by current class, using the member position.
         *  Otherwise, accumulate the error, to be emitted after other messages, using the class position.
         */
        def emitOverrideError(fullmsg: String, actions: List[CodeAction] = Nil, s3Migration: Boolean = false): Unit =
          if (isMemberClass) issue(member.pos, fullmsg, actions, s3Migration)
          else mixinOverrideErrors += MixinOverrideError(member, fullmsg, actions, s3Migration)

        def overriddenWithAddendum(msg: String, foundReq: Boolean = settings.isDebug): String = {
          val isConcreteOverAbstract =
            otherClass.isSubClass(memberClass) && other.isDeferred && !member.isDeferred
          val addendum =
            if (isConcreteOverAbstract)
              sm"""|;
                   |${indent}(note that ${infoStringWithLocation(other)} is abstract,
                   |${indent}and is therefore overridden by concrete ${infoStringWithLocation(member)})"""
            else if (foundReq) {
              def info(sym: Symbol) = self.memberInfo(sym) match { case tp if sym.isGetter || sym.isValue && !sym.isMethod => tp.resultType case tp => tp }
              analyzer.foundReqMsg(info(member), info(other))
            }
            else ""
          val msg1 = if (!msg.isEmpty) s"\n$indent$msg" else msg

          s"${infoStringWithLocation(other)}${msg1}${addendum}"
        }

        def overrideError(msg: String): Unit =
          if (noErrorType) emitOverrideError(msg)

        def getWithIt = if (isMemberClass) "" else s"with ${infoString(member)}"

        def overrideErrorWithMemberInfo(msg: String, actions: List[CodeAction] = Nil, s3Migration: Boolean = false): Unit =
          if (noErrorType) emitOverrideError(s"${msg}\n${overriddenWithAddendum(getWithIt)}", actions, s3Migration)

        def overrideErrorOrNullaryWarning(msg: String, actions: List[CodeAction]): Unit = if (isMemberClass || !member.owner.isSubClass(other.owner))
          if (currentRun.isScala3)
            overrideErrorWithMemberInfo(msg, actions, s3Migration = true)
          else if (isMemberClass)
            refchecksWarning(member.pos, msg, WarningCategory.OtherNullaryOverride, actions)
          else
            refchecksWarning(clazz.pos, msg, WarningCategory.OtherNullaryOverride, actions)

        def overrideTypeError(): Unit =
          if (member.isModule && other.isModule)
            overrideError(sm"""|overriding ${other.fullLocationString} with ${member.fullLocationString}:
                               |an overriding object must conform to the overridden object's class bound${
                                analyzer.foundReqMsg(pair.lowClassBound, pair.highClassBound)}""")
          else {
            val needSameType = !other.isDeferred && other.isAliasType
            val msg = s"${getWithIt}${if (needSameType) " (Equivalent type required when overriding a type alias.)" else ""}"
            overrideError(sm"""|incompatible type in overriding
                               |${overriddenWithAddendum(msg, foundReq = !needSameType)}""")
          }

        def overrideErrorConcreteMissingOverride() =
          if (isNeitherInClass && !otherClass.isSubClass(memberClass))
            emitOverrideError(sm"""|$clazz inherits conflicting members:
                                   |$indent${infoStringWithLocation(other)} and
                                   |$indent${infoStringWithLocation(member)}
                                   |$indent(note: this can be resolved by declaring an `override` in $clazz.)""")
          else
            overrideErrorWithMemberInfo("`override` modifier required to override concrete member:")

        def weakerAccessError(advice: String): Unit =
          overrideError(sm"""|weaker access privileges in overriding
                             |${overriddenWithAddendum(advice)}""")
        def overrideAccessError(): Unit =
          weakerAccessError {
            accessFlagsToString(other) match {
              case ""          => "override should be public"
              case otherAccess => s"override should at least be $otherAccess"
            }
          }

        //Console.println(infoString(member) + " overrides " + infoString(other) + " in " + clazz);//DEBUG

        /* Is the intersection between given two lists of overridden symbols empty? */
        def intersectionIsEmpty(syms1: List[Symbol], syms2: List[Symbol]) = !syms1.exists(syms2.contains)

        if (memberClass == ObjectClass && otherClass == AnyClass) () // skip -- can we have a mode of symbolpairs where this pair doesn't even appear?
        else if (typesOnly) checkOverrideTypes()
        else {
          // o: public | protected        | package-protected  (aka java's default access)
          // ^-may be overridden by member with access privileges-v
          // m: public | public/protected | public/protected/package-protected-in-same-package-as-o

          if (member.isPrivate) // (1.1)
            weakerAccessError("override should not be private")

          // todo: align accessibility implication checking with isAccessible in Contexts
          @inline def protectedOK = !other.isProtected || member.isProtected
          @inline def accessBoundaryOK = {
            val ob = other.accessBoundary(memberClass)
            val mb = member.accessBoundary(memberClass)
            @inline def companionBoundaryOK = ob.isClass && mb.isModuleClass && mb.module == ob.companionSymbol
            !isRootOrNone(ob) && (ob.hasTransOwner(mb) || companionBoundaryOK)
          }
          @inline def otherIsJavaProtected = other.isJavaDefined && other.isProtected
          val isOverrideAccessOK =
            member.isPublic ||     // member is public, definitely same or relaxed access
            protectedOK &&         // if o is protected, so is m
            (accessBoundaryOK ||   // m relaxes o's access boundary
              otherIsJavaProtected // overriding a protected java member, see #3946 #12349
            )
          if (!isOverrideAccessOK)
            overrideAccessError()
          else if (other.isClass)
            overrideErrorWithMemberInfo("class definitions cannot be overridden:")
          else if (!other.isDeferred && member.isClass)
            overrideErrorWithMemberInfo("classes can only override abstract types; cannot override:")
          else if (other.isEffectivelyFinal) // (1.2)
            overrideErrorWithMemberInfo("cannot override final member:")
          else {
            // In Java, the OVERRIDE flag is implied
            val memberOverrides = member.isAnyOverride || (member.isJavaDefined && !member.isDeferred)

            // Concrete `other` requires `override` for `member`.
            // Synthetic exclusion for (at least) default getters, fixes scala/bug#5178.
            // We cannot assign the OVERRIDE flag to the default getter:
            // one default getter might sometimes override, sometimes not. Example in comment on ticket.
            if (!memberOverrides && !other.isDeferred && !member.isSynthetic)
              overrideErrorConcreteMissingOverride()
            else if (other.isAbstractOverride && other.isIncompleteIn(clazz) && !member.isAbstractOverride)
              overrideErrorWithMemberInfo("`abstract override` modifiers required to override:")
            else if (memberOverrides && other.hasFlag(ACCESSOR) && !other.hasFlag(STABLE | DEFERRED))
              // TODO: this is not covered by the spec.
              overrideErrorWithMemberInfo("mutable variable cannot be overridden:")
            else if (memberOverrides &&
                     !memberClass.thisType.baseClasses.exists(_.isSubClass(otherClass)) &&
                     !member.isDeferred && !other.isDeferred &&
                     intersectionIsEmpty(member.extendedOverriddenSymbols, other.extendedOverriddenSymbols))
              overrideErrorWithMemberInfo("cannot override a concrete member without a third member that's overridden by both " +
                                          "(this rule is designed to prevent accidental overrides)")
            else if (other.isStable && !member.isStable) // (1.4)
              overrideErrorWithMemberInfo("stable, immutable value required to override:")
            else if (member.isValue && member.isLazy &&
                       other.isValue && other.hasStableFlag && !other.isDeferred && !other.isLazy)
              overrideErrorWithMemberInfo("concrete non-lazy value cannot be overridden:")
            else if (other.isValue && other.isLazy && member.isValue && !member.isLazy)
              overrideErrorWithMemberInfo("value must be lazy when overriding concrete lazy value:")
            else if (other.isDeferred && member.isTermMacro && member.extendedOverriddenSymbols.forall(_.isDeferred)) // (1.9)
              overrideErrorWithMemberInfo("macro cannot override abstract method:")
            else if (other.isTermMacro && !member.isTermMacro) // (1.10)
              overrideErrorWithMemberInfo("macro can only be overridden by another macro:")
            else {
              checkOverrideTypes()
              // Don't bother users with deprecations caused by classes they inherit.
              // Only warn for the pair that has one leg in `clazz`.
              if (isMemberClass) checkOverrideDeprecated()
              def javaDetermined(sym: Symbol) = sym.isJavaDefined || isUniversalMember(sym)
              def exempted = javaDetermined(member) || javaDetermined(other) || member.overrides.exists(javaDetermined)
              // warn that nilary member matched nullary other, so either it was adapted by namer or will be silently mixed in by mixin
              def warnAdaptedNullaryOverride(): Unit = {
                val mbr = if (isMemberClass) "method" else s"${member.fullLocationString} defined"
                val msg = s"$mbr without a parameter list overrides ${other.fullLocationString} defined with a single empty parameter list"
                val namePos = member.pos
                val action =
                  if (namePos.isDefined && namePos.source.sourceAt(namePos) == member.decodedName)
                    runReporting.codeAction("add empty parameter list", namePos.focusEnd, "()", msg)
                  else Nil
                overrideErrorOrNullaryWarning(msg, action)
              }
              def warnExtraParens(): Unit = {
                val mbr = if (isMemberClass) "method" else s"${member.fullLocationString} defined"
                val msg = s"$mbr with a single empty parameter list overrides ${other.fullLocationString} defined without a parameter list"
                val namePos = member.pos
                val action =
                  if (namePos.isDefined && namePos.source.sourceAt(namePos) == member.decodedName)
                    runReporting.codeAction("remove empty parameter list", namePos.focusEnd.withEnd(namePos.end + 2), "", msg, expected = Some(("()", currentUnit)))
                  else Nil
                overrideErrorOrNullaryWarning(msg, action)
              }
              if (member.hasAttachment[NullaryOverrideAdapted.type]) {
                if (!exempted)
                  warnAdaptedNullaryOverride()
              }
              else if (member.paramLists.isEmpty) {
                // Definitions that directly override get a parameter list and a `NullaryOverrideAdapted` attachment
                // in Namers. Here we also warn when there's a mismatch between two mixed-in members.
                if (!member.isStable && other.paramLists.nonEmpty && !exempted && !other.overrides.exists(javaDetermined))
                  warnAdaptedNullaryOverride()
              }
              else if (other.paramLists.isEmpty) {
                if (!exempted && !member.hasAnnotation(BeanPropertyAttr) && !member.hasAnnotation(BooleanBeanPropertyAttr))
                  warnExtraParens()
              }
            }
          }
        }

        def checkOverrideAlias(): Unit = {
          // Important: first check the pair has the same kind, since the substitution
          // carries high's type parameter's bounds over to low, so that
          // type equality doesn't consider potentially different bounds on low/high's type params.
          // In b781e25afe this went from using memberInfo to memberType (now lowType/highType), tested by neg/override.scala.
          // TODO: was that the right fix? it seems type alias's RHS should be checked by looking at the symbol's info
          if (pair.sameKind && lowType.substSym(member.typeParams, other.typeParams) =:= highType) ()
          else overrideTypeError() // (1.6)
        }
        def checkOverrideAbstractType(): Unit = {
          if (!(highInfo.bounds containsType lowType)) { // (1.7.1)
            overrideTypeError(); // todo: do an explaintypes with bounds here
            explainTypes(_.bounds containsType _, highInfo, lowType)
          }
          // check overriding (abstract type --> abstract type or abstract type --> concrete type member (a type alias))
          // making an abstract type member concrete is like passing a type argument
          typer.infer.checkKindBounds(other :: Nil, lowType :: Nil, rootType, memberClass) match { // (1.7.2)
            case Nil        =>
            case kindErrors =>
              reporter.error(member.pos,
                "The kind of " + member.keyString+" " + member.varianceString + member.nameString+
                " does not conform to the expected kind of " + other.defString + other.locationString + "." +
                kindErrors.toList.mkString("\n", ", ", ""))
          }
          // check a type alias's RHS corresponds to its declaration
          // this overlaps somewhat with validateVariance
          if (member.isAliasType) {
            typer.infer.checkKindBounds(member :: Nil, lowType.normalize :: Nil, rootType, memberClass) match {
              case Nil        =>
              case kindErrors =>
                reporter.error(member.pos,
                  "The kind of the right-hand side "+lowType.normalize+" of " + member.keyString+" "+
                  member.varianceString + member.nameString+ " does not conform to its expected kind."+
                  kindErrors.toList.mkString("\n", ", ", ""))
            }
          }
          else if (member.isAbstractType && lowType.isVolatile && !highInfo.upperBound.isVolatile)
            overrideErrorWithMemberInfo("volatile type member cannot override type member with non-volatile upper bound:")
        }
        def checkOverrideTerm(): Unit = {
          member.cookJavaRawInfo() // #11584, #11840
          other.cookJavaRawInfo() // #2454
          if (!overridesTypeInPrefix(lowType, highType, rootType)) { // 8
            overrideTypeError()
            explainTypes(lowType, highType)
          }
          if (member.isStable && !highType.isVolatile) {
            if (lowType.isVolatile)
              overrideErrorWithMemberInfo("member with volatile type cannot override member with non-volatile type:")
            else lowType.normalize.resultType match {
              case rt: RefinedType if !(rt =:= highType) && notYetCheckedOrAdd(rt, pair.base) =>
                // might mask some inconsistencies -- check overrides
                val tsym = rt.typeSymbol
                if (tsym.pos == NoPosition) tsym setPos member.pos
                checkAllOverrides(tsym, typesOnly = true)
              case _ =>
            }
          }
        }
        def checkOverrideTypes(): Unit = {
          if (other.isAliasType)         checkOverrideAlias()
          else if (other.isAbstractType) checkOverrideAbstractType()
          else if (other.isTerm)         checkOverrideTerm()
        }

        def checkOverrideDeprecated(): Unit = {
          if (other.hasDeprecatedOverridingAnnotation && !(member.hasDeprecatedOverridingAnnotation || member.ownerChain.exists(_.isDeprecated))) {
            val version = other.deprecatedOverridingVersion.getOrElse("")
            val since   = if (version.isEmpty) version else s" (since $version)"
            val message = other.deprecatedOverridingMessage map (msg => s": $msg") getOrElse ""
            val report  = s"overriding ${other.fullLocationString} is deprecated$since$message"
            runReporting.deprecationWarning(member.pos, other, member, report, version)
          }
        }
      }

      val opc = new overridingPairs.PairsCursor(clazz)
      while (opc.hasNext) {
        if (!opc.high.isClass)
          checkOverride(opc.currentPair)

        opc.next()
      }
      printMixinOverrideErrors()

      // Verifying a concrete class has nothing unimplemented.
      if (clazz.isConcreteClass && !typesOnly) {
        val abstractErrors = ListBuffer.empty[String]
        def abstractErrorMessage = abstractErrors.mkString("\n")

        def abstractClassError(msg: String, supplement: String = "", mustBeMixin: Boolean = false): Unit = {
          def prelude =
            if (clazz.isAnonymousClass || clazz.isModuleClass) "object creation impossible."
            else if (mustBeMixin) s"$clazz needs to be a mixin."
            else s"$clazz needs to be abstract."

          if (abstractErrors.isEmpty) abstractErrors += prelude
          abstractErrors += msg
          if (!supplement.isEmpty) abstractErrors += supplement
        }

        def javaErasedOverridingSym(sym: Symbol): Symbol =
          clazz.tpe.nonPrivateMemberAdmitting(sym.name, BRIDGE).filter(other =>
            !other.isDeferred && other.isJavaDefined && !sym.enclClass.isSubClass(other.enclClass) && {
              // #3622: erasure operates on uncurried types --
              // note on passing sym in both cases: only sym.isType is relevant for uncurry.transformInfo
              // !!! erasure.erasure(sym, uncurry.transformInfo(sym, tp)) gives erroneous or inaccessible type - check whether that's still the case!
              def uncurryAndErase(tp: Type) = erasure.erasure(sym)(uncurry.transformInfo(sym, tp))
              val tp1 = uncurryAndErase(clazz.thisType.memberType(sym))
              val tp2 = uncurryAndErase(clazz.thisType.memberType(other))
              exitingErasure(tp1 matches tp2)
            })

        def ignoreDeferred(member: Symbol) =
          (member.isAbstractType && !member.isFBounded) || (
            // the test requires exitingErasure so shouldn't be
            // done if the compiler has no erasure phase available
               member.isJavaDefined
            && (currentRun.erasurePhase == NoPhase || javaErasedOverridingSym(member) != NoSymbol)
          )

        // 2. Check that only abstract classes have deferred members
        def checkNoAbstractMembers(): Unit = {
          val NoError = null.asInstanceOf[String]
          val EmptyDiagnostic = ""
          def diagnose(member: Symbol, accessors: List[Symbol], nonPrivateMembers: Scope, fastDiagnostics: Boolean): String = {
            val underlying = analyzer.underlyingSymbol(member) // TODO: don't use this method

            // Give a specific error message for abstract vars based on why it fails:
            // It could be unimplemented, have only one accessor, or be uninitialized.
            val isMultiple = accessors.size > 1

            if (accessors.exists(_.isSetter) || (member.isGetter && !isMultiple && member.setterIn(member.owner).exists)) {
              if (member.isSetter && isMultiple) NoError // If both getter and setter are missing, squelch the setter error.
              else if (member.isSetter) "an abstract var requires a setter in addition to the getter"
              else if (member.isGetter && !isMultiple) "an abstract var requires a getter in addition to the setter"
              else "variables need to be initialized to be defined"
            }
            else if (!fastDiagnostics && underlying.isMethod) {
              // Highlight any member that nearly matches: same name and arity,
              // but differs in one param or param list.
              val abstractParamLists = underlying.paramLists
              val matchingArity      = nonPrivateMembers.reverseIterator.filter { m =>
                !m.isDeferred &&
                m.name == underlying.name &&
                sameLength(m.paramLists, abstractParamLists) &&
                sumSize(m.paramLists, 0) == sumSize(abstractParamLists, 0) &&
                sameLength(m.tpe.typeParams, underlying.tpe.typeParams) &&
                !(m.isJavaDefined && m.hasFlag(JAVA_DEFAULTMETHOD))
              }.toList
              matchingArity match {
                // So far so good: only one candidate method
                case concrete :: Nil =>
                  val concreteParamLists = concrete.paramLists
                  val aplIter = abstractParamLists.iterator.flatten
                  val cplIter = concreteParamLists.iterator.flatten
                  def mismatch(apl: Symbol, cpl: Symbol): Option[(Type, Type)] =
                    if (apl.tpe.asSeenFrom(clazz.tpe, underlying.owner) =:= cpl.tpe) None else Some(apl.tpe -> cpl.tpe)
                  def missingImplicit = abstractParamLists.zip(concreteParamLists).exists {
                    case (abss, konkrete) => abss.headOption.exists(_.isImplicit) && !konkrete.headOption.exists(_.isImplicit)
                  }
                  val mismatches = mapFilter2(aplIter, cplIter)(mismatch).take(2).toList
                  mismatches match {
                    // Only one mismatched parameter: say something useful.
                    case (pa, pc) :: Nil  =>
                      val abstractSym = pa.typeSymbol
                      val concreteSym = pc.typeSymbol
                      def subclassMsg(c1: Symbol, c2: Symbol) =
                        s": ${c1.fullLocationString} is a subclass of ${c2.fullLocationString}, but method parameter types must match exactly."
                      def wrongSig = {
                        val m = concrete
                        fullyInitializeSymbol(m)
                        m.defStringSeenAs(clazz.tpe_*.memberType(m))
                      }
                      val addendum =
                        if (abstractSym == concreteSym) {
                          if (underlying.isJavaDefined && pa.typeArgs.isEmpty && abstractSym.typeParams.nonEmpty)
                            s". To implement this raw type, use ${rawToExistential(pa)}"
                          else if (pa.prefix =:= pc.prefix)
                            ": their type parameters differ"
                          else
                            ": their prefixes (i.e., enclosing instances) differ"
                        }
                        else if (abstractSym.isSubClass(concreteSym)) subclassMsg(abstractSym, concreteSym)
                        else if (concreteSym.isSubClass(abstractSym)) subclassMsg(concreteSym, abstractSym)
                        else s" in `$wrongSig`"
                      s"$pa does not match $pc$addendum"
                    case Nil if missingImplicit => "overriding member must declare implicit parameter list" // other overriding gotchas
                    case _ => EmptyDiagnostic
                  }
                case _ => EmptyDiagnostic
              }
            }
            else EmptyDiagnostic
          }
          def emitErrors(missing: List[Symbol], nonPrivateMembers: Scope): Unit = {
            val fastDiagnostics = missing.lengthCompare(100) > 0
            // Group missing members by the name of the underlying symbol, to consolidate getters and setters.
            val byName = missing.groupBy(_.name.getterName)
            // There may be 1 or more missing members declared in 1 or more parents.
            // If a single parent, the message names it. Otherwise, missing members are grouped by declaring class.
            val byOwner = missing.groupBy(_.owner).toList
            val announceOwner = byOwner.size > 1
            def membersStrings(members: List[Symbol]) = {
              members.sortBy(_.name).flatMap { m =>
                val accessors = byName.getOrElse(m.name.getterName, Nil)
                val diagnostic = diagnose(m, accessors, nonPrivateMembers, fastDiagnostics)
                if (diagnostic == NoError) Nil
                else {
                  val s0a = infoString0(m, showLocation = false)
                  fullyInitializeSymbol(m)
                  val s0b = m.defString
                  val s1 = m.defStringSeenAs(clazz.tpe_*.memberType(m))
                  val implMsg = if (s1 != s0a) s"implements `$s0a`" else if (s1 != s0b) s"implements `$s0b`" else ""
                  val spacer  = if (diagnostic.nonEmpty && implMsg.nonEmpty) "; " else ""
                  val comment = if (diagnostic.nonEmpty || implMsg.nonEmpty) s" // $implMsg$spacer$diagnostic" else ""
                  s"$s1 = ???$comment" :: Nil
                }
              }
            }
            var count = 0
            def isMulti = count > 1
            def helpfulListing =
              byOwner.sortBy(_._1.name.toString).flatMap {
                case (owner, members) =>
                  val ms = membersStrings(members) :+ ""
                  count += ms.size - 1
                  if (announceOwner) s"// Members declared in ${owner.fullName}" :: ms else ms
              }.init.map(s => s"  $s\n").mkString
            val stubs = helpfulListing
            def singleParent = if (byOwner.size == 1 && byOwner.head._1 != clazz) s" member${if (isMulti) "s" else ""} of ${byOwner.head._1}" else ""
            val line0 =
              if (isMulti) s"Missing implementations for ${count}${val p = singleParent ; if (p.isEmpty) " members" else p}."
              else s"Missing implementation${val p = singleParent ; if (p.isEmpty) p else s" for$p"}:"
            abstractClassError(line0, supplement = stubs)
          }
          def filtered[A](it: Iterator[A])(p: A => Boolean)(q: A => Boolean): (List[A], List[A]) = {
            var ps, qs: List[A] = Nil
            while (it.hasNext) {
              val a = it.next()
              if (p(a)) ps ::= a
              else if (q(a)) qs ::= a
            }
            (ps, qs)
          }
          val nonPrivateMembers = clazz.info.nonPrivateMembersAdmitting(VBRIDGE)
          // Avoid extra allocations with reverseIterator. Filter for abstract members of interest, and bad abstract override.
          val (missing, abstractIncomplete): (List[Symbol], List[Symbol]) =
            filtered(nonPrivateMembers.reverseIterator)(m => m.isDeferred & !ignoreDeferred(m))(m => m.isAbstractOverride && m.isIncompleteIn(clazz))
          if (missing.nonEmpty) emitErrors(missing, nonPrivateMembers)
          // Check the remainder for invalid absoverride.
          for (member <- abstractIncomplete) {
            val explanation = member.superSymbolIn(clazz) match {
              case NoSymbol => ", but no concrete implementation could be found in a base class"
              case other    => " and overrides incomplete superclass member\n" + infoString(other)
            }
            abstractClassError(s"${infoString(member)} is marked `abstract` and `override`$explanation", mustBeMixin = true)
          }
        } // end checkNoAbstractMembers

        // 3. Check that concrete classes do not have deferred definitions
        // that are not implemented in a subclass.
        // Note that this is not the same as (2); In a situation like
        //
        // class C { def m: Int = 0}
        // class D extends C { def m: Int }
        //
        // (3) is violated but not (2).
        def checkNoAbstractDecls(bc: Symbol): Unit = {
          for (decl <- bc.info.decls) {
            if (decl.isDeferred && !ignoreDeferred(decl)) {
              val impl = decl.matchingSymbol(clazz.thisType, admit = VBRIDGE)
              if (impl == NoSymbol || decl.owner.isSubClass(impl.owner))
                abstractClassError(s"No implementation found in a subclass for deferred declaration\n" +
                                          s"${infoString(decl)}${analyzer.abstractVarMessage(decl)}")
            }
          }
          if (bc.superClass hasFlag ABSTRACT)
            checkNoAbstractDecls(bc.superClass)
        }

        checkNoAbstractMembers()
        if (abstractErrors.isEmpty)
          checkNoAbstractDecls(clazz)

        if (abstractErrors.nonEmpty)
          reporter.error(clazz.pos, abstractErrorMessage)
      }
      else if (clazz.isTrait && !clazz.isSubClass(AnyValClass)) {
        // For non-AnyVal classes, prevent abstract methods in interfaces that override
        // final members in Object; see #4431
        for (decl <- clazz.info.decls) {
          // Have to use matchingSymbol, not a method involving overridden symbols,
          // because the scala type system understands that an abstract method here does not
          // override a concrete method in Object. The jvm, however, does not.
          val overridden = decl.matchingSymbol(ObjectClass, ObjectTpe)
          if (overridden.isFinal)
            reporter.error(decl.pos, "trait cannot redefine final method from class AnyRef")
        }
      }

      /* Returns whether there is a symbol declared in class `inclazz`
       * (which must be different from `clazz`) whose name and type
       * seen as a member of `class.thisType` matches `member`'s.
       */
      def hasMatchingSym(inclazz: Symbol, member: Symbol): Boolean = {
        val isVarargs = hasRepeatedParam(member.tpe)
        lazy val varargsType = toJavaRepeatedParam(member.tpe)

        def isSignatureMatch(sym: Symbol) = !sym.isTerm || {
          val symtpe = clazz.thisType.memberType(sym)
          member.tpe.matches(symtpe) || (isVarargs && varargsType.matches(symtpe))
        }
        /* The rules for accessing members which have an access boundary are more
         * restrictive in java than scala.  Since java has no concept of package nesting,
         * a member with "default" (package-level) access can only be accessed by members
         * in the exact same package.  Example:
         *
         *   package a.b;
         *   public class JavaClass { void foo() { } }
         *
         * The member foo() can be accessed only from members of package a.b, and not
         * nested packages like a.b.c.  In the analogous scala class:
         *
         *   package a.b
         *   class ScalaClass { private[b] def foo() = () }
         *
         * The member IS accessible to classes in package a.b.c.  The javaAccessCheck logic
         * is restricting the set of matching signatures according to the above semantics.
         */
        def javaAccessCheck(sym: Symbol) = (
             !inclazz.isJavaDefined                             // not a java defined member
          || !sym.hasAccessBoundary                             // no access boundary
          || sym.isProtected                                    // marked protected in java, thus accessible to subclasses
          || sym.privateWithin == member.enclosingPackageClass  // exact package match
        )
        def classDecl = inclazz.info.nonPrivateDecl(member.name)
                        .orElse(inclazz.info.nonPrivateDecl(member.unexpandedName))
        def matchingSyms = classDecl.filter(sym => isSignatureMatch(sym) && javaAccessCheck(sym))

        (inclazz != clazz) && (matchingSyms != NoSymbol)
      }

      // 4. Check that every defined member with an `override` modifier overrides some other member.
      for (member <- clazz.info.decls)
        if (member.isAnyOverride && !clazz.thisType.baseClasses.exists(hasMatchingSym(_, member))) {
          // for (bc <- clazz.info.baseClasses.tail) Console.println("" + bc + " has " + bc.info.decl(member.name) + ":" + bc.info.decl(member.name).tpe);//DEBUG

          val nonMatching: List[Symbol] = clazz.info.member(member.name).alternatives.filterNot(_.owner == clazz).filterNot(_.isFinal)
          def issueError(suffix: String) = reporter.error(member.pos, member.toString() + " overrides nothing" + suffix)
          nonMatching match {
            case Nil =>
              issueError("")
            case ms =>
              val superSigs = ms.map(m => m.defStringSeenAs(clazz.tpe memberType m)).mkString("\n")
              issueError(s".\nNote: the super classes of ${member.owner} contain the following, non final members named ${member.name}:\n${superSigs}")
          }
          member resetFlag (OVERRIDE | ABSOVERRIDE)  // Any Override
        }

      // 5. Check that the nested class do not shadow other nested classes from outer class's parent
      def checkNestedClassShadow(): Unit =
        if (clazz.isNestedClass && !clazz.isModuleClass) {
          val overridden = clazz.owner.ancestors
            .map(a => clazz.matchingSymbol(a, clazz.owner.thisType))
            .filter(c => c.exists && c.isClass)
          overridden foreach { sym2 =>
            def msg(what: String) = s"shadowing a nested class of a parent is $what but $clazz shadows $sym2 defined in ${sym2.owner}; rename the class to something else"
            if (currentRun.isScala3) runReporting.warning(clazz.pos, msg("deprecated"), WarningCategory.Scala3Migration, clazz)
            else runReporting.deprecationWarning(clazz.pos, clazz, currentOwner, msg("deprecated"), "2.13.2")
          }
        }
      checkNestedClassShadow()
    } // end checkAllOverrides

  // Basetype Checking --------------------------------------------------------

    /** <ol>
     *    <li> <!-- 1 -->
     *      Check that later type instances in the base-type sequence
     *      are subtypes of earlier type instances of the same mixin.
     *    </li>
     *  </ol>
     */
    private def validateBaseTypes(clazz: Symbol): Unit = {
      val seenParents = mutable.HashSet[Type]()
      val seenTypes = Array.fill[List[Type]](clazz.info.baseTypeSeq.length)(Nil)
      val warnCloneable = settings.warnCloneableObject && clazz.isModuleClass

      /* validate all base types of a class in reverse linear order. */
      def register(tp: Type): Unit = {
        val baseClass = tp.typeSymbol
        if (baseClass.isClass) {
          if (!baseClass.isTrait && !baseClass.isJavaDefined && !currentRun.compiles(baseClass) && !separatelyCompiledScalaSuperclass.contains(baseClass))
            separatelyCompiledScalaSuperclass.update(baseClass, ())
          val index = clazz.info.baseTypeIndex(baseClass)
          if (index >= 0) {
            if (!seenTypes(index).exists(_ <:< tp))
              seenTypes(index) = tp :: seenTypes(index).filterNot(tp <:< _)
          }
        }
        if (warnCloneable && baseClass.eq(JavaCloneableClass))
          reporter.warning(clazz.pos, s"$clazz should not extend Cloneable.")
        val remaining = tp.parents.filterNot(seenParents)
        seenParents ++= remaining
        remaining.foreach(register)
      }
      register(clazz.tpe)
      for (i <- 0 until seenTypes.length) {
        val baseClass = clazz.info.baseTypeSeq(i).typeSymbol
        seenTypes(i) match {
          case Nil =>
            devWarning(s"base $baseClass not found in basetypes of $clazz. This might indicate incorrect caching of TypeRef#parents.")
          case _ :: Nil => // OK
          case tp1 :: tp2 :: _ =>
            reporter.error(clazz.pos,
              sm"""|illegal inheritance;
                   | $clazz inherits different type instances of $baseClass:
                   |$tp1 and $tp2""")
            explainTypes(tp1, tp2)
            explainTypes(tp2, tp1)
        }
      }
    }

  // Variance Checking --------------------------------------------------------

    object varianceValidator extends VarianceValidator {
      private def tpString(tp: Type) = tp match {
        case ClassInfoType(parents, _, clazz) => "supertype "+intersectionType(parents, clazz.owner)
        case _                                => "type "+tp
      }
      override def issueVarianceError(base: Symbol, sym: Symbol, required: Variance, tpe: Type): Unit = {
        reporter.error(base.pos,
          s"${sym.variance} $sym occurs in $required position in ${tpString(tpe)} of $base")
      }
    }

// Forward reference checking ---------------------------------------------------

    class LevelInfo(val outer: LevelInfo) {
      val scope: Scope = if (outer eq null) newScope else newNestedScope(outer.scope)
      var maxindex: Int = Int.MinValue
      var refpos: Position = _
      var refsym: Symbol = _
    }

    private var currentLevel: LevelInfo = null
    private val symIndex = perRunCaches.newMap[Symbol, Int]()

    private def pushLevel(): Unit = {
      currentLevel = new LevelInfo(currentLevel)
    }

    private def popLevel(): Unit = {
      currentLevel = currentLevel.outer
    }

    private def enterSyms(stats: List[Tree]): Unit = {
      var index = -1
      for (stat <- stats) {
        index = index + 1

        stat match {
          case _ : MemberDef if stat.symbol.isLocalToBlock =>
            currentLevel.scope.enter(stat.symbol)
            symIndex(stat.symbol) = index
          case _ =>
        }
      }
    }

    private def enterReference(pos: Position, sym: Symbol): Unit = {
      if (sym.isLocalToBlock) {
        val e = currentLevel.scope.lookupEntry(sym.name)
        if ((e ne null) && sym == e.sym) {
          var l = currentLevel
          while (l.scope != e.owner) l = l.outer
          val symindex = symIndex(sym)
          if (l.maxindex < symindex) {
            l.refpos = pos
            l.refsym = sym
            l.maxindex = symindex
          }
        }
      }
    }

// Comparison checking -------------------------------------------------------
    object normalizeAll extends TypeMap {
      def apply(tp: Type) = mapOver(tp).normalize
    }

    def checkImplicitViewOptionApply(pos: Position, fn: Tree, args: List[Tree]): Unit = if (settings.warnOptionImplicit) (fn, args) match {
      case (tap@TypeApply(fun, targs), List(view: ApplyImplicitView)) if fun.symbol == currentRun.runDefinitions.Option_apply =>
        refchecksWarning(pos, s"Suspicious application of an implicit view (${view.fun}) in the argument to Option.apply.", WarningCategory.LintOptionImplicit) // scala/bug#6567
      case _ =>
    }

    private def isObjectOrAnyComparisonMethod(sym: Symbol) = sym match {
      case Object_eq | Object_ne | Object_== | Object_!= | Any_== | Any_!= => true
      case _                                                               => false
    }

    /**
      * Check the sensibility of using the given `equals` to compare `qual` and `other`.
      *
      * NOTE: I'm really not convinced by the logic here. I also think this would work better after erasure.
      */
    private def checkSensibleEquals(pos: Position, qual: Tree, name: Name, sym: Symbol, other: Tree) = {
      def isReferenceOp = sym == Object_eq || sym == Object_ne
      def isNew(tree: Tree) = tree match {
        case Function(_, _) | Apply(Select(New(_), nme.CONSTRUCTOR), _) => true
        case _ => false
      }
      def underlyingClass(tp: Type): Symbol = {
        val sym = tp.widen.typeSymbol
        if (sym.isAbstractType) underlyingClass(sym.info.upperBound)
        else sym
      }
      val actual   = underlyingClass(other.tpe)
      val receiver = underlyingClass(qual.tpe)
      def onTrees[T](f: List[Tree] => T) = f(List(qual, other))
      def onSyms[T](f: List[Symbol] => T) = f(List(receiver, actual))

      // @MAT normalize for consistency in error message, otherwise only part is normalized due to use of `typeSymbol`
      def typesString = s"${normalizeAll(qual.tpe.widen)} and ${normalizeAll(other.tpe.widen)}"

      // TODO: this should probably be used in more type comparisons in checkSensibleEquals
      def erasedClass(tp: Type) = erasure.javaErasure(tp).typeSymbol

      /* Symbols which limit the warnings we can issue since they may be value types */
      val couldBeAnything = Set[Symbol](ObjectClass, ComparableClass, SerializableClass)
      def isMaybeValue(sym: Symbol): Boolean = couldBeAnything(erasedClass(sym.tpe))

      // Whether def equals(other: Any) has known behavior: it is the default
      // inherited from java.lang.Object, or it is a synthetically generated
      // case equals.  TODO - more cases are warnable if the target is a synthetic
      // equals.
      def isUsingWarnableEquals = {
        val m = receiver.info.member(nme.equals_)
        ((m == Object_equals) || (m == Any_equals) || isMethodCaseEquals(m))
      }
      def isMethodCaseEquals(m: Symbol) = m.isSynthetic && m.owner.isCase
      def isCaseEquals = isMethodCaseEquals(receiver.info.member(nme.equals_))
      // Whether this == or != is one of those defined in Any/AnyRef or an overload from elsewhere.
      def isUsingDefaultScalaOp = sym == Object_== || sym == Object_!= || sym == Any_== || sym == Any_!=
      def haveSubclassRelationship = (actual isSubClass receiver) || (receiver isSubClass actual)

      // Whether the operands+operator represent a warnable combo (assuming anyrefs)
      // Looking for comparisons performed with ==/!= in combination with either an
      // equals method inherited from Object or a case class synthetic equals (for
      // which we know the logic.)
      def isWarnable           = isReferenceOp || (isUsingDefaultScalaOp && isUsingWarnableEquals)
      def isEitherNullable     = (NullTpe <:< receiver.info) || (NullTpe <:< actual.info)
      def isEitherValueClass   = actual.isDerivedValueClass || receiver.isDerivedValueClass
      def isBoolean(s: Symbol) = unboxedValueClass(s) == BooleanClass
      def isUnit(s: Symbol)    = unboxedValueClass(s) == UnitClass
      def isNumeric(s: Symbol) = isNumericValueClass(unboxedValueClass(s)) || isAnyNumber(s)
      def isScalaNumber(s: Symbol) = s isSubClass ScalaNumberClass
      def isJavaNumber(s: Symbol)  = s isSubClass JavaNumberClass
      // includes java.lang.Number if appropriate [scala/bug#5779]
      def isAnyNumber(s: Symbol)     = isScalaNumber(s) || isJavaNumber(s)
      def isMaybeAnyValue(s: Symbol) = isPrimitiveValueClass(unboxedValueClass(s)) || isMaybeValue(s)
      // used to short-circuit unrelatedTypes check if both sides are special
      def isSpecial(s: Symbol) = isMaybeAnyValue(s) || isAnyNumber(s)
      val nullCount            = onSyms(_.filter(_ == NullClass).size)
      def isNonsenseValueClassCompare = (
           !haveSubclassRelationship
        && isUsingDefaultScalaOp
        && isEitherValueClass
        && !isCaseEquals
      )

      def isEffectivelyFinalDeep(sym: Symbol): Boolean = (
        sym.isEffectivelyFinal
        // If a parent of an intersection is final, the resulting type must effectively be final.
        // (Any subclass of the refinement would have to be a subclass of that final parent.)
        // OPT: this condition is not included in the standard isEffectivelyFinal check, as it's expensive
        || sym.isRefinementClass && sym.info.parents.exists { _.typeSymbol.isEffectivelyFinal }
      )

      // Have we already determined that the comparison is non-sensible? I mean, non-sensical?
      var isNonSensible = false

      def nonSensibleWarning(what: String, alwaysEqual: Boolean) = {
        val msg = alwaysEqual == (name == nme.EQ || name == nme.eq)
        refchecksWarning(pos, s"comparing $what using `${name.decode}` will always yield $msg", WarningCategory.Other)
        isNonSensible = true
      }
      def nonSensible(pre: String, alwaysEqual: Boolean) =
        nonSensibleWarning(s"${pre}values of types $typesString", alwaysEqual)
      def nonSensiblyEq() = nonSensible("", alwaysEqual = true)
      def nonSensiblyNeq() = nonSensible("", alwaysEqual = false)
      def nonSensiblyNew() = nonSensibleWarning("a fresh object", alwaysEqual = false)

      def unrelatedMsg = name match {
        case nme.EQ | nme.eq => "never compare equal"
        case _               => "always compare unequal"
      }
      def unrelatedTypes() = if (!isNonSensible) {
        val weaselWord = if (isEitherValueClass) "" else " most likely"
        refchecksWarning(pos, s"$typesString are unrelated: they will$weaselWord $unrelatedMsg", WarningCategory.Other)
      }

      if (nullCount == 2) // null == null
        nonSensiblyEq()
      else if (nullCount == 1) {
        if (onSyms(_ exists isPrimitiveValueClass)) // null == 5
          nonSensiblyNeq()
        else if (onTrees( _ exists isNew)) // null == new AnyRef
          nonSensiblyNew()
      }
      else if (isBoolean(receiver)) {
        if (!isBoolean(actual) && !isMaybeValue(actual))    // true == 5
          nonSensiblyNeq()
      }
      else if (isUnit(receiver)) {
        if (isUnit(actual)) // () == ()
          nonSensiblyEq()
        else if (!isUnit(actual) && !isMaybeValue(actual))  // () == "abc"
          nonSensiblyNeq()
      }
      else if (isNumeric(receiver)) {
        if (!isNumeric(actual))
          if (isUnit(actual) || isBoolean(actual) || !isMaybeValue(actual))   // 5 == "abc"
            nonSensiblyNeq()
      }
      else if (isWarnable && !isCaseEquals) {
        if (isNew(qual)) // new X == y
          nonSensiblyNew()
        else if (isNew(other) && (isEffectivelyFinalDeep(receiver) || isReferenceOp))   // object X ; X == new Y
          nonSensiblyNew()
        else if (isEffectivelyFinalDeep(actual) && isEffectivelyFinalDeep(receiver) && !haveSubclassRelationship) {  // object X, Y; X == Y
          if (isEitherNullable)
            nonSensible("non-null ", alwaysEqual = false)
          else
            nonSensiblyNeq()
        }
      }

      // warn if one but not the other is a derived value class
      // this is especially important to enable transitioning from
      // regular to value classes without silent failures.
      if (isNonsenseValueClassCompare)
        unrelatedTypes()
      // possibleNumericCount is insufficient or this will warn on e.g. Boolean == j.l.Boolean
      else if (isWarnable && nullCount == 0 && !(isSpecial(receiver) && isSpecial(actual))) {
        // Warn if types are unrelated, without interesting lub. (Don't bother if we don't know anything about the values we're comparing.)
        def warnIfLubless(): Unit = {
          if (isMaybeValue(actual) || isMaybeValue(receiver) || haveSubclassRelationship) {} // ignore trivial or related types
          else {
            // better to have lubbed and lost
            // We erase the lub because the erased type is closer to what happens at run time.
            // Also, the lub of `S` and `String` is, weirdly, the refined type `Serializable{}` (for `class S extends Serializable`),
            // which means we can't just take its type symbol and look it up in our isMaybeValue Set.
            val commonRuntimeClass = erasedClass(global.lub(List(actual.tpe, receiver.tpe)))
            if (commonRuntimeClass == ObjectClass)
              unrelatedTypes()
          }
        }

        // warn if actual has a case parent that is not same as receiver's;
        // if actual is not a case, then warn if no common supertype, as below
        if (isCaseEquals) {
          def thisCase = receiver.info.member(nme.equals_).owner
          actual.info.baseClasses.find(_.isCase) match {
            case Some(p) if p != thisCase => nonSensible("case class ", alwaysEqual = false)
            case None =>
              // stronger message on (Some(1) == None)
              //if (receiver.isCase && receiver.isEffectivelyFinal && !(receiver isSubClass actual)) nonSensiblyNeq()
              //else
              // if a class, it must be super to thisCase (and receiver) since not <: thisCase
              if (!actual.isTrait && !(receiver isSubClass actual)) nonSensiblyNeq()
              else warnIfLubless()
            case _ =>
          }
        }
        else warnIfLubless()
      }
    }

    private def checkSensibleAnyEquals(pos: Position, qual: Tree, name: Name, sym: Symbol, other: Tree) = {
      def underlyingClass(tp: Type): Symbol = {
        val sym = tp.widen.typeSymbol
        if (sym.isAbstractType) underlyingClass(sym.info.upperBound)
        else sym
      }
      val receiver = underlyingClass(qual.tpe)
      val actual   = underlyingClass(other.tpe)
      def typesString = "" + normalizeAll(qual.tpe.widen) + " and " + normalizeAll(other.tpe.widen)
      def nonSensiblyEquals() = {
        refchecksWarning(pos, s"comparing values of types $typesString using `${name.decode}` unsafely bypasses cooperative equality; use `==` instead", WarningCategory.OtherNonCooperativeEquals)
      }
      def isScalaNumber(s: Symbol) = s isSubClass ScalaNumberClass
      def isJavaNumber(s: Symbol)  = s isSubClass JavaNumberClass
      def isAnyNumber(s: Symbol)   = isScalaNumber(s) || isJavaNumber(s)
      def isNumeric(s: Symbol)     = isNumericValueClass(unboxedValueClass(s)) || isAnyNumber(s)
      def isReference(s: Symbol)   = (unboxedValueClass(s) isSubClass AnyRefClass) || (s isSubClass ObjectClass)
      def isUnit(s: Symbol)        = unboxedValueClass(s) == UnitClass
      def isNumOrNonRef(s: Symbol) = isNumeric(s) || (!isReference(s) && !isUnit(s))
      if (isNumeric(receiver) && isNumOrNonRef(actual)) {
        if (receiver == actual) ()
        else nonSensiblyEquals()
      }
      else if ((sym == Any_equals || sym == Object_equals) && isNumOrNonRef(actual) && !isReference(receiver)) {
        nonSensiblyEquals()
      }
    }

    /** Sensibility check examines flavors of equals. */
    def checkSensible(pos: Position, fn: Tree, args: List[Tree]) = fn match {
      case Select(qual, name @ (nme.EQ | nme.NE | nme.eq | nme.ne)) if args.length == 1 && isObjectOrAnyComparisonMethod(fn.symbol) && (!currentOwner.isSynthetic || currentOwner.isAnonymousFunction) =>
        checkSensibleEquals(pos, qual, name, fn.symbol, args.head)
      case Select(qual, name @ nme.equals_) if args.length == 1 && (!currentOwner.isSynthetic || currentOwner.isAnonymousFunction) =>
        checkSensibleAnyEquals(pos, qual, name, fn.symbol, args.head)
      case _ =>
    }

    // scala/bug#6276 warn for trivial recursion, such as `def foo = foo` or `val bar: X = bar`, which come up more frequently than you might think.
    // TODO: Move to abide rule. Also, this does not check that the def is final or not overridden, for example
    def checkInfiniteLoop(sym: Symbol, rhs: Tree): Unit =
      if (!sym.isValueParameter && sym.paramss.forall(_.isEmpty)) {
        rhs match {
          case Ident(_) | Select(This(_), _) | Apply(Select(This(_), _), _) if rhs hasSymbolWhich (_.accessedOrSelf == sym) =>
            refchecksWarning(rhs.pos, s"${sym.fullLocationString} does nothing other than call itself recursively", WarningCategory.Other)
          case _ =>
        }
      }

// Transformation ------------------------------------------------------------

    /* Convert a reference to a case factory of type `tpe` to a new of the class it produces. */
    def toConstructor(pos: Position, tpe: Type): Tree = {
      val rtpe = tpe.finalResultType
      assert(rtpe.typeSymbol hasFlag CASE, tpe)
      val tree = localTyper.typedOperator {
        atPos(pos) {
          Select(New(TypeTree(rtpe)), rtpe.typeSymbol.primaryConstructor)
        }
      }
      checkUndesiredProperties(rtpe.typeSymbol, tree.pos)
      checkUndesiredProperties(rtpe.typeSymbol.primaryConstructor, tree.pos)
      tree
    }

    override def transformStats(stats: List[Tree], exprOwner: Symbol): List[Tree] = {
      pushLevel()
      try {
        enterSyms(stats)
        var index = -1
        stats.mapConserve(stat => {
          index += 1;
          transformStat(stat, index)
        }).filter(_ ne EmptyTree)
      }
      finally popLevel()
    }

    private def showCurrentRef: String = {
      val refsym = currentLevel.refsym
      s"$refsym defined on line ${refsym.pos.line}"
    }

    def transformStat(tree: Tree, index: Int): Tree = tree match {
      case t if treeInfo.isSelfConstrCall(t) =>
        assert(index == 0, index)
        try transform(tree)
        finally if (currentLevel.maxindex > 0) {
          // An implementation restriction to avoid VerifyErrors and lazy vals mishaps; see scala/bug#4717
          reporter.error(currentLevel.refpos, s"forward reference to $showCurrentRef not allowed from self constructor invocation")
        }
      case ValDef(_, _, _, _) =>
        val tree1 = transform(tree) // important to do before forward reference check
        if (tree1.symbol.isLazy) tree1
        else {
          val sym = tree.symbol
          if (sym.isLocalToBlock && index <= currentLevel.maxindex) {
            reporter.error(currentLevel.refpos, s"forward reference to $showCurrentRef extends over definition of $sym")
          }
          tree1
        }
      case Import(_, _)                                                                       => EmptyTree
      case DefDef(mods, _, _, _, _, _) if (mods hasFlag MACRO) || (tree.symbol hasFlag MACRO) => EmptyTree
      case _                                                                                  => transform(tree)
    }

    /* Check whether argument types conform to bounds of type parameters */
    private def checkBounds(tree0: Tree, pre: Type, owner: Symbol, tparams: List[Symbol], argtps: List[Type]): Unit =
      try typer.infer.checkBounds(tree0, pre, owner, tparams, argtps, "")
      catch {
        case ex: TypeError =>
          reporter.error(tree0.pos, ex.getMessage())
          if (settings.explaintypes.value) {
            val bounds = tparams map (tp => tp.info.instantiateTypeParams(tparams, argtps).bounds)
            foreach2(argtps, bounds)((targ, bound) => explainTypes(bound.lo, targ))
            foreach2(argtps, bounds)((targ, bound) => explainTypes(targ, bound.hi))
          }
      }
    private def isIrrefutable(pat: Tree, seltpe: Type): Boolean = pat match {
      case Apply(_, args) =>
        val clazz = pat.tpe.typeSymbol
        clazz == seltpe.typeSymbol &&
        clazz.isCaseClass &&
        (args corresponds clazz.primaryConstructor.tpe.asSeenFrom(seltpe, clazz).paramTypes)(isIrrefutable)
      case Typed(pat, tpt) =>
        seltpe <:< tpt.tpe
      case Ident(tpnme.WILDCARD) =>
        true
      case Bind(_, pat) =>
        isIrrefutable(pat, seltpe)
      case _ =>
        false
    }

    // Note: if a symbol has both @deprecated and @migration annotations and both
    // warnings are enabled, only the first one checked here will be emitted.
    // I assume that's a consequence of some code trying to avoid noise by suppressing
    // warnings after the first, but I think it'd be better if we didn't have to
    // arbitrarily choose one as more important than the other.
    private def checkUndesiredProperties(sym: Symbol, pos: Position): Unit = {
      // Issue a warning if symbol is deprecated, unless the point of reference is enclosed by a deprecated member,
      // or has a deprecated companion.
      if (sym.isDeprecated &&
          // synthetic calls to deprecated case class constructor
          !(sym.isConstructor && sym.owner.isCaseClass && currentOwner.isSynthetic) &&
          !currentOwner.ownersIterator.exists(_.isDeprecated))
        runReporting.deprecationWarning(pos, sym, currentOwner)

      // Similar to deprecation: check if the symbol is marked with @migration
      // indicating it has changed semantics between versions.
      if (sym.hasMigrationAnnotation && settings.Xmigration.value != NoScalaVersion) {
        val changed = try
          settings.Xmigration.value < ScalaVersion(sym.migrationVersion.get)
        catch {
          case e : NumberFormatException =>
            refchecksWarning(pos, s"${sym.fullLocationString} has an unparsable version number: ${e.getMessage()}", WarningCategory.Other)
            // if we can't parse the format on the migration annotation just conservatively assume it changed
            true
        }
        if (changed)
          refchecksWarning(pos, s"${sym.fullLocationString} has changed semantics in version ${sym.migrationVersion.get}:\n${sym.migrationMessage.get}", WarningCategory.OtherMigration)
      }
      if (sym.isExperimental && !currentOwner.ownerChain.exists(x => x.isExperimental)) {
        val msg =
          s"${sym.fullLocationString} is marked @experimental and therefore its enclosing scope must be experimental."
        reporter.error(pos, msg)
      }
      // See an explanation of compileTimeOnly in its scaladoc at scala.annotation.compileTimeOnly.
      // async/await is expanded after erasure
      if (sym.isCompileTimeOnly && !inAnnotation && !currentOwner.ownerChain.exists(x => x.isCompileTimeOnly)) {
        if (!async.deferCompileTimeOnlyError(sym)) {
          def defaultMsg =
            sm"""Reference to ${sym.fullLocationString} should not have survived past type checking,
                |it should have been processed and eliminated during expansion of an enclosing macro."""
          // The getOrElse part should never happen, it's just here as a backstop.
          val msg = sym.compileTimeOnlyMessage getOrElse defaultMsg
          reporter.error(pos, msg)
        }
      }
    }

    private def checkDelayedInitSelect(qual: Tree, sym: Symbol, pos: Position) = {
      def isLikelyUninitialized = (
           (sym.owner isSubClass DelayedInitClass)
        && !qual.tpe.isInstanceOf[ThisType]
        && sym.accessedOrSelf.isVal
      )
      if (settings.warnDelayedInit && isLikelyUninitialized)
        refchecksWarning(pos, s"Selecting ${sym} from ${sym.owner}, which extends scala.DelayedInit, is likely to yield an uninitialized value", WarningCategory.LintDelayedinitSelect)
    }

    private def lessAccessible(otherSym: Symbol, memberSym: Symbol): Boolean = (
         (otherSym != NoSymbol)
      && !otherSym.isProtected
      && !otherSym.isTypeParameterOrSkolem
      && !otherSym.isExistentiallyBound
      && memberSym.ownersIterator.forall(otherSym.isLessAccessibleThan(_))
    )
    private def lessAccessibleSymsInType(other: Type, memberSym: Symbol): List[Symbol] = {
      val extras = other match {
        case TypeRef(pre, _, args) =>
          // checking the prefix here gives us spurious errors on e.g. a private[process]
          // object which contains a type alias, which normalizes to a visible type.
          args.filterNot(_ eq NoPrefix).flatMap(lessAccessibleSymsInType(_, memberSym))
        case _ =>
          Nil
      }
      if (lessAccessible(other.typeSymbol, memberSym)) other.typeSymbol :: extras
      else extras
    }
    private def warnLessAccessible(otherSym: Symbol, memberSym: Symbol): Unit = {
      val comparison = accessFlagsToString(memberSym) match {
        case ""   => ""
        case acc  => " is " + acc + " but"
      }
      val cannot =
        if (memberSym.isDeferred) "may be unable to provide a concrete implementation of"
        else "may be unable to override"

      refchecksWarning(memberSym.pos,
        s"""|${memberSym.fullLocationString}${comparison} references ${accessFlagsToString(otherSym)} ${otherSym}.
            |Classes which cannot access ${otherSym.decodedName} ${cannot} ${memberSym.decodedName}.""".stripMargin,
        WarningCategory.LintInaccessible
      )
    }

    /** Warn about situations where a method signature will include a type which
     *  has more restrictive access than the method itself.
     */
    private def checkAccessibilityOfReferencedTypes(tree: Tree): Unit = {
      val member = tree.symbol

      def checkAccessibilityOfType(tpe: Type): Unit = {
        val inaccessible = lessAccessibleSymsInType(tpe, member)
        // if the unnormalized type is accessible, that's good enough
        if (inaccessible.isEmpty) ()
        // or if the normalized type is, that's good too
        else if ((tpe ne tpe.normalize) && lessAccessibleSymsInType(tpe.dealiasWiden, member).isEmpty) ()
        // otherwise warn about the inaccessible syms in the unnormalized type
        else inaccessible.foreach(warnLessAccessible(_, member))
      }

      // types of the value parameters
      foreachParamss(member)(p => checkAccessibilityOfType(p.tpe))
      // upper bounds of type parameters
      member.typeParams.foreach(tp => checkAccessibilityOfType(tp.info.upperBound.widen))
    }

    /** Check that a deprecated val or def does not override a
      * concrete, non-deprecated method.  If it does, then
      * deprecation is meaningless.
      */
    private def checkDeprecatedOvers(tree: Tree): Unit = {
      val symbol = tree.symbol
      if (symbol.isDeprecated) {
        val concrOvers =
          symbol.allOverriddenSymbols.filter(sym =>
            !sym.isDeprecated && !sym.isDeferred && !sym.hasDeprecatedOverridingAnnotation && !sym.enclClass.hasDeprecatedInheritanceAnnotation)
        if(!concrOvers.isEmpty)
          runReporting.deprecationWarning(
            tree.pos,
            symbol,
            currentOwner,
            s"${symbol.toString} overrides concrete, non-deprecated symbol(s):    ${concrOvers.map(_.name.decode).mkString(", ")}", "")
      }
    }
    private def checkRepeatedParamArg(tree: Tree): Unit = {
      val bailure = "such annotations are only allowed in arguments to *-parameters"
      val err = currentApplication match {
        case Apply(fn, args) =>
          val ok = (    args.nonEmpty
                    && (args.last eq tree)
                    && (fn.tpe.params.length == args.length)
                    &&  isRepeatedParamType(fn.tpe.params.last.tpe)
                   )
          if (ok) null
          else if (!args.exists(tree.eq)) bailure
          else {
            val i = args.indexWhere(tree.eq)
            val isLast = i == args.length - 1
            val formal = if (i >= fn.tpe.params.length - 1) fn.tpe.params.last.tpe else fn.tpe.params(i).tpe
            val isRepeated = isRepeatedParamType(formal)
            val lastly = if (!isLast) ";\nsequence argument must be the last argument" else ""
            val solely = if (fn.tpe.params.length == 1) "single" else "corresponding"
            if (isRepeated)
              s"it is not the only argument to be passed to the $solely repeated parameter $formal$lastly"
            else
              s"the $solely parameter has type $formal which is not a repeated parameter type$lastly"
          }
        case _ => bailure
      }
      if (err != null)
        reporter.error(tree.pos, s"Sequence argument type annotation `: _*` cannot be used here:\n$err")
    }

    private object RefCheckTypeMap extends TypeMap {
      object UnboundExistential extends TypeMap {
        private[this] val bound = mutable.Set.empty[Symbol]

        def toWildcardIn(tpe: Type): Type =
          try apply(tpe) finally bound.clear()

        override def apply(tpe: Type): Type = tpe match {
          case ExistentialType(quantified, _) =>
            bound ++= quantified
            tpe.mapOver(this)
          case tpe =>
            val sym = tpe.typeSymbol
            if (sym.isExistential && !bound(sym)) WildcardType
            else tpe.mapOver(this)
        }
      }

      private[this] var inPattern = false
      private[this] var skipBounds = false
      private[this] var tree: Tree = EmptyTree

      def check(tpe: Type, tree: Tree, inPattern: Boolean = false): Type = {
        this.inPattern = inPattern
        this.tree = tree
        try apply(tpe) finally {
          this.inPattern = false
          this.skipBounds = false
          this.tree = EmptyTree
        }
      }

      // check all bounds, except those that are existential type parameters
      // or those within typed annotated with @uncheckedBounds
      override def apply(tpe: Type): Type = tpe match {
        case tpe: AnnotatedType if tpe.hasAnnotation(UncheckedBoundsClass) =>
          // scala/bug#7694 Allow code synthesizers to disable checking of bounds for TypeTrees based on inferred LUBs
          // which might not conform to the constraints.
          val savedSkipBounds = skipBounds
          skipBounds = true
          try tpe.mapOver(this).filterAnnotations(_.symbol != UncheckedBoundsClass)
          finally skipBounds = savedSkipBounds
        case tpe: TypeRef =>
          if (!inPattern) checkTypeRef(UnboundExistential.toWildcardIn(tpe))
          checkUndesired(tpe.sym)
          tpe.mapOver(this)
        case tpe =>
          tpe.mapOver(this)
      }

      private def checkTypeRef(tpe: Type): Unit = tpe match {
        case TypeRef(pre, sym, args) =>
          if (sym.isJavaDefined)
            sym.typeParams.foreach(_.cookJavaRawInfo())
          if (!tpe.isHigherKinded && !skipBounds)
            checkBounds(tree, pre, sym.owner, sym.typeParams, args)
        case _ =>
      }

      private def checkUndesired(sym: Symbol): Unit = tree match {
        // scala/bug#7783 don't warn about inferred types
        // FIXME: reconcile this check with one in resetAttrs
        case tree: TypeTree if tree.original == null =>
        case tree => checkUndesiredProperties(sym, tree.pos)
      }
    }

    private def applyRefchecksToAnnotations(tree: Tree): Unit = {
      def checkVarArgs(tp: Type, tree: Tree): Unit = tp match {
        case TypeRef(_, VarargsClass, _) =>
          tree match {
            case tt: TypeTree if tt.original == null => // same exception as in checkTypeRef
            case _: DefDef =>
            case _ => reporter.error(tree.pos, s"Only methods can be marked @varargs")
          }
        case _ =>
      }
      def applyChecks(annots: List[AnnotationInfo]): List[AnnotationInfo] = if (annots.isEmpty) Nil else {
        annots.foreach { ann =>
          checkVarArgs(ann.atp, tree)
          RefCheckTypeMap.check(ann.atp, tree)
          if (ann.original != null && ann.original.hasExistingSymbol)
            checkUndesiredProperties(ann.original.symbol, tree.pos)
        }
        val annotsBySymbol = new mutable.LinkedHashMap[Symbol, ListBuffer[AnnotationInfo]]()
        val transformedAnnots = {
          val saved = inAnnotation
          inAnnotation = true
          try annots.map(_.transformArgs(transformTrees)) finally inAnnotation = saved
        }
        for (transformedAnnot <- transformedAnnots) {
          val buffer = annotsBySymbol.getOrElseUpdate(transformedAnnot.symbol, new ListBuffer)
          buffer += transformedAnnot
        }
        annotsBySymbol.iterator.flatMap(x => groupRepeatableAnnotations(x._1, x._2.toList)).toList
      }

      // assumes non-empty `anns`
      def groupRepeatableAnnotations(sym: Symbol, anns: List[AnnotationInfo]): List[AnnotationInfo] =
        if (!sym.isJavaDefined) anns
        else anns match {
          case single :: Nil => anns
          case multiple      =>
            sym.getAnnotation(AnnotationRepeatableAttr) match {
              case Some(repeatable) =>
                repeatable.assocs.collectFirst {
                  case (nme.value, LiteralAnnotArg(Constant(c: Type))) => c
                } match {
                  case Some(container) =>
                    val assocs = List(
                      nme.value -> ArrayAnnotArg(multiple.map(NestedAnnotArg(_)).toArray)
                    )
                    AnnotationInfo(container, args = Nil, assocs = assocs) :: Nil
                  case None =>
                    devWarning(s"@Repeatable $sym had no containing class")
                    multiple
                }
              case None =>
                reporter.error(tree.pos, s"$sym may not appear multiple times on ${tree.symbol}")
                multiple
            }
        }

      def checkIsElidable(sym: Symbol): Unit = if (sym ne null) sym.elisionLevel.foreach { level =>
        if (!sym.isMethod || sym.isAccessor || sym.isLazy || sym.isDeferred) {
          val rest = if (sym.isDeferred) " The annotation affects only the annotated method, not overriding methods in subclasses." else ""
          reporter.error(sym.pos, s"${sym.name}: Only concrete methods can be marked @elidable.$rest")
        }
      }
      checkIsElidable(tree.symbol)

      def checkMember(sym: Symbol): Unit = {
        sym.setAnnotations(applyChecks(sym.annotations))

        // validate implicitNotFoundMessage and implicitAmbiguousMessage
        if (settings.lintImplicitNotFound) {
          def messageWarning(name: String)(warn: String) =
            refchecksWarning(tree.pos, s"Invalid $name message for ${sym}${sym.locationString}:\n$warn", WarningCategory.LintImplicitNotFound)
          analyzer.ImplicitNotFoundMsg.check(sym) foreach messageWarning("implicitNotFound")
          analyzer.ImplicitAmbiguousMsg.check(sym) foreach messageWarning("implicitAmbiguous")
        }

        if (settings.warnSerialization && sym.isClass && sym.hasAnnotation(SerialVersionUIDAttr)) {
          def warn(what: String) =
            refchecksWarning(tree.pos, s"@SerialVersionUID has no effect on $what", WarningCategory.LintSerial)

          if (sym.isTrait) warn("traits")
          else if (!sym.isSerializable) warn("non-serializable classes")
        }
        if (!sym.isMethod && !sym.isConstructor)
          checkNoThrows(sym.annotations)
      }
      def checkNoThrows(anns: List[AnnotationInfo]): Unit =
        if (anns.exists(_.symbol == ThrowsClass))
          reporter.error(tree.pos, s"`@throws` only allowed for methods and constructors")

      tree match {
        case m: MemberDef =>
          checkMember(m.symbol)
        case tpt@TypeTree() =>
          if (tpt.original != null)
            tpt.original.foreach {
              case dc: TypeTreeWithDeferredRefCheck =>
                applyRefchecksToAnnotations(dc.check()) // #2416
              case _ =>
            }
          if (!inPattern)
            tree.setType(tree.tpe.map {
              case AnnotatedType(anns, ul) =>
                checkNoThrows(anns)
                AnnotatedType(applyChecks(anns), ul)
              case tp => tp
            })
        case _ =>
      }
    }

    private def isSimpleCaseApply(tree: Tree): Boolean = {
      val sym = tree.symbol
      def isClassTypeAccessible(tree: Tree): Boolean = tree match {
        case TypeApply(fun, targs) =>
          isClassTypeAccessible(fun)
        case Select(module, apply) =>
          // scala/bug#4859 `CaseClass1().InnerCaseClass2()` must not be rewritten to `new InnerCaseClass2()`;
          //          {expr; Outer}.Inner() must not be rewritten to `new Outer.Inner()`.
          treeInfo.isQualifierSafeToElide(module) &&
          // scala/bug#5626 Classes in refinement types cannot be constructed with `new`.
          !module.exists { case t @ Select(_, _) => t.symbol != null && t.symbol.isStructuralRefinementMember case _ => false }
        case x => throw new MatchError(x)
      }
      sym.name == nme.apply &&
        !sym.hasStableFlag && // ???
        sym.isCase &&
        isClassTypeAccessible(tree) &&
        !tree.tpe.finalResultType.typeSymbol.primaryConstructor.isLessAccessibleThan(tree.symbol)
    }

    private def transformCaseApply(tree: Tree) = {
      def loop(t: Tree): Unit = t match {
        case Ident(_) =>
          checkUndesiredProperties(t.symbol, t.pos)
        case Select(qual, _) =>
          checkUndesiredProperties(t.symbol, t.pos)
          loop(qual)
        case _ =>
      }

      tree foreach {
        case i@Ident(_) =>
          enterReference(i.pos, i.symbol) // scala/bug#5390 need to `enterReference` for `a` in `a.B()`
        case _ =>
      }
      loop(tree)
      toConstructor(tree.pos, tree.tpe)
    }

    private def transformApply(tree: Apply): Tree = tree match {
      case Apply(
        Select(qual, nme.withFilter),
        List(Function(
          List(ValDef(_, pname, tpt, _)),
          Match(_, CaseDef(pat1, _, _) :: _))))
        if ((pname startsWith nme.CHECK_IF_REFUTABLE_STRING) &&
            isIrrefutable(pat1, tpt.tpe) && (qual.tpe <:< tree.tpe)) =>

          transform(qual)
      case Apply(fn, args) =>
        // sensicality should be subsumed by the unreachability/exhaustivity/irrefutability
        // analyses in the pattern matcher
        if (!inPattern) {
          checkImplicitViewOptionApply(tree.pos, fn, args)
          checkSensible(tree.pos, fn, args) // TODO: this should move to preEraseApply, as reasoning about runtime semantics makes more sense in the JVM type system
          checkNamedBooleanArgs(fn, args)
        }
        currentApplication = tree
        tree
    }

    /** Check that boolean literals are passed as named args.
     *  The rule is enforced when the type of the parameter is `Boolean`.
     *  The rule is relaxed when the method has exactly one boolean parameter
     *  and it is the first parameter, such as `assert(false, msg)`.
     */
    private def checkNamedBooleanArgs(fn: Tree, args: List[Tree]): Unit = {
      val sym = fn.symbol
      def applyDepth: Int = {
        def loop(t: Tree, d: Int): Int =
          t match {
            case Apply(f, _) => loop(f, d+1)
            case _ => d
          }
        loop(fn, 0)
      }
      def isAssertParadigm(params: List[Symbol]): Boolean = !sym.isConstructor && !sym.isCaseApplyOrUnapply && {
        params match {
          case h :: t => h.tpe == BooleanTpe && !t.exists(_.tpe == BooleanTpe)
          case _ => false
        }
      }
      if (settings.lintNamedBooleans && !sym.isJavaDefined && !args.isEmpty) {
        val params = sym.paramLists(applyDepth)
        if (!isAssertParadigm(params))
          foreach2(args, params)((arg, param) => arg match {
            case Literal(Constant(_: Boolean))
            if arg.hasAttachment[UnnamedArg.type] && param.tpe.typeSymbol == BooleanClass && !param.deprecatedParamName.contains(nme.NO_NAME) =>
              runReporting.warning(arg.pos, s"Boolean literals should be passed using named argument syntax for parameter ${param.name}.", WarningCategory.LintNamedBooleans, sym)
            case _ =>
          })
      }
    }

    private def transformSelect(tree: Select): Tree = {
      val Select(qual, name) = tree
      val sym = tree.symbol

      checkUndesiredProperties(sym, tree.pos)
      checkDelayedInitSelect(qual, sym, tree.pos)

      if (!sym.exists)
        devWarning("Select node has NoSymbol! " + tree + " / " + tree.tpe)

      if (name == nme.synchronized_ && isBoxedValueClass(qual.tpe.typeSymbol))
        refchecksWarning(tree.pos, s"Suspicious `synchronized` call involving boxed primitive `${qual.tpe.typeSymbol.name}`", WarningCategory.LintUniversalMethods)

      def checkSuper(mix: Name) =
        // term should have been eliminated by super accessors
        assert(!(qual.symbol.isTrait && sym.isTerm && mix == tpnme.EMPTY), (qual.symbol, sym, mix))

      // Rewrite eligible calls to monomorphic case companion apply methods to the equivalent constructor call.
      //
      // Note: for generic case classes the rewrite needs to be handled at the enclosing `TypeApply` to transform
      // `TypeApply(Select(C, apply), targs)` to `Select(New(C[targs]), <init>)`. In case such a `TypeApply`
      // was deemed ineligible for transformation (e.g. the case constructor was private), the refchecks transform
      // will recurse to this point with `Select(C, apply)`, which will have a type `[T](...)C[T]`.
      //
      // We don't need to perform the check on the Select node, and `!isHigherKinded will guard against this
      // redundant (and previously buggy, scala/bug#9546) consideration.
      if (!tree.tpe.isHigherKinded && isSimpleCaseApply(tree)) {
        transformCaseApply(tree)
      } else {
        qual match {
          case Super(_, mix)  => checkSuper(mix)
          case _              =>
        }
        tree
      }
    }
    private def transformIf(tree: If): Tree = {
      val If(cond, thenpart, elsepart) = tree
      def unitIfEmpty(t: Tree): Tree =
        if (t == EmptyTree) Literal(Constant(())).setPos(tree.pos).setType(UnitTpe) else t

      cond.tpe match {
        case FoldableConstantType(value) =>
          val res = if (value.booleanValue) thenpart else elsepart
          unitIfEmpty(res)
        case _ => tree
      }
    }

    // Warning about nullary methods returning Unit.
    private def checkNullaryMethodReturnType(sym: Symbol) = sym.tpe match {
      case NullaryMethodType(restpe) if restpe.typeSymbol == UnitClass =>
        // this may be the implementation of e.g. a generic method being parameterized
        // on Unit, in which case we had better let it slide.
        val isOk = (
             sym.isGetter
          || sym.isDefaultGetter
          || sym.allOverriddenSymbols.exists(over => !(over.tpe.resultType =:= sym.tpe.resultType))
          || sym.isArtifact
        )
        if (!isOk) {
          val msg = s"side-effecting nullary methods are discouraged: suggest defining as `def ${sym.name.decode}()` instead"
          val namePos = sym.pos.focus.withEnd(sym.pos.point + sym.decodedName.length)
          val action =
            if (namePos.source.sourceAt(namePos) == sym.decodedName)
              runReporting.codeAction("add empty parameter list", namePos.focusEnd, "()", msg)
            else Nil
          refchecksWarning(sym.pos, msg, WarningCategory.LintNullaryUnit, action)
        }
      case _ => ()
    }

    // Verify classes extending AnyVal meet the requirements
    private def checkAnyValSubclass(clazz: Symbol) =
      if (clazz.isDerivedValueClass) {
        if (clazz.isTrait)
          reporter.error(clazz.pos, "Only classes (not traits) are allowed to extend AnyVal")
        else if (clazz.hasAbstractFlag)
          reporter.error(clazz.pos, "`abstract` modifier cannot be used with value classes")
      }

    private def checkUnexpandedMacro(t: Tree) =
      if (!t.isDef && t.hasSymbolField && t.symbol.isTermMacro)
        reporter.error(t.pos, "macro has not been expanded")

    // if expression in statement position (of template or block)
    // looks like a useful value that should not be ignored, warn and return true
    // User specifies that an expression is boring by ascribing `e: Unit`.
    // The subtree `e` will bear an attachment, but may be wrapped in adaptations.
    private def checkInterestingResultInStatement(t: Tree): Boolean = {
      def isUninterestingSymbol(sym: Symbol): Boolean =
        sym != null && (
          sym.isConstructor ||
          sym.hasPackageFlag ||
          sym.isPackageObjectOrClass ||
          sym == BoxedUnitClass ||
          sym == AnyClass ||
          sym == AnyRefClass ||
          sym == AnyValClass
        )
      def isUninterestingType(tpe: Type): Boolean =
        tpe != null && (
          isUnitType(tpe) ||
          tpe.typeSymbol.isBottomClass ||
          tpe =:= UnitTpe ||
          tpe =:= BoxedUnitTpe ||
          isTrivialTopType(tpe)
        )
      // java lacks this.type idiom to distinguish side-effecting method, so ignore result of invoking java method.
      def isJavaApplication(t: Tree): Boolean = t match {
        case Apply(f, _) => f.symbol.isJavaDefined && !isUniversalMember(f.symbol)
        case _ => false
      }
      // The quirk of typechecking if is that the LUB often results in boring types.
      // Parser adds suppressing attachment on `if (b) expr` when user has `-Wnonunit-if:false`.
      def checkInterestingShapes(t: Tree): Boolean =
        t match {
          case If(_, thenpart, elsepart) => checkInterestingShapes(thenpart) || checkInterestingShapes(elsepart) // either or
          //case Block(_, Apply(label, Nil)) if label.symbol != null && nme.isLoopHeaderLabel(label.symbol.name) => false
          case Block(_, res) => checkInterestingShapes(res)
          case Match(_, cases) => cases.exists(k => checkInterestingShapes(k.body))
          case _ => checksForInterestingResult(t)
        }
      // tests for various flavors of blandness in expressions.
      def checksForInterestingResult(t: Tree): Boolean = (
           !t.isDef && !treeInfo.isPureDef(t)     // ignore defs
        && !isUninterestingSymbol(t.symbol)       // ctors, package, Unit, Any
        && !isUninterestingType(t.tpe)            // bottom types, Unit, Any
        && !treeInfo.isThisTypeResult(t)          // buf += x
        && !treeInfo.isSuperConstrCall(t)         // just a thing
        && !treeInfo.hasExplicitUnit(t)           // suppressed by explicit expr: Unit
        && !isJavaApplication(t)                  // Java methods are inherently side-effecting
      )
      // begin checkInterestingResultInStatement
      settings.warnNonUnitStatement.value && checkInterestingShapes(t) && {
        val where = t match {
          case Block(_, res) => res
          case If(_, thenpart, Literal(Constant(()))) =>
            thenpart match {
              case Block(_, res) => res
              case _ => thenpart
            }
          case _ => t
        }
        def msg = s"unused value of type ${where.tpe} (add `: Unit` to discard silently)"
        refchecksWarning(where.pos, msg, WarningCategory.OtherPureStatement)
        true
      }
    } // end checkInterestingResultInStatement

    override def transform(tree: Tree): Tree = {
      val savedLocalTyper = localTyper
      val savedCurrentApplication = currentApplication
      try {
        val sym = tree.symbol

        // Apply RefChecks to annotations. Makes sure the annotations conform to
        // type bounds (bug #935), issues deprecation warnings for symbols used
        // inside annotations.
        applyRefchecksToAnnotations(tree)
        val result: Tree = tree match {
          // NOTE: a val in a trait is now a DefDef, with the RHS being moved to an Assign in Constructors
          case tree: ValOrDefDef =>
            checkDeprecatedOvers(tree)
            if (!tree.isErroneous)
              checkInfiniteLoop(tree.symbol, tree.rhs)

            if (settings.warnNullaryUnit)
              checkNullaryMethodReturnType(sym)
            if (settings.warnInaccessible) {
              if (!sym.isConstructor && !sym.isEffectivelyFinalOrNotOverridden && !sym.owner.isSealed && !sym.isSynthetic)
                checkAccessibilityOfReferencedTypes(tree)
            }
            tree match {
              case dd: DefDef if sym.hasAnnotation(NativeAttr) =>
                if (sym.owner.isTrait) {
                  reporter.error(tree.pos, "A trait cannot define a native method.")
                  tree
                } else if (dd.rhs == EmptyTree) {
                  // pretend it had a stub implementation
                  sym resetFlag DEFERRED
                  deriveDefDef(dd)(_ => typed(gen.mkThrowNewRuntimeException("native method stub")))
                } else
                  tree
              case _ => tree
            }

          case Template(parents, self, body) =>
            localTyper = localTyper.atOwner(tree, currentOwner)
            for (stat <- body)
              if (!checkInterestingResultInStatement(stat) && treeInfo.isPureExprForWarningPurposes(stat)) {
                val msg = "a pure expression does nothing in statement position"
                val clause = if (body.lengthCompare(1) > 0) "; multiline expressions may require enclosing parentheses" else ""
                refchecksWarning(stat.pos, s"$msg$clause", WarningCategory.OtherPureStatement)
              }
            validateBaseTypes(currentOwner)
            checkOverloadedRestrictions(currentOwner, currentOwner)
            // scala/bug#7870 default getters for constructors live in the companion module
            checkOverloadedRestrictions(currentOwner, currentOwner.companionModule)
            val bridges = addVarargBridges(currentOwner) // TODO: do this during uncurry?
            checkAllOverrides(currentOwner)
            checkAnyValSubclass(currentOwner)
            if (currentOwner.isDerivedValueClass)
              currentOwner.primaryConstructor makeNotPrivate NoSymbol // scala/bug#6601, must be done *after* pickler!
            if (bridges.nonEmpty) deriveTemplate(tree)(_ ::: bridges) else tree

          case _: TypeTreeWithDeferredRefCheck => abort("adapt should have turned dc: TypeTreeWithDeferredRefCheck into tpt: TypeTree, with tpt.original == dc")
          case tpt@TypeTree() =>
            if(tpt.original != null) {
              tpt.original foreach {
                case dc: TypeTreeWithDeferredRefCheck =>
                  transform(dc.check()) // #2416 -- only call transform to do refchecks, but discard results
                  // tpt has the right type if the deferred checks are ok
                case _ =>
              }
            }

            tree.setType(RefCheckTypeMap.check(tree.tpe, tree, inPattern))

          case TypeApply(fn, args) =>
            checkBounds(tree, NoPrefix, NoSymbol, fn.tpe.typeParams, args map (_.tpe))
            if (isSimpleCaseApply(tree))
              transformCaseApply(tree)
            else
              tree

          case x @ Apply(_, _)  =>
            transformApply(x)

          case x @ If(_, _, _)  =>
            transformIf(x)

          case New(tpt) =>
            enterReference(tree.pos, tpt.tpe.typeSymbol)
            tree

          case treeInfo.WildcardStarArg(_) =>
            checkRepeatedParamArg(tree)
            tree

          case Ident(name) =>
            checkUndesiredProperties(sym, tree.pos)
            if (name != nme.WILDCARD && name != tpnme.WILDCARD_STAR) {
              assert(sym != NoSymbol, "transformCaseApply: name = " + name.debugString + " tree = " + tree + " / " + tree.getClass) //debug
              enterReference(tree.pos, sym)
            }
            tree

          case x @ Select(_, _) =>
            transformSelect(x)

          case Literal(Constant(tpe: Type)) =>
            RefCheckTypeMap.check(tpe, tree)
            tree

          case UnApply(fun, args) =>
            transform(fun) // just make sure we enterReference for unapply symbols, note that super.transform(tree) would not transform(fun)
                           // transformTrees(args) // TODO: is this necessary? could there be forward references in the args??
                           // probably not, until we allow parameterised extractors
            tree

          case blk @ Block(stats, expr) =>
            // diagnostic info
            val (count, result0, adapted) =
              expr match {
                case Block(expr :: Nil, Literal(Constant(()))) => (1, expr, true)
                case Literal(Constant(()))                     => (0, EmptyTree, false)
                case _                                         => (1, EmptyTree, false)
              }
            val isMultiline = stats.lengthCompare(1 - count) > 0

            def checkPure(t: Tree, supple: Boolean): Unit =
              if (!treeInfo.hasExplicitUnit(t) && treeInfo.isPureExprForWarningPurposes(t)) {
                val msg = "a pure expression does nothing in statement position"
                val parens = if (isMultiline) "multiline expressions might require enclosing parentheses" else ""
                val discard = if (adapted) "; a value can be silently discarded when Unit is expected" else ""
                val text =
                  if (supple) s"$parens$discard"
                  else if (!parens.isEmpty) s"$msg; $parens" else msg
                refchecksWarning(t.pos, text, WarningCategory.OtherPureStatement)
              }
            // check block for unintended "expression in statement position"
            stats.foreach { t => if (!checkInterestingResultInStatement(t)) checkPure(t, supple = false) }
            if (result0.nonEmpty) checkPure(result0, supple = true)

            def checkImplicitlyAdaptedBlockResult(t: Tree): Unit =
              expr match {
                case treeInfo.Applied(f, _, _) if f.symbol != null && f.symbol.isImplicit =>
                  f.symbol.paramLists match {
                    case (p :: Nil) :: _ if p.isByNameParam => refchecksWarning(t.pos, s"Block result was adapted via implicit conversion (${f.symbol}) taking a by-name parameter", WarningCategory.LintBynameImplicit)
                    case _ =>
                  }
                case _ =>
              }
            if (isMultiline && settings.warnByNameImplicit) checkImplicitlyAdaptedBlockResult(expr)

            tree
          case Match(selector, cases) =>
            // only warn if it could be put in backticks in a pattern
            def isWarnable(sym: Symbol): Boolean =
              sym != null && sym.exists &&
              !sym.hasPackageFlag && sym.isStable && !isByName(sym) &&
              !sym.hasAttachment[PatVarDefAttachment.type] // val (_, v) = with one var is shadowed in desugaring
              //!toCheck.isSynthetic // self-type symbols are synthetic: value self (<synthetic>), do warn

            class CheckSelector extends InternalTraverser {
              var selectorSymbols: List[Symbol] = null
              override def traverse(t: Tree): Unit = {
                val include = t match {
                  case _: This    => true // !t.symbol.isStable
                  case _: SymTree => isWarnable(t.symbol)
                  case _          => false
                }
                if (include) selectorSymbols ::= t.symbol
                t.traverse(this)
              }
              // true if the shadowed toCheck appears in the selector expression
              def implicatesSelector(toCheck: Symbol): Boolean = {
                if (selectorSymbols == null) {
                  selectorSymbols = Nil
                  apply(selector)
                }
                selectorSymbols.exists(sym => sym.eq(toCheck) || sym.accessedOrSelf.eq(toCheck.accessedOrSelf) ||
                  toCheck.isThisSym && toCheck.owner == sym) // self match { case self: S => }, selector C.this is class symbol
              }
            }
            val checkSelector = new CheckSelector
            // true to warn about shadowed when selSym is the scrutinee
            def checkShadowed(shadowed: Symbol): Boolean = {
              def checkShadowedSymbol(toCheck: Symbol): Boolean =
                isWarnable(toCheck) && !checkSelector.implicatesSelector(toCheck)

              if (shadowed.isOverloaded) shadowed.alternatives.exists(checkShadowedSymbol)
              else checkShadowedSymbol(shadowed)
            }
            // warn if any checkable pattern var shadows, in the context of the selector,
            // or for `tree match case Apply(fun, args) =>` check whether names in args equal names of fun.params
            def checkPattern(p: Tree): Unit = {
              val traverser = new InternalTraverser {
                // names absolved of shadowing because it is a "current" parameter (of a case class, etc)
                var absolved: List[Name] = Nil
                override def traverse(t: Tree): Unit = t match {
                  case Apply(_, args) =>
                    treeInfo.dissectApplied(t).core.tpe match {
                      case MethodType(ps, _) =>
                        foreach2(ps, args) { (p, arg) =>
                          absolved ::= p.name
                          try traverse(arg)
                          finally absolved = absolved.tail
                        }
                      case _ => t.traverse(this)
                    }
                  case bind @ Bind(name, _) =>
                    def richLocation(sym: Symbol): String = sym.ownsString match {
                      case ""   => val n = sym.pos.line; if (n > 0) s"$sym at line $n" else sym.fullLocationString
                      case owns => s"$sym in $owns"
                    }
                    for (shade <- bind.getAndRemoveAttachment[PatShadowAttachment]) {
                      val shadowed = shade.shadowed
                      if (!absolved.contains(name) && !bind.symbol.hasTransOwner(shadowed.accessedOrSelf) && checkShadowed(shadowed))
                        refchecksWarning(bind.pos, s"Name $name is already introduced in an enclosing scope as ${richLocation(shadowed)}. Did you intend to match it using backquoted `$name`?", WarningCategory.OtherShadowing)

                    }
                  case _ => t.traverse(this)
                }
              }
              traverser(p)
            }
            // check the patterns for unfriendly shadowing, patvars bearing PatShadowAttachment
            if (settings.warnPatternShadow) for (cdef <- cases) checkPattern(cdef.pat)
            tree
          case _ => tree
        }

        // skip refchecks in patterns....
        val result1 = result match {
          case CaseDef(pat, guard, body) =>
            val pat1 = savingInPattern {
              inPattern = true
              transform(pat)
            }
            treeCopy.CaseDef(tree, pat1, transform(guard), transform(body))
          case _ =>
            result.transform(this)
        }
        result1 match {
          case ClassDef(_, _, _, _) | TypeDef(_, _, _, _) | ModuleDef(_, _, _) =>
            if (result1.symbol.isLocalToBlock || result1.symbol.isTopLevel)
              varianceValidator.traverse(result1)
          case tt @ TypeTree() if tt.original != null =>
            varianceValidator.validateVarianceOfPolyTypesIn(tt.tpe)
          case _ =>
        }

        checkUnexpandedMacro(result1)

        result1
      } catch {
        case ex: TypeError =>
          if (settings.isDebug) ex.printStackTrace()
          reporter.error(tree.pos, ex.getMessage())
          tree
      } finally {
        localTyper = savedLocalTyper
        currentApplication = savedCurrentApplication
      }
    }
  }
}
