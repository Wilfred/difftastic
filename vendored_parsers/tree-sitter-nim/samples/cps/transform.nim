import std/[tables, hashes, genasts]
import std/macros except newStmtList, newTree
import cps/[spec, environment, hooks, returns, defers, rewrites, help,
            normalizedast]
export Continuation, ContinuationProc, cpsCall, cpsMustJump

#{.experimental: "strictNotNil".}

when CallNodes - {nnkHiddenCallConv} != nnkCallKinds:
  {.error: "i'm afraid of what you may have become".}

proc annotate(parent: var Env; n: NormNode): NormNode

proc makeContProc(name, cont, contType: Name; source: NimNode): ProcDef =
  ## creates a continuation proc with `name` using continuation
  ## `cont` with the given body.
  let
    contParam = desym cont
    # https://github.com/nim-lang/Nim/issues/18365
    contType = TypeExpr: bindName"Continuation"

  result = newProcDef(name, contType, newIdentDef(contParam, sinkAnnotated contType))
  result.copyLineInfo source        # grab lineinfo from the source body
  result.body = newStmtList()       # start with an empty body
  result.introduce {Coop, Pass, Head, Tail, Trace, Alloc, Dealloc, Unwind}
  # install check for any exception that might have been injected by
  # a child continuation
  result.body.add:
    genAstOpt({}, contParam = contParam.NimNode):
      # If there is an injected exception
      if not contParam.ex.isNil:
        try:
          # Raise it
          raise contParam.ex
        finally:
          # Set the injected exception field to nil
          contParam.ex = nil
  result.body.add:                  # insert a hook ahead of the source,
    Trace.hook contParam, result    # hooking against the proc (minus body)
  result.body.add:                  # update the continuation's line info
    updateLineInfoForContinuationStackFrame(contParam.NimNode, source)
  result.body.add:                  # perform convenience rewrites on source
    normalizingRewrites macros.newStmtList(source)

  # replace `cont` in the body with the parameter of the new proc
  result.body = resym(result.body, cont, contParam)
  # if this body doesn't have any continuing control-flow,
  if result.body.firstReturn.isNil:
    # annotate it so that outer macros can fill in as needed.
    result.body.add newCpsPending()
  # tell cpsFloater that we want this to be lifted to the top-level
  result.addPragma bindName"cpsLift"
  result.addPragma "nimcall"
  # let other macros know this is a continuation
  result.addPragma bindName"cpsCont"

macro cpsJump(cont, contType: typed; name: static[string];
              call, n: typed): untyped =
  ## Rewrite `n` into a tail call via `call` where `cont` is the symbol of
  ## the continuation and `fn` is the identifier/symbol of the function
  ## field.
  ##
  ## All AST rewritten by cpsJump should end in a control-flow statement.
  let
    call = normalizeCall call
    name = genProcName(name, "jump " & $call.name & "()",
                       info=n.NormNode)
    cont = cont.asName
    contType = contType.asName
  debugAnnotation cpsJump, n:
    it = newStmtList:
      makeContProc(name, cont, contType, n)
    it.add:
      jumperCall(cont, contType, name, call)

macro cpsJump(cont, contType: typed; name: static[string];
              call: typed): untyped =
  ## a version of cpsJump that doesn't take a continuing body.
  result = getAst(cpsJump(cont, contType, name, call, macros.newStmtList()))

macro cpsContinuationJump(cont, contType: typed; name: static[string];
                          call, c, n: typed): untyped =
  ## a jump to another continuation that must be instantiated
  let
    c = c.NormNode                                      # store child here
    call = asCall(NormNode call)                        # child bootstrap call
    name = genProcName(name, "child " & $call.name & "()",
                       info = n.NormNode)
    cont = cont.asName                                  # current continuation
    contType = contType.asName                          # so-called user type
  debugAnnotation cpsContinuationJump, n:
    it = newStmtList:
      makeContProc(name, cont, contType, n)             # return to this proc
    it.add:
      # update the parent's stack frame with the call site of the child
      updateLineInfoForContinuationStackFrame(cont.NimNode, call.NimNode)
    it.add:
      # install the return point in the current continuation
      newAssignment(newDotExpr(cont, asName"fn"), name)
    it.add:
      # instantiate a new child continuation with the given arguments
      newAssignment c:
        newCall("whelp", cont, call)
    # NOTE: mom should now be set via the tail() hook from whelp
    #
    # return the child continuation
    it = makeReturn(contType, it):
      newCall bindName"Continuation":
        Pass.hook newCall(NormNode contType, cont):
          c    # we're basically painting the future

macro cpsMayJump(cont, contType: typed; name: static[string]; n, after: typed): untyped =
  ## The block in `n` is tainted by a `cpsJump` and may require a jump
  ## to enter `after`.
  ##
  ## This macro evaluates `n` and replaces all `{.cpsPending.}` in `n`
  ## with tail calls to `after`.
  let
    name = genProcName(name, "tail", info=n.NormNode)
    cont = cont.asName
    contType = contType.asName
    tail = tailCall(desym cont, contType, name)
  debugAnnotation cpsMayJump, n:
    it = it.replace(isCpsPending, tail)
    if it.firstReturn.isNil:
      it.add tail
    it = newStmtList(makeContProc(name, cont, contType, after), it)

proc restoreBreak(n: NormNode, label = newEmptyNormNode()): NormNode =
  ## restore {.cpsBreak: label.} into break statements
  let match = matchCpsBreak(label)
  proc restorer(n: NormNode): NormNode =
    if match(n):
      let m = newNimNode(nnkBreakStmt, n).add:
                n.breakLabel
      m
    else:
      NilNormNode

  filter(n, restorer)

