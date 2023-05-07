#
#
#           The Nim Compiler
#        (c) Copyright 2013 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# this module does the semantic checking for expressions
# included from sem.nim

when defined(nimCompilerStacktraceHints):
  import std/stackframes

const
  errExprXHasNoType = "expression '$1' has no type (or is ambiguous)"
  errXExpectsTypeOrValue = "'$1' expects a type or value"
  errVarForOutParamNeededX = "for a 'var' type a variable needs to be passed; but '$1' is immutable"
  errXStackEscape = "address of '$1' may not escape its stack frame"
  errExprHasNoAddress = "expression has no address"
  errCannotInterpretNodeX = "cannot evaluate '$1'"
  errNamedExprExpected = "named expression expected"
  errNamedExprNotAllowed = "named expression not allowed here"
  errFieldInitTwice = "field initialized twice: '$1'"
  errUndeclaredFieldX = "undeclared field: '$1'"

proc semTemplateExpr(c: PContext, n: PNode, s: PSym,
                     flags: TExprFlags = {}; expectedType: PType = nil): PNode =
  rememberExpansion(c, n.info, s)
  let info = getCallLineInfo(n)
  markUsed(c, info, s)
  onUse(info, s)
  # Note: This is n.info on purpose. It prevents template from creating an info
  # context when called from an another template
  pushInfoContext(c.config, n.info, s.detailedInfo)
  result = evalTemplate(n, s, getCurrOwner(c), c.config, c.cache,
                        c.templInstCounter, c.idgen, efFromHlo in flags)
  if efNoSemCheck notin flags:
    result = semAfterMacroCall(c, n, result, s, flags, expectedType)
  popInfoContext(c.config)

  # XXX: A more elaborate line info rewrite might be needed
  result.info = info

proc semFieldAccess(c: PContext, n: PNode, flags: TExprFlags = {}): PNode

template rejectEmptyNode(n: PNode) =
  # No matter what a nkEmpty node is not what we want here
  if n.kind == nkEmpty: illFormedAst(n, c.config)

proc semOperand(c: PContext, n: PNode, flags: TExprFlags = {}): PNode =
  rejectEmptyNode(n)
  # same as 'semExprWithType' but doesn't check for proc vars
  result = semExpr(c, n, flags + {efOperand})
  if result.typ != nil:
    # XXX tyGenericInst here?
    if result.typ.kind == tyProc and hasUnresolvedParams(result, {efOperand}):
      #and tfUnresolved in result.typ.flags:
      let owner = result.typ.owner
      let err =
        # consistent error message with evaltempl/semMacroExpr
        if owner != nil and owner.kind in {skTemplate, skMacro}:
          errMissingGenericParamsForTemplate % n.renderTree
        else:
          errProcHasNoConcreteType % n.renderTree
      localError(c.config, n.info, err)
    if result.typ.kind in {tyVar, tyLent}: result = newDeref(result)
  elif {efWantStmt, efAllowStmt} * flags != {}:
    result.typ = newTypeS(tyVoid, c)
  else:
    localError(c.config, n.info, errExprXHasNoType %
               renderTree(result, {renderNoComments}))
    result.typ = errorType(c)

proc semExprCheck(c: PContext, n: PNode, flags: TExprFlags, expectedType: PType = nil): PNode =
  rejectEmptyNode(n)
  result = semExpr(c, n, flags+{efWantValue}, expectedType)

  let
    isEmpty = result.kind == nkEmpty
    isTypeError = result.typ != nil and result.typ.kind == tyError

  if isEmpty or isTypeError:
    # bug #12741, redundant error messages are the lesser evil here:
    localError(c.config, n.info, errExprXHasNoType %
                renderTree(result, {renderNoComments}))

  if isEmpty:
    # do not produce another redundant error message:
    result = errorNode(c, n)

proc ambiguousSymChoice(c: PContext, orig, n: PNode): PNode =
  let first = n[0].sym
  if first.kind == skEnumField:
    # choose the first resolved enum field, i.e. the latest in scope
    # to mirror behavior before overloadable enums
    if hintAmbiguousEnum in c.config.notes:
      var err = "ambiguous enum field '" & first.name.s &
        "' assumed to be of type " & typeToString(first.typ) &
        " -- use one of the following:\n"
      for child in n:
        let candidate = child.sym
        err.add "  " & candidate.owner.name.s & "." & candidate.name.s & "\n"
      message(c.config, orig.info, hintAmbiguousEnum, err)
    result = n[0]
  else:
    var err = "ambiguous identifier '" & first.name.s &
      "' -- use one of the following:\n"
    for child in n:
      let candidate = child.sym
      err.add "  " & candidate.owner.name.s & "." & candidate.name.s
      err.add ": " & typeToString(candidate.typ) & "\n"
    localError(c.config, orig.info, err)
    n.typ = errorType(c)
    result = n

proc semExprWithType(c: PContext, n: PNode, flags: TExprFlags = {}, expectedType: PType = nil): PNode =
  result = semExprCheck(c, n, flags, expectedType)
  if result.typ == nil and efInTypeof in flags:
    result.typ = c.voidType
  elif (result.typ == nil or result.typ.kind == tyNone) and
      efTypeAllowed in flags and
      result.kind == nkClosedSymChoice and result.len > 0:
    result = ambiguousSymChoice(c, n, result)
  elif result.typ == nil or result.typ == c.enforceVoidContext:
    localError(c.config, n.info, errExprXHasNoType %
                renderTree(result, {renderNoComments}))
    result.typ = errorType(c)
  elif result.typ.kind == tyError:
    # associates the type error to the current owner
    result.typ = errorType(c)
  else:
    if result.typ.kind in {tyVar, tyLent}: result = newDeref(result)

proc semExprNoDeref(c: PContext, n: PNode, flags: TExprFlags = {}): PNode =
  result = semExprCheck(c, n, flags)
  if result.typ == nil:
    localError(c.config, n.info, errExprXHasNoType %
               renderTree(result, {renderNoComments}))
    result.typ = errorType(c)

proc semSymGenericInstantiation(c: PContext, n: PNode, s: PSym): PNode =
  result = symChoice(c, n, s, scClosed)

proc inlineConst(c: PContext, n: PNode, s: PSym): PNode {.inline.} =
  result = copyTree(s.astdef)
  if result.isNil:
    localError(c.config, n.info, "constant of type '" & typeToString(s.typ) & "' has no value")
    result = newSymNode(s)
  else:
    result.typ = s.typ
    result.info = n.info

type
  TConvStatus = enum
    convOK,
    convNotNeedeed,
    convNotLegal,
    convNotInRange

proc checkConversionBetweenObjects(castDest, src: PType; pointers: int): TConvStatus =
  let diff = inheritanceDiff(castDest, src)
  return if diff == high(int) or (pointers > 1 and diff != 0):
      convNotLegal
    else:
      convOK

const
  IntegralTypes = {tyBool, tyEnum, tyChar, tyInt..tyUInt64}

proc checkConvertible(c: PContext, targetTyp: PType, src: PNode): TConvStatus =
  let srcTyp = src.typ.skipTypes({tyStatic})
  result = convOK
  if sameType(targetTyp, srcTyp) and targetTyp.sym == srcTyp.sym:
    # don't annoy conversions that may be needed on another processor:
    if targetTyp.kind notin IntegralTypes+{tyRange}:
      result = convNotNeedeed
    return
  var d = skipTypes(targetTyp, abstractVar)
  var s = srcTyp
  if s.kind in tyUserTypeClasses and s.isResolvedUserTypeClass:
    s = s.lastSon
  s = skipTypes(s, abstractVar-{tyTypeDesc, tyOwned})
  if s.kind == tyOwned and d.kind != tyOwned:
    s = s.lastSon
  var pointers = 0
  while (d != nil) and (d.kind in {tyPtr, tyRef, tyOwned}):
    if s.kind == tyOwned and d.kind != tyOwned:
      s = s.lastSon
    elif d.kind != s.kind:
      break
    else:
      d = d.lastSon
      s = s.lastSon
    inc pointers

  let targetBaseTyp = skipTypes(targetTyp, abstractVarRange)
  let srcBaseTyp = skipTypes(srcTyp, abstractVarRange-{tyTypeDesc})

  if d == nil:
    result = convNotLegal
  elif d.skipTypes(abstractInst).kind == tyObject and s.skipTypes(abstractInst).kind == tyObject:
    result = checkConversionBetweenObjects(d.skipTypes(abstractInst), s.skipTypes(abstractInst), pointers)
  elif (targetBaseTyp.kind in IntegralTypes) and
      (srcBaseTyp.kind in IntegralTypes):
    if targetTyp.kind == tyEnum and srcBaseTyp.kind == tyEnum:
      message(c.config, src.info, warnSuspiciousEnumConv, "suspicious code: enum to enum conversion")
    # `elif` would be incorrect here
    if targetTyp.kind == tyBool:
      discard "convOk"
    elif targetTyp.isOrdinalType:
      if src.kind in nkCharLit..nkUInt64Lit and
          src.getInt notin firstOrd(c.config, targetTyp)..lastOrd(c.config, targetTyp):
        result = convNotInRange
      elif src.kind in nkFloatLit..nkFloat64Lit and
          (classify(src.floatVal) in {fcNan, fcNegInf, fcInf} or
            src.floatVal.int64 notin firstOrd(c.config, targetTyp)..lastOrd(c.config, targetTyp)):
        result = convNotInRange
    elif targetBaseTyp.kind in tyFloat..tyFloat64:
      if src.kind in nkFloatLit..nkFloat64Lit and
          not floatRangeCheck(src.floatVal, targetTyp):
        result = convNotInRange
      elif src.kind in nkCharLit..nkUInt64Lit and
          not floatRangeCheck(src.intVal.float, targetTyp):
        result = convNotInRange
  else:
    # we use d, s here to speed up that operation a bit:
    case cmpTypes(c, d, s)
    of isNone, isGeneric:
      if not compareTypes(targetTyp.skipTypes(abstractVar), srcTyp.skipTypes({tyOwned}), dcEqIgnoreDistinct):
        result = convNotLegal
    else:
      discard

proc isCastable(c: PContext; dst, src: PType, info: TLineInfo): bool =
  ## Checks whether the source type can be cast to the destination type.
  ## Casting is very unrestrictive; casts are allowed as long as
  ## dst.size >= src.size, and typeAllowed(dst, skParam)
  #const
  #  castableTypeKinds = {tyInt, tyPtr, tyRef, tyCstring, tyString,
  #                       tySequence, tyPointer, tyNil, tyOpenArray,
  #                       tyProc, tySet, tyEnum, tyBool, tyChar}
  let src = src.skipTypes(tyUserTypeClasses)
  if skipTypes(dst, abstractInst-{tyOpenArray}).kind == tyOpenArray:
    return false
  if skipTypes(src, abstractInst-{tyTypeDesc}).kind == tyTypeDesc:
    return false
  if skipTypes(dst, abstractInst).kind == tyBuiltInTypeClass:
    return false
  let conf = c.config
  if conf.selectedGC in {gcArc, gcOrc}:
    let d = skipTypes(dst, abstractInst)
    let s = skipTypes(src, abstractInst)
    if d.kind == tyRef and s.kind == tyRef and s[0].isFinal != d[0].isFinal:
      return false
    elif d.kind in IntegralTypes and s.kind in {tyString, tySequence}:
      return false

  var dstSize, srcSize: BiggestInt
  dstSize = computeSize(conf, dst)
  srcSize = computeSize(conf, src)
  if dstSize == -3 or srcSize == -3: # szUnknownSize
    # The Nim compiler can't detect if it's legal or not.
    # Just assume the programmer knows what he is doing.
    return true
  if dstSize < 0:
    return false
  elif srcSize < 0:
    return false
  elif typeAllowed(dst, skParam, c, {taIsCastable}) != nil:
    return false
  elif dst.kind == tyProc and dst.callConv == ccClosure:
    return src.kind == tyProc and src.callConv == ccClosure
  else:
    result = (dstSize >= srcSize) or
        (skipTypes(dst, abstractInst).kind in IntegralTypes) or
        (skipTypes(src, abstractInst-{tyTypeDesc}).kind in IntegralTypes)
    if result and (dstSize > srcSize):
      var warnMsg = "target type is larger than source type"
      warnMsg.add("\n  target type: '$1' ($2)" % [$dst, if dstSize == 1: "1 byte" else: $dstSize & " bytes"])
      warnMsg.add("\n  source type: '$1' ($2)" % [$src, if srcSize == 1: "1 byte" else: $srcSize & " bytes"])
      message(conf, info, warnCastSizes, warnMsg)
  if result and src.kind == tyNil:
    return dst.size <= conf.target.ptrSize

proc isSymChoice(n: PNode): bool {.inline.} =
  result = n.kind in nkSymChoices

proc maybeLiftType(t: var PType, c: PContext, info: TLineInfo) =
  # XXX: liftParamType started to perform addDecl
  # we could do that instead in semTypeNode by snooping for added
  # gnrc. params, then it won't be necessary to open a new scope here
  openScope(c)
  var lifted = liftParamType(c, skType, newNodeI(nkArgList, info),
                             t, ":anon", info)
  closeScope(c)
  if lifted != nil: t = lifted

proc isOwnedSym(c: PContext; n: PNode): bool =
  let s = qualifiedLookUp(c, n, {})
  result = s != nil and sfSystemModule in s.owner.flags and s.name.s == "owned"

proc semConv(c: PContext, n: PNode; expectedType: PType = nil): PNode =
  if n.len != 2:
    localError(c.config, n.info, "a type conversion takes exactly one argument")
    return n

  result = newNodeI(nkConv, n.info)

  var targetType = semTypeNode(c, n[0], nil)
  case targetType.skipTypes({tyDistinct}).kind
  of tyTypeDesc:
    internalAssert c.config, targetType.len > 0
    if targetType.base.kind == tyNone:
      return semTypeOf(c, n)
    else:
      targetType = targetType.base
  of tyStatic:
    var evaluated = semStaticExpr(c, n[1], expectedType)
    if evaluated.kind == nkType or evaluated.typ.kind == tyTypeDesc:
      result = n
      result.typ = c.makeTypeDesc semStaticType(c, evaluated, nil)
      return
    elif targetType.base.kind == tyNone:
      return evaluated
    else:
      targetType = targetType.base
  of tyAnything, tyUntyped, tyTyped:
    localError(c.config, n.info, "illegal type conversion to '$1'" % typeToString(targetType))
  else: discard

  maybeLiftType(targetType, c, n[0].info)

  if targetType.kind in {tySink, tyLent} or isOwnedSym(c, n[0]):
    let baseType = semTypeNode(c, n[1], nil).skipTypes({tyTypeDesc})
    let t = newTypeS(targetType.kind, c)
    if targetType.kind == tyOwned:
      t.flags.incl tfHasOwned
    t.rawAddSonNoPropagationOfTypeFlags baseType
    result = newNodeI(nkType, n.info)
    result.typ = makeTypeDesc(c, t)
    return

  result.add copyTree(n[0])

  # special case to make MyObject(x = 3) produce a nicer error message:
  if n[1].kind == nkExprEqExpr and
      targetType.skipTypes(abstractPtrs).kind == tyObject:
    localError(c.config, n.info, "object construction uses ':', not '='")
  var op = semExprWithType(c, n[1])
  if targetType.kind != tyGenericParam and targetType.isMetaType:
    let final = inferWithMetatype(c, targetType, op, true)
    result.add final
    result.typ = final.typ
    return

  result.typ = targetType
  # XXX op is overwritten later on, this is likely added too early
  # here or needs to be overwritten too then.
  result.add op

  if targetType.kind == tyGenericParam:
    result.typ = makeTypeFromExpr(c, copyTree(result))
    return result

  if not isSymChoice(op):
    let status = checkConvertible(c, result.typ, op)
    case status
    of convOK:
      # handle SomeProcType(SomeGenericProc)
      if op.kind == nkSym and op.sym.isGenericRoutine:
        result[1] = fitNode(c, result.typ, result[1], result.info)
      elif op.kind in {nkPar, nkTupleConstr} and targetType.kind == tyTuple:
        op = fitNode(c, targetType, op, result.info)
    of convNotNeedeed:
      message(c.config, n.info, hintConvFromXtoItselfNotNeeded, result.typ.typeToString)
    of convNotLegal:
      result = fitNode(c, result.typ, result[1], result.info)
      if result == nil:
        localError(c.config, n.info, "illegal conversion from '$1' to '$2'" %
          [op.typ.typeToString, result.typ.typeToString])
    of convNotInRange:
      let value =
        if op.kind in {nkCharLit..nkUInt64Lit}: $op.getInt else: $op.getFloat
      localError(c.config, n.info, errGenerated, value & " can't be converted to " &
        result.typ.typeToString)
  else:
    for i in 0..<op.len:
      let it = op[i]
      let status = checkConvertible(c, result.typ, it)
      if status in {convOK, convNotNeedeed}:
        markUsed(c, n.info, it.sym)
        onUse(n.info, it.sym)
        markIndirect(c, it.sym)
        return it
    errorUseQualifier(c, n.info, op[0].sym)

proc semCast(c: PContext, n: PNode): PNode =
  ## Semantically analyze a casting ("cast[type](param)")
  checkSonsLen(n, 2, c.config)
  let targetType = semTypeNode(c, n[0], nil)
  let castedExpr = semExprWithType(c, n[1])
  if castedExpr.kind == nkClosedSymChoice:
    errorUseQualifier(c, n[1].info, castedExpr)
  if targetType == nil:
    localError(c.config, n.info, "Invalid usage of cast, cast requires a type to convert to, e.g., cast[int](0d).")
  if tfHasMeta in targetType.flags:
    localError(c.config, n[0].info, "cannot cast to a non concrete type: '$1'" % $targetType)
  if not isCastable(c, targetType, castedExpr.typ, n.info):
    localError(c.config, n.info, "expression cannot be cast to '$1'" % $targetType)
  result = newNodeI(nkCast, n.info)
  result.typ = targetType
  result.add copyTree(n[0])
  result.add castedExpr

