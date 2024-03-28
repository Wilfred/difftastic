import std/[enumerate, sequtils]
import std/macros except newStmtList, items, pairs, newTree
import cps/[spec, normalizedast, help, rewrites]

template cpsMustLift() {.pragma.} ## signify a code block that has to be lifted

proc newCpsMustLift(n: NormNode): NormNode =
  ## Wrap `n` in a `cpsMustLift` block.
  nnkPragmaBlock.newTree(
    nnkPragma.newTree(bindName"cpsMustLift"),
    n
  )

proc isCpsMustLift(n: NormNode): bool =
  ## Check whether `n` is a cpsMustLift block
  n.kind == nnkPragmaBlock and n[0].len == 1 and
    asPragmaBlock(n).hasPragma("cpsMustLift")

func hasCpsExpr(n: NormNode): bool =
  ## Returns whether `n` has a cps block acting as an expression within it
  ## (ie. the block has a type) and that these expression might need to be
  ## moved outside of `n` for the purpose of transformation.
  # If this node doesn't have a type
  #
  # XXX: I'm not even sure what is ntyStmt... but `result = expr` generated
  # by the compiler have it
  if n.typeKind in {ntyNone, ntyStmt}:
    # Check if its children have any
    case n.kind
    of nnkVarSection, nnkLetSection:
      let n = asVarLet n
      result = n.val.hasCpsExpr
    of nnkElifBranch, nnkElifExpr, nnkWhileStmt:
      result = n[0].hasCpsExpr
    of nnkStmtList, nnkStmtListExpr, nnkIfStmt, nnkIfExpr, nnkCaseStmt,
       nnkAsgn, CallNodes, nnkDiscardStmt, nnkReturnStmt, nnkRaiseStmt:
      for child in n.items:
        if child.hasCpsExpr:
          return true
    of nnkExprColonExpr:
      result = n[1].hasCpsExpr
    else:
      result = false
  else:
    # Otherwise check if its a cps block
    result = n.isCpsBlock

proc filterExpr[T: NormNode](n: T, transformer: proc(n: T): T): T =
  ## Given the expression `n`, run `transformer` on every expression tail.
  ##
  ## Returns the filtered tree.
  if n.typeKind == ntyNone:
    return copy n

  proc rewriteElifOf(branch: NormNode): NormNode =
    ## Rewrite a singular of/elif/else branch
    case branch.kind
    of nnkElifBranch, nnkElifExpr:
      result = copyNodeAndTransformIt(branch):
        # Copy the branch and it's condition
        it.add(branch[0]):
          # Then rewrite the body
          filterExpr(branch.last, transformer)
    of nnkElse, nnkElseExpr:
      result = copyNodeAndTransformIt(branch):
        # Copy the branch
        it.add:
          # Then rewrite the body
          filterExpr(branch.last, transformer)
    of nnkOfBranch:
      result = copyNodeAndTransformIt(branch):
        # Copy all matching conditions, which is every children except the last.
        for idx in 0 ..< branch.len - 1:
          it.add copy(branch[idx])
        # Add the rewritten body
        it.add:
          filterExpr(branch.last, transformer)
    else:
      result = n.errorAst "unexpected node kind in case/if expression"

  case n.kind
  of AccessNodes, CallNodes, ConstructNodes, nnkConv:
    # For calls, conversions, constructions, constants, basic symbols, field
    # access, we just emit the assignment.
    result = transformer(n)
  of nnkStmtList, nnkStmtListExpr:
    result = copyNodeAndTransformIt(n):
      # In a statement list, the last node is the expression, so we copy
      # the part before it because we won't touch them.
      for idx in 0 ..< n.len - 1:
        it.add copy(n[idx])

      # Rewrite the last expression to assign to location.
      it.add:
        filterExpr(n.last, transformer)
  of nnkBlockStmt, nnkBlockExpr, nnkPragmaBlock:
    result = copyNodeAndTransformIt(n):
      # Copy the label/pragma list
      it.add copy(n[0])
      # Rewrite and add the body
      it.add:
        filterExpr(n[1], transformer)
  of nnkIfStmt, nnkIfExpr:
    # It appears that the type of the `if` expression remains if we
    # don't destroy it by creating a new node instead of copying and
    # causes all sort of errors.
    {.warning: "compiler workaround here, see: https://github.com/nim-lang/Nim/issues/18351".}
    result = newNodeAndTransformIt(n):

      for branch in n.items:
        it.add:
          rewriteElifOf:
            branch
  of nnkCaseStmt:
    # It appears that the type of the `case` expression remains if we
    # don't destroy it by creating a new node instead of copying and
    # causes all sort of errors.
    {.warning: "compiler workaround here, see: https://github.com/nim-lang/Nim/issues/18351".}
    result = newNodeAndTransformIt(n):

      # Copy the matched expression
      it.add copy(n[0])

      # Rewrite and add branches
      for idx in 1 ..< n.len:
        it.add:
          rewriteElifOf:
            n[idx]
  of nnkTryStmt:
    # Similar to other node types, we must erase the type attached to this
    # statement.
    result = newNodeAndTransformIt(n):

      # Rewrite the body
      it.add:
        filterExpr(n[0], transformer)

      # Rewrite except/finally branches
      for idx in 1 ..< n.len:
        let branch = n[idx]
        case branch.kind
        of nnkExceptBranch:
          let newBranch = copyNimNode(branch)
          # Copy all exception matching predicates, which is every node but
          # the last
          for idx in 0 ..< branch.len - 1:
            newBranch.add copy(branch[idx])

          # Rewrite and add the body
          newBranch.add:
            filterExpr(branch.last, transformer)

          # Add the branch to the new try statement
          it.add newBranch
        of nnkFinally:
          # Per Nim manual, a finally branch cannot contain an expression, thus
          # we can skip the rewrite
          it.add copy(branch)
        else:
          it.add:
            branch.errorAst "unexpected node in a try expression"
  of ConvNodes - {nnkConv}:
    ## Hidden conversion nodes can be reconstructed by the compiler if needed,
    ## so we just skip them and rewrite the body instead.
    result = filterExpr(n.last, transformer)
  else:
    result = n.errorAst "cps doesn't know how to rewrite this into assignment"