proc restoreContinue(n: NormNode): NormNode =
  ## restore {.cpsContinue.} into continue statements
  proc restorer(n: NormNode): NormNode =
    if n.isCpsContinue:
      newNimNode(nnkContinueStmt, n).add:
        newEmptyNormNode()
    else:
      NilNormNode

  filter(n, restorer)

macro cpsBlock(cont, contType: typed; name: static[string]; label, n: typed): untyped =
  ## The block with `label` is tainted by a `cpsJump` and may require a
  ## jump to break out of the block.
  ##
  ## This macro evaluates `n` and replaces all `{.cpsBreak.}` in `n` with
  ## `{.cpsPending.}`.
  debugAnnotation cpsBlock, n:
    it = it.replace(matchCpsBreak(label.NormNode), newCpsPending())

macro cpsBlock(cont, contType: typed; name: static[string]; n: typed): untyped =
  ## A block statement tainted by a `cpsJump` and may require a jump to
  ## enter `after`.
  ##
  ## This is just an alias to cpsBlock with an empty label.
  result = getAst(cpsBlock(cont, contType, name, newEmptyNode(), n))

macro cpsWhile(cont, contType: typed; name: static[string];
               cond, n: typed): untyped =
  ## A while statement tainted by a `cpsJump` and may require a jump to
  ## exit the loop.
  ##
  ## This macro evaluates `n` and replaces all `{.cpsPending.}` with a
  ## jump to the loop condition and `{.cpsBreak.}` with `{.cpsPending.}`
  ## to the next control-flow.
  let
    n = NormNode n
    name = genProcName(name, "loop", info=n.NormNode)
    cont = cont.asName
    contType = contType.asName
    tail = tailCall(desym cont, contType, name)
  tail.copyLineInfo n
  debugAnnotation cpsWhile, n:
    # a key first step is to ensure that the loop body, uh, loops, by
    # issuing a tailcall back to the while proc instead falling through
    it.add tail
    var body = newStmtList:
                nnkIfStmt.newTree(  # a conditional test up top,
                  nnkElifBranch.newTree(cond, it), # runs the body if it's true,
                  nnkElse.newTree newCpsBreak(n) # else, runs a break clause
                )
    body = body.multiReplace(
      (NormMatcher isCpsPending, tail),
      (NormMatcher isCpsContinue, tail),
      (matchCpsBreak(), NormNode newCpsPending())
    )
    body.copyLineInfo n
    # we return the while proc and a tailcall to enter it the first time
    it = newStmtList(makeContProc(name, cont, contType, body), tail)

proc mergeExceptBranches(n, ex: NormNode): NormNode =
  ## Rewrite the try statement `n` so that all `except` branches are merged
  ## into one branch, with `ex` assumed to store the exception being handled.
  ##
  ## In the case where there is only one except branch and it's a catch-all
  ## branch, no rewrite will happen.
  result = n
  # If there is at least one except branch with at least one catching constraint
  if n.findChild(it.kind == nnkExceptBranch and it.len > 1) != nil:
    # Copy the try statement and the try body
    result = copyNimNode(n)
    result.add n[0]

    # To achieve the merge, we perform it like so:
    #
    # Assume the AST
    #
    # try:
    #   body
    # except T:
    #   handlerT
    # except:
    #   handler
    #
    # Turn all `except T` branches into: `elif ex of T`.
    # Turn all `except` branches into: `else`.
    # Then place all of them under an `if`, like this:
    #
    # if ex of T:
    #   handlerT
    # else:
    #   handler
    #
    # Then rewrite the AST into:
    #
    # try:
    #   body
    # except:
    #   if ex of T:
    #     handlerT
    #   else:
    #     handler
    let ifStmt = newNimNode(nnkIfStmt)

    for idx in 1 ..< n.len:
      let branch = n[idx]
      # Branch has a matching constraint
      if branch.len > 1:
        let elifBranch = newNimNode(nnkElifBranch, branch)

        # Create the matching condition
        var cond: NormNode
        # Collect the exception constraints, which are the nodes before
        # the very last node
        for idx in 0 ..< branch.len - 1:
          # In normalized AST, the matching constraint is the exception
          # type.
          #
          # To check if the exception is of the matched type, we generates:
          #
          #     ex of (ref T)
          #
          # The reason for using `ref T` is because Nim exception types are
          # defined as object types.
          let match =
            # ex of
            nnkInfix.newTree(bindName"of", ex):
              # ref T
              nnkRefTy.newTree:
                branch[idx]

          # If there aren't any condition
          if cond.isNil:
            # Set the matching constraint as the condition
            cond = match
          else:
            # Push the matching constraint as an alternative match
            cond = nnkInfix.newTree(bindName"or", cond, match)

        # Add the matching condition
        elifBranch.add cond
        # Add the handler body
        elifBranch.add branch.last
        # Add the branch to the if statement
        ifStmt.add elifBranch
      else:
        # This is a plain except branch
        let elseBranch = newNimNode(nnkElse, branch)
        # Add the handler body
        elseBranch.add branch.last
        # Add the branch to the if statement
        ifStmt.add elseBranch

    # In the case where there are no `else` branch (due to the lack of
    # an empty except branch)
    if ifStmt.last.kind != nnkElse:
      # Since there are no handler for other cases, we reraise the exception
      ifStmt.add:
        # else:
        #   raise ex
        nnkElse.newTree:
          newStmtList:
            nnkRaiseStmt.newTree(ex)

    # Add the merged except branch to our try statement
    result.add:
      nnkExceptBranch.newTree:
        newStmtList:
          ifStmt.NormNode