proc semLowHigh(c: PContext, n: PNode, m: TMagic): PNode =
  const
    opToStr: array[mLow..mHigh, string] = ["low", "high"]
  if n.len != 2:
    localError(c.config, n.info, errXExpectsTypeOrValue % opToStr[m])
  else:
    n[1] = semExprWithType(c, n[1], {efDetermineType})
    var typ = skipTypes(n[1].typ, abstractVarRange + {tyTypeDesc, tyUserTypeClassInst})
    case typ.kind
    of tySequence, tyString, tyCstring, tyOpenArray, tyVarargs:
      n.typ = getSysType(c.graph, n.info, tyInt)
    of tyArray:
      n.typ = typ[0] # indextype
      if n.typ.kind == tyRange and emptyRange(n.typ.n[0], n.typ.n[1]): #Invalid range
        n.typ = getSysType(c.graph, n.info, tyInt)
    of tyInt..tyInt64, tyChar, tyBool, tyEnum, tyUInt..tyUInt64, tyFloat..tyFloat64:
      n.typ = n[1].typ.skipTypes({tyTypeDesc})
    of tyGenericParam:
      # prepare this for resolving in semtypinst:
      # we must use copyTree here in order to avoid creating a cycle
      # that could easily turn into an infinite recursion in semtypinst
      n.typ = makeTypeFromExpr(c, n.copyTree)
    else:
      localError(c.config, n.info, "invalid argument for: " & opToStr[m])
  result = n

proc fixupStaticType(c: PContext, n: PNode) =
  # This proc can be applied to evaluated expressions to assign
  # them a static type.
  #
  # XXX: with implicit static, this should not be necessary,
  # because the output type of operations such as `semConstExpr`
  # should be a static type (as well as the type of any other
  # expression that can be implicitly evaluated). For now, we
  # apply this measure only in code that is enlightened to work
  # with static types.
  if n.typ.kind != tyStatic:
    n.typ = newTypeWithSons(getCurrOwner(c), tyStatic, @[n.typ], c.idgen)
    n.typ.n = n # XXX: cycles like the one here look dangerous.
                # Consider using `n.copyTree`

proc isOpImpl(c: PContext, n: PNode, flags: TExprFlags): PNode =
  internalAssert c.config,
    n.len == 3 and
    n[1].typ != nil and
    n[2].kind in {nkStrLit..nkTripleStrLit, nkType}

  var
    res = false
    t1 = n[1].typ
    t2 = n[2].typ

  if t1.kind == tyTypeDesc and t2.kind != tyTypeDesc:
    t1 = t1.base

  if n[2].kind in {nkStrLit..nkTripleStrLit}:
    case n[2].strVal.normalize
    of "closure":
      let t = skipTypes(t1, abstractRange)
      res = t.kind == tyProc and
            t.callConv == ccClosure
    of "iterator":
      # holdover from when `is iterator` didn't work
      let t = skipTypes(t1, abstractRange)
      res = t.kind == tyProc and
            t.callConv == ccClosure and
            tfIterator in t.flags
    else:
      res = false
  else:
    if t1.skipTypes({tyGenericInst, tyAlias, tySink, tyDistinct}).kind != tyGenericBody:
      maybeLiftType(t2, c, n.info)
    else:
      #[
      for this case:
      type Foo = object[T]
      Foo is Foo
      ]#
      discard
    var m = newCandidate(c, t2)
    if efExplain in flags:
      m.diagnostics = @[]
      m.diagnosticsEnabled = true
    res = typeRel(m, t2, t1) >= isSubtype # isNone
    # `res = sameType(t1, t2)` would be wrong, e.g. for `int is (int|float)`

  result = newIntNode(nkIntLit, ord(res))
  result.typ = n.typ

proc semIs(c: PContext, n: PNode, flags: TExprFlags): PNode =
  if n.len != 3:
    localError(c.config, n.info, "'is' operator takes 2 arguments")

  let boolType = getSysType(c.graph, n.info, tyBool)
  result = n
  n.typ = boolType
  var liftLhs = true

  n[1] = semExprWithType(c, n[1], {efDetermineType, efWantIterator})
  if n[2].kind notin {nkStrLit..nkTripleStrLit}:
    let t2 = semTypeNode(c, n[2], nil)
    n[2] = newNodeIT(nkType, n[2].info, t2)
    if t2.kind == tyStatic:
      let evaluated = tryConstExpr(c, n[1])
      if evaluated != nil:
        c.fixupStaticType(evaluated)
        n[1] = evaluated
      else:
        result = newIntNode(nkIntLit, 0)
        result.typ = boolType
        return
    elif t2.kind == tyTypeDesc and
        (t2.base.kind == tyNone or tfExplicit in t2.flags):
      # When the right-hand side is an explicit type, we must
      # not allow regular values to be matched against the type:
      liftLhs = false
  else:
    n[2] = semExpr(c, n[2])

  var lhsType = n[1].typ
  if lhsType.kind != tyTypeDesc:
    if liftLhs:
      n[1] = makeTypeSymNode(c, lhsType, n[1].info)
      lhsType = n[1].typ
  else:
    if lhsType.base.kind == tyNone or
        (c.inGenericContext > 0 and lhsType.base.containsGenericType):
      # BUGFIX: don't evaluate this too early: ``T is void``
      return

  result = isOpImpl(c, n, flags)

proc semOpAux(c: PContext, n: PNode) =
  const flags = {efDetermineType}
  for i in 1..<n.len:
    var a = n[i]
    if a.kind == nkExprEqExpr and a.len == 2:
      let info = a[0].info
      a[0] = newIdentNode(considerQuotedIdent(c, a[0], a), info)
      a[1] = semExprWithType(c, a[1], flags)
      a.typ = a[1].typ
    else:
      n[i] = semExprWithType(c, a, flags)

proc overloadedCallOpr(c: PContext, n: PNode): PNode =
  # quick check if there is *any* () operator overloaded:
  var par = getIdent(c.cache, "()")
  var amb = false
  if searchInScopes(c, par, amb) == nil:
    result = nil
  else:
    result = newNodeI(nkCall, n.info)
    result.add newIdentNode(par, n.info)
    for i in 0..<n.len: result.add n[i]
    result = semExpr(c, result, flags = {efNoUndeclared})

proc changeType(c: PContext; n: PNode, newType: PType, check: bool) =
  case n.kind
  of nkCurly, nkBracket:
    for i in 0..<n.len:
      changeType(c, n[i], elemType(newType), check)
  of nkPar, nkTupleConstr:
    let tup = newType.skipTypes({tyGenericInst, tyAlias, tySink, tyDistinct})
    if tup.kind != tyTuple:
      if tup.kind == tyObject: return
      globalError(c.config, n.info, "no tuple type for constructor")
    elif n.len > 0 and n[0].kind == nkExprColonExpr:
      # named tuple?
      for i in 0..<n.len:
        var m = n[i][0]
        if m.kind != nkSym:
          globalError(c.config, m.info, "invalid tuple constructor")
          return
        if tup.n != nil:
          var f = getSymFromList(tup.n, m.sym.name)
          if f == nil:
            globalError(c.config, m.info, "unknown identifier: " & m.sym.name.s)
            return
          changeType(c, n[i][1], f.typ, check)
        else:
          changeType(c, n[i][1], tup[i], check)
    else:
      for i in 0..<n.len:
        changeType(c, n[i], tup[i], check)
        when false:
          var m = n[i]
          var a = newNodeIT(nkExprColonExpr, m.info, newType[i])
          a.add newSymNode(newType.n[i].sym)
          a.add m
          changeType(m, tup[i], check)
  of nkCharLit..nkUInt64Lit:
    if check and n.kind != nkUInt64Lit and not sameType(n.typ, newType):
      let value = n.intVal
      if value < firstOrd(c.config, newType) or value > lastOrd(c.config, newType):
        localError(c.config, n.info, "cannot convert " & $value &
                                         " to " & typeToString(newType))
  of nkFloatLit..nkFloat64Lit:
    if check and not floatRangeCheck(n.floatVal, newType):
      localError(c.config, n.info, errFloatToString % [$n.floatVal, typeToString(newType)])
  else: discard
  n.typ = newType

proc arrayConstrType(c: PContext, n: PNode): PType =
  var typ = newTypeS(tyArray, c)
  rawAddSon(typ, nil)     # index type
  if n.len == 0:
    rawAddSon(typ, newTypeS(tyEmpty, c)) # needs an empty basetype!
  else:
    var t = skipTypes(n[0].typ, {tyGenericInst, tyVar, tyLent, tyOrdinal, tyAlias, tySink})
    addSonSkipIntLit(typ, t, c.idgen)
  typ[0] = makeRangeType(c, 0, n.len - 1, n.info)
  result = typ