proc assignTo*(location, n: NormNode): NormNode =
  ## Rewrite the expression `n` into a statement assigning to `location`.
  ##
  ## Returns a copy of `n` if `n` is not an expression.
  proc assign(n: NormNode): NormNode =
    newAssignment(copy(location), copy(n))

  filterExpr(n, assign)

func isMutableLocation(location: NormNode): bool

func isMutable(n: NormNode): bool =
  ## Determine whether `n` is mutable, as in if `n` value can be mutated by
  ## changes in the program state.
  case n.kind
  of nnkSym:
    result = n.symKind in {nskVar, nskResult}
  of AtomicNodes - {nnkSym}:
    result = false
  of nnkAddr, nnkHiddenAddr:
    # An expression address is mutable only if it's location is mutable
    result = n[0].isMutableLocation
  of nnkDerefExpr, nnkHiddenDeref:
    # A dereference of a pointer/hidden address is a mutable value as
    # Nim does not have reference immutability.
    result = true
  of nnkDotExpr:
    # The mutability of a dot expression (field access in typed AST) relies
    # solely on its first operand (ie. `o.i` is mutable if `o` is mutable)
    result = n[0].isMutable
  of CallNodes:
    # TODO: analyze calls, might only require mutability analysis on
    # params + whether the call has side effects.
    #
    # For now we assume that all calls produce an expression that can be
    # mutated by other statements.
    result = true
  of ConvNodes:
    # For conversions the mutability depends on the converted expression
    result = n[1].isMutable
  else:
    for child in n.items:
      if child.isMutable:
        return true

func isMutableLocation(location: NormNode): bool =
  ## Determine whether `location` is mutable, that is, the address of it
  ## can be modified by other statements.
  case location.kind
  of nnkHiddenDeref, nnkDerefExpr:
    # This node produces the location that is stored in its child, thus the
    # location is mutable if the child is mutable.
    result = location[0].isMutable
  of nnkAddr, nnkHiddenAddr:
    # This node produces the location of its child, thus it is mutable if the
    # child's location is mutable.
    result = location[0].isMutableLocation
  else:
    for child in location:
      if child.isMutableLocation:
        return true

func isSingleStatement(n: NormNode): bool =
  ## Determine whether `n` is consisted of exactly one statement.
  case n.kind
  of AtomicNodes:
    ## These are always singular since they can't contain any other statements
    result = true
  of ConvNodes, AccessNodes - AtomicNodes, ConstructNodes, nnkExprColonExpr:
    ## These are singular iff their operands are singular
    for child in n.items:
      if not child.isSingleStatement:
        return false

    result = true
  else:
    ## Assume that everything else is complex
    result = false