proc wrapContinuationWith(n: NormNode, cont, replace: Name, templ: NormNode): NormNode =
  ## Given the StmtList `n`, return `templ` with children matching `replace`
  ## replaced with the `n`.
  ##
  ## `cont` is the continuation symbol of `n`.
  ##
  ## Perform the replacements on bodies of continuations within `n` as well.
  proc wrapCont(n: NormNode): NormNode =
    ## Wrap the body of continuation `n` with the template
    if n.isCpsCont:
      result = copyNimTree(n)
      let
        nextCont = n.getContSym
        body = result.body.NormNode
        nextTempl = if cont.isSymbol:
                      templ.resym(cont, nextCont)
                    else:
                      templ
      result.body = body.wrapContinuationWith(nextCont, replace, nextTempl)

  result = copyNimTree templ
  # perform body replacement
  result = result.replace(proc(x: NormNode): bool = x == replace):
    newStmtList:
      # wrap all continuations of `n` with the template
      filter(n, wrapCont)

macro cpsWithException(cont, ex, n: typed): untyped =
  ## Given the exception handler continuation `n`, set the global exception of
  ## continuation `cont` in the scope of `n` to `ex` before any code is run.
  ##
  ## At the end of this or its child continuations, the exception will be
  ## restored to what it was before the continuation was run.
  ##
  ## At the end of the exception handler scope, `ex` will be set to `nil`.

  let
    cont = normalizingRewrites cont
    ex = normalizingRewrites ex

  proc withException(n, cont, ex: NormNode): NormNode =
    proc transformer(n: NormNode): NormNode =
      # For scope exits, we just prefix result with our nil assignment
      if n.isScopeExit:
        result = newStmtList()
        result.add newAssignment(ex, newNilLit())
        result.add n

      # If n is a continuation
      elif n.isCpsCont:
        result = copyNimTree n

        let
          nextCont = result.getContSym()
          ex =
            # In case the continuation is a sym, resym it to this continuation
            if asName(cont).isSymbol:
              ex.resym(asName(cont), nextCont)
            else:
              ex

        # If the continuation doesn't have an exception tag
        if not result.hasPragma("cpsHasException"):
          # Tag the continuation with details on where to get
          # the exception symbol.
          #
          # We need to store both the originating continuation and the
          # access AST since pragmas are considered to be *outside*
          # of the procedure and thus will bind to symbols outside if they
          # are not already bound.
          result.pragma.add:
            newCall(bindName"cpsHasException", nextCont, ex)

        result.body =
          # Put the body in a try-except statement to clear `ex` in the case
          # of an unhandled exception.
          nnkTryStmt.newTree(
            # Rewrites the inner continuations, then use it as the try body.
            result.body.NormNode.withException(nextCont, ex),
            # On an exception not handled by the body.
            nnkExceptBranch.newTree(
              bindSym"CatchableError",
              newStmtList(
                # Set `ex` to nil.
                newAssignment(ex, newNilLit()),
                # Then re-raise the exception.
                nnkRaiseStmt.newTree(newEmptyNode())
              )
            )
          )

    result = filter(n, transformer)

  debugAnnotation cpsWithException, n:
    it = it[0].withException(cont, ex)

macro cpsTryExcept(cont, contType: typed; name: static[string];
                   ex, n: typed): untyped =
  ## A try statement tainted by a `cpsJump` and
  ## may require a jump to enter any handler.
  ##
  ## Only rewrite try with except branches.
  ##
  let
    cont = cont.asName
    contType = contType.asName
    ex = normalizingRewrites ex
    temp = genSymUnknown"placeholder"
    handler = genProcName(name, "except", info=n.NormNode)

  debugAnnotation cpsTryExcept, n:
    # unwrap stmtlist and merge all except branches into one
    it = it[0].mergeExceptBranches ex

    # write a try-except clause to wrap all child continuations so that
    # they jump to the handler upon an exception
    let
      newTry = copyNimNode it

    # add the temporary placeholder as the body
    newTry.add(NormNode temp)

    # add an except branch to invoke the handler
    newTry.add:
      nnkExceptBranch.newTree bindSym"CatchableError":
        newStmtList [
          # capture the exception to ex
          newAssignment(ex, newCall(bindName"getCurrentException")),
          # jump to the handler
          cont.tailCall(contType, handler)
        ]

    # the completed rewrite starts with adding our handler
    let rewrote = newStmtList:
      # the handler uses the exception `ex` as its current exception
      newCall(bindName"cpsWithException", cont, ex):
        # the body of the handler is the merged except branch
        makeContProc(handler, cont, contType):
          it.findChild(it.kind == nnkExceptBranch)[0]

    it = rewrote.add:
      # then swap the temporary placeholder with the original try body
      wrapContinuationWith(it[0], cont, temp, newTry)