proc semArrayConstr(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  result = newNodeI(nkBracket, n.info)
  result.typ = newTypeS(tyArray, c)
  var expectedElementType, expectedIndexType: PType = nil
  if expectedType != nil:
    let expected = expectedType.skipTypes(abstractRange-{tyDistinct})
    case expected.kind
    of tyArray:
      expectedIndexType = expected[0]
      expectedElementType = expected[1]
    of tyOpenArray:
      expectedElementType = expected[0]
    else: discard
  rawAddSon(result.typ, nil)     # index type
  var
    firstIndex, lastIndex: Int128
    indexType = getSysType(c.graph, n.info, tyInt)
    lastValidIndex = lastOrd(c.config, indexType)
  if n.len == 0:
    rawAddSon(result.typ,
      if expectedElementType != nil and
          typeAllowed(expectedElementType, skLet, c) == nil:
        expectedElementType
      else:
        newTypeS(tyEmpty, c)) # needs an empty basetype!
    lastIndex = toInt128(-1)
  else:
    var x = n[0]
    if x.kind == nkExprColonExpr and x.len == 2:
      var idx = semConstExpr(c, x[0], expectedIndexType)
      if not isOrdinalType(idx.typ):
        localError(c.config, idx.info, "expected ordinal value for array " &
                   "index, got '$1'" % renderTree(idx))
      else:
        firstIndex = getOrdValue(idx)
        lastIndex = firstIndex
        indexType = idx.typ
        lastValidIndex = lastOrd(c.config, indexType)
        x = x[1]

    let yy = semExprWithType(c, x, {efTypeAllowed}, expectedElementType)
    var typ = yy.typ
    if expectedElementType == nil:
      expectedElementType = typ
    result.add yy
    #var typ = skipTypes(result[0].typ, {tyGenericInst, tyVar, tyLent, tyOrdinal})
    for i in 1..<n.len:
      if lastIndex == lastValidIndex:
        let validIndex = makeRangeType(c, toInt64(firstIndex), toInt64(lastValidIndex), n.info,
                                       indexType)
        localError(c.config, n.info, "size of array exceeds range of index " &
          "type '$1' by $2 elements" % [typeToString(validIndex), $(n.len-i)])

      x = n[i]
      if x.kind == nkExprColonExpr and x.len == 2:
        var idx = semConstExpr(c, x[0], indexType)
        idx = fitNode(c, indexType, idx, x.info)
        if lastIndex+1 != getOrdValue(idx):
          localError(c.config, x.info, "invalid order in array constructor")
        x = x[1]

      let xx = semExprWithType(c, x, {efTypeAllowed}, expectedElementType)
      result.add xx
      typ = commonType(c, typ, xx.typ)
      #n[i] = semExprWithType(c, x, {})
      #result.add fitNode(c, typ, n[i])
      inc(lastIndex)
    addSonSkipIntLit(result.typ, typ, c.idgen)
    for i in 0..<result.len:
      result[i] = fitNode(c, typ, result[i], result[i].info)
  result.typ[0] = makeRangeType(c, toInt64(firstIndex), toInt64(lastIndex), n.info,
                                     indexType)

proc fixAbstractType(c: PContext, n: PNode) =
  for i in 1..<n.len:
    let it = n[i]
    if it == nil:
      localError(c.config, n.info, "'$1' has nil child at index $2" % [renderTree(n, {renderNoComments}), $i])
      return
    # do not get rid of nkHiddenSubConv for OpenArrays, the codegen needs it:
    if it.kind == nkHiddenSubConv and
        skipTypes(it.typ, abstractVar).kind notin {tyOpenArray, tyVarargs}:
      if skipTypes(it[1].typ, abstractVar).kind in
            {tyNil, tyTuple, tySet} or it[1].isArrayConstr:
        var s = skipTypes(it.typ, abstractVar + tyUserTypeClasses)
        if s.kind != tyUntyped:
          changeType(c, it[1], s, check=true)
        n[i] = it[1]

proc isAssignable(c: PContext, n: PNode): TAssignableResult =
  result = parampatterns.isAssignable(c.p.owner, n)

proc isUnresolvedSym(s: PSym): bool =
  result = s.kind == skGenericParam
  if not result and s.typ != nil:
    result = tfInferrableStatic in s.typ.flags or
        (s.kind == skParam and s.typ.isMetaType) or
        (s.kind == skType and
        s.typ.flags * {tfGenericTypeParam, tfImplicitTypeParam} != {})

proc hasUnresolvedArgs(c: PContext, n: PNode): bool =
  # Checks whether an expression depends on generic parameters that
  # don't have bound values yet. E.g. this could happen in situations
  # such as:
  #  type Slot[T] = array[T.size, byte]
  #  proc foo[T](x: default(T))
  #
  # Both static parameter and type parameters can be unresolved.
  case n.kind
  of nkSym:
    return isUnresolvedSym(n.sym)
  of nkIdent, nkAccQuoted:
    let ident = considerQuotedIdent(c, n)
    var amb = false
    let sym = searchInScopes(c, ident, amb)
    if sym != nil:
      return isUnresolvedSym(sym)
    else:
      return false
  else:
    for i in 0..<n.safeLen:
      if hasUnresolvedArgs(c, n[i]): return true
    return false

proc newHiddenAddrTaken(c: PContext, n: PNode, isOutParam: bool): PNode =
  if n.kind == nkHiddenDeref and not (c.config.backend == backendCpp or
                                      sfCompileToCpp in c.module.flags):
    checkSonsLen(n, 1, c.config)
    result = n[0]
  else:
    result = newNodeIT(nkHiddenAddr, n.info, makeVarType(c, n.typ))
    result.add n
    let aa = isAssignable(c, n)
    let sym = getRoot(n)
    if aa notin {arLValue, arLocalLValue}:
      if aa == arDiscriminant and c.inUncheckedAssignSection > 0:
        discard "allow access within a cast(unsafeAssign) section"
      elif strictDefs in c.features and aa == arAddressableConst and
              sym != nil and sym.kind == skLet and isOutParam:
        discard "allow let varaibles to be passed to out parameters"
      else:
        localError(c.config, n.info, errVarForOutParamNeededX % renderNotLValue(n))

proc analyseIfAddressTaken(c: PContext, n: PNode, isOutParam: bool): PNode =
  result = n
  case n.kind
  of nkSym:
    # n.sym.typ can be nil in 'check' mode ...
    if n.sym.typ != nil and
        skipTypes(n.sym.typ, abstractInst-{tyTypeDesc}).kind notin {tyVar, tyLent}:
      incl(n.sym.flags, sfAddrTaken)
      result = newHiddenAddrTaken(c, n, isOutParam)
  of nkDotExpr:
    checkSonsLen(n, 2, c.config)
    if n[1].kind != nkSym:
      internalError(c.config, n.info, "analyseIfAddressTaken")
      return
    if skipTypes(n[1].sym.typ, abstractInst-{tyTypeDesc}).kind notin {tyVar, tyLent}:
      incl(n[1].sym.flags, sfAddrTaken)
      result = newHiddenAddrTaken(c, n, isOutParam)
  of nkBracketExpr:
    checkMinSonsLen(n, 1, c.config)
    if skipTypes(n[0].typ, abstractInst-{tyTypeDesc}).kind notin {tyVar, tyLent}:
      if n[0].kind == nkSym: incl(n[0].sym.flags, sfAddrTaken)
      result = newHiddenAddrTaken(c, n, isOutParam)
  else:
    result = newHiddenAddrTaken(c, n, isOutParam)

proc analyseIfAddressTakenInCall(c: PContext, n: PNode, isConverter = false) =
  checkMinSonsLen(n, 1, c.config)
  const
    FakeVarParams = {mNew, mNewFinalize, mInc, ast.mDec, mIncl, mExcl,
      mSetLengthStr, mSetLengthSeq, mAppendStrCh, mAppendStrStr, mSwap,
      mAppendSeqElem, mNewSeq, mReset, mShallowCopy, mDeepCopy, mMove,
      mWasMoved}

  template checkIfConverterCalled(c: PContext, n: PNode) =
    ## Checks if there is a converter call which wouldn't be checked otherwise
    # Call can sometimes be wrapped in a deref
    let node = if n.kind == nkHiddenDeref: n[0] else: n
    if node.kind == nkHiddenCallConv:
      analyseIfAddressTakenInCall(c, node, true)
  # get the real type of the callee
  # it may be a proc var with a generic alias type, so we skip over them
  var t = n[0].typ.skipTypes({tyGenericInst, tyAlias, tySink})
  if n[0].kind == nkSym and n[0].sym.magic in FakeVarParams:
    # BUGFIX: check for L-Value still needs to be done for the arguments!
    # note sometimes this is eval'ed twice so we check for nkHiddenAddr here:
    for i in 1..<n.len:
      if i < t.len and t[i] != nil and
          skipTypes(t[i], abstractInst-{tyTypeDesc}).kind in {tyVar}:
        let it = n[i]
        let aa = isAssignable(c, it)
        if aa notin {arLValue, arLocalLValue}:
          if it.kind != nkHiddenAddr:
            if aa == arDiscriminant and c.inUncheckedAssignSection > 0:
              discard "allow access within a cast(unsafeAssign) section"
            else:
              localError(c.config, it.info, errVarForOutParamNeededX % $it)
        # Make sure to still check arguments for converters
        c.checkIfConverterCalled(n[i])
    # bug #5113: disallow newSeq(result) where result is a 'var T':
    if n[0].sym.magic in {mNew, mNewFinalize, mNewSeq}:
      var arg = n[1] #.skipAddr
      if arg.kind == nkHiddenDeref: arg = arg[0]
      if arg.kind == nkSym and arg.sym.kind == skResult and
          arg.typ.skipTypes(abstractInst).kind in {tyVar, tyLent}:
        localError(c.config, n.info, errXStackEscape % renderTree(n[1], {renderNoComments}))

    return
  for i in 1..<n.len:
    let n = if n.kind == nkHiddenDeref: n[0] else: n
    c.checkIfConverterCalled(n[i])
    if i < t.len and
        skipTypes(t[i], abstractInst-{tyTypeDesc}).kind in {tyVar}:
      # Converters wrap var parameters in nkHiddenAddr but they haven't been analysed yet.
      # So we need to make sure we are checking them still when in a converter call
      if n[i].kind != nkHiddenAddr or isConverter:
        n[i] = analyseIfAddressTaken(c, n[i].skipAddr(), isOutParam(skipTypes(t[i], abstractInst-{tyTypeDesc})))

include semmagic

proc evalAtCompileTime(c: PContext, n: PNode): PNode =
  result = n
  if n.kind notin nkCallKinds or n[0].kind != nkSym: return
  var callee = n[0].sym
  # workaround for bug #537 (overly aggressive inlining leading to
  # wrong NimNode semantics):
  if n.typ != nil and tfTriggersCompileTime in n.typ.flags: return

  # constant folding that is necessary for correctness of semantic pass:
  if callee.magic != mNone and callee.magic in ctfeWhitelist and n.typ != nil:
    var call = newNodeIT(nkCall, n.info, n.typ)
    call.add(n[0])
    var allConst = true
    for i in 1..<n.len:
      var a = getConstExpr(c.module, n[i], c.idgen, c.graph)
      if a == nil:
        allConst = false
        a = n[i]
        if a.kind == nkHiddenStdConv: a = a[1]
      call.add(a)
    if allConst:
      result = semfold.getConstExpr(c.module, call, c.idgen, c.graph)
      if result.isNil: result = n
      else: return result

  block maybeLabelAsStatic:
    # XXX: temporary work-around needed for tlateboundstatic.
    # This is certainly not correct, but it will get the job
    # done until we have a more robust infrastructure for
    # implicit statics.
    if n.len > 1:
      for i in 1..<n.len:
        # see bug #2113, it's possible that n[i].typ for errornous code:
        if n[i].typ.isNil or n[i].typ.kind != tyStatic or
            tfUnresolved notin n[i].typ.flags:
          break maybeLabelAsStatic
      n.typ = newTypeWithSons(c, tyStatic, @[n.typ])
      n.typ.flags.incl tfUnresolved

  # optimization pass: not necessary for correctness of the semantic pass
  if callee.kind == skConst or
     {sfNoSideEffect, sfCompileTime} * callee.flags != {} and
     {sfForward, sfImportc} * callee.flags == {} and n.typ != nil:

    if callee.kind != skConst and
       sfCompileTime notin callee.flags and
       optImplicitStatic notin c.config.options: return

    if callee.magic notin ctfeWhitelist: return

    if callee.kind notin {skProc, skFunc, skConverter, skConst} or callee.isGenericRoutine:
      return

    if n.typ != nil and typeAllowed(n.typ, skConst, c) != nil: return

    var call = newNodeIT(nkCall, n.info, n.typ)
    call.add(n[0])
    for i in 1..<n.len:
      let a = getConstExpr(c.module, n[i], c.idgen, c.graph)
      if a == nil: return n
      call.add(a)

    #echo "NOW evaluating at compile time: ", call.renderTree
    if c.inStaticContext == 0 or sfNoSideEffect in callee.flags:
      if sfCompileTime in callee.flags:
        result = evalStaticExpr(c.module, c.idgen, c.graph, call, c.p.owner)
        if result.isNil:
          localError(c.config, n.info, errCannotInterpretNodeX % renderTree(call))
        else: result = fixupTypeAfterEval(c, result, n)
      else:
        result = evalConstExpr(c.module, c.idgen, c.graph, call)
        if result.isNil: result = n
        else: result = fixupTypeAfterEval(c, result, n)
    else:
      result = n
    #if result != n:
    #  echo "SUCCESS evaluated at compile time: ", call.renderTree

proc semStaticExpr(c: PContext, n: PNode; expectedType: PType = nil): PNode =
  inc c.inStaticContext
  openScope(c)
  let a = semExprWithType(c, n, expectedType = expectedType)
  closeScope(c)
  dec c.inStaticContext
  if a.findUnresolvedStatic != nil: return a
  result = evalStaticExpr(c.module, c.idgen, c.graph, a, c.p.owner)
  if result.isNil:
    localError(c.config, n.info, errCannotInterpretNodeX % renderTree(n))
    result = c.graph.emptyNode
  else:
    result = fixupTypeAfterEval(c, result, a)

proc semOverloadedCallAnalyseEffects(c: PContext, n: PNode, nOrig: PNode,
                                     flags: TExprFlags): PNode =
  if flags*{efInTypeof, efWantIterator, efWantIterable} != {}:
    # consider: 'for x in pReturningArray()' --> we don't want the restriction
    # to 'skIterator' anymore; skIterator is preferred in sigmatch already
    # for typeof support.
    # for ``typeof(countup(1,3))``, see ``tests/ttoseq``.
    result = semOverloadedCall(c, n, nOrig,
      {skProc, skFunc, skMethod, skConverter, skMacro, skTemplate, skIterator}, flags)
  else:
    result = semOverloadedCall(c, n, nOrig,
      {skProc, skFunc, skMethod, skConverter, skMacro, skTemplate}, flags)

  if result != nil:
    if result[0].kind != nkSym:
      internalError(c.config, "semOverloadedCallAnalyseEffects")
      return
    let callee = result[0].sym
    case callee.kind
    of skMacro, skTemplate: discard
    else:
      if callee.kind == skIterator and callee.id == c.p.owner.id and
          not isClosureIterator(c.p.owner.typ):
        localError(c.config, n.info, errRecursiveDependencyIteratorX % callee.name.s)
        # error correction, prevents endless for loop elimination in transf.
        # See bug #2051:
        result[0] = newSymNode(errorSym(c, n))
      elif callee.kind == skIterator:
        if efWantIterable in flags:
          let typ = newTypeS(tyIterable, c)
          rawAddSon(typ, result.typ)
          result.typ = typ

proc resolveIndirectCall(c: PContext; n, nOrig: PNode;
                         t: PType): TCandidate =
  initCandidate(c, result, t)
  matches(c, n, nOrig, result)

proc bracketedMacro(n: PNode): PSym =
  if n.len >= 1 and n[0].kind == nkSym:
    result = n[0].sym
    if result.kind notin {skMacro, skTemplate}:
      result = nil

proc setGenericParams(c: PContext, n: PNode) =
  for i in 1..<n.len:
    n[i].typ = semTypeNode(c, n[i], nil)

proc afterCallActions(c: PContext; n, orig: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  if efNoSemCheck notin flags and n.typ != nil and n.typ.kind == tyError:
    return errorNode(c, n)

  result = n

  when defined(nimsuggest):
    if c.config.expandProgress:
      if c.config.expandLevels == 0:
        return n
      else:
        c.config.expandLevels -= 1

  let callee = result[0].sym
  case callee.kind
  of skMacro: result = semMacroExpr(c, result, orig, callee, flags, expectedType)
  of skTemplate: result = semTemplateExpr(c, result, callee, flags, expectedType)
  else:
    semFinishOperands(c, result)
    activate(c, result)
    fixAbstractType(c, result)
    analyseIfAddressTakenInCall(c, result)
    if callee.magic != mNone:
      result = magicsAfterOverloadResolution(c, result, flags, expectedType)
    when false:
      if result.typ != nil and
          not (result.typ.kind == tySequence and result.typ[0].kind == tyEmpty):
        liftTypeBoundOps(c, result.typ, n.info)
    #result = patchResolvedTypeBoundOp(c, result)
  if c.matchedConcept == nil:
    result = evalAtCompileTime(c, result)

proc semIndirectOp(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  result = nil
  checkMinSonsLen(n, 1, c.config)
  var prc = n[0]
  if n[0].kind == nkDotExpr:
    checkSonsLen(n[0], 2, c.config)
    let n0 = semFieldAccess(c, n[0], {efIsDotCall})
    if n0.kind == nkDotCall:
      # it is a static call!
      result = n0
      result.transitionSonsKind(nkCall)
      result.flags.incl nfExplicitCall
      for i in 1..<n.len: result.add n[i]
      return semExpr(c, result, flags)
    else:
      n[0] = n0
  else:
    n[0] = semExpr(c, n[0], {efInCall})
    let t = n[0].typ
    if t != nil and t.kind in {tyVar, tyLent}:
      n[0] = newDeref(n[0])
    elif n[0].kind == nkBracketExpr:
      let s = bracketedMacro(n[0])
      if s != nil:
        setGenericParams(c, n[0])
        return semDirectOp(c, n, flags, expectedType)
    elif isSymChoice(n[0]):
      # overloaded generic procs e.g. newSeq[int] can end up here
      return semDirectOp(c, n, flags, expectedType)

  var t: PType = nil
  if n[0].typ != nil:
    t = skipTypes(n[0].typ, abstractInst+{tyOwned}-{tyTypeDesc, tyDistinct})
  if t != nil and t.kind == tyTypeDesc:
    if n.len == 1: return semObjConstr(c, n, flags, expectedType)
    return semConv(c, n)

  let nOrig = n.copyTree
  semOpAux(c, n)
  if t != nil and t.kind == tyProc:
    # This is a proc variable, apply normal overload resolution
    let m = resolveIndirectCall(c, n, nOrig, t)
    if m.state != csMatch:
      if c.config.m.errorOutputs == {}:
        # speed up error generation:
        globalError(c.config, n.info, "type mismatch")
        return c.graph.emptyNode
      else:
        var hasErrorType = false
        var msg = "type mismatch: got <"
        for i in 1..<n.len:
          if i > 1: msg.add(", ")
          let nt = n[i].typ
          msg.add(typeToString(nt))
          if nt.kind == tyError:
            hasErrorType = true
            break
        if not hasErrorType:
          let typ = n[0].typ
          msg.add(">\nbut expected one of:\n" &
              typeToString(typ))
          # prefer notin preferToResolveSymbols
          # t.sym != nil
          # sfAnon notin t.sym.flags
          # t.kind != tySequence(It is tyProc)
          if typ.sym != nil and sfAnon notin typ.sym.flags and
                                typ.kind == tyProc:
            # when can `typ.sym != nil` ever happen?
            msg.add(" = " & typeToString(typ, preferDesc))
          msg.addDeclaredLocMaybe(c.config, typ)
          localError(c.config, n.info, msg)
        return errorNode(c, n)
      result = nil
    else:
      result = m.call
      instGenericConvertersSons(c, result, m)

  else:
    result = overloadedCallOpr(c, n) # this uses efNoUndeclared
    # Now that nkSym does not imply an iteration over the proc/iterator space,
    # the old ``prc`` (which is likely an nkIdent) has to be restored:
    if result == nil or result.kind == nkEmpty:
      # XXX: hmm, what kind of symbols will end up here?
      # do we really need to try the overload resolution?
      n[0] = prc
      nOrig[0] = prc
      n.flags.incl nfExprCall
      result = semOverloadedCallAnalyseEffects(c, n, nOrig, flags)
      if result == nil: return errorNode(c, n)
    elif result.kind notin nkCallKinds:
      # the semExpr() in overloadedCallOpr can even break this condition!
      # See bug #904 of how to trigger it:
      return result
  #result = afterCallActions(c, result, nOrig, flags)
  if result[0].kind == nkSym:
    result = afterCallActions(c, result, nOrig, flags, expectedType)
  else:
    fixAbstractType(c, result)
    analyseIfAddressTakenInCall(c, result)

proc semDirectOp(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  # this seems to be a hotspot in the compiler!
  let nOrig = n.copyTree
  #semLazyOpAux(c, n)
  result = semOverloadedCallAnalyseEffects(c, n, nOrig, flags)
  if result != nil: result = afterCallActions(c, result, nOrig, flags, expectedType)
  else: result = errorNode(c, n)

proc buildEchoStmt(c: PContext, n: PNode): PNode =
  # we MUST not check 'n' for semantics again here! But for now we give up:
  result = newNodeI(nkCall, n.info)
  let e = systemModuleSym(c.graph, getIdent(c.cache, "echo"))
  if e != nil:
    result.add(newSymNode(e))
  else:
    result.add localErrorNode(c, n, "system needs: echo")
  result.add(n)
  result.add(newStrNode(nkStrLit, ": " & n.typ.typeToString))
  result = semExpr(c, result)

proc semExprNoType(c: PContext, n: PNode): PNode =
  let isPush = c.config.hasHint(hintExtendedContext)
  if isPush: pushInfoContext(c.config, n.info)
  result = semExpr(c, n, {efWantStmt})
  discardCheck(c, result, {})
  if isPush: popInfoContext(c.config)

proc isTypeExpr(n: PNode): bool =
  case n.kind
  of nkType, nkTypeOfExpr: result = true
  of nkSym: result = n.sym.kind == skType
  else: result = false

proc createSetType(c: PContext; baseType: PType): PType =
  assert baseType != nil
  result = newTypeS(tySet, c)
  rawAddSon(result, baseType)

proc lookupInRecordAndBuildCheck(c: PContext, n, r: PNode, field: PIdent,
                                 check: var PNode): PSym =
  # transform in a node that contains the runtime check for the
  # field, if it is in a case-part...
  result = nil
  case r.kind
  of nkRecList:
    for i in 0..<r.len:
      result = lookupInRecordAndBuildCheck(c, n, r[i], field, check)
      if result != nil: return
  of nkRecCase:
    checkMinSonsLen(r, 2, c.config)
    if (r[0].kind != nkSym): illFormedAst(r, c.config)
    result = lookupInRecordAndBuildCheck(c, n, r[0], field, check)
    if result != nil: return
    let setType = createSetType(c, r[0].typ)
    var s = newNodeIT(nkCurly, r.info, setType)
    for i in 1..<r.len:
      var it = r[i]
      case it.kind
      of nkOfBranch:
        result = lookupInRecordAndBuildCheck(c, n, lastSon(it), field, check)
        if result == nil:
          for j in 0..<it.len-1: s.add copyTree(it[j])
        else:
          if check == nil:
            check = newNodeI(nkCheckedFieldExpr, n.info)
            check.add c.graph.emptyNode # make space for access node
          s = newNodeIT(nkCurly, n.info, setType)
          for j in 0..<it.len - 1: s.add copyTree(it[j])
          var inExpr = newNodeIT(nkCall, n.info, getSysType(c.graph, n.info, tyBool))
          inExpr.add newSymNode(getSysMagic(c.graph, n.info, "contains", mInSet), n.info)
          inExpr.add s
          inExpr.add copyTree(r[0])
          check.add inExpr
          #check.add semExpr(c, inExpr)
          return
      of nkElse:
        result = lookupInRecordAndBuildCheck(c, n, lastSon(it), field, check)
        if result != nil:
          if check == nil:
            check = newNodeI(nkCheckedFieldExpr, n.info)
            check.add c.graph.emptyNode # make space for access node
          var inExpr = newNodeIT(nkCall, n.info, getSysType(c.graph, n.info, tyBool))
          inExpr.add newSymNode(getSysMagic(c.graph, n.info, "contains", mInSet), n.info)
          inExpr.add s
          inExpr.add copyTree(r[0])
          var notExpr = newNodeIT(nkCall, n.info, getSysType(c.graph, n.info, tyBool))
          notExpr.add newSymNode(getSysMagic(c.graph, n.info, "not", mNot), n.info)
          notExpr.add inExpr
          check.add notExpr
          return
      else: illFormedAst(it, c.config)
  of nkSym:
    if r.sym.name.id == field.id: result = r.sym
  else: illFormedAst(n, c.config)

const
  tyTypeParamsHolders = {tyGenericInst, tyCompositeTypeClass}
  tyDotOpTransparent = {tyVar, tyLent, tyPtr, tyRef, tyOwned, tyAlias, tySink}

proc readTypeParameter(c: PContext, typ: PType,
                       paramName: PIdent, info: TLineInfo): PNode =
  # Note: This function will return emptyNode when attempting to read
  # a static type parameter that is not yet resolved (e.g. this may
  # happen in proc signatures such as `proc(x: T): array[T.sizeParam, U]`
  if typ.kind in {tyUserTypeClass, tyUserTypeClassInst}:
    for statement in typ.n:
      case statement.kind
      of nkTypeSection:
        for def in statement:
          if def[0].sym.name.id == paramName.id:
            # XXX: Instead of lifting the section type to a typedesc
            # here, we could try doing it earlier in semTypeSection.
            # This seems semantically correct and then we'll be able
            # to return the section symbol directly here
            let foundType = makeTypeDesc(c, def[2].typ)
            return newSymNode(copySym(def[0].sym, c.idgen).linkTo(foundType), info)

      of nkConstSection:
        for def in statement:
          if def[0].sym.name.id == paramName.id:
            return def[2]

      else:
        discard

  if typ.kind != tyUserTypeClass:
    let ty = if typ.kind == tyCompositeTypeClass: typ[1].skipGenericAlias
             else: typ.skipGenericAlias
    let tbody = ty[0]
    for s in 0..<tbody.len-1:
      let tParam = tbody[s]
      if tParam.sym.name.id == paramName.id:
        let rawTyp = ty[s + 1]
        if rawTyp.kind == tyStatic:
          if rawTyp.n != nil:
            return rawTyp.n
          else:
            return c.graph.emptyNode
        else:
          let foundTyp = makeTypeDesc(c, rawTyp)
          return newSymNode(copySym(tParam.sym, c.idgen).linkTo(foundTyp), info)

  return nil

proc semSym(c: PContext, n: PNode, sym: PSym, flags: TExprFlags): PNode =
  assert n.kind in nkIdentKinds + {nkDotExpr}
  let s = getGenSym(c, sym)
  case s.kind
  of skConst:
    if n.kind != nkDotExpr: # dotExpr is already checked by builtinFieldAccess
      markUsed(c, n.info, s)
    onUse(n.info, s)
    let typ = skipTypes(s.typ, abstractInst-{tyTypeDesc})
    case typ.kind
    of  tyNil, tyChar, tyInt..tyInt64, tyFloat..tyFloat128,
        tyTuple, tySet, tyUInt..tyUInt64:
      if s.magic == mNone: result = inlineConst(c, n, s)
      else: result = newSymNode(s, n.info)
    of tyArray, tySequence:
      # Consider::
      #     const x = []
      #     proc p(a: openarray[int])
      #     proc q(a: openarray[char])
      #     p(x)
      #     q(x)
      #
      # It is clear that ``[]`` means two totally different things. Thus, we
      # copy `x`'s AST into each context, so that the type fixup phase can
      # deal with two different ``[]``.
      if s.astdef.safeLen == 0: result = inlineConst(c, n, s)
      else: result = newSymNode(s, n.info)
    of tyStatic:
      if typ.n != nil:
        result = typ.n
        result.typ = typ.base
      else:
        result = newSymNode(s, n.info)
    else:
      result = newSymNode(s, n.info)
  of skMacro, skTemplate:
    # check if we cannot use alias syntax (no required args or generic params)
    if sfNoalias in s.flags:
      let info = getCallLineInfo(n)
      markUsed(c, info, s)
      onUse(info, s)
      result = symChoice(c, n, s, scClosed)
    else:
      case s.kind
      of skMacro: result = semMacroExpr(c, n, n, s, flags)
      of skTemplate: result = semTemplateExpr(c, n, s, flags)
      else: discard # unreachable
  of skParam:
    markUsed(c, n.info, s)
    onUse(n.info, s)
    if s.typ != nil and s.typ.kind == tyStatic and s.typ.n != nil:
      # XXX see the hack in sigmatch.nim ...
      return s.typ.n
    elif sfGenSym in s.flags:
      # the owner should have been set by now by addParamOrResult
      internalAssert c.config, s.owner != nil
    result = newSymNode(s, n.info)
  of skVar, skLet, skResult, skForVar:
    if s.magic == mNimvm:
      localError(c.config, n.info, "illegal context for 'nimvm' magic")

    if n.kind != nkDotExpr: # dotExpr is already checked by builtinFieldAccess
      markUsed(c, n.info, s)
    onUse(n.info, s)
    result = newSymNode(s, n.info)
    # We cannot check for access to outer vars for example because it's still
    # not sure the symbol really ends up being used:
    # var len = 0 # but won't be called
    # genericThatUsesLen(x) # marked as taking a closure?
    if hasWarn(c.config, warnResultUsed):
      message(c.config, n.info, warnResultUsed)

  of skGenericParam:
    onUse(n.info, s)
    if s.typ.kind == tyStatic:
      result = newSymNode(s, n.info)
      result.typ = s.typ
    elif s.ast != nil:
      result = semExpr(c, s.ast)
    else:
      n.typ = s.typ
      return n
  of skType:
    if n.kind != nkDotExpr: # dotExpr is already checked by builtinFieldAccess
      markUsed(c, n.info, s)
    onUse(n.info, s)
    if s.typ.kind == tyStatic and s.typ.base.kind != tyNone and s.typ.n != nil:
      return s.typ.n
    result = newSymNode(s, n.info)
    result.typ = makeTypeDesc(c, s.typ)
  of skField:
    # old code, not sure if it's live code:
    markUsed(c, n.info, s)
    onUse(n.info, s)
    result = newSymNode(s, n.info)
  of skModule:
    # make sure type is None and not nil for discard checking
    if efWantStmt in flags: s.typ = newTypeS(tyNone, c)
    markUsed(c, n.info, s)
    onUse(n.info, s)
    result = newSymNode(s, n.info)
  else:
    let info = getCallLineInfo(n)
    #if efInCall notin flags:
    markUsed(c, info, s)
    onUse(info, s)
    result = newSymNode(s, info)

proc tryReadingGenericParam(c: PContext, n: PNode, i: PIdent, t: PType): PNode =
  case t.kind
  of tyTypeParamsHolders:
    result = readTypeParameter(c, t, i, n.info)
    if result == c.graph.emptyNode:
      result = n
      n.typ = makeTypeFromExpr(c, n.copyTree)
  of tyUserTypeClasses:
    if t.isResolvedUserTypeClass:
      result = readTypeParameter(c, t, i, n.info)
    else:
      n.typ = makeTypeFromExpr(c, copyTree(n))
      result = n
  of tyGenericParam, tyAnything:
    n.typ = makeTypeFromExpr(c, copyTree(n))
    result = n
  else:
    discard

proc tryReadingTypeField(c: PContext, n: PNode, i: PIdent, ty: PType): PNode =
  var ty = ty.skipTypes(tyDotOpTransparent)
  case ty.kind
  of tyEnum:
    # look up if the identifier belongs to the enum:
    var f = PSym(nil)
    while ty != nil:
      f = getSymFromList(ty.n, i)
      if f != nil: break
      ty = ty.sons[0]         # enum inheritance
    if f != nil:
      result = newSymNode(f)
      result.info = n.info
      result.typ = ty
      markUsed(c, n.info, f)
      onUse(n.info, f)
  of tyObject, tyTuple:
    if ty.n != nil and ty.n.kind == nkRecList:
      let field = lookupInRecord(ty.n, i)
      if field != nil:
        n.typ = makeTypeDesc(c, field.typ)
        result = n
  of tyGenericInst:
    result = tryReadingTypeField(c, n, i, ty.lastSon)
    if result == nil:
      result = tryReadingGenericParam(c, n, i, ty)
  else:
    result = tryReadingGenericParam(c, n, i, ty)

proc builtinFieldAccess(c: PContext; n: PNode; flags: var TExprFlags): PNode =
  ## returns nil if it's not a built-in field access
  checkSonsLen(n, 2, c.config)
  # tests/bind/tbindoverload.nim wants an early exit here, but seems to
  # work without now. template/tsymchoicefield doesn't like an early exit
  # here at all!
  #if isSymChoice(n[1]): return
  when defined(nimsuggest):
    if c.config.cmd == cmdIdeTools:
      suggestExpr(c, n)
      if exactEquals(c.config.m.trackPos, n[1].info): suggestExprNoCheck(c, n)

  var s = qualifiedLookUp(c, n, {checkAmbiguity, checkUndeclared, checkModule})
  if s != nil:
    if s.kind in OverloadableSyms:
      result = symChoice(c, n, s, scClosed)
      if result.kind == nkSym: result = semSym(c, n, s, flags)
    else:
      markUsed(c, n[1].info, s)
      result = semSym(c, n, s, flags)
    onUse(n[1].info, s)
    return

  n[0] = semExprWithType(c, n[0], flags+{efDetermineType, efWantIterable})
  #restoreOldStyleType(n[0])
  var i = considerQuotedIdent(c, n[1], n)
  var ty = n[0].typ
  var f: PSym = nil
  result = nil

  if ty.kind == tyTypeDesc:
    if ty.base.kind == tyNone:
      # This is a still unresolved typedesc parameter.
      # If this is a regular proc, then all bets are off and we must return
      # tyFromExpr, but when this happen in a macro this is not a built-in
      # field access and we leave the compiler to compile a normal call:
      if getCurrOwner(c).kind != skMacro:
        n.typ = makeTypeFromExpr(c, n.copyTree)
        flags.incl efCannotBeDotCall
        return n
      else:
        return nil
    else:
      flags.incl efCannotBeDotCall
      return tryReadingTypeField(c, n, i, ty.base)
  elif isTypeExpr(n.sons[0]):
    flags.incl efCannotBeDotCall
    return tryReadingTypeField(c, n, i, ty)
  elif ty.kind == tyError:
    # a type error doesn't have any builtin fields
    return nil

  if ty.kind in tyUserTypeClasses and ty.isResolvedUserTypeClass:
    ty = ty.lastSon
  ty = skipTypes(ty, {tyGenericInst, tyVar, tyLent, tyPtr, tyRef, tyOwned, tyAlias, tySink, tyStatic})
  while tfBorrowDot in ty.flags: ty = ty.skipTypes({tyDistinct, tyGenericInst, tyAlias})
  var check: PNode = nil
  if ty.kind == tyObject:
    while true:
      check = nil
      f = lookupInRecordAndBuildCheck(c, n, ty.n, i, check)
      if f != nil: break
      if ty[0] == nil: break
      ty = skipTypes(ty[0], skipPtrs)
    if f != nil:
      let visibilityCheckNeeded =
        if n[1].kind == nkSym and n[1].sym == f:
          false # field lookup was done already, likely by hygienic template or bindSym
        else: true
      if not visibilityCheckNeeded or fieldVisible(c, f):
        # is the access to a public field or in the same module or in a friend?
        markUsed(c, n[1].info, f)
        onUse(n[1].info, f)
        let info = n[1].info
        n[0] = makeDeref(n[0])
        n[1] = newSymNode(f) # we now have the correct field
        n[1].info = info # preserve the original info
        n.typ = f.typ
        if check == nil:
          result = n
        else:
          check[0] = n
          check.typ = n.typ
          result = check
  elif ty.kind == tyTuple and ty.n != nil:
    f = getSymFromList(ty.n, i)
    if f != nil:
      markUsed(c, n[1].info, f)
      onUse(n[1].info, f)
      n[0] = makeDeref(n[0])
      n[1] = newSymNode(f)
      n.typ = f.typ
      result = n

  # we didn't find any field, let's look for a generic param
  if result == nil:
    let t = n[0].typ.skipTypes(tyDotOpTransparent)
    result = tryReadingGenericParam(c, n, i, t)
    flags.incl efCannotBeDotCall

proc dotTransformation(c: PContext, n: PNode): PNode =
  if isSymChoice(n[1]):
    result = newNodeI(nkDotCall, n.info)
    result.add n[1]
    result.add copyTree(n[0])
  else:
    var i = considerQuotedIdent(c, n[1], n)
    result = newNodeI(nkDotCall, n.info)
    result.flags.incl nfDotField
    result.add newIdentNode(i, n[1].info)
    result.add copyTree(n[0])

proc semFieldAccess(c: PContext, n: PNode, flags: TExprFlags): PNode =
  # this is difficult, because the '.' is used in many different contexts
  # in Nim. We first allow types in the semantic checking.
  var f = flags - {efIsDotCall}
  result = builtinFieldAccess(c, n, f)
  if result == nil or ((result.typ == nil or result.typ.skipTypes(abstractInst).kind != tyProc) and
      efIsDotCall in flags and callOperator notin c.features and
      efCannotBeDotCall notin f):
    result = dotTransformation(c, n)

proc buildOverloadedSubscripts(n: PNode, ident: PIdent): PNode =
  result = newNodeI(nkCall, n.info)
  result.add(newIdentNode(ident, n.info))
  for s in n: result.add s

proc semDeref(c: PContext, n: PNode): PNode =
  checkSonsLen(n, 1, c.config)
  n[0] = semExprWithType(c, n[0])
  let a = getConstExpr(c.module, n[0], c.idgen, c.graph)
  if a != nil:
    if a.kind == nkNilLit:
      localError(c.config, n.info, "nil dereference is not allowed")
    n[0] = a
  result = n
  var t = skipTypes(n[0].typ, {tyGenericInst, tyVar, tyLent, tyAlias, tySink, tyOwned})
  case t.kind
  of tyRef, tyPtr: n.typ = t.lastSon
  else: result = nil
  #GlobalError(n[0].info, errCircumNeedsPointer)

proc maybeInstantiateGeneric(c: PContext, n: PNode, s: PSym): PNode =
  ## Instantiates generic if not lacking implicit generics,
  ## otherwise returns n.
  let
    neededGenParams = s.ast[genericParamsPos].len
    heldGenParams = n.len - 1
  var implicitParams = 0
  for x in s.ast[genericParamsPos]:
    if tfImplicitTypeParam in x.typ.flags:
      inc implicitParams
  if heldGenParams != neededGenParams and implicitParams + heldGenParams == neededGenParams:
    # This is an implicit + explicit generic procedure without all args passed,
    # kicking back the sem'd symbol fixes #17212
    # Uncertain the hackiness of this solution.
    result = n
  else:
    result = explicitGenericInstantiation(c, n, s)
    if result == n:
      n[0] = copyTree(result[0])
    else:
      n[0] = result

proc semSubscript(c: PContext, n: PNode, flags: TExprFlags): PNode =
  ## returns nil if not a built-in subscript operator; also called for the
  ## checking of assignments
  if n.len == 1:
    let x = semDeref(c, n)
    if x == nil: return nil
    result = newNodeIT(nkDerefExpr, x.info, x.typ)
    result.add(x[0])
    return
  checkMinSonsLen(n, 2, c.config)
  # signal that generic parameters may be applied after
  n[0] = semExprWithType(c, n[0], {efNoEvaluateGeneric})
  var arr = skipTypes(n[0].typ, {tyGenericInst, tyUserTypeClassInst, tyOwned,
                                      tyVar, tyLent, tyPtr, tyRef, tyAlias, tySink})
  if arr.kind == tyStatic:
    if arr.base.kind == tyNone:
      result = n
      result.typ = semStaticType(c, n[1], nil)
      return
    elif arr.n != nil:
      return semSubscript(c, arr.n, flags)
    else:
      arr = arr.base

  case arr.kind
  of tyArray, tyOpenArray, tyVarargs, tySequence, tyString, tyCstring,
    tyUncheckedArray:
    if n.len != 2: return nil
    n[0] = makeDeref(n[0])
    for i in 1..<n.len:
      n[i] = semExprWithType(c, n[i],
                                  flags*{efInTypeof, efDetermineType})
    # Arrays index type is dictated by the range's type
    if arr.kind == tyArray:
      var indexType = arr[0]
      var arg = indexTypesMatch(c, indexType, n[1].typ, n[1])
      if arg != nil:
        n[1] = arg
        result = n
        result.typ = elemType(arr)
    # Other types have a bit more of leeway
    elif n[1].typ.skipTypes(abstractRange-{tyDistinct}).kind in
        {tyInt..tyInt64, tyUInt..tyUInt64}:
      result = n
      result.typ = elemType(arr)
  of tyTypeDesc:
    # The result so far is a tyTypeDesc bound
    # a tyGenericBody. The line below will substitute
    # it with the instantiated type.
    result = n
    result.typ = makeTypeDesc(c, semTypeNode(c, n, nil))
    #result = symNodeFromType(c, semTypeNode(c, n, nil), n.info)
  of tyTuple:
    if n.len != 2: return nil
    n[0] = makeDeref(n[0])
    # [] operator for tuples requires constant expression:
    n[1] = semConstExpr(c, n[1])
    if skipTypes(n[1].typ, {tyGenericInst, tyRange, tyOrdinal, tyAlias, tySink}).kind in
        {tyInt..tyInt64}:
      let idx = getOrdValue(n[1])
      if idx >= 0 and idx < arr.len: n.typ = arr[toInt(idx)]
      else:
        localError(c.config, n.info,
          "invalid index $1 in subscript for tuple of length $2" %
            [$idx, $arr.len])
      result = n
    else:
      result = nil
  else:
    let s = if n[0].kind == nkSym: n[0].sym
            elif n[0].kind in nkSymChoices: n[0][0].sym
            else: nil
    if s != nil:
      case s.kind
      of skProc, skFunc, skMethod, skConverter, skIterator:
        # type parameters: partial generic specialization
        n[0] = semSymGenericInstantiation(c, n[0], s)
        result = maybeInstantiateGeneric(c, n, s)
      of skMacro, skTemplate:
        if efInCall in flags:
          # We are processing macroOrTmpl[] in macroOrTmpl[](...) call.
          # Return as is, so it can be transformed into complete macro or
          # template call in semIndirectOp caller.
          result = n
        else:
          # We are processing macroOrTmpl[] not in call. Transform it to the
          # macro or template call with generic arguments here.
          n.transitionSonsKind(nkCall)
          case s.kind
          of skMacro: result = semMacroExpr(c, n, n, s, flags)
          of skTemplate: result = semTemplateExpr(c, n, s, flags)
          else: discard
      of skType:
        result = symNodeFromType(c, semTypeNode(c, n, nil), n.info)
      else:
        discard

proc semArrayAccess(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  result = semSubscript(c, n, flags)
  if result == nil:
    # overloaded [] operator:
    result = semExpr(c, buildOverloadedSubscripts(n, getIdent(c.cache, "[]")), flags, expectedType)

proc propertyWriteAccess(c: PContext, n, nOrig, a: PNode): PNode =
  var id = considerQuotedIdent(c, a[1], a)
  var setterId = newIdentNode(getIdent(c.cache, id.s & '='), n.info)
  # a[0] is already checked for semantics, that does ``builtinFieldAccess``
  # this is ugly. XXX Semantic checking should use the ``nfSem`` flag for
  # nodes?
  let aOrig = nOrig[0]
  result = newTreeI(nkCall, n.info, setterId, a[0], semExprWithType(c, n[1]))
  result.flags.incl nfDotSetter
  let orig = newTreeI(nkCall, n.info, setterId, aOrig[0], nOrig[1])
  result = semOverloadedCallAnalyseEffects(c, result, orig, {})

  if result != nil:
    result = afterCallActions(c, result, nOrig, {})
    #fixAbstractType(c, result)
    #analyseIfAddressTakenInCall(c, result)

proc takeImplicitAddr(c: PContext, n: PNode; isLent: bool): PNode =
  # See RFC #7373, calls returning 'var T' are assumed to
  # return a view into the first argument (if there is one):
  let root = exprRoot(n)
  if root != nil and root.owner == c.p.owner:
    template url: string = "var_t_return.html".createDocLink
    if root.kind in {skLet, skVar, skTemp} and sfGlobal notin root.flags:
      localError(c.config, n.info, "'$1' escapes its stack frame; context: '$2'; see $3" % [
        root.name.s, renderTree(n, {renderNoComments}), url])
    elif root.kind == skParam and root.position != 0:
      localError(c.config, n.info, "'$1' is not the first parameter; context: '$2'; see $3" % [
        root.name.s, renderTree(n, {renderNoComments}), url])
  case n.kind
  of nkHiddenAddr, nkAddr: return n
  of nkDerefExpr: return n[0]
  of nkBracketExpr:
    if n.len == 1: return n[0]
  of nkHiddenDeref:
    # issue #13848
    # `proc fun(a: var int): var int = a`
    discard
  else: discard
  let valid = isAssignable(c, n)
  if valid != arLValue:
    if valid in {arAddressableConst, arLentValue} and isLent:
      discard "ok"
    elif valid == arLocalLValue:
      localError(c.config, n.info, errXStackEscape % renderTree(n, {renderNoComments}))
    else:
      localError(c.config, n.info, errExprHasNoAddress)
  result = newNodeIT(nkHiddenAddr, n.info, if n.typ.kind in {tyVar, tyLent}: n.typ else: makePtrType(c, n.typ))
  result.add(n)

proc asgnToResultVar(c: PContext, n, le, ri: PNode) {.inline.} =
  if le.kind == nkHiddenDeref:
    var x = le[0]
    if x.kind == nkSym:
      if x.sym.kind == skResult and (x.typ.kind in {tyVar, tyLent} or classifyViewType(x.typ) != noView):
        n[0] = x # 'result[]' --> 'result'
        n[1] = takeImplicitAddr(c, ri, x.typ.kind == tyLent)
        x.typ.flags.incl tfVarIsPtr
        #echo x.info, " setting it for this type ", typeToString(x.typ), " ", n.info
      elif sfGlobal in x.sym.flags:
        x.typ.flags.incl tfVarIsPtr

proc borrowCheck(c: PContext, n, le, ri: PNode) =
  const
    PathKinds0 = {nkDotExpr, nkCheckedFieldExpr,
                  nkBracketExpr, nkAddr, nkHiddenAddr,
                  nkObjDownConv, nkObjUpConv}
    PathKinds1 = {nkHiddenStdConv, nkHiddenSubConv}

  proc getRoot(n: PNode; followDeref: bool): PNode =
    result = n
    while true:
      case result.kind
      of nkDerefExpr, nkHiddenDeref:
        if followDeref: result = result[0]
        else: break
      of PathKinds0:
        result = result[0]
      of PathKinds1:
        result = result[1]
      else: break

  proc scopedLifetime(c: PContext; ri: PNode): bool {.inline.} =
    let n = getRoot(ri, followDeref = false)
    result = (ri.kind in nkCallKinds+{nkObjConstr}) or
      (n.kind == nkSym and n.sym.owner == c.p.owner and n.sym.kind != skResult)

  proc escapes(c: PContext; le: PNode): bool {.inline.} =
    # param[].foo[] = self  definitely escapes, we don't need to
    # care about pointer derefs:
    let n = getRoot(le, followDeref = true)
    result = n.kind == nkSym and n.sym.kind == skParam

  # Special typing rule: do not allow to pass 'owned T' to 'T' in 'result = x':
  const absInst = abstractInst - {tyOwned}
  if ri.typ != nil and ri.typ.skipTypes(absInst).kind == tyOwned and
      le.typ != nil and le.typ.skipTypes(absInst).kind != tyOwned and
      scopedLifetime(c, ri):
    if le.kind == nkSym and le.sym.kind == skResult:
      localError(c.config, n.info, "cannot return an owned pointer as an unowned pointer; " &
        "use 'owned(" & typeToString(le.typ) & ")' as the return type")
    elif escapes(c, le):
      localError(c.config, n.info,
        "assignment produces a dangling ref: the unowned ref lives longer than the owned ref")

template resultTypeIsInferrable(typ: PType): untyped =
  typ.isMetaType and typ.kind != tyTypeDesc

proc goodLineInfo(arg: PNode): TLineInfo =
  if arg.kind == nkStmtListExpr and arg.len > 0:
    goodLineInfo(arg[^1])
  else:
    arg.info

proc semAsgn(c: PContext, n: PNode; mode=asgnNormal): PNode =
  checkSonsLen(n, 2, c.config)
  var a = n[0]
  case a.kind
  of nkDotExpr:
    # r.f = x
    # --> `f=` (r, x)
    let nOrig = n.copyTree
    var flags = {efLValue}
    a = builtinFieldAccess(c, a, flags)
    if a == nil:
      a = propertyWriteAccess(c, n, nOrig, n[0])
      if a != nil: return a
      # we try without the '='; proc that return 'var' or macros are still
      # possible:
      a = dotTransformation(c, n[0])
      if a.kind == nkDotCall:
        a.transitionSonsKind(nkCall)
        a = semExprWithType(c, a, {efLValue})
  of nkBracketExpr:
    # a[i] = x
    # --> `[]=`(a, i, x)
    a = semSubscript(c, a, {efLValue})
    if a == nil:
      result = buildOverloadedSubscripts(n[0], getIdent(c.cache, "[]="))
      result.add(n[1])
      if mode == noOverloadedSubscript:
        bracketNotFoundError(c, result)
        return n
      else:
        result = semExprNoType(c, result)
        return result
  of nkCurlyExpr:
    # a{i} = x -->  `{}=`(a, i, x)
    result = buildOverloadedSubscripts(n[0], getIdent(c.cache, "{}="))
    result.add(n[1])
    return semExprNoType(c, result)
  of nkPar, nkTupleConstr:
    if a.len >= 2 or a.kind == nkTupleConstr:
      # unfortunately we need to rewrite ``(x, y) = foo()`` already here so
      # that overloading of the assignment operator still works. Usually we
      # prefer to do these rewritings in transf.nim:
      return semStmt(c, lowerTupleUnpackingForAsgn(c.graph, n, c.idgen, c.p.owner), {})
    else:
      a = semExprWithType(c, a, {efLValue})
  else:
    a = semExprWithType(c, a, {efLValue})
  n[0] = a
  # a = b # both are vars, means: a[] = b[]
  # a = b # b no 'var T' means: a = addr(b)
  var le = a.typ
  let assignable = isAssignable(c, a)
  let root = getRoot(a)
  let useStrictDefLet = root != nil and root.kind == skLet and
                       assignable == arAddressableConst and
                       strictDefs in c.features and isLocalSym(root)
  if le == nil:
    localError(c.config, a.info, "expression has no type")
  elif (skipTypes(le, {tyGenericInst, tyAlias, tySink}).kind notin {tyVar} and
        assignable in {arNone, arLentValue, arAddressableConst} and not useStrictDefLet
        ) or (skipTypes(le, abstractVar).kind in {tyOpenArray, tyVarargs} and views notin c.features):
    # Direct assignment to a discriminant is allowed!
    localError(c.config, a.info, errXCannotBeAssignedTo %
               renderTree(a, {renderNoComments}))
  else:
    let lhs = n[0]
    let rhs = semExprWithType(c, n[1], {efTypeAllowed}, le)
    if lhs.kind == nkSym and lhs.sym.kind == skResult:
      n.typ = c.enforceVoidContext
      if c.p.owner.kind != skMacro and resultTypeIsInferrable(lhs.sym.typ):
        var rhsTyp = rhs.typ
        if rhsTyp.kind in tyUserTypeClasses and rhsTyp.isResolvedUserTypeClass:
          rhsTyp = rhsTyp.lastSon
        if lhs.sym.typ.kind == tyAnything:
          rhsTyp = rhsTyp.skipIntLit(c.idgen)
        if cmpTypes(c, lhs.typ, rhsTyp) in {isGeneric, isEqual}:
          internalAssert c.config, c.p.resultSym != nil
          # Make sure the type is valid for the result variable
          typeAllowedCheck(c, n.info, rhsTyp, skResult)
          lhs.typ = rhsTyp
          c.p.resultSym.typ = rhsTyp
          c.p.owner.typ[0] = rhsTyp
        else:
          typeMismatch(c.config, n.info, lhs.typ, rhsTyp, rhs)
    borrowCheck(c, n, lhs, rhs)

    n[1] = fitNode(c, le, rhs, goodLineInfo(n[1]))
    when false: liftTypeBoundOps(c, lhs.typ, lhs.info)

    fixAbstractType(c, n)
    asgnToResultVar(c, n, n[0], n[1])
  result = n

proc semReturn(c: PContext, n: PNode): PNode =
  result = n
  checkSonsLen(n, 1, c.config)
  if c.p.owner.kind in {skConverter, skMethod, skProc, skFunc, skMacro} or
      (not c.p.owner.typ.isNil and isClosureIterator(c.p.owner.typ)):
    if n[0].kind != nkEmpty:
      if n[0].kind == nkAsgn and n[0][0].kind == nkSym and c.p.resultSym == n[0][0].sym:
        discard "return is already transformed"
      elif c.p.resultSym != nil:
        # transform ``return expr`` to ``result = expr; return``
        var a = newNodeI(nkAsgn, n[0].info)
        a.add newSymNode(c.p.resultSym)
        a.add n[0]
        n[0] = a
      else:
        localError(c.config, n.info, errNoReturnTypeDeclared)
        return
      result[0] = semAsgn(c, n[0])
      # optimize away ``result = result``:
      if result[0][1].kind == nkSym and result[0][1].sym == c.p.resultSym:
        result[0] = c.graph.emptyNode
  else:
    localError(c.config, n.info, "'return' not allowed here")

proc semProcBody(c: PContext, n: PNode; expectedType: PType = nil): PNode =
  when defined(nimsuggest):
    if c.graph.config.expandDone():
      return n
  openScope(c)
  result = semExpr(c, n, expectedType = expectedType)
  if c.p.resultSym != nil and not isEmptyType(result.typ):
    if result.kind == nkNilLit:
      # or ImplicitlyDiscardable(result):
      # new semantic: 'result = x' triggers the void context
      result.typ = nil
    elif result.kind == nkStmtListExpr and result.typ.kind == tyNil:
      # to keep backwards compatibility bodies like:
      #   nil
      #   # comment
      # are not expressions:
      fixNilType(c, result)
    else:
      var a = newNodeI(nkAsgn, n.info, 2)
      a[0] = newSymNode(c.p.resultSym)
      a[1] = result
      result = semAsgn(c, a)
  else:
    discardCheck(c, result, {})

  if c.p.owner.kind notin {skMacro, skTemplate} and
     c.p.resultSym != nil and c.p.resultSym.typ.isMetaType:
    if isEmptyType(result.typ):
      # we inferred a 'void' return type:
      c.p.resultSym.typ = errorType(c)
      c.p.owner.typ[0] = nil
    else:
      localError(c.config, c.p.resultSym.info, errCannotInferReturnType %
        c.p.owner.name.s)
  if isIterator(c.p.owner.typ) and c.p.owner.typ[0] != nil and
      c.p.owner.typ[0].kind == tyAnything:
    localError(c.config, c.p.owner.info, errCannotInferReturnType %
      c.p.owner.name.s)
  closeScope(c)

proc semYieldVarResult(c: PContext, n: PNode, restype: PType) =
  var t = skipTypes(restype, {tyGenericInst, tyAlias, tySink})
  case t.kind
  of tyVar, tyLent:
    t.flags.incl tfVarIsPtr # bugfix for #4048, #4910, #6892
    if n[0].kind in {nkHiddenStdConv, nkHiddenSubConv}:
      n[0] = n[0][1]
    n[0] = takeImplicitAddr(c, n[0], t.kind == tyLent)
  of tyTuple:
    for i in 0..<t.len:
      let e = skipTypes(t[i], {tyGenericInst, tyAlias, tySink})
      if e.kind in {tyVar, tyLent}:
        e.flags.incl tfVarIsPtr # bugfix for #4048, #4910, #6892
        let tupleConstr = if n[0].kind in {nkHiddenStdConv, nkHiddenSubConv}: n[0][1] else: n[0]
        if tupleConstr.kind in {nkPar, nkTupleConstr}:
          if tupleConstr[i].kind == nkExprColonExpr:
            tupleConstr[i][1] = takeImplicitAddr(c, tupleConstr[i][1], e.kind == tyLent)
          else:
            tupleConstr[i] = takeImplicitAddr(c, tupleConstr[i], e.kind == tyLent)
        else:
          localError(c.config, n[0].info, errXExpected, "tuple constructor")
      elif e.kind == tyEmpty:
        localError(c.config, n[0].info, errTypeExpected)
  else:
    when false:
      # XXX investigate what we really need here.
      if isViewType(t):
        n[0] = takeImplicitAddr(c, n[0], false)

proc semYield(c: PContext, n: PNode): PNode =
  result = n
  checkSonsLen(n, 1, c.config)
  if c.p.owner == nil or c.p.owner.kind != skIterator:
    localError(c.config, n.info, errYieldNotAllowedHere)
  elif n[0].kind != nkEmpty:
    n[0] = semExprWithType(c, n[0]) # check for type compatibility:
    var iterType = c.p.owner.typ
    let restype = iterType[0]
    if restype != nil:
      if restype.kind != tyUntyped:
        n[0] = fitNode(c, restype, n[0], n.info)
      if n[0].typ == nil: internalError(c.config, n.info, "semYield")

      if resultTypeIsInferrable(restype):
        let inferred = n[0].typ
        iterType[0] = inferred
        if c.p.resultSym != nil:
          c.p.resultSym.typ = inferred

      semYieldVarResult(c, n, restype)
    else:
      localError(c.config, n.info, errCannotReturnExpr)
  elif c.p.owner.typ[0] != nil:
    localError(c.config, n.info, errGenerated, "yield statement must yield a value")

proc considerQuotedIdentOrDot(c: PContext, n: PNode, origin: PNode = nil): PIdent =
  if n.kind == nkDotExpr:
    let a = considerQuotedIdentOrDot(c, n[0], origin).s
    let b = considerQuotedIdentOrDot(c, n[1], origin).s
    var s = newStringOfCap(a.len + b.len + 1)
    s.add(a)
    s.add('.')
    s.add(b)
    result = getIdent(c.cache, s)
  else:
    result = considerQuotedIdent(c, n, origin)

proc semDefined(c: PContext, n: PNode): PNode =
  checkSonsLen(n, 2, c.config)
  # we replace this node by a 'true' or 'false' node:
  result = newIntNode(nkIntLit, 0)
  result.intVal = ord isDefined(c.config, considerQuotedIdentOrDot(c, n[1], n).s)
  result.info = n.info
  result.typ = getSysType(c.graph, n.info, tyBool)

proc lookUpForDeclared(c: PContext, n: PNode, onlyCurrentScope: bool): PSym =
  case n.kind
  of nkIdent, nkAccQuoted:
    var amb = false
    let ident = considerQuotedIdent(c, n)
    result = if onlyCurrentScope:
               localSearchInScope(c, ident)
             else:
               searchInScopes(c, ident, amb)
  of nkDotExpr:
    result = nil
    if onlyCurrentScope: return
    checkSonsLen(n, 2, c.config)
    var m = lookUpForDeclared(c, n[0], onlyCurrentScope)
    if m != nil and m.kind == skModule:
      let ident = considerQuotedIdent(c, n[1], n)
      if m == c.module:
        result = strTableGet(c.topLevelScope.symbols, ident)
      else:
        result = someSym(c.graph, m, ident)
  of nkSym:
    result = n.sym
  of nkOpenSymChoice, nkClosedSymChoice:
    result = n[0].sym
  else:
    localError(c.config, n.info, "identifier expected, but got: " & renderTree(n))
    result = nil

proc semDeclared(c: PContext, n: PNode, onlyCurrentScope: bool): PNode =
  checkSonsLen(n, 2, c.config)
  # we replace this node by a 'true' or 'false' node:
  result = newIntNode(nkIntLit, 0)
  result.intVal = ord lookUpForDeclared(c, n[1], onlyCurrentScope) != nil
  result.info = n.info
  result.typ = getSysType(c.graph, n.info, tyBool)

proc expectMacroOrTemplateCall(c: PContext, n: PNode): PSym =
  ## The argument to the proc should be nkCall(...) or similar
  ## Returns the macro/template symbol
  if isCallExpr(n):
    var expandedSym = qualifiedLookUp(c, n[0], {checkUndeclared})
    if expandedSym == nil:
      errorUndeclaredIdentifier(c, n.info, n[0].renderTree)
      return errorSym(c, n[0])

    if expandedSym.kind notin {skMacro, skTemplate}:
      localError(c.config, n.info, "'$1' is not a macro or template" % expandedSym.name.s)
      return errorSym(c, n[0])

    result = expandedSym
  else:
    localError(c.config, n.info, "'$1' is not a macro or template" % n.renderTree)
    result = errorSym(c, n)

proc expectString(c: PContext, n: PNode): string =
  var n = semConstExpr(c, n)
  if n.kind in nkStrKinds:
    return n.strVal
  else:
    localError(c.config, n.info, errStringLiteralExpected)

proc newAnonSym(c: PContext; kind: TSymKind, info: TLineInfo): PSym =
  result = newSym(kind, c.cache.idAnon, c.idgen, getCurrOwner(c), info)

proc semExpandToAst(c: PContext, n: PNode): PNode =
  let macroCall = n[1]

  when false:
    let expandedSym = expectMacroOrTemplateCall(c, macroCall)
    if expandedSym.kind == skError: return n

    macroCall[0] = newSymNode(expandedSym, macroCall.info)
    markUsed(c, n.info, expandedSym)
    onUse(n.info, expandedSym)

  if isCallExpr(macroCall):
    for i in 1..<macroCall.len:
      #if macroCall[0].typ[i].kind != tyUntyped:
      macroCall[i] = semExprWithType(c, macroCall[i], {})
    # performing overloading resolution here produces too serious regressions:
    let headSymbol = macroCall[0]
    var cands = 0
    var cand: PSym = nil
    var o: TOverloadIter
    var symx = initOverloadIter(o, c, headSymbol)
    while symx != nil:
      if symx.kind in {skTemplate, skMacro} and symx.typ.len == macroCall.len:
        cand = symx
        inc cands
      symx = nextOverloadIter(o, c, headSymbol)
    if cands == 0:
      localError(c.config, n.info, "expected a template that takes " & $(macroCall.len-1) & " arguments")
    elif cands >= 2:
      localError(c.config, n.info, "ambiguous symbol in 'getAst' context: " & $macroCall)
    else:
      let info = macroCall[0].info
      macroCall[0] = newSymNode(cand, info)
      markUsed(c, info, cand)
      onUse(info, cand)

    # we just perform overloading resolution here:
    #n[1] = semOverloadedCall(c, macroCall, macroCall, {skTemplate, skMacro})
  else:
    localError(c.config, n.info, "getAst takes a call, but got " & n.renderTree)
  # Preserve the magic symbol in order to be handled in evals.nim
  internalAssert c.config, n[0].sym.magic == mExpandToAst
  #n.typ = getSysSym("NimNode").typ # expandedSym.getReturnType
  if n.kind == nkStmtList and n.len == 1: result = n[0]
  else: result = n
  result.typ = sysTypeFromName(c.graph, n.info, "NimNode")

proc semExpandToAst(c: PContext, n: PNode, magicSym: PSym,
                    flags: TExprFlags = {}): PNode =
  if n.len == 2:
    n[0] = newSymNode(magicSym, n.info)
    result = semExpandToAst(c, n)
  else:
    result = semDirectOp(c, n, flags)

proc processQuotations(c: PContext; n: var PNode, op: string,
                       quotes: var seq[PNode],
                       ids: var seq[PNode]) =
  template returnQuote(q) =
    quotes.add q
    n = newIdentNode(getIdent(c.cache, $quotes.len), n.info)
    ids.add n
    return

  template handlePrefixOp(prefixed) =
    if prefixed[0].kind == nkIdent:
      let examinedOp = prefixed[0].ident.s
      if examinedOp == op:
        returnQuote prefixed[1]
      elif examinedOp.startsWith(op):
        prefixed[0] = newIdentNode(getIdent(c.cache, examinedOp.substr(op.len)), prefixed.info)

  if n.kind == nkPrefix:
    checkSonsLen(n, 2, c.config)
    handlePrefixOp(n)
  elif n.kind == nkAccQuoted:
    if op == "``":
      returnQuote n[0]
    else: # [bug #7589](https://github.com/nim-lang/Nim/issues/7589)
      if n.len == 2 and n[0].ident.s == op:
        var tempNode = nkPrefix.newTree()
        tempNode.newSons(2)
        tempNode[0] = n[0]
        tempNode[1] = n[1]
        handlePrefixOp(tempNode)
  elif n.kind == nkIdent:
    if n.ident.s == "result":
      n = ids[0]

  for i in 0..<n.safeLen:
    processQuotations(c, n[i], op, quotes, ids)

proc semQuoteAst(c: PContext, n: PNode): PNode =
  if n.len != 2 and n.len != 3:
    localError(c.config, n.info, "'quote' expects 1 or 2 arguments")
    return n
  # We transform the do block into a template with a param for
  # each interpolation. We'll pass this template to getAst.
  var
    quotedBlock = n[^1]
    op = if n.len == 3: expectString(c, n[1]) else: "``"
    quotes = newSeq[PNode](2)
      # the quotes will be added to a nkCall statement
      # leave some room for the callee symbol and the result symbol
    ids = newSeq[PNode](1)
      # this will store the generated param names
      # leave some room for the result symbol

  if quotedBlock.kind != nkStmtList:
    localError(c.config, n.info, errXExpected, "block")

  # This adds a default first field to pass the result symbol
  ids[0] = newAnonSym(c, skParam, n.info).newSymNode
  processQuotations(c, quotedBlock, op, quotes, ids)

  let dummyTemplateSym = newAnonSym(c, skTemplate, n.info)
  incl(dummyTemplateSym.flags, sfTemplateRedefinition)
  var dummyTemplate = newProcNode(
    nkTemplateDef, quotedBlock.info, body = quotedBlock,
    params = c.graph.emptyNode,
    name = dummyTemplateSym.newSymNode,
              pattern = c.graph.emptyNode, genericParams = c.graph.emptyNode,
              pragmas = c.graph.emptyNode, exceptions = c.graph.emptyNode)

  if ids.len > 0:
    dummyTemplate[paramsPos] = newNodeI(nkFormalParams, n.info)
    dummyTemplate[paramsPos].add getSysSym(c.graph, n.info, "untyped").newSymNode # return type
    dummyTemplate[paramsPos].add newTreeI(nkIdentDefs, n.info, ids[0], getSysSym(c.graph, n.info, "typed").newSymNode, c.graph.emptyNode)
    for i in 1..<ids.len:
      let exp = semExprWithType(c, quotes[i+1], {})
      let typ = exp.typ
      if tfTriggersCompileTime notin typ.flags and exp.kind == nkSym and exp.sym.kind notin routineKinds + {skType}:
        dummyTemplate[paramsPos].add newTreeI(nkIdentDefs, n.info, ids[i], newNodeIT(nkType, n.info, typ), c.graph.emptyNode)
      else:
        dummyTemplate[paramsPos].add newTreeI(nkIdentDefs, n.info, ids[i], getSysSym(c.graph, n.info, "typed").newSymNode, c.graph.emptyNode)
  var tmpl = semTemplateDef(c, dummyTemplate)
  quotes[0] = tmpl[namePos]
  # This adds a call to newIdentNode("result") as the first argument to the template call
  let identNodeSym = getCompilerProc(c.graph, "newIdentNode")
  # so that new Nim compilers can compile old macros.nim versions, we check for 'nil'
  # here and provide the old fallback solution:
  let identNode = if identNodeSym == nil:
                    newIdentNode(getIdent(c.cache, "newIdentNode"), n.info)
                  else:
                    identNodeSym.newSymNode
  quotes[1] = newTreeI(nkCall, n.info, identNode, newStrNode(nkStrLit, "result"))
  result = newTreeI(nkCall, n.info,
     createMagic(c.graph, c.idgen, "getAst", mExpandToAst).newSymNode,
     newTreeI(nkCall, n.info, quotes))
  result = semExpandToAst(c, result)

proc tryExpr(c: PContext, n: PNode, flags: TExprFlags = {}): PNode =
  # watch out, hacks ahead:
  when defined(nimsuggest):
    # Remove the error hook so nimsuggest doesn't report errors there
    let tempHook = c.graph.config.structuredErrorHook
    c.graph.config.structuredErrorHook = nil
  let oldErrorCount = c.config.errorCounter
  let oldErrorMax = c.config.errorMax
  let oldCompilesId = c.compilesContextId
  # if this is a nested 'when compiles', do not increase the ID so that
  # generic instantiations can still be cached for this level.
  if c.compilesContextId == 0:
    inc c.compilesContextIdGenerator
    c.compilesContextId = c.compilesContextIdGenerator
  c.config.errorMax = high(int) # `setErrorMaxHighMaybe` not appropriate here

  # open a scope for temporary symbol inclusions:
  let oldScope = c.currentScope
  openScope(c)
  let oldOwnerLen = c.graph.owners.len
  let oldGenerics = c.generics
  let oldErrorOutputs = c.config.m.errorOutputs
  if efExplain notin flags: c.config.m.errorOutputs = {}
  let oldContextLen = msgs.getInfoContextLen(c.config)

  let oldInGenericContext = c.inGenericContext
  let oldInUnrolledContext = c.inUnrolledContext
  let oldInGenericInst = c.inGenericInst
  let oldInStaticContext = c.inStaticContext
  let oldProcCon = c.p
  c.generics = @[]
  var err: string
  try:
    result = semExpr(c, n, flags)
    if result != nil and efNoSem2Check notin flags:
      trackStmt(c, c.module, result, isTopLevel = false)
    if c.config.errorCounter != oldErrorCount:
      result = nil
  except ERecoverableError:
    discard
  # undo symbol table changes (as far as it's possible):
  c.compilesContextId = oldCompilesId
  c.generics = oldGenerics
  c.inGenericContext = oldInGenericContext
  c.inUnrolledContext = oldInUnrolledContext
  c.inGenericInst = oldInGenericInst
  c.inStaticContext = oldInStaticContext
  c.p = oldProcCon
  msgs.setInfoContextLen(c.config, oldContextLen)
  setLen(c.graph.owners, oldOwnerLen)
  c.currentScope = oldScope
  c.config.m.errorOutputs = oldErrorOutputs
  c.config.errorCounter = oldErrorCount
  c.config.errorMax = oldErrorMax
  when defined(nimsuggest):
    # Restore the error hook
    c.graph.config.structuredErrorHook = tempHook

proc semCompiles(c: PContext, n: PNode, flags: TExprFlags): PNode =
  # we replace this node by a 'true' or 'false' node:
  if n.len != 2: return semDirectOp(c, n, flags)

  result = newIntNode(nkIntLit, ord(tryExpr(c, n[1], flags) != nil))
  result.info = n.info
  result.typ = getSysType(c.graph, n.info, tyBool)

proc semShallowCopy(c: PContext, n: PNode, flags: TExprFlags): PNode =
  if n.len == 3:
    # XXX ugh this is really a hack: shallowCopy() can be overloaded only
    # with procs that take not 2 parameters:
    result = newNodeI(nkFastAsgn, n.info)
    result.add(n[1])
    result.add(n[2])
    result = semAsgn(c, result)
  else:
    result = semDirectOp(c, n, flags)

proc createFlowVar(c: PContext; t: PType; info: TLineInfo): PType =
  result = newType(tyGenericInvocation, nextTypeId c.idgen, c.module)
  addSonSkipIntLit(result, magicsys.getCompilerProc(c.graph, "FlowVar").typ, c.idgen)
  addSonSkipIntLit(result, t, c.idgen)
  result = instGenericContainer(c, info, result, allowMetaTypes = false)

proc instantiateCreateFlowVarCall(c: PContext; t: PType;
                                  info: TLineInfo): PSym =
  let sym = magicsys.getCompilerProc(c.graph, "nimCreateFlowVar")
  if sym == nil:
    localError(c.config, info, "system needs: nimCreateFlowVar")
  var bindings: TIdTable
  initIdTable(bindings)
  bindings.idTablePut(sym.ast[genericParamsPos][0].typ, t)
  result = c.semGenerateInstance(c, sym, bindings, info)
  # since it's an instantiation, we unmark it as a compilerproc. Otherwise
  # codegen would fail:
  if sfCompilerProc in result.flags:
    result.flags.excl {sfCompilerProc, sfExportc, sfImportc}
    result.loc.r = ""

proc setMs(n: PNode, s: PSym): PNode =
  result = n
  n[0] = newSymNode(s)
  n[0].info = n.info

proc semSizeof(c: PContext, n: PNode): PNode =
  if n.len != 2:
    localError(c.config, n.info, errXExpectsTypeOrValue % "sizeof")
  else:
    n[1] = semExprWithType(c, n[1], {efDetermineType})
    #restoreOldStyleType(n[1])
  n.typ = getSysType(c.graph, n.info, tyInt)
  result = foldSizeOf(c.config, n, n)

proc semMagic(c: PContext, n: PNode, s: PSym, flags: TExprFlags; expectedType: PType = nil): PNode =
  # this is a hotspot in the compiler!
  result = n
  case s.magic # magics that need special treatment
  of mAddr:
    markUsed(c, n.info, s)
    checkSonsLen(n, 2, c.config)
    result[0] = newSymNode(s, n[0].info)
    result[1] = semAddrArg(c, n[1])
    result.typ = makePtrType(c, result[1].typ)
  of mTypeOf:
    markUsed(c, n.info, s)
    result = semTypeOf(c, n)
  of mDefined:
    markUsed(c, n.info, s)
    result = semDefined(c, setMs(n, s))
  of mDeclared:
    markUsed(c, n.info, s)
    result = semDeclared(c, setMs(n, s), false)
  of mDeclaredInScope:
    markUsed(c, n.info, s)
    result = semDeclared(c, setMs(n, s), true)
  of mCompiles:
    markUsed(c, n.info, s)
    result = semCompiles(c, setMs(n, s), flags)
  of mIs:
    markUsed(c, n.info, s)
    result = semIs(c, setMs(n, s), flags)
  of mShallowCopy:
    markUsed(c, n.info, s)
    result = semShallowCopy(c, n, flags)
  of mExpandToAst:
    markUsed(c, n.info, s)
    result = semExpandToAst(c, n, s, flags)
  of mQuoteAst:
    markUsed(c, n.info, s)
    result = semQuoteAst(c, n)
  of mAstToStr:
    markUsed(c, n.info, s)
    checkSonsLen(n, 2, c.config)
    result = newStrNodeT(renderTree(n[1], {renderNoComments}), n, c.graph)
    result.typ = getSysType(c.graph, n.info, tyString)
  of mParallel:
    markUsed(c, n.info, s)
    if parallel notin c.features:
      localError(c.config, n.info, "use the {.experimental.} pragma to enable 'parallel'")
    result = setMs(n, s)
    var x = n.lastSon
    if x.kind == nkDo: x = x[bodyPos]
    inc c.inParallelStmt
    result[1] = semStmt(c, x, {})
    dec c.inParallelStmt
  of mSpawn:
    markUsed(c, n.info, s)
    when defined(leanCompiler):
      result = localErrorNode(c, n, "compiler was built without 'spawn' support")
    else:
      result = setMs(n, s)
      for i in 1..<n.len:
        result[i] = semExpr(c, n[i])

      if n.len > 1 and n[1].kind notin nkCallKinds:
        return localErrorNode(c, n, n[1].info, "'spawn' takes a call expression; got: " & $n[1])

      let typ = result[^1].typ
      if not typ.isEmptyType:
        if spawnResult(typ, c.inParallelStmt > 0) == srFlowVar:
          result.typ = createFlowVar(c, typ, n.info)
        else:
          result.typ = typ
        result.add instantiateCreateFlowVarCall(c, typ, n.info).newSymNode
      else:
        result.add c.graph.emptyNode
  of mProcCall:
    markUsed(c, n.info, s)
    result = setMs(n, s)
    result[1] = semExpr(c, n[1])
    result.typ = n[1].typ
  of mPlugin:
    markUsed(c, n.info, s)
    # semDirectOp with conditional 'afterCallActions':
    let nOrig = n.copyTree
    #semLazyOpAux(c, n)
    result = semOverloadedCallAnalyseEffects(c, n, nOrig, flags)
    if result == nil:
      result = errorNode(c, n)
    else:
      let callee = result[0].sym
      if callee.magic == mNone:
        semFinishOperands(c, result)
      activate(c, result)
      fixAbstractType(c, result)
      analyseIfAddressTakenInCall(c, result)
      if callee.magic != mNone:
        result = magicsAfterOverloadResolution(c, result, flags)
  of mRunnableExamples:
    markUsed(c, n.info, s)
    if c.config.cmd in cmdDocLike and n.len >= 2 and n.lastSon.kind == nkStmtList:
      when false:
        # some of this dead code was moved to `prepareExamples`
        if sfMainModule in c.module.flags:
          let inp = toFullPath(c.config, c.module.info)
          if c.runnableExamples == nil:
            c.runnableExamples = newTree(nkStmtList,
              newTree(nkImportStmt, newStrNode(nkStrLit, expandFilename(inp))))
          let imports = newTree(nkStmtList)
          var savedLastSon = copyTree n.lastSon
          extractImports(savedLastSon, imports)
          for imp in imports: c.runnableExamples.add imp
          c.runnableExamples.add newTree(nkBlockStmt, c.graph.emptyNode, copyTree savedLastSon)
      result = setMs(n, s)
    else:
      result = c.graph.emptyNode
  of mSizeOf:
    markUsed(c, n.info, s)
    result = semSizeof(c, setMs(n, s))
  of mArrToSeq, mOpenArrayToSeq:
    if expectedType != nil and (
        let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
        expected.kind in {tySequence, tyOpenArray}):
      # seq type inference
      var arrayType = newType(tyOpenArray, nextTypeId(c.idgen), expected.owner)
      arrayType.rawAddSon(expected[0])
      if n[0].kind == nkSym and sfFromGeneric in n[0].sym.flags:
        # may have been resolved to `@`[empty] at some point,
        # reset to `@` to deal with this
        n[0] = newSymNode(n[0].sym.owner, n[0].info)
      n[1] = semExpr(c, n[1], flags, arrayType)
    result = semDirectOp(c, n, flags, expectedType)
  else:
    result = semDirectOp(c, n, flags, expectedType)

proc semWhen(c: PContext, n: PNode, semCheck = true): PNode =
  # If semCheck is set to false, ``when`` will return the verbatim AST of
  # the correct branch. Otherwise the AST will be passed through semStmt.
  result = nil

  template setResult(e: untyped) =
    if semCheck: result = semExpr(c, e) # do not open a new scope!
    else: result = e

  # Check if the node is "when nimvm"
  # when nimvm:
  #   ...
  # else:
  #   ...
  var whenNimvm = false
  var typ = commonTypeBegin
  if n.len in 1..2 and n[0].kind == nkElifBranch and (
      n.len == 1 or n[1].kind == nkElse):
    let exprNode = n[0][0]
    if exprNode.kind == nkIdent:
      whenNimvm = lookUp(c, exprNode).magic == mNimvm
    elif exprNode.kind == nkSym:
      whenNimvm = exprNode.sym.magic == mNimvm
    if whenNimvm: n.flags.incl nfLL

  for i in 0..<n.len:
    var it = n[i]
    case it.kind
    of nkElifBranch, nkElifExpr:
      checkSonsLen(it, 2, c.config)
      if whenNimvm:
        if semCheck:
          it[1] = semExpr(c, it[1])
          typ = commonType(c, typ, it[1].typ)
        result = n # when nimvm is not elimited until codegen
      else:
        let e = forceBool(c, semConstExpr(c, it[0]))
        if e.kind != nkIntLit:
          # can happen for cascading errors, assume false
          # InternalError(n.info, "semWhen")
          discard
        elif e.intVal != 0 and result == nil:
          setResult(it[1])
          return # we're not in nimvm and we already have a result
    of nkElse, nkElseExpr:
      checkSonsLen(it, 1, c.config)
      if result == nil or whenNimvm:
        if semCheck:
          it[0] = semExpr(c, it[0])
          typ = commonType(c, typ, it[0].typ)
        if result == nil:
          result = it[0]
    else: illFormedAst(n, c.config)
  if result == nil:
    result = newNodeI(nkEmpty, n.info)
  if whenNimvm:
    result.typ = typ
    if n.len == 1:
      result.add(newTree(nkElse, newNode(nkStmtList)))

proc semSetConstr(c: PContext, n: PNode, expectedType: PType = nil): PNode =
  result = newNodeI(nkCurly, n.info)
  result.typ = newTypeS(tySet, c)
  result.typ.flags.incl tfIsConstructor
  var expectedElementType: PType = nil
  if expectedType != nil and (
      let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
      expected.kind == tySet):
    expectedElementType = expected[0]
  if n.len == 0:
    rawAddSon(result.typ,
      if expectedElementType != nil and
          typeAllowed(expectedElementType, skLet, c) == nil:
        expectedElementType
      else:
        newTypeS(tyEmpty, c))
  else:
    # only semantic checking for all elements, later type checking:
    var typ: PType = nil
    for i in 0..<n.len:
      let doSetType = typ == nil
      if isRange(n[i]):
        checkSonsLen(n[i], 3, c.config)
        n[i][1] = semExprWithType(c, n[i][1], {efTypeAllowed}, expectedElementType)
        n[i][2] = semExprWithType(c, n[i][2], {efTypeAllowed}, expectedElementType)
        if doSetType:
          typ = skipTypes(n[i][1].typ,
                          {tyGenericInst, tyVar, tyLent, tyOrdinal, tyAlias, tySink})
        n[i].typ = n[i][2].typ # range node needs type too
      elif n[i].kind == nkRange:
        # already semchecked
        if doSetType:
          typ = skipTypes(n[i][0].typ,
                          {tyGenericInst, tyVar, tyLent, tyOrdinal, tyAlias, tySink})
      else:
        n[i] = semExprWithType(c, n[i], {efTypeAllowed}, expectedElementType)
        if doSetType:
          typ = skipTypes(n[i].typ, {tyGenericInst, tyVar, tyLent, tyOrdinal, tyAlias, tySink})
      if doSetType:
        if not isOrdinalType(typ, allowEnumWithHoles=true):
          localError(c.config, n.info, errOrdinalTypeExpected % typeToString(typ, preferDesc))
          typ = makeRangeType(c, 0, MaxSetElements-1, n.info)
        elif isIntLit(typ):
          # set of int literal, use a default range smaller than the max range
          typ = makeRangeType(c, 0, DefaultSetElements-1, n.info) 
        elif lengthOrd(c.config, typ) > MaxSetElements:
          message(c.config, n.info, warnAboveMaxSizeSet, "type '" &
            typeToString(typ, preferDesc) & "' is too big to be a `set` element, " &
            "assuming a range of 0.." & $(MaxSetElements - 1) &
            ", explicitly write this range to get rid of warning")
          typ = makeRangeType(c, 0, MaxSetElements-1, n.info)
        if expectedElementType == nil:
          expectedElementType = typ
    addSonSkipIntLit(result.typ, typ, c.idgen)
    for i in 0..<n.len:
      var m: PNode
      let info = n[i].info
      if isRange(n[i]):
        m = newNodeI(nkRange, info)
        m.add fitNode(c, typ, n[i][1], info)
        m.add fitNode(c, typ, n[i][2], info)
      elif n[i].kind == nkRange: m = n[i] # already semchecked
      else:
        m = fitNode(c, typ, n[i], info)
      result.add m

proc semTableConstr(c: PContext, n: PNode; expectedType: PType = nil): PNode =
  # we simply transform ``{key: value, key2, key3: value}`` to
  # ``[(key, value), (key2, value2), (key3, value2)]``
  result = newNodeI(nkBracket, n.info)
  var lastKey = 0
  for i in 0..<n.len:
    var x = n[i]
    if x.kind == nkExprColonExpr and x.len == 2:
      for j in lastKey..<i:
        var pair = newNodeI(nkTupleConstr, x.info)
        pair.add(n[j])
        pair.add(x[1])
        result.add(pair)

      var pair = newNodeI(nkTupleConstr, x.info)
      pair.add(x[0])
      pair.add(x[1])
      result.add(pair)

      lastKey = i+1

  if lastKey != n.len: illFormedAst(n, c.config)
  result = semExpr(c, result, expectedType = expectedType)

type
  TParKind = enum
    paNone, paSingle, paTupleFields, paTuplePositions

proc checkPar(c: PContext; n: PNode): TParKind =
  if n.len == 0:
    result = paTuplePositions # ()
  elif n.len == 1:
    if n[0].kind == nkExprColonExpr: result = paTupleFields
    elif n.kind == nkTupleConstr: result = paTuplePositions
    else: result = paSingle         # (expr)
  else:
    if n[0].kind == nkExprColonExpr: result = paTupleFields
    else: result = paTuplePositions
    for i in 0..<n.len:
      if result == paTupleFields:
        if (n[i].kind != nkExprColonExpr) or
            n[i][0].kind notin {nkSym, nkIdent, nkAccQuoted}:
          localError(c.config, n[i].info, errNamedExprExpected)
          return paNone
      else:
        if n[i].kind == nkExprColonExpr:
          localError(c.config, n[i].info, errNamedExprNotAllowed)
          return paNone

proc semTupleFieldsConstr(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  result = newNodeI(nkTupleConstr, n.info)
  var expected: PType = nil
  if expectedType != nil:
    expected = expectedType.skipTypes(abstractRange-{tyDistinct})
    if not (expected.kind == tyTuple and expected.len == n.len):
      expected = nil
  var typ = newTypeS(tyTuple, c)
  typ.n = newNodeI(nkRecList, n.info) # nkIdentDefs
  var ids = initIntSet()
  for i in 0..<n.len:
    if n[i].kind != nkExprColonExpr:
      illFormedAst(n[i], c.config)
    let id = considerQuotedIdent(c, n[i][0])
    if containsOrIncl(ids, id.id):
      localError(c.config, n[i].info, errFieldInitTwice % id.s)
    # can check if field name matches expected type here
    let expectedElemType = if expected != nil: expected[i] else: nil
    n[i][1] = semExprWithType(c, n[i][1], {}, expectedElemType)

    if n[i][1].typ.kind == tyTypeDesc:
      localError(c.config, n[i][1].info, "typedesc not allowed as tuple field.")
      n[i][1].typ = errorType(c)

    var f = newSymS(skField, n[i][0], c)
    f.typ = skipIntLit(n[i][1].typ, c.idgen)
    f.position = i
    rawAddSon(typ, f.typ)
    typ.n.add newSymNode(f)
    n[i][0] = newSymNode(f)
    result.add n[i]
  result.typ = typ

proc semTuplePositionsConstr(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  result = n                  # we don't modify n, but compute the type:
  result.transitionSonsKind(nkTupleConstr)
  var expected: PType = nil
  if expectedType != nil:
    expected = expectedType.skipTypes(abstractRange-{tyDistinct})
    if not (expected.kind == tyTuple and expected.len == n.len):
      expected = nil
  var typ = newTypeS(tyTuple, c)  # leave typ.n nil!
  for i in 0..<n.len:
    let expectedElemType = if expected != nil: expected[i] else: nil
    n[i] = semExprWithType(c, n[i], {}, expectedElemType)
    addSonSkipIntLit(typ, n[i].typ, c.idgen)
  result.typ = typ

include semobjconstr

proc semBlock(c: PContext, n: PNode; flags: TExprFlags; expectedType: PType = nil): PNode =
  result = n
  inc(c.p.nestedBlockCounter)
  let oldBreakInLoop = c.p.breakInLoop
  c.p.breakInLoop = false
  checkSonsLen(n, 2, c.config)
  openScope(c) # BUGFIX: label is in the scope of block!
  if n[0].kind != nkEmpty:
    var labl = newSymG(skLabel, n[0], c)
    if sfGenSym notin labl.flags:
      addDecl(c, labl)
    elif labl.owner == nil:
      labl.owner = c.p.owner
    n[0] = newSymNode(labl, n[0].info)
    suggestSym(c.graph, n[0].info, labl, c.graph.usageSym)
    styleCheckDef(c, labl)
    onDef(n[0].info, labl)
  n[1] = semExpr(c, n[1], flags, expectedType)
  n.typ = n[1].typ
  if isEmptyType(n.typ): n.transitionSonsKind(nkBlockStmt)
  else: n.transitionSonsKind(nkBlockExpr)
  closeScope(c)
  c.p.breakInLoop = oldBreakInLoop
  dec(c.p.nestedBlockCounter)

proc semExportExcept(c: PContext, n: PNode): PNode =
  let moduleName = semExpr(c, n[0])
  if moduleName.kind != nkSym or moduleName.sym.kind != skModule:
    localError(c.config, n.info, "The export/except syntax expects a module name")
    return n
  let exceptSet = readExceptSet(c, n)
  let exported = moduleName.sym
  result = newNodeI(nkExportStmt, n.info)
  reexportSym(c, exported)
  for s in allSyms(c.graph, exported):
    if s.kind in ExportableSymKinds+{skModule} and
       s.name.id notin exceptSet and sfError notin s.flags:
      reexportSym(c, s)
      result.add newSymNode(s, n.info)
  markUsed(c, n.info, exported)

proc semExport(c: PContext, n: PNode): PNode =
  proc specialSyms(c: PContext; s: PSym) {.inline.} =
    if s.kind == skConverter: addConverter(c, LazySym(sym: s))
    elif s.kind == skType and s.typ != nil and s.typ.kind == tyEnum and sfPure in s.flags:
      addPureEnum(c, LazySym(sym: s))

  result = newNodeI(nkExportStmt, n.info)
  for i in 0..<n.len:
    let a = n[i]
    var o: TOverloadIter
    var s = initOverloadIter(o, c, a)
    if s == nil:
      localError(c.config, a.info, errGenerated, "cannot export: " & renderTree(a))
    elif s.kind == skModule:
      # forward everything from that module:
      reexportSym(c, s)
      for it in allSyms(c.graph, s):
        if it.kind in ExportableSymKinds+{skModule}:
          reexportSym(c, it)
          result.add newSymNode(it, a.info)
          specialSyms(c, it)
      markUsed(c, n.info, s)
    else:
      while s != nil:
        if s.kind == skEnumField:
          localError(c.config, a.info, errGenerated, "cannot export: " & renderTree(a) &
            "; enum field cannot be exported individually")
        if s.kind in ExportableSymKinds+{skModule} and sfError notin s.flags:
          result.add(newSymNode(s, a.info))
          reexportSym(c, s)
          markUsed(c, n.info, s)
          specialSyms(c, s)
          if s.kind == skType and sfPure notin s.flags:
            var etyp = s.typ
            if etyp.kind in {tyBool, tyEnum}:
              for j in 0..<etyp.n.len:
                var e = etyp.n[j].sym
                if e.kind != skEnumField:
                  internalError(c.config, s.info, "rawImportSymbol")
                reexportSym(c, e)

        s = nextOverloadIter(o, c, a)

proc semTupleConstr(c: PContext, n: PNode, flags: TExprFlags; expectedType: PType = nil): PNode =
  var tupexp = semTuplePositionsConstr(c, n, flags, expectedType)
  var isTupleType: bool
  if tupexp.len > 0: # don't interpret () as type
    isTupleType = tupexp[0].typ.kind == tyTypeDesc
    # check if either everything or nothing is tyTypeDesc
    for i in 1..<tupexp.len:
      if isTupleType != (tupexp[i].typ.kind == tyTypeDesc):
        return localErrorNode(c, n, tupexp[i].info, "Mixing types and values in tuples is not allowed.")
  if isTupleType: # expressions as ``(int, string)`` are reinterpret as type expressions
    result = n
    var typ = semTypeNode(c, n, nil).skipTypes({tyTypeDesc})
    result.typ = makeTypeDesc(c, typ)
  else:
    result = tupexp

proc shouldBeBracketExpr(n: PNode): bool =
  assert n.kind in nkCallKinds
  let a = n[0]
  if a.kind in nkCallKinds:
    let b = a[0]
    if b.kind in nkSymChoices:
      for i in 0..<b.len:
        if b[i].kind == nkSym and b[i].sym.magic == mArrGet:
          let be = newNodeI(nkBracketExpr, n.info)
          for i in 1..<a.len: be.add(a[i])
          n[0] = be
          return true

proc asBracketExpr(c: PContext; n: PNode): PNode =
  proc isGeneric(c: PContext; n: PNode): bool =
    if n.kind in {nkIdent, nkAccQuoted}:
      let s = qualifiedLookUp(c, n, {})
      result = s != nil and isGenericRoutineStrict(s)

  assert n.kind in nkCallKinds
  if n.len > 1 and isGeneric(c, n[1]):
    let b = n[0]
    if b.kind in nkSymChoices:
      for i in 0..<b.len:
        if b[i].kind == nkSym and b[i].sym.magic == mArrGet:
          result = newNodeI(nkBracketExpr, n.info)
          for i in 1..<n.len: result.add(n[i])
          return result
  return nil

proc hoistParamsUsedInDefault(c: PContext, call, letSection, defExpr: var PNode) =
  # This takes care of complicated signatures such as:
  # proc foo(a: int, b = a)
  # proc bar(a: int, b: int, c = a + b)
  #
  # The recursion may confuse you. It performs two duties:
  #
  # 1) extracting all referenced params from default expressions
  #    into a let section preceding the call
  #
  # 2) replacing the "references" within the default expression
  #    with these extracted skLet symbols.
  #
  # The first duty is carried out directly in the code here, while the second
  # duty is activated by returning a non-nil value. The caller is responsible
  # for replacing the input to the function with the returned non-nil value.
  # (which is the hoisted symbol)
  if defExpr.kind == nkSym and defExpr.sym.kind == skParam and defExpr.sym.owner == call[0].sym:
    let paramPos = defExpr.sym.position + 1

    if call[paramPos].kind != nkSym:
      let hoistedVarSym = newSym(skLet, getIdent(c.graph.cache, genPrefix), c.idgen,
                                 c.p.owner, letSection.info, c.p.owner.options)
      hoistedVarSym.typ = call[paramPos].typ

      letSection.add newTreeI(nkIdentDefs, letSection.info,
        newSymNode(hoistedVarSym),
        newNodeI(nkEmpty, letSection.info),
        call[paramPos])

      call[paramPos] = newSymNode(hoistedVarSym) # Refer the original arg to its hoisted sym

    # arg we refer to is a sym, wether introduced by hoisting or not doesn't matter, we simply reuse it
    defExpr = call[paramPos]
  else:
    for i in 0..<defExpr.safeLen:
      hoistParamsUsedInDefault(c, call, letSection, defExpr[i])

proc getNilType(c: PContext): PType =
  result = c.nilTypeCache
  if result == nil:
    result = newTypeS(tyNil, c)
    result.size = c.config.target.ptrSize
    result.align = c.config.target.ptrSize.int16
    c.nilTypeCache = result

proc enumFieldSymChoice(c: PContext, n: PNode, s: PSym): PNode =
  var o: TOverloadIter
  var i = 0
  var a = initOverloadIter(o, c, n)
  while a != nil:
    if a.kind == skEnumField:
      inc(i)
      if i > 1: break
    a = nextOverloadIter(o, c, n)
  let info = getCallLineInfo(n)
  if i <= 1:
    if sfGenSym notin s.flags:
      result = newSymNode(s, info)
      markUsed(c, info, s)
      onUse(info, s)
    else:
      result = n
  else:
    result = newNodeIT(nkClosedSymChoice, info, newTypeS(tyNone, c))
    a = initOverloadIter(o, c, n)
    while a != nil:
      if a.kind == skEnumField:
        incl(a.flags, sfUsed)
        markOwnerModuleAsUsed(c, a)
        result.add newSymNode(a, info)
        onUse(info, a)
      a = nextOverloadIter(o, c, n)

proc semPragmaStmt(c: PContext; n: PNode) =
  if c.p.owner.kind == skModule:
    pragma(c, c.p.owner, n, stmtPragmas+stmtPragmasTopLevel, true)
  else:
    pragma(c, c.p.owner, n, stmtPragmas, true)

proc semExpr(c: PContext, n: PNode, flags: TExprFlags = {}, expectedType: PType = nil): PNode =
  when defined(nimCompilerStacktraceHints):
    setFrameMsg c.config$n.info & " " & $n.kind
  when false: # see `tdebugutils`
    if isCompilerDebug():
      echo (">", c.config$n.info, n, flags, n.kind)
    defer:
      if isCompilerDebug():
        echo ("<", c.config$n.info, n, ?.result.typ)
  template directLiteral(typeKind: TTypeKind) =
    if result.typ == nil:
      if expectedType != nil and (
          let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
          expected.kind == typeKind):
        result.typ = expected
        changeType(c, result, expectedType, check=true)
      else:
        result.typ = getSysType(c.graph, n.info, typeKind)

  result = n
  when defined(nimsuggest):
    var expandStarted = false
    if c.config.ideCmd == ideExpand and not c.config.expandProgress and
        ((n.kind in {nkFuncDef, nkProcDef, nkIteratorDef, nkTemplateDef, nkMethodDef, nkConverterDef} and
          n.info.exactEquals(c.config.expandPosition)) or
         (n.kind in {nkCall, nkCommand} and
          n[0].info.exactEquals(c.config.expandPosition))):
      expandStarted = true
      c.config.expandProgress = true
      if c.config.expandLevels == 0:
        c.config.expandNodeResult = $n
        suggestQuit()

  if c.config.cmd == cmdIdeTools: suggestExpr(c, n)
  if nfSem in n.flags: return
  case n.kind
  of nkIdent, nkAccQuoted:
    var s: PSym
    if expectedType != nil and (
        let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
        expected.kind == tyEnum):
      let nameId = considerQuotedIdent(c, n).id
      for f in expected.n:
        if f.kind == nkSym and f.sym.name.id == nameId:
          s = f.sym
          break
    if s == nil:
      let checks = if efNoEvaluateGeneric in flags:
          {checkUndeclared, checkPureEnumFields}
        elif efInCall in flags:
          {checkUndeclared, checkModule, checkPureEnumFields}
        else:
          {checkUndeclared, checkModule, checkAmbiguity, checkPureEnumFields}
      s = qualifiedLookUp(c, n, checks)
    if c.matchedConcept == nil: semCaptureSym(s, c.p.owner)
    case s.kind
    of skProc, skFunc, skMethod, skConverter, skIterator:
      #performProcvarCheck(c, n, s)
      result = symChoice(c, n, s, scClosed)
      if result.kind == nkSym:
        markIndirect(c, result.sym)
        # if isGenericRoutine(result.sym):
        #   localError(c.config, n.info, errInstantiateXExplicitly, s.name.s)
      # "procs literals" are 'owned'
      if optOwnedRefs in c.config.globalOptions:
        result.typ = makeVarType(c, result.typ, tyOwned)
    of skEnumField:
      result = enumFieldSymChoice(c, n, s)
    else:
      result = semSym(c, n, s, flags)
    if expectedType != nil and isSymChoice(result):
      result = fitNode(c, expectedType, result, n.info)
      if result.kind == nkSym:
        result = semSym(c, result, result.sym, flags)
  of nkSym:
    # because of the changed symbol binding, this does not mean that we
    # don't have to check the symbol for semantics here again!
    result = semSym(c, n, n.sym, flags)
  of nkEmpty, nkNone, nkCommentStmt, nkType:
    discard
  of nkNilLit:
    if result.typ == nil:
      result.typ = getNilType(c)
      if expectedType != nil:
        var m = newCandidate(c, result.typ)
        if typeRel(m, expectedType, result.typ) >= isSubtype:
          result.typ = expectedType
        # or: result = fitNode(c, expectedType, result, n.info)
  of nkIntLit:
    if result.typ == nil:
      if expectedType != nil and (
          let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
          expected.kind in {tyInt..tyInt64,
            tyUInt..tyUInt64,
            tyFloat..tyFloat128}):
        result.typ = expected
        if expected.kind in {tyFloat..tyFloat128}:
          n.transitionIntToFloatKind(nkFloatLit)
        changeType(c, result, expectedType, check=true)
      else:
        setIntLitType(c, result)
  of nkInt8Lit: directLiteral(tyInt8)
  of nkInt16Lit: directLiteral(tyInt16)
  of nkInt32Lit: directLiteral(tyInt32)
  of nkInt64Lit: directLiteral(tyInt64)
  of nkUIntLit: directLiteral(tyUInt)
  of nkUInt8Lit: directLiteral(tyUInt8)
  of nkUInt16Lit: directLiteral(tyUInt16)
  of nkUInt32Lit: directLiteral(tyUInt32)
  of nkUInt64Lit: directLiteral(tyUInt64)
  of nkFloatLit:
    if result.typ == nil:
      if expectedType != nil and (
          let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
          expected.kind in {tyFloat..tyFloat128}):
        result.typ = expected
        changeType(c, result, expectedType, check=true)
      else:
        result.typ = getSysType(c.graph, n.info, tyFloat64)
  of nkFloat32Lit: directLiteral(tyFloat32)
  of nkFloat64Lit: directLiteral(tyFloat64)
  of nkFloat128Lit: directLiteral(tyFloat128)
  of nkStrLit..nkTripleStrLit:
    if result.typ == nil:
      if expectedType != nil and (
          let expected = expectedType.skipTypes(abstractRange-{tyDistinct});
          expected.kind in {tyString, tyCstring}):
        result.typ = expectedType
      else:
        result.typ = getSysType(c.graph, n.info, tyString)
  of nkCharLit: directLiteral(tyChar)
  of nkDotExpr:
    result = semFieldAccess(c, n, flags)
    if result.kind == nkDotCall:
      result.transitionSonsKind(nkCall)
      result = semExpr(c, result, flags)
  of nkBind:
    message(c.config, n.info, warnDeprecated, "bind is deprecated")
    result = semExpr(c, n[0], flags, expectedType)
  of nkTypeOfExpr..nkTupleClassTy, nkStaticTy, nkRefTy..nkEnumTy:
    if c.matchedConcept != nil and n.len == 1:
      let modifier = n.modifierTypeKindOfNode
      if modifier != tyNone:
        var baseType = semExpr(c, n[0]).typ.skipTypes({tyTypeDesc})
        result.typ = c.makeTypeDesc(c.newTypeWithSons(modifier, @[baseType]))
        return
    var typ = semTypeNode(c, n, nil).skipTypes({tyTypeDesc})
    result.typ = makeTypeDesc(c, typ)
  of nkStmtListType:
    let typ = semTypeNode(c, n, nil)
    result.typ = makeTypeDesc(c, typ)
  of nkCall, nkInfix, nkPrefix, nkPostfix, nkCommand, nkCallStrLit:
    # check if it is an expression macro:
    checkMinSonsLen(n, 1, c.config)
    #when defined(nimsuggest):
    #  if gIdeCmd == ideCon and c.config.m.trackPos == n.info: suggestExprNoCheck(c, n)
    let mode = if nfDotField in n.flags: {} else: {checkUndeclared}
    c.isAmbiguous = false
    var s = qualifiedLookUp(c, n[0], mode)
    if s != nil:
      #if c.config.cmd == cmdNimfix and n[0].kind == nkDotExpr:
      #  pretty.checkUse(n[0][1].info, s)
      case s.kind
      of skMacro, skTemplate:
        result = semDirectOp(c, n, flags, expectedType)
      of skType:
        # XXX think about this more (``set`` procs)
        let ambig = c.isAmbiguous
        if not (n[0].kind in {nkClosedSymChoice, nkOpenSymChoice, nkIdent} and ambig) and n.len == 2:
          result = semConv(c, n, expectedType)
        elif ambig and n.len == 1:
          errorUseQualifier(c, n.info, s)
        elif n.len == 1:
          result = semObjConstr(c, n, flags, expectedType)
        elif s.magic == mNone: result = semDirectOp(c, n, flags, expectedType)
        else: result = semMagic(c, n, s, flags, expectedType)
      of skProc, skFunc, skMethod, skConverter, skIterator:
        if s.magic == mNone: result = semDirectOp(c, n, flags)
        else: result = semMagic(c, n, s, flags, expectedType)
      else:
        #liMessage(n.info, warnUser, renderTree(n));
        result = semIndirectOp(c, n, flags, expectedType)
    elif (n[0].kind == nkBracketExpr or shouldBeBracketExpr(n)) and
        isSymChoice(n[0][0]):
      # indirectOp can deal with explicit instantiations; the fixes
      # the 'newSeq[T](x)' bug
      setGenericParams(c, n[0])
      result = semDirectOp(c, n, flags, expectedType)
    elif nfDotField in n.flags:
      result = semDirectOp(c, n, flags, expectedType)
    elif isSymChoice(n[0]):
      let b = asBracketExpr(c, n)
      if b != nil:
        result = semExpr(c, b, flags, expectedType)
      else:
        result = semDirectOp(c, n, flags, expectedType)
    else:
      result = semIndirectOp(c, n, flags, expectedType)

    if nfDefaultRefsParam in result.flags:
      result = result.copyTree #XXX: Figure out what causes default param nodes to be shared.. (sigmatch bug?)
      # We've found a default value that references another param.
      # See the notes in `hoistParamsUsedInDefault` for more details.
      var hoistedParams = newNodeI(nkLetSection, result.info)
      for i in 1..<result.len:
        hoistParamsUsedInDefault(c, result, hoistedParams, result[i])
      result = newTreeIT(nkStmtListExpr, result.info, result.typ, hoistedParams, result)
  of nkWhen:
    if efWantStmt in flags:
      result = semWhen(c, n, true)
    else:
      result = semWhen(c, n, false)
      if result == n:
        # This is a "when nimvm" stmt.
        result = semWhen(c, n, true)
      else:
        result = semExpr(c, result, flags, expectedType)
  of nkBracketExpr:
    checkMinSonsLen(n, 1, c.config)
    result = semArrayAccess(c, n, flags, expectedType)
  of nkCurlyExpr:
    result = semExpr(c, buildOverloadedSubscripts(n, getIdent(c.cache, "{}")), flags, expectedType)
  of nkPragmaExpr:
    var
      pragma = n[1]
      pragmaName = considerQuotedIdent(c, pragma[0])
      flags = flags
      finalNodeFlags: TNodeFlags = {}

    case whichKeyword(pragmaName)
    of wExplain:
      flags.incl efExplain
    of wExecuteOnReload:
      finalNodeFlags.incl nfExecuteOnReload
    else:
      # what other pragmas are allowed for expressions? `likely`, `unlikely`
      invalidPragma(c, n)

    result = semExpr(c, n[0], flags)
    result.flags.incl finalNodeFlags
  of nkPar, nkTupleConstr:
    case checkPar(c, n)
    of paNone: result = errorNode(c, n)
    of paTuplePositions: result = semTupleConstr(c, n, flags, expectedType)
    of paTupleFields: result = semTupleFieldsConstr(c, n, flags, expectedType)
    of paSingle: result = semExpr(c, n[0], flags, expectedType)
  of nkCurly: result = semSetConstr(c, n, expectedType)
  of nkBracket:
    result = semArrayConstr(c, n, flags, expectedType)
  of nkObjConstr: result = semObjConstr(c, n, flags, expectedType)
  of nkLambdaKinds: result = semProcAux(c, n, skProc, lambdaPragmas, flags)
  of nkDerefExpr: result = semDeref(c, n)
  of nkAddr:
    result = n
    checkSonsLen(n, 1, c.config)
    result[0] = semAddrArg(c, n[0])
    result.typ = makePtrType(c, result[0].typ)
  of nkHiddenAddr, nkHiddenDeref:
    checkSonsLen(n, 1, c.config)
    n[0] = semExpr(c, n[0], flags, expectedType)
  of nkCast: result = semCast(c, n)
  of nkIfExpr, nkIfStmt: result = semIf(c, n, flags, expectedType)
  of nkHiddenStdConv, nkHiddenSubConv, nkConv, nkHiddenCallConv:
    checkSonsLen(n, 2, c.config)
    considerGenSyms(c, n)
  of nkStringToCString, nkCStringToString, nkObjDownConv, nkObjUpConv:
    checkSonsLen(n, 1, c.config)
    considerGenSyms(c, n)
  of nkChckRangeF, nkChckRange64, nkChckRange:
    checkSonsLen(n, 3, c.config)
    considerGenSyms(c, n)
  of nkCheckedFieldExpr:
    checkMinSonsLen(n, 2, c.config)
    considerGenSyms(c, n)
  of nkTableConstr:
    result = semTableConstr(c, n, expectedType)
  of nkClosedSymChoice, nkOpenSymChoice:
    # handling of sym choices is context dependent
    # the node is left intact for now
    discard
  of nkStaticExpr: result = semStaticExpr(c, n[0], expectedType)
  of nkAsgn, nkFastAsgn: result = semAsgn(c, n)
  of nkBlockStmt, nkBlockExpr: result = semBlock(c, n, flags, expectedType)
  of nkStmtList, nkStmtListExpr: result = semStmtList(c, n, flags, expectedType)
  of nkRaiseStmt: result = semRaise(c, n)
  of nkVarSection: result = semVarOrLet(c, n, skVar)
  of nkLetSection: result = semVarOrLet(c, n, skLet)
  of nkConstSection: result = semConst(c, n)
  of nkTypeSection: result = semTypeSection(c, n)
  of nkDiscardStmt: result = semDiscard(c, n)
  of nkWhileStmt: result = semWhile(c, n, flags)
  of nkTryStmt, nkHiddenTryStmt: result = semTry(c, n, flags, expectedType)
  of nkBreakStmt, nkContinueStmt: result = semBreakOrContinue(c, n)
  of nkForStmt, nkParForStmt: result = semFor(c, n, flags)
  of nkCaseStmt: result = semCase(c, n, flags, expectedType)
  of nkReturnStmt: result = semReturn(c, n)
  of nkUsingStmt: result = semUsing(c, n)
  of nkAsmStmt: result = semAsm(c, n)
  of nkYieldStmt: result = semYield(c, n)
  of nkPragma: semPragmaStmt(c, n)
  of nkIteratorDef: result = semIterator(c, n)
  of nkProcDef: result = semProc(c, n)
  of nkFuncDef: result = semFunc(c, n)
  of nkMethodDef: result = semMethod(c, n)
  of nkConverterDef: result = semConverterDef(c, n)
  of nkMacroDef: result = semMacroDef(c, n)
  of nkTemplateDef: result = semTemplateDef(c, n)
  of nkImportStmt:
    # this particular way allows 'import' in a 'compiles' context so that
    # template canImport(x): bool =
    #   compiles:
    #     import x
    #
    # works:
    if c.currentScope.depthLevel > 2 + c.compilesContextId:
      localError(c.config, n.info, errXOnlyAtModuleScope % "import")
    result = evalImport(c, n)
  of nkImportExceptStmt:
    if not isTopLevel(c): localError(c.config, n.info, errXOnlyAtModuleScope % "import")
    result = evalImportExcept(c, n)
  of nkFromStmt:
    if not isTopLevel(c): localError(c.config, n.info, errXOnlyAtModuleScope % "from")
    result = evalFrom(c, n)
  of nkIncludeStmt:
    #if not isTopLevel(c): localError(c.config, n.info, errXOnlyAtModuleScope % "include")
    result = evalInclude(c, n)
  of nkExportStmt:
    if not isTopLevel(c): localError(c.config, n.info, errXOnlyAtModuleScope % "export")
    result = semExport(c, n)
  of nkExportExceptStmt:
    if not isTopLevel(c): localError(c.config, n.info, errXOnlyAtModuleScope % "export")
    result = semExportExcept(c, n)
  of nkPragmaBlock:
    result = semPragmaBlock(c, n, expectedType)
  of nkStaticStmt:
    result = semStaticStmt(c, n)
  of nkDefer:
    if c.currentScope == c.topLevelScope:
      localError(c.config, n.info, "defer statement not supported at top level")
    n[0] = semExpr(c, n[0])
    if not n[0].typ.isEmptyType and not implicitlyDiscardable(n[0]):
      localError(c.config, n.info, "'defer' takes a 'void' expression")
    #localError(c.config, n.info, errGenerated, "'defer' not allowed in this context")
  of nkGotoState, nkState:
    if n.len != 1 and n.len != 2: illFormedAst(n, c.config)
    for i in 0..<n.len:
      n[i] = semExpr(c, n[i])
  of nkComesFrom: discard "ignore the comes from information for now"
  of nkMixinStmt: discard
  of nkBindStmt:
    if c.p != nil:
      if n.len > 0 and n[0].kind == nkSym:
        c.p.localBindStmts.add n
    else:
      localError(c.config, n.info, "invalid context for 'bind' statement: " &
                renderTree(n, {renderNoComments}))
  else:
    localError(c.config, n.info, "invalid expression: " &
               renderTree(n, {renderNoComments}))
  if result != nil: incl(result.flags, nfSem)

  when defined(nimsuggest):
    if expandStarted:
      c.config.expandNodeResult = $result
      suggestQuit()