func getMagic(n: NormNode): string =
  ## Obtain the magic name of the call `n`
  ifCallThenIt(n):
    if it.hasImpl:
      let impl = it.impl
      if impl.hasPragma("magic"):
        for pragma in impl.pragma.items:
          case pragma.kind
          of nnkExprColonExpr:
            if pragma.getPragmaName.eqIdent("magic"):
              return pragma.last.strVal
          else:
            discard

macro cpsExprToTmp(tipe, n: typed): untyped =
  ## Create a temporary variable with type `T` and rewrite `n` so that the
  ## result is assigned to the temporary, then emit the temporary as the
  ## expression.
  ##
  ## Puts the rewritten `n` into cpsMustLift so that it will be moved outside.
  debugAnnotation cpsExprToTmp, n:
    let
      # The symbol for our temporary
      tmp = genSymVar("(expr)")

      # The rewritten expression
      body = assignTo(tmp):
        # debugAnnotation puts the expr inside a StmtList, so we have to take
        # it out
        it[0]

    it =
      newStmtList(
        # Mark this part for lifting
        newCpsMustLift(
          # Create a new statement list
          newStmtList(
            # Declare the temporary
            newVarSection(tmp, tipe.TypeExpr),
            # Add the rewritten expression
            body
          )
        ),
        # Then move our temporary to form the new expression
        newCall(bindName"move", tmp)
      )

macro cpsAsgn(dst, src: typed): untyped =
  ## Flatten the cps expression `src` into explicit assignments to `dst`.
  let dst = normalizingRewrites(dst)
  debugAnnotation cpsAsgn, src:
    it =
      if not dst.isSingleStatement:
        dst.errorAst(
          "The destination (shown below) requires the evaluation of multiple " &
          "statements, which CPS does not support at the moment.\n" &
          "To workaround this, assign the expression to a temporary variable, " &
          "then assign it to your destination."
        )
      elif dst.isMutableLocation:
        dst.errorAst(
          "The destination's address is mutable, as such CPS cannot guarantee" &
          " that the expression will be assigned to the correct location.\n" &
          "To workaround this, assign the expression to a temporary variable," &
          " then assign it to your destination."
        )
      else:
        assignTo(dst):
          # debugAnnotation wrap our typed body in a stmtlist, so we take it
          # out
          it[0]

macro cpsExprConv(tipe, n: typed): untyped =
  ## Apply the conversion to `T` directly into `n`'s trailing expressions.
  # If we don't shadow this parameter, it will be nnkNilLit.
  {.warning: "compiler workaround here, see: https://github.com/nim-lang/Nim/issues/18352".}
  let tipe = normalizingRewrites tipe
  debugAnnotation cpsExprConv, n:
    proc addConv(n: NormNode): NormNode =
      newCall(tipe, copy n)

    it = filterExpr(it[0], addConv)

macro cpsExprDiscard(n: typed): untyped =
  ## Apply `discard` directly into `n`'s trailling expressions.
  debugAnnotation cpsExprDiscard, n:
    proc addDiscard(n: NormNode): NormNode =
      nnkDiscardStmt.wrap(copy n)

    it = filterExpr(it[0], addDiscard)

macro cpsExprReturn(n: typed): untyped =
  ## Apply `return` directly into `n`'s trailling expressions.
  debugAnnotation cpsExprReturn, n:
    proc addReturn(n: NormNode): NormNode =
      nnkReturnStmt.wrap(copy n)

    it = filterExpr(it[0], addReturn)

macro cpsExprRaise(n: typed): untyped =
  ## Apply `return` directly into `n`'s trailling expressions.
  debugAnnotation cpsExprRaise, n:
    proc addRaise(n: NormNode): NormNode =
      nnkRaiseStmt.wrap(copy n)

    it = filterExpr(it[0], addRaise)

macro cpsExprLifter(n: typed): untyped =
  ## Move cpsMustLift blocks from `n` to before `n`.
  ## Does not create a new scope.

  proc lift(n: NormNode): NormNode =
    let lifted = newStmtList()
    proc lifter(n: NormNode): NormNode =
      if n.isCpsMustLift:
        lifted.add:
          # Lift the bodies inside `n` then add it to the list of lifted bodies
          lift n.last # body to be lifted is the last child
        # Replace `n` with an empty node
        result = newEmptyNormNode()

    let rewritten = filter(n, lifter)
    # For expressions we have to be a bit more delicate, as an empty nnkStmtList
    # might turn the expression into:
    #   StmtList
    #     StmtList
    #     <Expr>
    #
    # Which the compiler will *not* flatten, making it a "complex" statement.
    if lifted.len == 0:
      result = rewritten
    else:
      result = newStmtList(lifted, rewritten)

  debugAnnotation cpsExprLifter, n:
    it = lift it