macro cpsTryFinally(cont, contType: typed; name: static[string];
                    ex, n: typed): untyped =
  ## A try statement tainted by a `cpsJump` and
  ## may require a jump to enter finally.
  ##
  ## Only rewrite try with finally.
  let ex = normalizingRewrites ex
  debugAnnotation cpsTryFinally, n:
    # rewriteIt will wrap our try-finally in a StmtList, so we take it out
    let tryFinally = it[0]
    # use a fresh StmtList as our result
    it = newStmtList()

    # The previous pass should give us a try-finally block, thus the last
    # child is our finally, and the last child of finally is its body.
    let finallyBody = tryFinally.last.last

    # make cont a Name for that typed feeling
    let
      cont = cont.asName
      contType = contType.asName
      name = genProcName(name, "finally", info=n.NormNode)

    # Turn the finally into a continuation leg.
    let final = makeContProc(name, cont, contType, finallyBody)

    # A property of `finally` is that it inserts itself in the middle
    # of any scope exit attempt before performing the scope exit.
    #
    # To achieve this, we generates specialized finally legs that
    # dispatches to each exit points.
    #
    # XXX: While this generator works perfectly for our usage, it is not
    # the best way to template. Preferrably we would use generics, which
    # is blocked by nim-lang/Nim#18254.
    proc generateContinuation(templ, replace, replacement: NormNode): ProcDef =
      ## Given a continuation template `templ`, replace all `replace` with
      ## `replacement`, then generate a new set of symbols for all
      ## continuations within.
      # A simple mapping of node and what to replace it with
      var replacements: Table[NormNode, NormNode]
      proc generator(n: NormNode): NormNode =
        # If it's a continuation
        if n.isCpsCont:
          result = copyNimTree(n)
          # Desym the continuation to unshare it with other copies
          let
            cont = result.getContSym
            name = n.name.NormNode
          replacements[cont] = desym cont
          # Make sure that we also desym the parameter
          result.params = result.params.NormNode.filter(generator)
          # Generate a new name for this continuation, then add it to our
          # replacement table
          replacements[name] = genSym(name.symKind, name.strVal).NormNode
          result.name = replacements[name]
          # Rewrite the body to update the references within it
          result.body = result.body.NormNode.filter(generator)

        elif n in replacements:
          result = copyNimTree(replacements[n])

      replacements[replace] = replacement
      result = asProcDef(filter(templ, generator))

    # Create a symbol to use as the placeholder for the finally leg next jump.
    let nextJump = genSymUnknown"nextJump"

    # Replace all cpsPending within the final leg with this placeholder
    final.body = final.body.replace(isCpsPending, nextJump)

    # This is a table of exit points, the key being the exit annotation, and
    # the value being the finally leg specialized to that exit.
    var exitPoints: OrderedTable[NormNode, ProcDef]
    proc redirectExits(n: NormNode, cont: Name, final: NormNode): NormNode =
      ## Redirect all scope exits in `n` so that they jump through a
      ## specialized version of `final`.
      proc redirector(n: NormNode): NormNode =
        if n.isCpsCont:
          let nextCont = n.getContSym
          result = n
          result.body = asProcDef(result).body.redirectExits(nextCont, final)
        elif n.isScopeExit:
          # If this exit point is not recorded yet
          if n notin exitPoints:
            # Create a new continuation containing the exit point
            exitPoints[n] = final.generateContinuation(nextJump):
              n

          # Replace it with a tail call to finally with the exit point as the
          # destination.
          result = cont.tailCall(contType, exitPoints[n].name)

      n.filter(redirector)

    # Redirect all exits within the finally
    let body = tryFinally[0].redirectExits(cont, final)

    # Add the specialized finally legs we generated to the AST
    for exit in exitPoints.values:
      it.add exit

    # While we covered all the exits explicitly written the body, we haven't
    # covered the exits that are not explicitly written in the body, which are
    # unhandled exceptions.
    #
    # Generate a finally leg that serve as an exception handler and will
    # raise the captured exception on exit
    let
      reraiseStmt = newStmtList:
        # de-sym our `ex` so that it uses the continuation of where it is
        # replaced into
        nnkRaiseStmt.newTree(ex.resym(cont, desym cont))

      reraise = final.generateContinuation(nextJump):
        reraiseStmt

    # Unlike other finally handler, re-raise must always happen after the
    # finally body and scope escape should not be possible.
    #
    # The easiest way to get this done is to rewrite all scope exits in the
    # handler to the re-raise statement.
    reraise.body = reraise.body.replace(isScopeExit):
      reraiseStmt

    # Add this leg to the AST
    it.add:
      # Make it uses `ex` as its current exception and clear it on exit
      newCall(bindName"cpsWithException", cont, ex):
        reraise

    # Now we create a try-except template to catch any unhandled exception that
    # might occur in the body, then jump to reraise.
    let
      tryTemplate = copyNimNode(tryFinally)
      placeholder = genSymLet()

    # Use the placeholder for the actual body
    tryTemplate.add placeholder

    # Add an except branch to jump to our finally
    tryTemplate.add:
      nnkExceptBranch.newTree bindSym"CatchableError":
        newStmtList(
          # Stash the exception
          newAssignment(ex, newCall(bindName"getCurrentException")),
          # Then jump to reraise
          cont.tailCall(contType, reraise.name)
        )

    # Wrap the body with this template and we are done
    it.add body.wrapContinuationWith(cont, placeholder, tryTemplate)

proc newAnnotation(env: Env; n: NormNode; a: static[string]): NormNode =
  result = newCall bindName(a)
  result.copyLineInfo n
  result.add(NormNode env.first, NormNode env.root)
  result.add newLit(env.procedure)

proc setupChildContinuation(env: var Env; call: Call): (Name, NormNode) =
  ## create a new child continuation variable and add it to the
  ## environment.  return the child's symbol and its environment type.
  let child = genSymVar("child", info = call)
  let etype = pragmaArgument(call, "cpsEnvironment")
  env.localSection newIdentDef(child, etype.TypeExpr)
  # XXX: also sniff and return the child continuation's "user type"?
  result = (child, etype)

proc shimAssign(env: var Env; store: NormNode, expr: NormNode, tail: NormNode): NormNode =
  ## this rewrite supports `x = contProc()`, `let x = contProc()`,
  ## `x = Type(contProc())` and `let x = Type(contProc())`
  if not expr.isCpsConvCall:
    return expr.errorAst("cps doesn't know how to shim this")

  let call = asCall:
    expr.findChildRecursive(isCpsCall)

  # create the unshimmed assignment
  var assign = newStmtList()
  case store.kind
  of nnkVarSection, nnkLetSection:
    # stuff the local into the env
    env.localSection(store.VarLet, assign)
  of nnkSym, nnkIdent, nnkDotExpr:
    # perform a normal assignment
    assign.add:
      newAssignment(store, expr)
  else:
    return store.errorAst("unsupported store")

  # swap the call in the assignment statement(s)
  let (child, etype) = setupChildContinuation(env, call)
  let recovery = newCall("recover".asName, child)
  assign = assign.childCallToRecoverResult(call, recovery)

  # compose the rewrite as an assignment and any remaining tail
  var body =
    NormNode:
      genAstOpt({}, assign = assign.NimNode, tail = tail.NimNode,
                child = child.NimNode, etype = etype.NimNode,
                root = env.root.NimNode, identity = env.identity.NimNode,
                dealloc = Dealloc.sym.NimNode):
        case child.state
        of Dismissed:
          # the child moved; dismiss ourselves
          dismiss()
        of Finished:
          assign
          when false:
            # we don't dealloc here, but maybe we should
            dealloc(etype, child)
          tail
        of Running:
          # the child is still running; someone is trying to be clever
          raise Defect.newException:
            "parent continuation ran before child finished"

  # the shim is simply an annotation comprised of annotations
  let shim = env.newAnnotation(call, "cpsContinuationJump")
  shim.add env.annotate(call)
  shim.add env.annotate(child)
  shim.add env.annotate(body)
  result = shim

proc annotate(parent: var Env; n: NormNode): NormNode =
  ## annotate `input` or otherwise prepare it for conversion into a
  ## mutually-recursive cps convertible form; the `parent` environment
  ## may be mutated as a side-effect, otherwise a new environment will be
  ## created which points to this parent.

  # the accumulated environment
  var env =
    if n.kind == nnkStmtList:
      newEnv(parent)
    else:
      parent

  # first, rewrite any symbols that have been moved to the env
  var n = rewriteSymbolsIntoEnvDotField(parent, n)

  # the result is a copy of the current node
  result = copyNimNode n
  result.doc "start annotate at " & n.lineAndFile

  template endAndReturn() {.dirty.} =
    ## this "wraps" the returned AST in an end comment for easier debugging
    return

  # we're going to iterate over the (non-comment) children
  for i, nc in n.pairs:
    if nc.isNil:
      result.add nc
      continue

    template anyTail(): untyped {.dirty.} =
      if i < n.len - 1:
        newStmtList(n[i+1 .. ^1])
      else:
        newStmtList()

    # if our direct parent is a try statement
    if n.kind == nnkTryStmt:
      # if this is the first node
      if i == 0:
        # and its a cps block
        if nc.isCpsBlock:
          # wrap it in a statement list then process it.
          #
          # we have to do this due to the structure of a try statement:
          #
          # TryStmt
          #   <block being tried>
          #   ExceptBranch
          #   Finally
          #
          # if "block" happens to be a single statement, of which a nnkStmtList
          # will not be emitted by the compiler, then our splitting logic will
          # assume that the neighboring ExceptBranch/Finally is a part of the
          # same execution context, which is incorrect.
          result.add:
            env.annotate newStmtList(nc)

          continue

    # if it's a cps call,
    if nc.isCpsCall:
      var jumpCall: NimNode
      let nc = asCall(nc)
      if nc.len > 0 and nc.impl.hasPragma"cpsBootstrap":
        jumpCall = env.newAnnotation(nc, "cpsContinuationJump")
        let (child, _) = setupChildContinuation(env, nc)
        jumpCall.add env.annotate(nc)
        jumpCall.add env.annotate(child)
      else:
        jumpCall = env.newAnnotation(nc, "cpsJump")
        jumpCall.add env.annotate(nc)
      jumpCall.add env.annotate(anyTail())
      result.add jumpCall
      endAndReturn()

    # we deal with the body of a try when processing the try itself,
    # so check to see if our parent is a try statement, and if not...
    if n.kind != nnkTryStmt:

      # and (only) if it's not the last node, we need to evaluate
      # whether we (may) want to issue a jump at this point
      if i < n.len-1 and nc.isCpsBlock:

        case nc.kind
        of nnkOfBranch, nnkElse, nnkElseExpr, nnkElifBranch, nnkElifExpr,
           nnkExceptBranch, nnkFinally:
          # these nodes will be handled by their respective parent nodes
          discard
        else:
          # control-flow will end here with a MayJump annotation
          let jumpCall = env.newAnnotation(nc, "cpsMayJump")
          jumpCall.add:
            # this child node
            env.annotate newStmtList(nc)
          jumpCall.add:
            # subsequent siblings
            env.annotate newStmtList(n[i+1..^1])
          result.add jumpCall
          endAndReturn()

    case nc.kind
    of nnkReturnStmt:
      # add a return statement with a potential result assignment
      # stored in the environment; note that we're adding a new
      # return statement without regard to the contents of `result`
      # because it may hold, eg. `ElifBranch ...` or similar.
      result.add:
        env.annotate:
          env.rewriteReturn nc
      endAndReturn()

    of nnkVarSection, nnkLetSection:
      let section = asVarLet nc
      if section.val.isCpsConvCall:
        let assign = section
        # shimming `let x = foo()` or `let (a, b) = bar()` or `let x = T(foo())`
        result.add:
          env.shimAssign(assign, assign.val):
            anyTail()
        endAndReturn()
      else:
        # add definitions into the environment
        env.localSection(section, result)

    of nnkAsgn:
      if nc.last.isCpsConvCall:
        # shimming `x = foo()` or `x = T(foo())`
        result.add:
          if nc.len >= 2:
            env.shimAssign(nc[0], nc[1]):
              anyTail()
          else:
            nc.errorAst "i expected at least two kids on an nkAsgn"
        endAndReturn()
      elif nc.last.isCpsBlock:
        result.add:
          nc.errorAst "cps only supports calls here"
      else:
        result.add:
          env.annotate(nc)

    of nnkForStmt:
      if nc.isCpsBlock:
        result.add:
          errorAst("for loop with a cps call inside is not supported", nc)
      else:
        # this is not a cps block, so all the break and continue
        # statements should be preserved
        result.add:
          restoreContinue:
            restoreBreak:
              env.annotate nc

    of nnkContinueStmt:
      result.add newCpsContinue(nc)

    of nnkBreakStmt:
      result.add:
        newCpsBreak(nc, nc.breakLabel)

    of nnkBlockStmt:
      if nc.isCpsBlock:
        let jumpCall = env.newAnnotation(nc, "cpsBlock")
        if nc[0].kind != nnkEmpty:
          # add label if it exists
          jumpCall.add nc[0]
        jumpCall.add:
          env.annotate newStmtList(nc[1])
        result.add jumpCall
        endAndReturn()
      else:
        # this is not a cps block, so all the break
        # statements should be preserved
        var transformed = env.annotate(nc)
        transformed = transformed.restoreBreak(nc[0])
        result.add transformed

    of nnkWhileStmt:
      if nc.isCpsBlock:
        let jumpCall = env.newAnnotation(nc, "cpsWhile")
        # add condition
        jumpCall.add env.annotate nc[0]
        # add body
        jumpCall.add env.annotate newStmtList(nc[1])
        result.add jumpCall
        endAndReturn()
      else:
        # this is not a cps block, so all the break and
        # continue statements should be preserved
        result.add:
          restoreContinue:
            restoreBreak:
              env.annotate nc

    of nnkTryStmt:
      if nc.isCpsBlock:
        let
          final = nc.findChild(it.kind == nnkFinally)
          noFinally = final.isNil
          noExceptBranch = nc.findChild(it.kind == nnkExceptBranch).isNil
          tryBody =
            if noFinally or noExceptBranch:
              nc
            else:
              # try/try-except/finally
              wrappedFinally(nc, final)

        var jumpCall =
          if noFinally: env.newAnnotation(nc, "cpsTryExcept")
          else:         env.newAnnotation(nc, "cpsTryFinally")

        jumpCall.add env.genException()  # exception access
        jumpCall.add:
          newStmtList env.annotate(tryBody)   # try body
        result.add jumpCall
        endAndReturn()
      else:
        # try statement with no cps complications
        result.add env.annotate(nc)

    of nnkDiscardStmt:
      # If the discarded expression is a cps call
      if nc[0].isCpsCall:
        result.add:
          # Rewrite it into an inline call, which cause them to be treated like
          # result-less calls by the transformation.
          env.annotate newStmtList(nc[0])
      elif nc[0].isCpsConvCall:
        # If the discarded expression is a conversion of a call result
        let conv = nc[0].asConv

        # Rewrite it into
        #
        # let tmp: Type = Type(call)
        #
        # And let assignment rewrite handle the rest.
        #
        # TODO: either make `tmp` not stored in the continuation, or get rid of
        # it entirely.
        result.add:
          env.annotate:
            newStmtList:
              newLetIdentDef(genSymLet(info = nc), conv.typ):
                # XXX: Not sure why I have to convert here, the type is already
                # specified in allowAutoDowngradeNormalizedNode
                NormNode conv
      else:
        result.add env.annotate(nc)

    # not a statement cps is interested in
    else:
      result.add env.annotate(nc)
  endAndReturn()