func lastCpsExprAt(n: NormNode): int =
  ## Return the index of which the last cps expression is found
  ##
  ## -1 is returned if there are no cps expression within `n`
  result = -1
  for idx, child in n.pairs:
    if child.hasCpsExpr:
      result = idx

func annotate(n: NormNode): NormNode =
  ## Annotate expressions requiring flattening in `n`'s children.

  result = copyNimNode(n)

  for idx, child in n.pairs:
    if child.hasCpsExpr:
      case child.kind
      of nnkVarSection, nnkLetSection:
        let child = asVarLet(child)

        result.add:
          # Puts the section under expression lifter in case its value contains
          # expression that requires lifting.
          newCall(bindName"cpsExprLifter"):
            newStmtList:
              # Clone the VarLet and replace its value.
              child.clone:
                # In the case where the value is a cps call, we don't have to
                # move it outside as later CPS pass can rewrite this.
                if child.val.isCpsCall:
                  annotate:
                    # Put the value into a StmtList so analysis starts from
                    # the value as annotate() works on child nodes.
                    newStmtList:
                      child.val
                else:
                  # Otherwise we transform the expression into a symbol.
                  # TODO: normalizedast should know to run infer
                  #       automatically on nnkVarTuple because that type
                  #       doesn't have a type specifier
                  newCall(bindName"cpsExprToTmp", copy(child.def.inferTypFromImpl)):
                    annotate:
                      # Put the value into a StmtList so analysis starts
                      # from the value as annotate() works on child
                      # nodes.
                      newStmtList:
                        child.val

      of nnkElifBranch, nnkElifExpr:
        # If the elif branch is the very first branch, tag it for rewrite.
        if idx == 0:
          let first = child[0]
          discard result.add(
            copyNimNode(child).add(
              # Tag the condition for rewrite and annotate it
              newCall(bindName"cpsExprToTmp",
                      getTypeInst(first),
                      annotate(newStmtList(first))),
              # Annotate the branch body too
              annotate newStmtList(child.last)
            )
          )

        # Otherwise, we move the remaining branches into a new if
        # statement and push it as the else branch of this statement.
        #
        # The rationale for this is that we can only lift an elif branch
        # condition outside a container like `IfStmt`.
        else:
          discard result.add:
            # Create a new else branch and annotate it
            annotate:
              nnkElse.newTree:
                newStmtList:
                  # Put every branch from here on into a new if statement.
                  nnkIfStmt.newTree(varargs[NormNode] n[idx .. ^1])

          # We are done with this tree.
          break

      of nnkIfStmt, nnkIfExpr:
        # Put the if statement under the expression lifter since it
        # has at least one children with a cps expression as condition.
        result.add:
          newCall(bindName"cpsExprLifter"):
            newStmtList:
              annotate child

      of nnkCaseStmt:
        # Run an annotation pass on the child first so any potential
        # elif branch is rewritten.
        let newCase = annotate child

        # If the case matching expression is a cps expression.
        #
        # We are checking the original condition because it would have not
        # went through any rewriting passes and retain type information.
        if child[0].hasCpsExpr:
          # However since the annotation pass above already rewritten the
          # condition for us, we can just take it and wrap it in
          # cpsExprToTmp.
          newCase[0] =
            # Again, we are taking the type from the original since it
            # have the correct type information.
            newCall(bindName"cpsExprToTmp", getTypeInst(child[0])):
              newCase[0]

          # Put the new case in the expression lifter to lift the rewritten
          # matching expression.
          result.add:
            newCall(bindName"cpsExprLifter"):
              newStmtList:
                newCase
        else:
          # We can just add the case as-is otherwise.
          result.add newCase

      of nnkWhileStmt:
        # Unlike if and/or case, the condition of a while branch is evaluated
        # on every loop, so we can't just move it out of the branch.
        #
        # The solution is to rewrite:
        #
        # while cond:
        #   body
        #
        # into:
        #
        # while true:
        #   if cond:
        #     body
        #   else:
        #     break
        #
        # Which will let us move `cond` outside of `if` and have it evaluated
        # before every loop.
        let newWhile = copyNimNode(child)
        newWhile.add newLit(true)

        # Add the new loop body
        newWhile.add:
          # Run annotate on the if statement to rewrite its condition and body
          annotate:
            newStmtList:
              # A new if statement
              nnkIfStmt.newTree(
                # The first branch being the condition and the body
                nnkElifBranch.newTree(child[0], child.last),
                # The else branch breaks the loop
                nnkElse.newTree(nnkBreakStmt.newTree(newEmptyNode()))
              )

        result.add newWhile

      of nnkAsgn:
        if child[0].hasCpsExpr:
          result.add:
            child[0].errorAst(
              "The left hand side of the following assignment is a CPS expression which is not supported:\n" & repr(child)
            )
        else:
          let asgnCall = newCall(bindName"cpsAsgn", copy(child[0])):
            annotate:
              newStmtList(child[1])

          asgnCall.copyLineInfo(child)
          result.add asgnCall

      of nnkConv:
        let conv = newCall(bindName"cpsExprConv", copy(child[0])):
          annotate:
            newStmtList(child[1])

        conv.copyLineInfo(child)
        result.add conv

      of nnkDiscardStmt:
        let discrd = newCall(bindName"cpsExprDiscard"):
          annotate:
            newStmtList(child.last)

        discrd.copyLineInfo(child)
        result.add discrd

      of nnkReturnStmt:
        let ret = newCall(bindName"cpsExprReturn"):
          annotate:
            newStmtList(child.last)

        ret.copyLineInfo(child)
        result.add ret

      of nnkRaiseStmt:
        let rase = newCall(bindName"cpsExprRaise"):
          annotate:
            newStmtList(child.last)

        rase.copyLineInfo(child)
        result.add rase

      of nnkDotExpr:
        # In typed AST, dot expression indicates a field access, of which only the first node may
        # contain a cps expression, as the other node will always be a field symbol.
        #
        # This rewrite is separated from the more general Left-to-Right rewrite below since we can't
        # wrap the field symbol under a nnkStmtList
        result.add:
          # Lift the expression out of this node after the rewrite
          newCall(bindName"cpsExprLifter"):
            copyNimNode(child).add(
              # Move the expression into a temporary
              newCall(bindName"cpsExprToTmp", getTypeInst(child[0]), annotate(newStmtList child[0])),
              # Copy the field symbol
              copyNimNode child[1]
            )

      of nnkHiddenDeref:
        # For hidden dereference, we have to convert them into explicit dereference since the compiler
        # chokes on any modified hidden nodes
        result.add:
          # Lift the inner expression out
          newCall(bindName"cpsExprLifter"):
            # Create an explicit deref node with lineinfo copied from the original
            newNimNode(nnkDerefExpr, child).add:
              # Rewrite the inner CPS expression into a temporary
              newCall(bindName"cpsExprToTmp", getTypeInst(child[0])):
                newStmtList:
                  annotate child[0]

      of AccessNodes - AtomicNodes - HiddenNodes - {nnkDotExpr}, ConstructNodes, CallNodes:
        let magic = child.getMagic
        # These are boolean `and` or `or` operators, which have a special
        # evaluation ordering despite using CallNodes
        if magic == "And":
          # To simulate `a and b` short-ciruiting behavior
          discard result.add:
            annotate:
              newStmtList:
                nnkIfStmt.newTree(
                  # We produce an if expression in the form of:
                  # if `a`:
                  #   `b`
                  # else:
                  #   false
                  #
                  # This way `b` is only evaluated if `a` is true
                  nnkElifBranch.newTree(child[1], child[2]),
                  nnkElse.newTree(newLit false)
                )

        elif magic == "Or":
          # To simulate `a or b` short-ciruiting behavior
          result.add:
            annotate:
              newStmtList:
                nnkIfStmt.newTree(
                  # We produce an if expression in the form of:
                  # if `a`:
                  #   true
                  # else:
                  #   `b`
                  #
                  # This way `b` is only evaluated if `a` is false
                  nnkElifBranch.newTree(child[1], newLit true),
                  nnkElse.newTree(child[2])
                )

        else:
          # For these nodes, the evaluation order of each child is the same
          # as their order in the AST.

          type
            Operand = object
              # The operand of an operation, ie. a parameter
              node: NormNode # The node of the operand
              typ: TypeExpr # The type of the expression within the operand
              mutable: bool # Whether the operand is mutable

          template rewriteOperand(o: Operand, body: untyped): untyped =
            ## Given the operand `n`, transform its expression via `body` and
            ## emit a copy of the operand's node with the transformed expression.
            ##
            ## The variable `it` is injected into the body as the expression
            ## to be transformed.
            let node = o.node
            case node.kind
            of nnkExprColonExpr:
              # This is a named parameter and the expression needs rewriting is
              # the last node
              let it {.inject.} = node.last
              copyNimNode(node).add(copy(node[0])):
                body
            else:
              let it {.inject.} = node
              body

          iterator operands(n: NormNode): Operand =
            ## Yields the operands of an operation.
            ##
            ## In the case where the operation is a magic call, the operand type
            ## will be corrected as necessary.
            # A seq containing the parameter of the magic routine, empty if `n` is not
            # a magic.
            let magicParams =
              if n.getMagic != "":
                toSeq callingParams(ProcDef getImpl(n[0]))
              else:
                newSeq[RoutineParam]()

            for idx, child in n.pairs:
              let
                # Capture the expression of the operand to derive its type
                expr =
                  case child.kind
                  of nnkExprColonExpr:
                    # This is a named parameter, the expression is the last node.
                    child.last
                  else: child
                exprType = getTypeInst(expr)

              var op = Operand(
                node: child, typ: exprType, mutable: child.isMutable
              )

              # In the case where this is a magic call and the parameter corresponds to a parameter
              # of the call.
              #
              # Note that we minus one here because parameters in the call node start at index 1.
              if idx - 1 in 0 ..< magicParams.len:
                let magicType = magicParams[idx - 1].inferTypFromImpl
                # {.magic.} calls, unlike normal procedure, the compiler will not emit `nnkHiddenAddr`
                # for `var` parameters, thus making regular analysis incorrect.
                #
                # As a workaround, we have to obtain this information directly from the symbol definition.
                if magicType.typeKind == ntyVar and not magicType.sameType(op.typ):
                  # If the parameter is a `var T` but the type differs from the operand.
                  # Modify the operand type to `var operand.typ`.
                  op.typ = TypeExpr nnkVarTy.newTree(op.typ)
                  # Modify the mutable analysis to check whether the operand location is mutable instead.
                  op.mutable = child.isMutableLocation

              yield op

          # Put the annotated operation under the expr lifter
          result.add:
            newCall(bindSym"cpsExprLifter"):
              newStmtList:
                copyNodeAndTransformIt(child):
                  # The last position with a cps expression
                  let lastExpr = child.lastCpsExprAt

                  for idx, operand in enumerate(child.operands):
                    if child.kind == nnkObjConstr and idx == 0:
                      # The first operand of an object constructor needs to be copied
                      # verbatim since it has to be a type symbol and wrapping it in any
                      # container like nnkStmtList will cause sem issues.
                      it.add copy(operand.node)

                    elif idx <= lastExpr:
                      # For all nodes up to the last position with a cps expression,
                      # we need to lift them so that they are executed before the cps
                      # expression.
                      #
                      # We need to lift them if one of the following conditions is true:
                      #
                      # The child is:
                      # - A CPS expression or contains a CPS expression
                      # - Consisted of mutiple statements
                      # - Mutable
                      if operand.node.hasCpsExpr or operand.mutable or
                        not operand.node.isSingleStatement:
                        it.add:
                          rewriteOperand(operand):
                            newCall(bindName"cpsExprToTmp", operand.typ):
                              annotate:
                                newStmtList(it)
                      else:
                        it.add:
                          rewriteOperand(operand):
                            annotate:
                              newStmtList(it)
                    else:
                      # Nodes after the last CPS expr doesn't have to be lifted
                      discard it.add:
                        rewriteOperand(operand):
                          annotate:
                            newStmtList(it)

      else:
        # Not the type of nodes that needs flattening, rewrites its child
        # and move on.
        result.add:
          annotate(child)
    else:
      # Nothing interesting here, continue.
      result.add:
        annotate(child)

macro cpsFlattenExpr*(n: typed): untyped =
  ## Flatten any CPS expression in procedure `n` so that control flow involving
  ## them is linear.
  expectKind n, nnkProcDef
  debugAnnotation cpsFlattenExpr, n:
    # debugAnnotation puts the rewritten `n` inside a StmtList, so we take it
    # out.
    it = it[0]

    # Annotate the proc body
    it.body = annotate:
      # Always put the body under a statement list in the case where there
      # is only one node in the body.
      newStmtList:
        it.body