macro cpsResolver(tipe: typed; contType: typed; n: typed): untyped =
  ## resolve any left over cps control-flow annotations
  ##
  ## this is not needed, but it's here so we can change this to
  ## a sanity check pass later.
  proc danglingCheck(n: NormNode): NormNode =
    ## look for un-rewritten control-flow then replace them with errors
    proc dangle(n: NormNode): NormNode =
      if n.isScopeExit:
        errorAst(n, "cps error: un-rewritten cps control-flow")
      else: n
    filter(n, dangle)

  # grabbing the first argument to the proc as an identifier
  let
    n = asProcDef(NormNode n)
      ## we assume `n` is normalized as cpsResolver runs after other rewrites
    cont = desym n.firstCallParam.name

  debugAnnotation cpsResolver, n.NimNode:
    # replace all `pending` and `terminate` with the end of continuation
    it = replace(it, proc(x: NormNode): bool = x.isCpsPending or x.isCpsTerminate):
      if n.firstReturn.isNil:
        terminator(cont, contType.asName, tipe.NormNode)
      else:
        doc"omitted a return in the resolver".NormNode

    it = danglingCheck it

macro cpsFloater(n: typed): untyped =
  ## float all `{.cpsLift.}` to top-level
  let n = NormNode n
  proc floater(n: NormNode): NormNode =
    var floated = newStmtList()
    proc float(n: NormNode): NormNode =
      if not n.isNil and n.hasPragma("cpsLift"):
        var n = n.stripPragma("cpsLift")
        floated.add:
          floater n
        result = newEmptyNormNode()
    result = newStmtList [floated, filter(n, float)]

  result = floater:
    copyNimTree n

macro cpsManageException(name: static[string]; n: typed): untyped =
  ## rewrites all continuations in `n` containing an exception so that exception
  ## become the "current" exception of that continuation while preserving the
  ## environment outside cps
  proc manage(n: NormNode): NormNode =
    ## Build a manager for every continuation with an exception in `n`.
    ##
    ## This manager will:
    ## - Preserve the exception outside of CPS on enter-exit.
    ## - Set the exception to what the continuation want for its duration
    ## - Should the continuation raise, connect the exception to the stack
    ##   outside of CPS.
    if n.isCpsCont:
      let
        n = asRoutineDef(n) # known because of isCpsCont
        hasException = n.pragma.findChild(it.kind == nnkCall and
                                          it[0] == bindSym"cpsHasException")
      # If `n` is a continuation with exception
      if not hasException.isNil:
        # Create a copy of this continuation and rename it
        let
          n = asProcDef(n)
          inner = clone(n, n.body)
        inner.name = genProcName(name, "managed-" & $inner.name, info=n)
        # Copy the continuation pragmas, but remove the "has exception" tag
        inner.pragma = n.pragma.stripPragma("cpsHasException")
        # Rewrite the continuations contained in `inner` as well
        inner.body = inner.body.filter(manage)

        # Make an another clone, but with an empty body instead
        #
        # This will be the manager and will replace `n`
        let c = clone(n, newStmtList())

        # Obtain the continuation name to replace it
        c.name = n.name
        # Take its pragmas too, but without cpsHasException, of course
        c.pragma = n.pragma.stripPragma("cpsHasException")

        # Desym the continuation symbol to detach it from the inner
        # continuation
        c.formalParams = FormalParams:
          n.formalParams.replace((desym n.getContSym)):
            it == n.getContSym

        # Now let's go down to business
        # Add the inner continuation inside the manager
        c.body.add inner

        let
          cont = c.getContSym
          innerFn = inner.name.NimNode

          # Extract the continuation symbol from the annotation
          exCont = asName(hasException[1])
          # Take the exception access from the annotation and resym it to
          # use our symbol
          ex = hasException[2].resym(exCont, cont)

        # Add the manager itself
        c.body.add:
          NormNode:
            genAst(cont = cont.NimNode, ex = ex.NimNode, innerFn, result = ident"result"):
              # Save the old exception from the enviroment
              let oldException = getCurrentException()
              # Set the exception to what is in the continuation
              setCurrentException(ex)
              try:
                # Run our continuation
                result = innerFn(cont)
                # Restore the old exception
                setCurrentException(oldException)
              except CatchableError:
                # If the continuation raise an unhandled exception,
                # capture it.
                let e = getCurrentException()
                # Restore the old exception
                setCurrentException(oldException)
                # Now reraise the continuation's exception, which will
                # make `oldException` as `e`'s parent, preserving the
                # exception stack outside of CPS
                raise e
        result = c

  debugAnnotation cpsManageException, n:
    it = it.filter(manage)

proc unwind*(c: sink Continuation; e: ref Exception): Continuation {.used,
                                                                     cpsMagic.} =
  ## Reimplement this symbol to customize stack unwind.
  if not c.isNil:
    if c.mom.isNil:
      if e.isNil:
        result = c
      else:
        c.ex = e
        raise e
    else:
      result = move c.mom
      result.ex = e

macro cpsHandleUnhandledException(contType: typed; n: typed): untyped =
  ## rewrites all continuations in `n` so that any unhandled exception will
  ## be first copied into the `ex` variable, then raise

  {.warning: "compiler workaround here, see: https://github.com/nim-lang/Nim/issues/18352".}
  let contType = contType

  proc handle(n: NormNode): NormNode =
    if n.isCpsCont:
      let
        cont = n.getContSym
        fnDef = asRoutineDef(copy n) # more precise type
      # Rewrite continuations within this continuation body as well
      fnDef.body = fnDef.body.filter(handle)
      # Put the body in a try-except to capture the unhandled exception
      fnDef.body = genAstOpt({}, contType, cont = NimNode cont,
                             body = NimNode fnDef.body):
        bind getCurrentException
        var ex: ref Exception
        try:
          body
          # ensure the body includes a terminator
          ex = Defect.newException "unterminated unhandled exception"
        except CatchableError:
          ex = getCurrentException()
        return Continuation: unwind(contType(cont), ex)
      result = fnDef

  debugAnnotation cpsHandleUnhandledException, n:
    it = it.filter(handle)

proc cpsTransformProc(tipe: NimNode, n: NimNode): NormNode =
  ## rewrite the target procedure in Continuation-Passing Style

  # keep the original symbol of the proc
  let originalProcSym = asName(n[0])
  # make the AST easier for us to consume
  var n = normalizeProcDef n
  # establish a new environment with the supplied continuation type;
  # accumulates byproducts of cps in the types statement list
  var types = newStmtList()

  # creating the env with the continuation type,
  # and adding proc parameters to the env
  var env = newEnv(types, tipe.asName, n.returnParam, $n.name)

  # add parameters into the environment
  for defs in n.callingParams:
    if defs.typ.kind == nnkVarTy:
      errorGot "cps does not support var parameters", n
    env.localSection(defs)

  # make a name for the new procedure that won't clash
  let name = genSymProc($n.name, info = n)

  # we can't mutate typed nodes, so copy ourselves
  n = clone n
  n.addPragma "used"  # avoid gratuitous warnings

  # the whelp is a limited bootstrap that merely creates
  # the continuation without invoking it in a trampoline
  let whelp = env.createWhelp(n, name)
  let whelpShim = env.createCallbackShim(whelp)

  # setup the bootstrap using the old proc name,
  # but the first leg will be the new proc name
  let booty = env.createBootstrap(n, name)

  # we store a pointer to the whelp on the bootstrap
  booty.addPragma(bindName"cpsBootstrap", whelp.name)

  # we store a pointer to the whelp shim on the bootstrap
  booty.addPragma(bindName"cpsCallbackShim", whelpShim.name)

  # like magics, the bootstrap must jump
  booty.addPragma "cpsMustJump"

  # give the booty the sym we got from the original, which
  # causes the bootstrap symbol to adopt the original procedure's symbol;
  # this is a workaround for nim bugs:
  # https://github.com/nim-lang/Nim/issues/18203 (used hints)
  # https://github.com/nim-lang/Nim/issues/18235 (export leaks)
  booty.name = originalProcSym

  # now we'll reset the name of the new proc
  # XXX: not sure why we need to desym, but we have to or it won't be
  # matched inside booty
  n.name = desym(name)

  # do some pruning of these typed trees.
  for p in [booty, n]:
    while len(p) > 7: p.NimNode.del(7)     # strip out any extra result field

  # Replace the proc params: its sole argument and return type is T:
  #   proc name(continuation: T): T
  n.formalParams =
    # https://github.com/nim-lang/Nim/issues/18365
    newFormalParams(asTypeExpr bindName"Continuation", env.firstDef)

  var body = newStmtList()     # a statement list will wrap the body
  body.introduce {Coop, Pass, Trace, Head, Tail, Alloc, Dealloc}
  body.add:
    Trace.hook env.first, n    # hooking against the proc (minus cloned body)
  body.add n.body              # add in the cloned body of the original proc

  # replace the result symbols with the environment's result field
  body = env.rewriteResult body

  # perform sym substitutions (or whatever)
  n.body = env.rewriteSymbolsIntoEnvDotField body

  # transform defers
  n.body = rewriteDefer n.body

  # rewrite non-yielding cps calls
  n.body = env.rewriteVoodoo n.body

  # annotate the proc's body
  n.body = env.annotate n.body

  if n.body.firstReturn.isNil:
    # fixes https://github.com/nim-works/cps/issues/145
    # by ensuring that we always rewrite termination
    n.body.add newCpsPending()

  # tag the proc as a cps continuation
  n.pragma.add bindName"cpsCont"

  # run other stages
  {.warning: "compiler bug workaround, see: https://github.com/nim-lang/Nim/issues/18349".}
  let processMainContinuation =
    newCall(bindSym"cpsFloater"):
      newCall(bindSym"cpsResolver", NimNode env.identity, NimNode env.root):
        newCall(bindSym"cpsManageException", newLit env.procedure):
          newCall(bindSym"cpsHandleUnhandledException", NimNode env.root):
            NormNode n

  # the `recover` operator recovers the result of a continuation
  #
  # copy the exported-ness from the original proc so that it can be used
  # from other modules
  let recover = env.createRecover(exported = originalProcSym.isExported)
  # pluck out the FIRST procedure from the list; this is the shim
  let recoverProc = recover.findChild(it.kind == nnkProcDef)

  for p in [whelp, booty]:
    # storing the source environment on helpers
    p.addPragma(bindName"cpsEnvironment", env.identity)

  for p in [booty]:
    # storing the result fetcher on the booty
    p.addPragma(bindName"cpsResult", recoverProc.name)

  for p in [whelp, whelpShim]:
    # storing the result fetcher on the whelp and whelp shim
    p.addPragma(bindName"cpsResult", recoverProc.name)
    # storing the return type on the whelp and whelp shim
    p.addPragma(bindName"cpsReturnType", copyOrVoid recoverProc.params[0])

  # "encouraging" a write of the current accumulating type
  env = env.storeType(force = off)

  # generated proc bodies, remaining proc, result fetchers, whelp, bootstrap
  result = newStmtList(types, processMainContinuation, recover.NormNode,
                       whelp, whelpShim, booty)

  # this is something that happens a lot in cps-generated code, so hide it
  # here to not spam the user with hints.
  #
  # any hints coming from the user code would be emitted by the compiler
  # before they enter cps, so we don't need to care about those.
  #
  # TODO: we should track down why these hints occur.
  result = NormNode:
    quote:
      {.push hint[ConvFromXtoItselfNotNeeded]: off.}
      `result`
      {.pop.}

  result = workaroundRewrites result

macro cpsTransform*(tipe, n: typed): untyped =
  ## This is the macro performing the main cps transformation
  debug("cpsTransform", n, Original)
  result = cpsTransformProc(tipe, n)
  debug("cpsTransform", result, Transformed, n)

proc looksLikeCallback(n: NimNode): bool =
  ## true if the symbol appears to be of the Callback persuasion.
  case n.kind
  of nnkEmpty:
    false
  of nnkDotExpr:
    looksLikeCallback(n.last)
  of nnkSym:
    looksLikeCallback(getTypeImpl n)
  of nnkObjectTy:
    looksLikeCallback(n.last)
  of nnkRecList:
    looksLikeCallback(n[0])
  of nnkIdentDefs:
    if n[0].repr == "fn":
      looksLikeCallback(n[1])
    else:
      false
  of nnkProcTy:
    for node in n.pragma:
      if node.kind == nnkCall:
        if node[0].strVal == "cpsCallback":
          return true
    false
  else:
    false

macro naturalize(kind: static[NimNodeKind]; callback: typed;
                 args: varargs[untyped]): untyped =
  ## perform a conditional typed rewrite for natural callback syntax inside cps
  if callback.looksLikeCallback:
    # convert it to callback.call(...)
    result = macros.newTree(kind, newDotExpr(callback, bindSym"call"))
    for arg in args.items:
      result.add arg
    # wrap that in recover(callback, ...)
    result = newCall(bindSym"recover", callback, result)
  else:
    result = kind.newTree(desym callback)
    for arg in args.items:
      result.add arg

proc unwrapAnyDotExpr(n: NimNode): seq[NimNode] =
  ## turn a caller like foo.inc into @[inc, foo] so that we can flatten/reorder
  ## arguments correctly
  case n.kind
  of nnkDotExpr:
    @[n[1], n[0]]
  else:
    @[n]

proc rewriteCalls*(n: NimNode): NimNode =
  ## rewriting `callback(x)` into `recover(callback, call(callback, x))` for use
  ## inside of an untyped pass; this should be applied only to Callback symbols...
  proc recall(n: NimNode): NimNode =
    case n.kind
    of CallNodes:
      result = newCall(bindSym"naturalize", newLit(n.kind))
      result.add unwrapAnyDotExpr(n[0])  # help foo.inc(...) into inc(foo, ...)
      result.add n[1..^1]
    else:
      discard
  result = filter(n, recall)

proc performUntypedPass*(tipe: NimNode; n: NimNode): NimNode =
  ## Perform any rewrites needed prior to a `.cps: T.` transformation.
  if n.kind != nnkProcDef: return n
  result = n
  result.body = rewriteCalls result.body
