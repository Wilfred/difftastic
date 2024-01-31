#
#
#           The Nim Compiler
#        (c) Copyright 2013 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# included from cgen.nim

when defined(nimCompilerStacktraceHints):
  import std/stackframes

proc getNullValueAuxT(p: BProc; orig, t: PType; obj, constOrNil: PNode,
                      result: var Rope; count: var int;
                      isConst: bool, info: TLineInfo)

# -------------------------- constant expressions ------------------------

proc rdSetElemLoc(conf: ConfigRef; a: TLoc, typ: PType; result: var Rope)

proc int64Literal(i: BiggestInt; result: var Rope) =
  if i > low(int64):
    result.add "IL64($1)" % [rope(i)]
  else:
    result.add "(IL64(-9223372036854775807) - IL64(1))"

proc uint64Literal(i: uint64; result: var Rope) = result.add rope($i & "ULL")

proc intLiteral(i: BiggestInt; result: var Rope) =
  if i > low(int32) and i <= high(int32):
    result.add rope(i)
  elif i == low(int32):
    # Nim has the same bug for the same reasons :-)
    result.add "(-2147483647 -1)"
  elif i > low(int64):
    result.add "IL64($1)" % [rope(i)]
  else:
    result.add "(IL64(-9223372036854775807) - IL64(1))"

proc intLiteral(i: Int128; result: var Rope) =
  intLiteral(toInt64(i), result)

proc genLiteral(p: BProc, n: PNode, ty: PType; result: var Rope) =
  case n.kind
  of nkCharLit..nkUInt64Lit:
    var k: TTypeKind
    if ty != nil:
      k = skipTypes(ty, abstractVarRange).kind
    else:
      case n.kind
      of nkCharLit: k = tyChar
      of nkUInt64Lit: k = tyUInt64
      of nkInt64Lit: k = tyInt64
      else: k = tyNil # don't go into the case variant that uses 'ty'
    case k
    of tyChar, tyNil:
      intLiteral(n.intVal, result)
    of tyBool:
      if n.intVal != 0: result.add "NIM_TRUE"
      else: result.add "NIM_FALSE"
    of tyInt64: int64Literal(n.intVal, result)
    of tyUInt64: uint64Literal(uint64(n.intVal), result)
    else:
      result.add "(("
      result.add getTypeDesc(p.module, ty)
      result.add ")"
      intLiteral(n.intVal, result)
      result.add ")"
  of nkNilLit:
    let k = if ty == nil: tyPointer else: skipTypes(ty, abstractVarRange).kind
    if k == tyProc and skipTypes(ty, abstractVarRange).callConv == ccClosure:
      let id = nodeTableTestOrSet(p.module.dataCache, n, p.module.labels)
      let tmpName = p.module.tmpBase & rope(id)
      if id == p.module.labels:
        # not found in cache:
        inc(p.module.labels)
        p.module.s[cfsStrData].addf(
             "static NIM_CONST $1 $2 = {NIM_NIL,NIM_NIL};$n",
             [getTypeDesc(p.module, ty), tmpName])
      result.add tmpName
    elif k in {tyPointer, tyNil, tyProc}:
      result.add rope("NIM_NIL")
    else:
      result.add "(($1) NIM_NIL)" % [getTypeDesc(p.module, ty)]
  of nkStrLit..nkTripleStrLit:
    let k = if ty == nil: tyString
            else: skipTypes(ty, abstractVarRange + {tyStatic, tyUserTypeClass, tyUserTypeClassInst}).kind
    case k
    of tyNil:
      genNilStringLiteral(p.module, n.info, result)
    of tyString:
      # with the new semantics for not 'nil' strings, we can map "" to nil and
      # save tons of allocations:
      if n.strVal.len == 0 and optSeqDestructors notin p.config.globalOptions:
        genNilStringLiteral(p.module, n.info, result)
      else:
        genStringLiteral(p.module, n, result)
    else:
      result.add makeCString(n.strVal)
  of nkFloatLit, nkFloat64Lit:
    if ty.kind == tyFloat32:
      result.add rope(n.floatVal.float32.toStrMaxPrecision)
    else:
      result.add rope(n.floatVal.toStrMaxPrecision)
  of nkFloat32Lit:
    result.add rope(n.floatVal.float32.toStrMaxPrecision)
  else:
    internalError(p.config, n.info, "genLiteral(" & $n.kind & ')')

proc genLiteral(p: BProc, n: PNode; result: var Rope) =
  genLiteral(p, n, n.typ, result)

proc bitSetToWord(s: TBitSet, size: int): BiggestUInt =
  result = 0
  for j in 0..<size:
    if j < s.len: result = result or (BiggestUInt(s[j]) shl (j * 8))

proc genRawSetData(cs: TBitSet, size: int; result: var Rope) =
  if size > 8:
    var res = "{\n"
    for i in 0..<size:
      res.add "0x"
      res.add "0123456789abcdef"[cs[i] div 16]
      res.add "0123456789abcdef"[cs[i] mod 16]
      if i < size - 1:
        # not last iteration
        if i mod 8 == 7:
          res.add ",\n"
        else:
          res.add ", "
      else:
        res.add "}\n"

    result.add rope(res)
  else:
    intLiteral(cast[BiggestInt](bitSetToWord(cs, size)), result)

proc genSetNode(p: BProc, n: PNode; result: var Rope) =
  var size = int(getSize(p.config, n.typ))
  let cs = toBitSet(p.config, n)
  if size > 8:
    let id = nodeTableTestOrSet(p.module.dataCache, n, p.module.labels)
    let tmpName = p.module.tmpBase & rope(id)
    if id == p.module.labels:
      # not found in cache:
      inc(p.module.labels)
      p.module.s[cfsStrData].addf("static NIM_CONST $1 $2 = ",
           [getTypeDesc(p.module, n.typ), tmpName])
      genRawSetData(cs, size, p.module.s[cfsStrData])
      p.module.s[cfsStrData].addf(";$n", [])
    result.add tmpName
  else:
    genRawSetData(cs, size, result)

proc getStorageLoc(n: PNode): TStorageLoc =
  ## deadcode
  case n.kind
  of nkSym:
    case n.sym.kind
    of skParam, skTemp:
      result = OnStack
    of skVar, skForVar, skResult, skLet:
      if sfGlobal in n.sym.flags: result = OnHeap
      else: result = OnStack
    of skConst:
      if sfGlobal in n.sym.flags: result = OnHeap
      else: result = OnUnknown
    else: result = OnUnknown
  of nkDerefExpr, nkHiddenDeref:
    case n[0].typ.kind
    of tyVar, tyLent: result = OnUnknown
    of tyPtr: result = OnStack
    of tyRef: result = OnHeap
    else: doAssert(false, "getStorageLoc")
  of nkBracketExpr, nkDotExpr, nkObjDownConv, nkObjUpConv:
    result = getStorageLoc(n[0])
  else: result = OnUnknown

proc canMove(p: BProc, n: PNode; dest: TLoc): bool =
  # for now we're conservative here:
  if n.kind == nkBracket:
    # This needs to be kept consistent with 'const' seq code
    # generation!
    if not isDeepConstExpr(n) or n.len == 0:
      if skipTypes(n.typ, abstractVarRange).kind == tySequence:
        return true
  elif n.kind in nkStrKinds and n.strVal.len == 0:
    # Empty strings are codegen'd as NIM_NIL so it's just a pointer copy
    return true
  result = n.kind in nkCallKinds
  #if not result and dest.k == locTemp:
  #  return true

  #if result:
  #  echo n.info, " optimized ", n
  #  result = false

proc genRefAssign(p: BProc, dest, src: TLoc) =
  if (dest.storage == OnStack and p.config.selectedGC != gcGo) or not usesWriteBarrier(p.config):
    linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  elif dest.storage == OnHeap:
    linefmt(p, cpsStmts, "#asgnRef((void**) $1, $2);$n",
            [addrLoc(p.config, dest), rdLoc(src)])
  else:
    linefmt(p, cpsStmts, "#unsureAsgnRef((void**) $1, $2);$n",
            [addrLoc(p.config, dest), rdLoc(src)])

proc asgnComplexity(n: PNode): int =
  if n != nil:
    case n.kind
    of nkSym: result = 1
    of nkRecCase:
      # 'case objects' are too difficult to inline their assignment operation:
      result = 100
    of nkRecList:
      for t in items(n):
        result += asgnComplexity(t)
    else: discard

proc optAsgnLoc(a: TLoc, t: PType, field: Rope): TLoc =
  assert field != ""
  result.k = locField
  result.storage = a.storage
  result.lode = lodeTyp t
  result.r = rdLoc(a) & "." & field

proc genOptAsgnTuple(p: BProc, dest, src: TLoc, flags: TAssignmentFlags) =
  let newflags =
    if src.storage == OnStatic:
      flags + {needToCopy}
    elif tfShallow in dest.t.flags:
      flags - {needToCopy}
    else:
      flags
  let t = skipTypes(dest.t, abstractInst).getUniqueType()
  for i in 0..<t.len:
    let t = t[i]
    let field = "Field$1" % [i.rope]
    genAssignment(p, optAsgnLoc(dest, t, field),
                     optAsgnLoc(src, t, field), newflags)

proc genOptAsgnObject(p: BProc, dest, src: TLoc, flags: TAssignmentFlags,
                      t: PNode, typ: PType) =
  if t == nil: return
  let newflags =
    if src.storage == OnStatic:
      flags + {needToCopy}
    elif tfShallow in dest.t.flags:
      flags - {needToCopy}
    else:
      flags
  case t.kind
  of nkSym:
    let field = t.sym
    if field.loc.r == "": fillObjectFields(p.module, typ)
    genAssignment(p, optAsgnLoc(dest, field.typ, field.loc.r),
                     optAsgnLoc(src, field.typ, field.loc.r), newflags)
  of nkRecList:
    for child in items(t): genOptAsgnObject(p, dest, src, newflags, child, typ)
  else: discard

proc genGenericAsgn(p: BProc, dest, src: TLoc, flags: TAssignmentFlags) =
  # Consider:
  # type TMyFastString {.shallow.} = string
  # Due to the implementation of pragmas this would end up to set the
  # tfShallow flag for the built-in string type too! So we check only
  # here for this flag, where it is reasonably safe to do so
  # (for objects, etc.):
  if optSeqDestructors in p.config.globalOptions:
    linefmt(p, cpsStmts,
        "$1 = $2;$n",
        [rdLoc(dest), rdLoc(src)])
  elif needToCopy notin flags or
      tfShallow in skipTypes(dest.t, abstractVarRange).flags:
    if (dest.storage == OnStack and p.config.selectedGC != gcGo) or not usesWriteBarrier(p.config):
      linefmt(p, cpsStmts,
           "#nimCopyMem((void*)$1, (NIM_CONST void*)$2, sizeof($3));$n",
           [addrLoc(p.config, dest), addrLoc(p.config, src), rdLoc(dest)])
    else:
      linefmt(p, cpsStmts, "#genericShallowAssign((void*)$1, (void*)$2, $3);$n",
              [addrLoc(p.config, dest), addrLoc(p.config, src), genTypeInfoV1(p.module, dest.t, dest.lode.info)])
  else:
    linefmt(p, cpsStmts, "#genericAssign((void*)$1, (void*)$2, $3);$n",
            [addrLoc(p.config, dest), addrLoc(p.config, src), genTypeInfoV1(p.module, dest.t, dest.lode.info)])

proc genOpenArrayConv(p: BProc; d: TLoc; a: TLoc) =
  assert d.k != locNone
  #  getTemp(p, d.t, d)

  case a.t.skipTypes(abstractVar).kind
  of tyOpenArray, tyVarargs:
    if reifiedOpenArray(a.lode):
      linefmt(p, cpsStmts, "$1.Field0 = $2.Field0; $1.Field1 = $2.Field1;$n",
        [rdLoc(d), a.rdLoc])
    else:
      linefmt(p, cpsStmts, "$1.Field0 = $2; $1.Field1 = $2Len_0;$n",
        [rdLoc(d), a.rdLoc])
  of tySequence:
    linefmt(p, cpsStmts, "$1.Field0 = ($5) ? ($2$3) : NIM_NIL; $1.Field1 = $4;$n",
      [rdLoc(d), a.rdLoc, dataField(p), lenExpr(p, a), dataFieldAccessor(p, a.rdLoc)])
  of tyArray:
    linefmt(p, cpsStmts, "$1.Field0 = $2; $1.Field1 = $3;$n",
      [rdLoc(d), rdLoc(a), rope(lengthOrd(p.config, a.t))])
  of tyString:
    let etyp = skipTypes(a.t, abstractInst)
    if etyp.kind in {tyVar} and optSeqDestructors in p.config.globalOptions:
      linefmt(p, cpsStmts, "#nimPrepareStrMutationV2($1);$n", [byRefLoc(p, a)])

    linefmt(p, cpsStmts, "$1.Field0 = ($5) ? ($2$3) : NIM_NIL; $1.Field1 = $4;$n",
      [rdLoc(d), a.rdLoc, dataField(p), lenExpr(p, a), dataFieldAccessor(p, a.rdLoc)])
  else:
    internalError(p.config, a.lode.info, "cannot handle " & $a.t.kind)

proc genAssignment(p: BProc, dest, src: TLoc, flags: TAssignmentFlags) =
  # This function replaces all other methods for generating
  # the assignment operation in C.
  if src.t != nil and src.t.kind == tyPtr:
    # little HACK to support the new 'var T' as return type:
    linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
    return
  let ty = skipTypes(dest.t, abstractRange + tyUserTypeClasses + {tyStatic})
  case ty.kind
  of tyRef:
    genRefAssign(p, dest, src)
  of tySequence:
    if optSeqDestructors in p.config.globalOptions:
      genGenericAsgn(p, dest, src, flags)
    elif (needToCopy notin flags and src.storage != OnStatic) or canMove(p, src.lode, dest):
      genRefAssign(p, dest, src)
    else:
      linefmt(p, cpsStmts, "#genericSeqAssign($1, $2, $3);$n",
              [addrLoc(p.config, dest), rdLoc(src),
              genTypeInfoV1(p.module, dest.t, dest.lode.info)])
  of tyString:
    if optSeqDestructors in p.config.globalOptions:
      genGenericAsgn(p, dest, src, flags)
    elif (needToCopy notin flags and src.storage != OnStatic) or canMove(p, src.lode, dest):
      genRefAssign(p, dest, src)
    else:
      if (dest.storage == OnStack and p.config.selectedGC != gcGo) or not usesWriteBarrier(p.config):
        linefmt(p, cpsStmts, "$1 = #copyString($2);$n", [dest.rdLoc, src.rdLoc])
      elif dest.storage == OnHeap:
        # we use a temporary to care for the dreaded self assignment:
        var tmp: TLoc
        getTemp(p, ty, tmp)
        linefmt(p, cpsStmts, "$3 = $1; $1 = #copyStringRC1($2);$n",
                [dest.rdLoc, src.rdLoc, tmp.rdLoc])
        linefmt(p, cpsStmts, "if ($1) #nimGCunrefNoCycle($1);$n", [tmp.rdLoc])
      else:
        linefmt(p, cpsStmts, "#unsureAsgnRef((void**) $1, #copyString($2));$n",
               [addrLoc(p.config, dest), rdLoc(src)])
  of tyProc:
    if containsGarbageCollectedRef(dest.t):
      # optimize closure assignment:
      let a = optAsgnLoc(dest, dest.t, "ClE_0".rope)
      let b = optAsgnLoc(src, dest.t, "ClE_0".rope)
      genRefAssign(p, a, b)
      linefmt(p, cpsStmts, "$1.ClP_0 = $2.ClP_0;$n", [rdLoc(dest), rdLoc(src)])
    else:
      linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  of tyTuple:
    if containsGarbageCollectedRef(dest.t):
      if dest.t.len <= 4: genOptAsgnTuple(p, dest, src, flags)
      else: genGenericAsgn(p, dest, src, flags)
    else:
      linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  of tyObject:
    # XXX: check for subtyping?
    if ty.isImportedCppType:
      linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
    elif not isObjLackingTypeField(ty):
      genGenericAsgn(p, dest, src, flags)
    elif containsGarbageCollectedRef(ty):
      if ty[0].isNil and asgnComplexity(ty.n) <= 4:
        discard getTypeDesc(p.module, ty)
        internalAssert p.config, ty.n != nil
        genOptAsgnObject(p, dest, src, flags, ty.n, ty)
      else:
        genGenericAsgn(p, dest, src, flags)
    else:
      linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  of tyArray:
    if containsGarbageCollectedRef(dest.t) and p.config.selectedGC notin {gcArc, gcOrc, gcHooks}:
      genGenericAsgn(p, dest, src, flags)
    else:
      linefmt(p, cpsStmts,
           "#nimCopyMem((void*)$1, (NIM_CONST void*)$2, sizeof($3));$n",
           [rdLoc(dest), rdLoc(src), getTypeDesc(p.module, dest.t)])
  of tyOpenArray, tyVarargs:
    # open arrays are always on the stack - really? What if a sequence is
    # passed to an open array?
    if reifiedOpenArray(dest.lode):
      genOpenArrayConv(p, dest, src)
    elif containsGarbageCollectedRef(dest.t):
      linefmt(p, cpsStmts,     # XXX: is this correct for arrays?
           "#genericAssignOpenArray((void*)$1, (void*)$2, $1Len_0, $3);$n",
           [addrLoc(p.config, dest), addrLoc(p.config, src),
           genTypeInfoV1(p.module, dest.t, dest.lode.info)])
    else:
      linefmt(p, cpsStmts,
           # bug #4799, keep the nimCopyMem for a while
           #"#nimCopyMem((void*)$1, (NIM_CONST void*)$2, sizeof($1[0])*$1Len_0);\n",
           "$1 = $2;$n",
           [rdLoc(dest), rdLoc(src)])
  of tySet:
    if mapSetType(p.config, ty) == ctArray:
      linefmt(p, cpsStmts, "#nimCopyMem((void*)$1, (NIM_CONST void*)$2, $3);$n",
              [rdLoc(dest), rdLoc(src), getSize(p.config, dest.t)])
    else:
      linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  of tyPtr, tyPointer, tyChar, tyBool, tyEnum, tyCstring,
     tyInt..tyUInt64, tyRange, tyVar, tyLent, tyNil:
    linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  else: internalError(p.config, "genAssignment: " & $ty.kind)

  if optMemTracker in p.options and dest.storage in {OnHeap, OnUnknown}:
    #writeStackTrace()
    #echo p.currLineInfo, " requesting"
    linefmt(p, cpsStmts, "#memTrackerWrite((void*)$1, $2, $3, $4);$n",
            [addrLoc(p.config, dest), getSize(p.config, dest.t),
            makeCString(toFullPath(p.config, p.currLineInfo)),
            p.currLineInfo.safeLineNm])

proc genDeepCopy(p: BProc; dest, src: TLoc) =
  template addrLocOrTemp(a: TLoc): Rope =
    if a.k == locExpr:
      var tmp: TLoc
      getTemp(p, a.t, tmp)
      genAssignment(p, tmp, a, {})
      addrLoc(p.config, tmp)
    else:
      addrLoc(p.config, a)

  var ty = skipTypes(dest.t, abstractVarRange + {tyStatic})
  case ty.kind
  of tyPtr, tyRef, tyProc, tyTuple, tyObject, tyArray:
    # XXX optimize this
    linefmt(p, cpsStmts, "#genericDeepCopy((void*)$1, (void*)$2, $3);$n",
            [addrLoc(p.config, dest), addrLocOrTemp(src),
            genTypeInfoV1(p.module, dest.t, dest.lode.info)])
  of tySequence, tyString:
    if optTinyRtti in p.config.globalOptions:
      linefmt(p, cpsStmts, "#genericDeepCopy((void*)$1, (void*)$2, $3);$n",
              [addrLoc(p.config, dest), addrLocOrTemp(src),
              genTypeInfoV1(p.module, dest.t, dest.lode.info)])
    else:
      linefmt(p, cpsStmts, "#genericSeqDeepCopy($1, $2, $3);$n",
              [addrLoc(p.config, dest), rdLoc(src),
              genTypeInfoV1(p.module, dest.t, dest.lode.info)])
  of tyOpenArray, tyVarargs:
    linefmt(p, cpsStmts,
         "#genericDeepCopyOpenArray((void*)$1, (void*)$2, $1Len_0, $3);$n",
         [addrLoc(p.config, dest), addrLocOrTemp(src),
         genTypeInfoV1(p.module, dest.t, dest.lode.info)])
  of tySet:
    if mapSetType(p.config, ty) == ctArray:
      linefmt(p, cpsStmts, "#nimCopyMem((void*)$1, (NIM_CONST void*)$2, $3);$n",
              [rdLoc(dest), rdLoc(src), getSize(p.config, dest.t)])
    else:
      linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  of tyPointer, tyChar, tyBool, tyEnum, tyCstring,
     tyInt..tyUInt64, tyRange, tyVar, tyLent:
    linefmt(p, cpsStmts, "$1 = $2;$n", [rdLoc(dest), rdLoc(src)])
  else: internalError(p.config, "genDeepCopy: " & $ty.kind)

proc putLocIntoDest(p: BProc, d: var TLoc, s: TLoc) =
  if d.k != locNone:
    if lfNoDeepCopy in d.flags: genAssignment(p, d, s, {})
    else: genAssignment(p, d, s, {needToCopy})
  else:
    d = s # ``d`` is free, so fill it with ``s``

proc putDataIntoDest(p: BProc, d: var TLoc, n: PNode, r: Rope) =
  var a: TLoc
  if d.k != locNone:
    # need to generate an assignment here
    initLoc(a, locData, n, OnStatic)
    a.r = r
    if lfNoDeepCopy in d.flags: genAssignment(p, d, a, {})
    else: genAssignment(p, d, a, {needToCopy})
  else:
    # we cannot call initLoc() here as that would overwrite
    # the flags field!
    d.k = locData
    d.lode = n
    d.r = r

proc putIntoDest(p: BProc, d: var TLoc, n: PNode, r: Rope; s=OnUnknown) =
  var a: TLoc
  if d.k != locNone:
    # need to generate an assignment here
    initLoc(a, locExpr, n, s)
    a.r = r
    if lfNoDeepCopy in d.flags: genAssignment(p, d, a, {})
    else: genAssignment(p, d, a, {needToCopy})
  else:
    # we cannot call initLoc() here as that would overwrite
    # the flags field!
    d.k = locExpr
    d.lode = n
    d.r = r

proc binaryStmt(p: BProc, e: PNode, d: var TLoc, op: string) =
  var a, b: TLoc
  if d.k != locNone: internalError(p.config, e.info, "binaryStmt")
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  lineCg(p, cpsStmts, "$1 $2 $3;$n", [rdLoc(a), op, rdLoc(b)])

proc binaryStmtAddr(p: BProc, e: PNode, d: var TLoc, cpname: string) =
  var a, b: TLoc
  if d.k != locNone: internalError(p.config, e.info, "binaryStmtAddr")
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  lineCg(p, cpsStmts, "#$1($2, $3);$n", [cpname, byRefLoc(p, a), rdLoc(b)])

template unaryStmt(p: BProc, e: PNode, d: var TLoc, frmt: string) =
  var a: TLoc
  if d.k != locNone: internalError(p.config, e.info, "unaryStmt")
  initLocExpr(p, e[1], a)
  lineCg(p, cpsStmts, frmt, [rdLoc(a)])

template binaryExpr(p: BProc, e: PNode, d: var TLoc, frmt: string) =
  var a, b: TLoc
  assert(e[1].typ != nil)
  assert(e[2].typ != nil)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  putIntoDest(p, d, e, ropecg(p.module, frmt, [rdLoc(a), rdLoc(b)]))

template binaryExprChar(p: BProc, e: PNode, d: var TLoc, frmt: string) =
  var a, b: TLoc
  assert(e[1].typ != nil)
  assert(e[2].typ != nil)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  putIntoDest(p, d, e, ropecg(p.module, frmt, [a.rdCharLoc, b.rdCharLoc]))

template unaryExpr(p: BProc, e: PNode, d: var TLoc, frmt: string) =
  var a: TLoc
  initLocExpr(p, e[1], a)
  putIntoDest(p, d, e, ropecg(p.module, frmt, [rdLoc(a)]))

template unaryExprChar(p: BProc, e: PNode, d: var TLoc, frmt: string) =
  var a: TLoc
  initLocExpr(p, e[1], a)
  putIntoDest(p, d, e, ropecg(p.module, frmt, [rdCharLoc(a)]))

template binaryArithOverflowRaw(p: BProc, t: PType, a, b: TLoc;
                            cpname: string): Rope =
  var size = getSize(p.config, t)
  let storage = if size < p.config.target.intSize: rope("NI")
                else: getTypeDesc(p.module, t)
  var result = getTempName(p.module)
  linefmt(p, cpsLocals, "$1 $2;$n", [storage, result])
  lineCg(p, cpsStmts, "if (#$2($3, $4, &$1)) { #raiseOverflow(); ",
      [result, cpname, rdCharLoc(a), rdCharLoc(b)])
  raiseInstr(p, p.s(cpsStmts))
  linefmt p, cpsStmts, "};$n", []

  if size < p.config.target.intSize or t.kind in {tyRange, tyEnum}:
    var first = newRopeAppender()
    intLiteral(firstOrd(p.config, t), first)
    var last = newRopeAppender()
    intLiteral(lastOrd(p.config, t), last)
    linefmt(p, cpsStmts, "if ($1 < $2 || $1 > $3){ #raiseOverflow(); ",
            [result, first, last])
    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  result

proc binaryArithOverflow(p: BProc, e: PNode, d: var TLoc, m: TMagic) =
  const
    prc: array[mAddI..mPred, string] = [
      "nimAddInt", "nimSubInt",
      "nimMulInt", "nimDivInt", "nimModInt",
      "nimAddInt", "nimSubInt"
    ]
    prc64: array[mAddI..mPred, string] = [
      "nimAddInt64", "nimSubInt64",
      "nimMulInt64", "nimDivInt64", "nimModInt64",
      "nimAddInt64", "nimSubInt64"
    ]
    opr: array[mAddI..mPred, string] = ["+", "-", "*", "/", "%", "+", "-"]
  var a, b: TLoc
  assert(e[1].typ != nil)
  assert(e[2].typ != nil)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  # skipping 'range' is correct here as we'll generate a proper range check
  # later via 'chckRange'
  let t = e.typ.skipTypes(abstractRange)
  if optOverflowCheck notin p.options:
    let res = "($1)($2 $3 $4)" % [getTypeDesc(p.module, e.typ), rdLoc(a), rope(opr[m]), rdLoc(b)]
    putIntoDest(p, d, e, res)
  else:
    # we handle div by zero here so that we know that the compilerproc's
    # result is only for overflows.
    var needsOverflowCheck = true
    if m in {mDivI, mModI}:
      var canBeZero = true
      if e[2].kind in {nkIntLit..nkUInt64Lit}:
        canBeZero = e[2].intVal == 0
      if e[2].kind in {nkIntLit..nkInt64Lit}:
        needsOverflowCheck = e[2].intVal == -1
      if canBeZero:
        linefmt(p, cpsStmts, "if ($1 == 0){ #raiseDivByZero(); ", [rdLoc(b)])
        raiseInstr(p, p.s(cpsStmts))
        linefmt(p, cpsStmts, "}$n", [])
    if needsOverflowCheck:
      let res = binaryArithOverflowRaw(p, t, a, b,
        if t.kind == tyInt64: prc64[m] else: prc[m])
      putIntoDest(p, d, e, "($#)($#)" % [getTypeDesc(p.module, e.typ), res])
    else:
      let res = "($1)($2 $3 $4)" % [getTypeDesc(p.module, e.typ), rdLoc(a), rope(opr[m]), rdLoc(b)]
      putIntoDest(p, d, e, res)

proc unaryArithOverflow(p: BProc, e: PNode, d: var TLoc, m: TMagic) =
  var
    a: TLoc
    t: PType
  assert(e[1].typ != nil)
  initLocExpr(p, e[1], a)
  t = skipTypes(e.typ, abstractRange)
  if optOverflowCheck in p.options:
    var first = newRopeAppender()
    intLiteral(firstOrd(p.config, t), first)
    linefmt(p, cpsStmts, "if ($1 == $2){ #raiseOverflow(); ",
            [rdLoc(a), first])
    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  case m
  of mUnaryMinusI:
    putIntoDest(p, d, e, "((NI$2)-($1))" % [rdLoc(a), rope(getSize(p.config, t) * 8)])
  of mUnaryMinusI64:
    putIntoDest(p, d, e, "-($1)" % [rdLoc(a)])
  of mAbsI:
    putIntoDest(p, d, e, "($1 > 0? ($1) : -($1))" % [rdLoc(a)])
  else:
    assert(false, $m)

proc binaryArith(p: BProc, e: PNode, d: var TLoc, op: TMagic) =
  var
    a, b: TLoc
    s, k: BiggestInt
  assert(e[1].typ != nil)
  assert(e[2].typ != nil)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  # BUGFIX: cannot use result-type here, as it may be a boolean
  s = max(getSize(p.config, a.t), getSize(p.config, b.t)) * 8
  k = getSize(p.config, a.t) * 8

  template applyFormat(frmt: untyped) =
    putIntoDest(p, d, e, frmt % [
      rdLoc(a), rdLoc(b), rope(s),
      getSimpleTypeDesc(p.module, e.typ), rope(k)]
    )

  case op
  of mAddF64: applyFormat("(($4)($1) + ($4)($2))")
  of mSubF64: applyFormat("(($4)($1) - ($4)($2))")
  of mMulF64: applyFormat("(($4)($1) * ($4)($2))")
  of mDivF64: applyFormat("(($4)($1) / ($4)($2))")
  of mShrI: applyFormat("($4)((NU$5)($1) >> (NU$3)($2))")
  of mShlI: applyFormat("($4)((NU$3)($1) << (NU$3)($2))")
  of mAshrI: applyFormat("($4)((NI$3)($1) >> (NU$3)($2))")
  of mBitandI: applyFormat("($4)($1 & $2)")
  of mBitorI: applyFormat("($4)($1 | $2)")
  of mBitxorI: applyFormat("($4)($1 ^ $2)")
  of mMinI: applyFormat("(($1 <= $2) ? $1 : $2)")
  of mMaxI: applyFormat("(($1 >= $2) ? $1 : $2)")
  of mAddU: applyFormat("($4)((NU$3)($1) + (NU$3)($2))")
  of mSubU: applyFormat("($4)((NU$3)($1) - (NU$3)($2))")
  of mMulU: applyFormat("($4)((NU$3)($1) * (NU$3)($2))")
  of mDivU: applyFormat("($4)((NU$3)($1) / (NU$3)($2))")
  of mModU: applyFormat("($4)((NU$3)($1) % (NU$3)($2))")
  of mEqI: applyFormat("($1 == $2)")
  of mLeI: applyFormat("($1 <= $2)")
  of mLtI: applyFormat("($1 < $2)")
  of mEqF64: applyFormat("($1 == $2)")
  of mLeF64: applyFormat("($1 <= $2)")
  of mLtF64: applyFormat("($1 < $2)")
  of mLeU: applyFormat("((NU$3)($1) <= (NU$3)($2))")
  of mLtU: applyFormat("((NU$3)($1) < (NU$3)($2))")
  of mEqEnum: applyFormat("($1 == $2)")
  of mLeEnum: applyFormat("($1 <= $2)")
  of mLtEnum: applyFormat("($1 < $2)")
  of mEqCh: applyFormat("((NU8)($1) == (NU8)($2))")
  of mLeCh: applyFormat("((NU8)($1) <= (NU8)($2))")
  of mLtCh: applyFormat("((NU8)($1) < (NU8)($2))")
  of mEqB: applyFormat("($1 == $2)")
  of mLeB: applyFormat("($1 <= $2)")
  of mLtB: applyFormat("($1 < $2)")
  of mEqRef: applyFormat("($1 == $2)")
  of mLePtr: applyFormat("($1 <= $2)")
  of mLtPtr: applyFormat("($1 < $2)")
  of mXor: applyFormat("($1 != $2)")
  else:
    assert(false, $op)

proc genEqProc(p: BProc, e: PNode, d: var TLoc) =
  var a, b: TLoc
  assert(e[1].typ != nil)
  assert(e[2].typ != nil)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  if a.t.skipTypes(abstractInstOwned).callConv == ccClosure:
    putIntoDest(p, d, e,
      "($1.ClP_0 == $2.ClP_0 && $1.ClE_0 == $2.ClE_0)" % [rdLoc(a), rdLoc(b)])
  else:
    putIntoDest(p, d, e, "($1 == $2)" % [rdLoc(a), rdLoc(b)])

proc genIsNil(p: BProc, e: PNode, d: var TLoc) =
  let t = skipTypes(e[1].typ, abstractRange)
  if t.kind == tyProc and t.callConv == ccClosure:
    unaryExpr(p, e, d, "($1.ClP_0 == 0)")
  else:
    unaryExpr(p, e, d, "($1 == 0)")

proc unaryArith(p: BProc, e: PNode, d: var TLoc, op: TMagic) =
  var
    a: TLoc
    t: PType
  assert(e[1].typ != nil)
  initLocExpr(p, e[1], a)
  t = skipTypes(e.typ, abstractRange)

  template applyFormat(frmt: untyped) =
    putIntoDest(p, d, e, frmt % [rdLoc(a), rope(getSize(p.config, t) * 8),
                getSimpleTypeDesc(p.module, e.typ)])
  case op
  of mNot:
    applyFormat("!($1)")
  of mUnaryPlusI:
    applyFormat("$1")
  of mBitnotI:
    applyFormat("($3)((NU$2) ~($1))")
  of mUnaryPlusF64:
    applyFormat("$1")
  of mUnaryMinusF64:
    applyFormat("-($1)")
  else:
    assert false, $op

proc isCppRef(p: BProc; typ: PType): bool {.inline.} =
  result = p.module.compileToCpp and
      skipTypes(typ, abstractInstOwned).kind in {tyVar} and
      tfVarIsPtr notin skipTypes(typ, abstractInstOwned).flags

proc genDeref(p: BProc, e: PNode, d: var TLoc) =
  assert e[0].kind notin {nkBlockExpr, nkBlockStmt}, "it should have been transformed in transf"

  let mt = mapType(p.config, e[0].typ, mapTypeChooser(e[0]))
  if mt in {ctArray, ctPtrToArray} and lfEnforceDeref notin d.flags:
    # XXX the amount of hacks for C's arrays is incredible, maybe we should
    # simply wrap them in a struct? --> Losing auto vectorization then?
    expr(p, e[0], d)
    if e[0].typ.skipTypes(abstractInstOwned).kind == tyRef:
      d.storage = OnHeap
  else:
    var a: TLoc
    var typ = e[0].typ
    if typ.kind in {tyUserTypeClass, tyUserTypeClassInst} and typ.isResolvedUserTypeClass:
      typ = typ.lastSon
    typ = typ.skipTypes(abstractInstOwned)
    if typ.kind in {tyVar} and tfVarIsPtr notin typ.flags and p.module.compileToCpp and e[0].kind == nkHiddenAddr:
      initLocExprSingleUse(p, e[0][0], d)
      return
    else:
      initLocExprSingleUse(p, e[0], a)
    if d.k == locNone:
      # dest = *a;  <-- We do not know that 'dest' is on the heap!
      # It is completely wrong to set 'd.storage' here, unless it's not yet
      # been assigned to.
      case typ.kind
      of tyRef:
        d.storage = OnHeap
      of tyVar, tyLent:
        d.storage = OnUnknown
        if tfVarIsPtr notin typ.flags and p.module.compileToCpp and
            e.kind == nkHiddenDeref:
          putIntoDest(p, d, e, rdLoc(a), a.storage)
          return
      of tyPtr:
        d.storage = OnUnknown         # BUGFIX!
      else:
        internalError(p.config, e.info, "genDeref " & $typ.kind)
    elif p.module.compileToCpp:
      if typ.kind in {tyVar} and tfVarIsPtr notin typ.flags and
           e.kind == nkHiddenDeref:
        putIntoDest(p, d, e, rdLoc(a), a.storage)
        return
    if mt == ctPtrToArray and lfEnforceDeref in d.flags:
      # we lie about the type for better C interop: 'ptr array[3,T]' is
      # translated to 'ptr T', but for deref'ing this produces wrong code.
      # See tmissingderef. So we get rid of the deref instead. The codegen
      # ends up using 'memcpy' for the array assignment,
      # so the '&' and '*' cancel out:
      putIntoDest(p, d, e, rdLoc(a), a.storage)
    else:
      putIntoDest(p, d, e, "(*$1)" % [rdLoc(a)], a.storage)

proc cowBracket(p: BProc; n: PNode) =
  if n.kind == nkBracketExpr and optSeqDestructors in p.config.globalOptions:
    let strCandidate = n[0]
    if strCandidate.typ.skipTypes(abstractInst).kind == tyString:
      var a: TLoc
      initLocExpr(p, strCandidate, a)
      linefmt(p, cpsStmts, "#nimPrepareStrMutationV2($1);$n", [byRefLoc(p, a)])

proc cow(p: BProc; n: PNode) {.inline.} =
  if n.kind == nkHiddenAddr: cowBracket(p, n[0])

proc genAddr(p: BProc, e: PNode, d: var TLoc) =
  # careful  'addr(myptrToArray)' needs to get the ampersand:
  if e[0].typ.skipTypes(abstractInstOwned).kind in {tyRef, tyPtr}:
    var a: TLoc
    initLocExpr(p, e[0], a)
    putIntoDest(p, d, e, "&" & a.r, a.storage)
    #Message(e.info, warnUser, "HERE NEW &")
  elif mapType(p.config, e[0].typ, mapTypeChooser(e[0])) == ctArray or isCppRef(p, e.typ):
    expr(p, e[0], d)
  else:
    var a: TLoc
    initLocExpr(p, e[0], a)
    putIntoDest(p, d, e, addrLoc(p.config, a), a.storage)

template inheritLocation(d: var TLoc, a: TLoc) =
  if d.k == locNone: d.storage = a.storage

proc genRecordFieldAux(p: BProc, e: PNode, d, a: var TLoc) =
  initLocExpr(p, e[0], a)
  if e[1].kind != nkSym: internalError(p.config, e.info, "genRecordFieldAux")
  d.inheritLocation(a)
  discard getTypeDesc(p.module, a.t) # fill the record's fields.loc

proc genTupleElem(p: BProc, e: PNode, d: var TLoc) =
  var
    a: TLoc
    i: int
  initLocExpr(p, e[0], a)
  let tupType = a.t.skipTypes(abstractInst+{tyVar})
  assert tupType.kind == tyTuple
  d.inheritLocation(a)
  discard getTypeDesc(p.module, a.t) # fill the record's fields.loc
  var r = rdLoc(a)
  case e[1].kind
  of nkIntLit..nkUInt64Lit: i = int(e[1].intVal)
  else: internalError(p.config, e.info, "genTupleElem")
  r.addf(".Field$1", [rope(i)])
  putIntoDest(p, d, e, r, a.storage)

proc lookupFieldAgain(p: BProc, ty: PType; field: PSym; r: var Rope;
                      resTyp: ptr PType = nil): PSym =
  var ty = ty
  assert r != ""
  while ty != nil:
    ty = ty.skipTypes(skipPtrs)
    assert(ty.kind in {tyTuple, tyObject})
    result = lookupInRecord(ty.n, field.name)
    if result != nil:
      if resTyp != nil: resTyp[] = ty
      break
    if not p.module.compileToCpp: r.add(".Sup")
    ty = ty[0]
  if result == nil: internalError(p.config, field.info, "genCheckedRecordField")

proc genRecordField(p: BProc, e: PNode, d: var TLoc) =
  var a: TLoc
  genRecordFieldAux(p, e, d, a)
  var r = rdLoc(a)
  var f = e[1].sym
  let ty = skipTypes(a.t, abstractInstOwned + tyUserTypeClasses)
  if ty.kind == tyTuple:
    # we found a unique tuple type which lacks field information
    # so we use Field$i
    r.add ".Field"
    r.add rope(f.position)
    putIntoDest(p, d, e, r, a.storage)
  else:
    var rtyp: PType
    let field = lookupFieldAgain(p, ty, f, r, addr rtyp)
    if field.loc.r == "" and rtyp != nil: fillObjectFields(p.module, rtyp)
    if field.loc.r == "": internalError(p.config, e.info, "genRecordField 3 " & typeToString(ty))
    r.add "."
    r.add field.loc.r
    putIntoDest(p, d, e, r, a.storage)
  r.freeze

proc genInExprAux(p: BProc, e: PNode, a, b, d: var TLoc)

proc genFieldCheck(p: BProc, e: PNode, obj: Rope, field: PSym) =
  var test, u, v: TLoc
  for i in 1..<e.len:
    var it = e[i]
    assert(it.kind in nkCallKinds)
    assert(it[0].kind == nkSym)
    let op = it[0].sym
    if op.magic == mNot: it = it[1]
    let disc = it[2].skipConv
    assert(disc.kind == nkSym)
    initLoc(test, locNone, it, OnStack)
    initLocExpr(p, it[1], u)
    initLoc(v, locExpr, disc, OnUnknown)
    v.r = newRopeAppender()
    v.r.add obj
    v.r.add(".")
    v.r.add(disc.sym.loc.r)
    genInExprAux(p, it, u, v, test)
    var msg = ""
    if optDeclaredLocs in p.config.globalOptions:
      # xxx this should be controlled by a separate flag, and
      # used for other similar defects so that location information is shown
      # even without the expensive `--stacktrace`; binary size could be optimized
      # by encoding the file names separately from `file(line:col)`, essentially
      # passing around `TLineInfo` + the set of files in the project.
      msg.add toFileLineCol(p.config, e.info) & " "
    msg.add genFieldDefect(p.config, field.name.s, disc.sym)
    var strLit = newRopeAppender()
    genStringLiteral(p.module, newStrNode(nkStrLit, msg), strLit)

    ## discriminant check
    template fun(code) = linefmt(p, cpsStmts, code, [rdLoc(test)])
    if op.magic == mNot: fun("if ($1) ") else: fun("if (!($1)) ")

    ## call raiseFieldError2 on failure
    var discIndex = newRopeAppender()
    rdSetElemLoc(p.config, v, u.t, discIndex)
    if optTinyRtti in p.config.globalOptions:
      # not sure how to use `genEnumToStr` here
      if p.config.getStdlibVersion < (1, 5, 1):
        const code = "{ #raiseFieldError($1); "
        linefmt(p, cpsStmts, code, [strLit])
      else:
        const code = "{ #raiseFieldError2($1, (NI)$2); "
        linefmt(p, cpsStmts, code, [strLit, discIndex])

    else:
      # complication needed for signed types
      let first = p.config.firstOrd(disc.sym.typ)
      var firstLit = newRopeAppender()
      int64Literal(cast[int](first), firstLit)
      let discName = genTypeInfo(p.config, p.module, disc.sym.typ, e.info)
      if p.config.getStdlibVersion < (1,5,1):
        const code = "{ #raiseFieldError($1); "
        linefmt(p, cpsStmts, code, [strLit])
      else:
        const code = "{ #raiseFieldError2($1, #reprDiscriminant(((NI)$2) + (NI)$3, $4)); "
        linefmt(p, cpsStmts, code, [strLit, discIndex, firstLit, discName])

    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

proc genCheckedRecordField(p: BProc, e: PNode, d: var TLoc) =
  assert e[0].kind == nkDotExpr
  if optFieldCheck in p.options:
    var a: TLoc
    genRecordFieldAux(p, e[0], d, a)
    let ty = skipTypes(a.t, abstractInst + tyUserTypeClasses)
    var r = rdLoc(a)
    let f = e[0][1].sym
    let field = lookupFieldAgain(p, ty, f, r)
    if field.loc.r == "": fillObjectFields(p.module, ty)
    if field.loc.r == "":
      internalError(p.config, e.info, "genCheckedRecordField") # generate the checks:
    genFieldCheck(p, e, r, field)
    r.add(".")
    r.add field.loc.r
    putIntoDest(p, d, e[0], r, a.storage)
    r.freeze
  else:
    genRecordField(p, e[0], d)

proc genUncheckedArrayElem(p: BProc, n, x, y: PNode, d: var TLoc) =
  var a, b: TLoc
  initLocExpr(p, x, a)
  initLocExpr(p, y, b)
  d.inheritLocation(a)
  putIntoDest(p, d, n, ropecg(p.module, "$1[$2]", [rdLoc(a), rdCharLoc(b)]),
              a.storage)

proc genArrayElem(p: BProc, n, x, y: PNode, d: var TLoc) =
  var a, b: TLoc
  initLocExpr(p, x, a)
  initLocExpr(p, y, b)
  var ty = skipTypes(a.t, abstractVarRange + abstractPtrs + tyUserTypeClasses)
  var first = newRopeAppender()
  intLiteral(firstOrd(p.config, ty), first)
  # emit range check:
  if optBoundsCheck in p.options and ty.kind != tyUncheckedArray:
    if not isConstExpr(y):
      # semantic pass has already checked for const index expressions
      if firstOrd(p.config, ty) == 0 and lastOrd(p.config, ty) >= 0:
        if (firstOrd(p.config, b.t) < firstOrd(p.config, ty)) or (lastOrd(p.config, b.t) > lastOrd(p.config, ty)):
          var last = newRopeAppender()
          intLiteral(lastOrd(p.config, ty), last)
          linefmt(p, cpsStmts, "if ((NU)($1) > (NU)($2)){ #raiseIndexError2($1, $2); ",
                  [rdCharLoc(b), last])
          raiseInstr(p, p.s(cpsStmts))
          linefmt p, cpsStmts, "}$n", []
      else:
        var last = newRopeAppender()
        intLiteral(lastOrd(p.config, ty), last)
        linefmt(p, cpsStmts, "if ($1 < $2 || $1 > $3){ #raiseIndexError3($1, $2, $3); ",
                [rdCharLoc(b), first, last])
        raiseInstr(p, p.s(cpsStmts))
        linefmt p, cpsStmts, "}$n", []

    else:
      let idx = getOrdValue(y)
      if idx < firstOrd(p.config, ty) or idx > lastOrd(p.config, ty):
        localError(p.config, x.info, formatErrorIndexBound(idx, firstOrd(p.config, ty), lastOrd(p.config, ty)))
  d.inheritLocation(a)
  putIntoDest(p, d, n,
              ropecg(p.module, "$1[($2)- $3]", [rdLoc(a), rdCharLoc(b), first]), a.storage)

proc genCStringElem(p: BProc, n, x, y: PNode, d: var TLoc) =
  var a, b: TLoc
  initLocExpr(p, x, a)
  initLocExpr(p, y, b)
  inheritLocation(d, a)
  putIntoDest(p, d, n,
              ropecg(p.module, "$1[$2]", [rdLoc(a), rdCharLoc(b)]), a.storage)

proc genBoundsCheck(p: BProc; arr, a, b: TLoc) =
  let ty = skipTypes(arr.t, abstractVarRange)
  case ty.kind
  of tyOpenArray, tyVarargs:
    if reifiedOpenArray(arr.lode):
      linefmt(p, cpsStmts,
        "if ($2-$1 != -1 && " &
        "($1 < 0 || $1 >= $3.Field1 || $2 < 0 || $2 >= $3.Field1)){ #raiseIndexError4($1, $2, $3.Field1); ",
        [rdLoc(a), rdLoc(b), rdLoc(arr)])
    else:
      linefmt(p, cpsStmts,
        "if ($2-$1 != -1 && ($1 < 0 || $1 >= $3Len_0 || $2 < 0 || $2 >= $3Len_0))" &
        "{ #raiseIndexError4($1, $2, $3Len_0); ",
        [rdLoc(a), rdLoc(b), rdLoc(arr)])
    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  of tyArray:
    var first = newRopeAppender()
    intLiteral(firstOrd(p.config, ty), first)
    var last = newRopeAppender()
    intLiteral(lastOrd(p.config, ty), last)
    linefmt(p, cpsStmts,
      "if ($2-$1 != -1 && " &
      "($2-$1 < -1 || $1 < $3 || $1 > $4 || $2 < $3 || $2 > $4)){ #raiseIndexError(); ",
      [rdCharLoc(a), rdCharLoc(b), first, last])

    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  of tySequence, tyString:
    linefmt(p, cpsStmts,
      "if ($2-$1 != -1 && " &
      "($1 < 0 || $1 >= $3 || $2 < 0 || $2 >= $3)){ #raiseIndexError4($1, $2, $3); ",
      [rdLoc(a), rdLoc(b), lenExpr(p, arr)])
    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  else: discard

proc genOpenArrayElem(p: BProc, n, x, y: PNode, d: var TLoc) =
  var a, b: TLoc
  initLocExpr(p, x, a)
  initLocExpr(p, y, b)
  if not reifiedOpenArray(x):
    # emit range check:
    if optBoundsCheck in p.options:
      linefmt(p, cpsStmts, "if ($1 < 0 || $1 >= $2Len_0){ #raiseIndexError2($1,$2Len_0-1); ",
              [rdCharLoc(b), rdLoc(a)]) # BUGFIX: ``>=`` and not ``>``!
      raiseInstr(p, p.s(cpsStmts))
      linefmt p, cpsStmts, "}$n", []

    inheritLocation(d, a)
    putIntoDest(p, d, n,
                ropecg(p.module, "$1[$2]", [rdLoc(a), rdCharLoc(b)]), a.storage)
  else:
    if optBoundsCheck in p.options:
      linefmt(p, cpsStmts, "if ($1 < 0 || $1 >= $2.Field1){ #raiseIndexError2($1,$2.Field1-1); ",
              [rdCharLoc(b), rdLoc(a)]) # BUGFIX: ``>=`` and not ``>``!
      raiseInstr(p, p.s(cpsStmts))
      linefmt p, cpsStmts, "}$n", []

    inheritLocation(d, a)
    putIntoDest(p, d, n,
                ropecg(p.module, "$1.Field0[$2]", [rdLoc(a), rdCharLoc(b)]), a.storage)

proc genSeqElem(p: BProc, n, x, y: PNode, d: var TLoc) =
  var a, b: TLoc
  initLocExpr(p, x, a)
  initLocExpr(p, y, b)
  var ty = skipTypes(a.t, abstractVarRange)
  if ty.kind in {tyRef, tyPtr}:
    ty = skipTypes(ty.lastSon, abstractVarRange) # emit range check:
  if optBoundsCheck in p.options:
    linefmt(p, cpsStmts,
            "if ($1 < 0 || $1 >= $2){ #raiseIndexError2($1,$2-1); ",
            [rdCharLoc(b), lenExpr(p, a)])
    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  if d.k == locNone: d.storage = OnHeap
  if skipTypes(a.t, abstractVar).kind in {tyRef, tyPtr}:
    a.r = ropecg(p.module, "(*$1)", [a.r])

  if lfPrepareForMutation in d.flags and ty.kind == tyString and
      optSeqDestructors in p.config.globalOptions:
    linefmt(p, cpsStmts, "#nimPrepareStrMutationV2($1);$n", [byRefLoc(p, a)])
  putIntoDest(p, d, n,
              ropecg(p.module, "$1$3[$2]", [rdLoc(a), rdCharLoc(b), dataField(p)]), a.storage)

proc genBracketExpr(p: BProc; n: PNode; d: var TLoc) =
  var ty = skipTypes(n[0].typ, abstractVarRange + tyUserTypeClasses)
  if ty.kind in {tyRef, tyPtr}: ty = skipTypes(ty.lastSon, abstractVarRange)
  case ty.kind
  of tyUncheckedArray: genUncheckedArrayElem(p, n, n[0], n[1], d)
  of tyArray: genArrayElem(p, n, n[0], n[1], d)
  of tyOpenArray, tyVarargs: genOpenArrayElem(p, n, n[0], n[1], d)
  of tySequence, tyString: genSeqElem(p, n, n[0], n[1], d)
  of tyCstring: genCStringElem(p, n, n[0], n[1], d)
  of tyTuple: genTupleElem(p, n, d)
  else: internalError(p.config, n.info, "expr(nkBracketExpr, " & $ty.kind & ')')
  discard getTypeDesc(p.module, n.typ)

proc isSimpleExpr(n: PNode): bool =
  # calls all the way down --> can stay expression based
  case n.kind
  of nkCallKinds, nkDotExpr, nkPar, nkTupleConstr,
      nkObjConstr, nkBracket, nkCurly, nkHiddenDeref, nkDerefExpr, nkHiddenAddr,
      nkHiddenStdConv, nkHiddenSubConv, nkConv, nkAddr:
    for c in n:
      if not isSimpleExpr(c): return false
    result = true
  of nkStmtListExpr:
    for i in 0..<n.len-1:
      if n[i].kind notin {nkCommentStmt, nkEmpty}: return false
    result = isSimpleExpr(n.lastSon)
  else:
    if n.isAtom:
      result = true

proc genAndOr(p: BProc, e: PNode, d: var TLoc, m: TMagic) =
  # how to generate code?
  #  'expr1 and expr2' becomes:
  #     result = expr1
  #     fjmp result, end
  #     result = expr2
  #  end:
  #  ... (result computed)
  # BUGFIX:
  #   a = b or a
  # used to generate:
  # a = b
  # if a: goto end
  # a = a
  # end:
  # now it generates:
  # tmp = b
  # if tmp: goto end
  # tmp = a
  # end:
  # a = tmp
  when false:
    #if isSimpleExpr(e) and p.module.compileToCpp:
    var tmpA, tmpB: TLoc
    #getTemp(p, e.typ, tmpA)
    #getTemp(p, e.typ, tmpB)
    initLocExprSingleUse(p, e[1], tmpA)
    initLocExprSingleUse(p, e[2], tmpB)
    tmpB.k = locExpr
    if m == mOr:
      tmpB.r = "((" & rdLoc(tmpA) & ")||(" & rdLoc(tmpB) & "))"
    else:
      tmpB.r = "((" & rdLoc(tmpA) & ")&&(" & rdLoc(tmpB) & "))"
    if d.k == locNone:
      d = tmpB
    else:
      genAssignment(p, d, tmpB, {})
  else:
    var
      L: TLabel
      tmp: TLoc
    getTemp(p, e.typ, tmp)      # force it into a temp!
    inc p.splitDecls
    expr(p, e[1], tmp)
    L = getLabel(p)
    if m == mOr:
      lineF(p, cpsStmts, "if ($1) goto $2;$n", [rdLoc(tmp), L])
    else:
      lineF(p, cpsStmts, "if (!($1)) goto $2;$n", [rdLoc(tmp), L])
    expr(p, e[2], tmp)
    fixLabel(p, L)
    if d.k == locNone:
      d = tmp
    else:
      genAssignment(p, d, tmp, {}) # no need for deep copying
    dec p.splitDecls

proc genEcho(p: BProc, n: PNode) =
  # this unusual way of implementing it ensures that e.g. ``echo("hallo", 45)``
  # is threadsafe.
  internalAssert p.config, n.kind == nkBracket
  if p.config.target.targetOS == osGenode:
    # echo directly to the Genode LOG session
    var args: Rope = ""
    var a: TLoc
    for i, it in n.sons:
      if it.skipConv.kind == nkNilLit:
        args.add(", \"\"")
      elif n.len != 0:
        initLocExpr(p, it, a)
        if i > 0:
          args.add(", ")
        case detectStrVersion(p.module)
        of 2:
          args.add(ropecg(p.module, "Genode::Cstring($1.p->data, $1.len)", [a.rdLoc]))
        else:
          args.add(ropecg(p.module, "Genode::Cstring($1->data, $1->len)", [a.rdLoc]))
    p.module.includeHeader("<base/log.h>")
    p.module.includeHeader("<util/string.h>")
    linefmt(p, cpsStmts, """Genode::log($1);$n""", [args])
  else:
    if n.len == 0:
      linefmt(p, cpsStmts, "#echoBinSafe(NIM_NIL, $1);$n", [n.len])
    else:
      var a: TLoc
      initLocExpr(p, n, a)
      linefmt(p, cpsStmts, "#echoBinSafe($1, $2);$n", [a.rdLoc, n.len])
    when false:
      p.module.includeHeader("<stdio.h>")
      linefmt(p, cpsStmts, "printf($1$2);$n",
              makeCString(repeat("%s", n.len) & "\L"), [args])
      linefmt(p, cpsStmts, "fflush(stdout);$n", [])

proc gcUsage(conf: ConfigRef; n: PNode) =
  if conf.selectedGC == gcNone: message(conf, n.info, warnGcMem, n.renderTree)

proc strLoc(p: BProc; d: TLoc): Rope =
  if optSeqDestructors in p.config.globalOptions:
    result = byRefLoc(p, d)
  else:
    result = rdLoc(d)

proc genStrConcat(p: BProc, e: PNode, d: var TLoc) =
  #   <Nim code>
  #   s = "Hello " & name & ", how do you feel?" & 'z'
  #
  #   <generated C code>
  #  {
  #    string tmp0;
  #    ...
  #    tmp0 = rawNewString(6 + 17 + 1 + s2->len);
  #    // we cannot generate s = rawNewString(...) here, because
  #    // ``s`` may be used on the right side of the expression
  #    appendString(tmp0, strlit_1);
  #    appendString(tmp0, name);
  #    appendString(tmp0, strlit_2);
  #    appendChar(tmp0, 'z');
  #    asgn(s, tmp0);
  #  }
  var a, tmp: TLoc
  getTemp(p, e.typ, tmp)
  var L = 0
  var appends: Rope = ""
  var lens: Rope = ""
  for i in 0..<e.len - 1:
    # compute the length expression:
    initLocExpr(p, e[i + 1], a)
    if skipTypes(e[i + 1].typ, abstractVarRange).kind == tyChar:
      inc(L)
      appends.add(ropecg(p.module, "#appendChar($1, $2);$n", [strLoc(p, tmp), rdLoc(a)]))
    else:
      if e[i + 1].kind in {nkStrLit..nkTripleStrLit}:
        inc(L, e[i + 1].strVal.len)
      else:
        lens.add(lenExpr(p, a))
        lens.add(" + ")
      appends.add(ropecg(p.module, "#appendString($1, $2);$n", [strLoc(p, tmp), rdLoc(a)]))
  linefmt(p, cpsStmts, "$1 = #rawNewString($2$3);$n", [tmp.r, lens, L])
  p.s(cpsStmts).add appends
  if d.k == locNone:
    d = tmp
  else:
    genAssignment(p, d, tmp, {}) # no need for deep copying
  gcUsage(p.config, e)

proc genStrAppend(p: BProc, e: PNode, d: var TLoc) =
  #  <Nim code>
  #  s &= "Hello " & name & ", how do you feel?" & 'z'
  #  // BUG: what if s is on the left side too?
  #  <generated C code>
  #  {
  #    s = resizeString(s, 6 + 17 + 1 + name->len);
  #    appendString(s, strlit_1);
  #    appendString(s, name);
  #    appendString(s, strlit_2);
  #    appendChar(s, 'z');
  #  }
  var
    a, dest, call: TLoc
    appends, lens: Rope
  assert(d.k == locNone)
  var L = 0
  initLocExpr(p, e[1], dest)
  for i in 0..<e.len - 2:
    # compute the length expression:
    initLocExpr(p, e[i + 2], a)
    if skipTypes(e[i + 2].typ, abstractVarRange).kind == tyChar:
      inc(L)
      appends.add(ropecg(p.module, "#appendChar($1, $2);$n",
                        [strLoc(p, dest), rdLoc(a)]))
    else:
      if e[i + 2].kind in {nkStrLit..nkTripleStrLit}:
        inc(L, e[i + 2].strVal.len)
      else:
        lens.add(lenExpr(p, a))
        lens.add(" + ")
      appends.add(ropecg(p.module, "#appendString($1, $2);$n",
                        [strLoc(p, dest), rdLoc(a)]))
  if optSeqDestructors in p.config.globalOptions:
    linefmt(p, cpsStmts, "#prepareAdd($1, $2$3);$n",
            [byRefLoc(p, dest), lens, L])
  else:
    initLoc(call, locCall, e, OnHeap)
    call.r = ropecg(p.module, "#resizeString($1, $2$3)", [rdLoc(dest), lens, L])
    genAssignment(p, dest, call, {})
    gcUsage(p.config, e)
  p.s(cpsStmts).add appends

proc genSeqElemAppend(p: BProc, e: PNode, d: var TLoc) =
  # seq &= x  -->
  #    seq = (typeof seq) incrSeq(&seq->Sup, sizeof(x));
  #    seq->data[seq->len-1] = x;
  var a, b, dest, tmpL, call: TLoc
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  let seqType = skipTypes(e[1].typ, {tyVar})
  initLoc(call, locCall, e, OnHeap)
  if not p.module.compileToCpp:
    const seqAppendPattern = "($2) #incrSeqV3((TGenericSeq*)($1), $3)"
    call.r = ropecg(p.module, seqAppendPattern, [rdLoc(a),
      getTypeDesc(p.module, e[1].typ),
      genTypeInfoV1(p.module, seqType, e.info)])
  else:
    const seqAppendPattern = "($2) #incrSeqV3($1, $3)"
    call.r = ropecg(p.module, seqAppendPattern, [rdLoc(a),
      getTypeDesc(p.module, e[1].typ),
      genTypeInfoV1(p.module, seqType, e.info)])
  # emit the write barrier if required, but we can always move here, so
  # use 'genRefAssign' for the seq.
  genRefAssign(p, a, call)
  #if bt != b.t:
  #  echo "YES ", e.info, " new: ", typeToString(bt), " old: ", typeToString(b.t)
  initLoc(dest, locExpr, e[2], OnHeap)
  getIntTemp(p, tmpL)
  lineCg(p, cpsStmts, "$1 = $2->$3++;$n", [tmpL.r, rdLoc(a), lenField(p)])
  dest.r = ropecg(p.module, "$1$3[$2]", [rdLoc(a), tmpL.r, dataField(p)])
  genAssignment(p, dest, b, {needToCopy})
  gcUsage(p.config, e)

proc genReset(p: BProc, n: PNode) =
  var a: TLoc
  initLocExpr(p, n[1], a)
  specializeReset(p, a)
  when false:
    linefmt(p, cpsStmts, "#genericReset((void*)$1, $2);$n",
            [addrLoc(p.config, a),
            genTypeInfoV1(p.module, skipTypes(a.t, {tyVar}), n.info)])

proc genDefault(p: BProc; n: PNode; d: var TLoc) =
  if d.k == locNone: getTemp(p, n.typ, d, needsInit=true)
  else: resetLoc(p, d)

proc rawGenNew(p: BProc, a: var TLoc, sizeExpr: Rope; needsInit: bool) =
  var sizeExpr = sizeExpr
  let typ = a.t
  var b: TLoc
  initLoc(b, locExpr, a.lode, OnHeap)
  let refType = typ.skipTypes(abstractInstOwned)
  assert refType.kind == tyRef
  let bt = refType.lastSon
  if sizeExpr == "":
    sizeExpr = "sizeof($1)" % [getTypeDesc(p.module, bt)]

  if optTinyRtti in p.config.globalOptions:
    if needsInit:
      b.r = ropecg(p.module, "($1) #nimNewObj($2, NIM_ALIGNOF($3))",
          [getTypeDesc(p.module, typ), sizeExpr, getTypeDesc(p.module, bt)])
    else:
      b.r = ropecg(p.module, "($1) #nimNewObjUninit($2, NIM_ALIGNOF($3))",
          [getTypeDesc(p.module, typ), sizeExpr, getTypeDesc(p.module, bt)])
    genAssignment(p, a, b, {})
  else:
    let ti = genTypeInfoV1(p.module, typ, a.lode.info)
    let op = getAttachedOp(p.module.g.graph, bt, attachedDestructor)
    if op != nil and not isTrivialProc(p.module.g.graph, op):
      # the prototype of a destructor is ``=destroy(x: var T)`` and that of a
      # finalizer is: ``proc (x: ref T) {.nimcall.}``. We need to check the calling
      # convention at least:
      if op.typ == nil or op.typ.callConv != ccNimCall:
        localError(p.module.config, a.lode.info,
          "the destructor that is turned into a finalizer needs " &
          "to have the 'nimcall' calling convention")
      var f: TLoc
      initLocExpr(p, newSymNode(op), f)
      p.module.s[cfsTypeInit3].addf("$1->finalizer = (void*)$2;$n", [ti, rdLoc(f)])

    if a.storage == OnHeap and usesWriteBarrier(p.config):
      if canFormAcycle(a.t):
        linefmt(p, cpsStmts, "if ($1) { #nimGCunrefRC1($1); $1 = NIM_NIL; }$n", [a.rdLoc])
      else:
        linefmt(p, cpsStmts, "if ($1) { #nimGCunrefNoCycle($1); $1 = NIM_NIL; }$n", [a.rdLoc])
      if p.config.selectedGC == gcGo:
        # newObjRC1() would clash with unsureAsgnRef() - which is used by gcGo to
        # implement the write barrier
        b.r = ropecg(p.module, "($1) #newObj($2, $3)", [getTypeDesc(p.module, typ), ti, sizeExpr])
        linefmt(p, cpsStmts, "#unsureAsgnRef((void**) $1, $2);$n",
                [addrLoc(p.config, a), b.rdLoc])
      else:
        # use newObjRC1 as an optimization
        b.r = ropecg(p.module, "($1) #newObjRC1($2, $3)", [getTypeDesc(p.module, typ), ti, sizeExpr])
        linefmt(p, cpsStmts, "$1 = $2;$n", [a.rdLoc, b.rdLoc])
    else:
      b.r = ropecg(p.module, "($1) #newObj($2, $3)", [getTypeDesc(p.module, typ), ti, sizeExpr])
      genAssignment(p, a, b, {})
  # set the object type:
  genObjectInit(p, cpsStmts, bt, a, constructRefObj)

proc genNew(p: BProc, e: PNode) =
  var a: TLoc
  initLocExpr(p, e[1], a)
  # 'genNew' also handles 'unsafeNew':
  if e.len == 3:
    var se: TLoc
    initLocExpr(p, e[2], se)
    rawGenNew(p, a, se.rdLoc, needsInit = true)
  else:
    rawGenNew(p, a, "", needsInit = true)
  gcUsage(p.config, e)

proc genNewSeqAux(p: BProc, dest: TLoc, length: Rope; lenIsZero: bool) =
  let seqtype = skipTypes(dest.t, abstractVarRange)
  var call: TLoc
  initLoc(call, locExpr, dest.lode, OnHeap)
  if dest.storage == OnHeap and usesWriteBarrier(p.config):
    if canFormAcycle(dest.t):
      linefmt(p, cpsStmts, "if ($1) { #nimGCunrefRC1($1); $1 = NIM_NIL; }$n", [dest.rdLoc])
    else:
      linefmt(p, cpsStmts, "if ($1) { #nimGCunrefNoCycle($1); $1 = NIM_NIL; }$n", [dest.rdLoc])
    if not lenIsZero:
      if p.config.selectedGC == gcGo:
        # we need the write barrier
        call.r = ropecg(p.module, "($1) #newSeq($2, $3)", [getTypeDesc(p.module, seqtype),
              genTypeInfoV1(p.module, seqtype, dest.lode.info), length])
        linefmt(p, cpsStmts, "#unsureAsgnRef((void**) $1, $2);$n", [addrLoc(p.config, dest), call.rdLoc])
      else:
        call.r = ropecg(p.module, "($1) #newSeqRC1($2, $3)", [getTypeDesc(p.module, seqtype),
              genTypeInfoV1(p.module, seqtype, dest.lode.info), length])
        linefmt(p, cpsStmts, "$1 = $2;$n", [dest.rdLoc, call.rdLoc])
  else:
    if lenIsZero:
      call.r = rope"NIM_NIL"
    else:
      call.r = ropecg(p.module, "($1) #newSeq($2, $3)", [getTypeDesc(p.module, seqtype),
              genTypeInfoV1(p.module, seqtype, dest.lode.info), length])
    genAssignment(p, dest, call, {})

proc genNewSeq(p: BProc, e: PNode) =
  var a, b: TLoc
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  if optSeqDestructors in p.config.globalOptions:
    let seqtype = skipTypes(e[1].typ, abstractVarRange)
    linefmt(p, cpsStmts, "$1.len = $2; $1.p = ($4*) #newSeqPayload($2, sizeof($3), NIM_ALIGNOF($3));$n",
      [a.rdLoc, b.rdLoc,
       getTypeDesc(p.module, seqtype.lastSon),
       getSeqPayloadType(p.module, seqtype)])
  else:
    let lenIsZero = e[2].kind == nkIntLit and e[2].intVal == 0
    genNewSeqAux(p, a, b.rdLoc, lenIsZero)
    gcUsage(p.config, e)

proc genNewSeqOfCap(p: BProc; e: PNode; d: var TLoc) =
  let seqtype = skipTypes(e.typ, abstractVarRange)
  var a: TLoc
  initLocExpr(p, e[1], a)
  if optSeqDestructors in p.config.globalOptions:
    if d.k == locNone: getTemp(p, e.typ, d, needsInit=false)
    linefmt(p, cpsStmts, "$1.len = 0; $1.p = ($4*) #newSeqPayload($2, sizeof($3), NIM_ALIGNOF($3));$n",
      [d.rdLoc, a.rdLoc, getTypeDesc(p.module, seqtype.lastSon),
      getSeqPayloadType(p.module, seqtype),
    ])
  else:
    putIntoDest(p, d, e, ropecg(p.module,
                "($1)#nimNewSeqOfCap($2, $3)", [
                getTypeDesc(p.module, seqtype),
                genTypeInfoV1(p.module, seqtype, e.info), a.rdLoc]))
    gcUsage(p.config, e)

proc rawConstExpr(p: BProc, n: PNode; d: var TLoc) =
  let t = n.typ
  discard getTypeDesc(p.module, t) # so that any fields are initialized
  let id = nodeTableTestOrSet(p.module.dataCache, n, p.module.labels)
  fillLoc(d, locData, n, p.module.tmpBase & rope(id), OnStatic)
  if id == p.module.labels:
    # expression not found in the cache:
    inc(p.module.labels)
    p.module.s[cfsData].addf("static NIM_CONST $1 $2 = ", [getTypeDesc(p.module, t), d.r])
    genBracedInit(p, n, isConst = true, t, p.module.s[cfsData])
    p.module.s[cfsData].addf(";$n", [])

proc handleConstExpr(p: BProc, n: PNode, d: var TLoc): bool =
  if d.k == locNone and n.len > ord(n.kind == nkObjConstr) and n.isDeepConstExpr:
    rawConstExpr(p, n, d)
    result = true
  else:
    result = false

proc genObjConstr(p: BProc, e: PNode, d: var TLoc) =
  #echo renderTree e, " ", e.isDeepConstExpr
  # inheritance in C++ does not allow struct initialization so
  # we skip this step here:
  if not p.module.compileToCpp and optSeqDestructors notin p.config.globalOptions:
    # disabled optimization: it is wrong for C++ and now also
    # causes trouble for --gc:arc, see bug #13240
    #[
      var box: seq[Thing]
      for i in 0..3:
        box.add Thing(s1: "121") # pass by sink can mutate Thing.
    ]#
    if handleConstExpr(p, e, d): return
  var t = e.typ.skipTypes(abstractInstOwned)
  let isRef = t.kind == tyRef

  # check if we need to construct the object in a temporary
  var useTemp =
        isRef or
        (d.k notin {locTemp,locLocalVar,locGlobalVar,locParam,locField}) or
        (isPartOf(d.lode, e) != arNo)

  var tmp: TLoc
  var r: Rope
  if useTemp:
    getTemp(p, t, tmp)
    r = rdLoc(tmp)
    if isRef:
      rawGenNew(p, tmp, "", needsInit = nfAllFieldsSet notin e.flags)
      t = t.lastSon.skipTypes(abstractInstOwned)
      r = "(*$1)" % [r]
      gcUsage(p.config, e)
    else:
      constructLoc(p, tmp)
  else:
    resetLoc(p, d)
    r = rdLoc(d)
  discard getTypeDesc(p.module, t)
  let ty = getUniqueType(t)
  for i in 1..<e.len:
    let it = e[i]
    var tmp2: TLoc
    tmp2.r = r
    let field = lookupFieldAgain(p, ty, it[0].sym, tmp2.r)
    if field.loc.r == "": fillObjectFields(p.module, ty)
    if field.loc.r == "": internalError(p.config, e.info, "genObjConstr")
    if it.len == 3 and optFieldCheck in p.options:
      genFieldCheck(p, it[2], r, field)
    tmp2.r.add(".")
    tmp2.r.add(field.loc.r)
    if useTemp:
      tmp2.k = locTemp
      tmp2.storage = if isRef: OnHeap else: OnStack
    else:
      tmp2.k = d.k
      tmp2.storage = if isRef: OnHeap else: d.storage
    tmp2.lode = it[1]
    expr(p, it[1], tmp2)
  if useTemp:
    if d.k == locNone:
      d = tmp
    else:
      genAssignment(p, d, tmp, {})

proc lhsDoesAlias(a, b: PNode): bool =
  for y in b:
    if isPartOf(a, y) != arNo: return true

proc genSeqConstr(p: BProc, n: PNode, d: var TLoc) =
  var arr, tmp: TLoc
  # bug #668
  let doesAlias = lhsDoesAlias(d.lode, n)
  let dest = if doesAlias: addr(tmp) else: addr(d)
  if doesAlias:
    getTemp(p, n.typ, tmp)
  elif d.k == locNone:
    getTemp(p, n.typ, d)

  var lit = newRopeAppender()
  intLiteral(n.len, lit)
  if optSeqDestructors in p.config.globalOptions:
    let seqtype = n.typ
    linefmt(p, cpsStmts, "$1.len = $2; $1.p = ($4*) #newSeqPayload($2, sizeof($3), NIM_ALIGNOF($3));$n",
      [rdLoc dest[], lit, getTypeDesc(p.module, seqtype.lastSon),
      getSeqPayloadType(p.module, seqtype)])
  else:
    # generate call to newSeq before adding the elements per hand:
    genNewSeqAux(p, dest[], lit, n.len == 0)
  for i in 0..<n.len:
    initLoc(arr, locExpr, n[i], OnHeap)
    var lit = newRopeAppender()
    intLiteral(i, lit)
    arr.r = ropecg(p.module, "$1$3[$2]", [rdLoc(dest[]), lit, dataField(p)])
    arr.storage = OnHeap            # we know that sequences are on the heap
    expr(p, n[i], arr)
  gcUsage(p.config, n)
  if doesAlias:
    if d.k == locNone:
      d = tmp
    else:
      genAssignment(p, d, tmp, {})

proc genArrToSeq(p: BProc, n: PNode, d: var TLoc) =
  var elem, a, arr: TLoc
  if n[1].kind == nkBracket:
    n[1].typ = n.typ
    genSeqConstr(p, n[1], d)
    return
  if d.k == locNone:
    getTemp(p, n.typ, d)
  initLocExpr(p, n[1], a)
  # generate call to newSeq before adding the elements per hand:
  let L = toInt(lengthOrd(p.config, n[1].typ))
  if optSeqDestructors in p.config.globalOptions:
    let seqtype = n.typ
    linefmt(p, cpsStmts, "$1.len = $2; $1.p = ($4*) #newSeqPayload($2, sizeof($3), NIM_ALIGNOF($3));$n",
      [rdLoc d, L, getTypeDesc(p.module, seqtype.lastSon),
      getSeqPayloadType(p.module, seqtype)])
  else:
    var lit = newRopeAppender()
    intLiteral(L, lit)
    genNewSeqAux(p, d, lit, L == 0)
  # bug #5007; do not produce excessive C source code:
  if L < 10:
    for i in 0..<L:
      initLoc(elem, locExpr, lodeTyp elemType(skipTypes(n.typ, abstractInst)), OnHeap)
      var lit = newRopeAppender()
      intLiteral(i, lit)
      elem.r = ropecg(p.module, "$1$3[$2]", [rdLoc(d), lit, dataField(p)])
      elem.storage = OnHeap # we know that sequences are on the heap
      initLoc(arr, locExpr, lodeTyp elemType(skipTypes(n[1].typ, abstractInst)), a.storage)
      arr.r = ropecg(p.module, "$1[$2]", [rdLoc(a), lit])
      genAssignment(p, elem, arr, {needToCopy})
  else:
    var i: TLoc
    getTemp(p, getSysType(p.module.g.graph, unknownLineInfo, tyInt), i)
    linefmt(p, cpsStmts, "for ($1 = 0; $1 < $2; $1++) {$n",  [i.r, L])
    initLoc(elem, locExpr, lodeTyp elemType(skipTypes(n.typ, abstractInst)), OnHeap)
    elem.r = ropecg(p.module, "$1$3[$2]", [rdLoc(d), rdLoc(i), dataField(p)])
    elem.storage = OnHeap # we know that sequences are on the heap
    initLoc(arr, locExpr, lodeTyp elemType(skipTypes(n[1].typ, abstractInst)), a.storage)
    arr.r = ropecg(p.module, "$1[$2]", [rdLoc(a), rdLoc(i)])
    genAssignment(p, elem, arr, {needToCopy})
    lineF(p, cpsStmts, "}$n", [])


proc genNewFinalize(p: BProc, e: PNode) =
  var
    a, b, f: TLoc
    refType, bt: PType
    ti: Rope
  refType = skipTypes(e[1].typ, abstractVarRange)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], f)
  initLoc(b, locExpr, a.lode, OnHeap)
  ti = genTypeInfo(p.config, p.module, refType, e.info)
  p.module.s[cfsTypeInit3].addf("$1->finalizer = (void*)$2;$n", [ti, rdLoc(f)])
  b.r = ropecg(p.module, "($1) #newObj($2, sizeof($3))", [
      getTypeDesc(p.module, refType),
      ti, getTypeDesc(p.module, skipTypes(refType.lastSon, abstractRange))])
  genAssignment(p, a, b, {})  # set the object type:
  bt = skipTypes(refType.lastSon, abstractRange)
  genObjectInit(p, cpsStmts, bt, a, constructRefObj)
  gcUsage(p.config, e)

proc genOfHelper(p: BProc; dest: PType; a: Rope; info: TLineInfo; result: var Rope) =
  if optTinyRtti in p.config.globalOptions:
    let token = $genDisplayElem(MD5Digest(hashType(dest, p.config)))
    appcg(p.module, result, "#isObjDisplayCheck($#.m_type, $#, $#)", [a, getObjDepth(dest), token])
  else:
    # unfortunately 'genTypeInfoV1' sets tfObjHasKids as a side effect, so we
    # have to call it here first:
    let ti = genTypeInfoV1(p.module, dest, info)
    if tfFinal in dest.flags or (objHasKidsValid in p.module.flags and
                                tfObjHasKids notin dest.flags):
      result.add "$1.m_type == $2" % [a, ti]
    else:
      cgsym(p.module, "TNimType")
      inc p.module.labels
      let cache = "Nim_OfCheck_CACHE" & p.module.labels.rope
      p.module.s[cfsVars].addf("static TNimType* $#[2];$n", [cache])
      appcg(p.module, result, "#isObjWithCache($#.m_type, $#, $#)", [a, ti, cache])

proc genOf(p: BProc, x: PNode, typ: PType, d: var TLoc) =
  var a: TLoc
  initLocExpr(p, x, a)
  var dest = skipTypes(typ, typedescPtrs)
  var r = rdLoc(a)
  var nilCheck: Rope = ""
  var t = skipTypes(a.t, abstractInstOwned)
  while t.kind in {tyVar, tyLent, tyPtr, tyRef}:
    if t.kind notin {tyVar, tyLent}: nilCheck = r
    if t.kind notin {tyVar, tyLent} or not p.module.compileToCpp:
      r = ropecg(p.module, "(*$1)", [r])
    t = skipTypes(t.lastSon, typedescInst+{tyOwned})
  discard getTypeDesc(p.module, t)
  if not p.module.compileToCpp:
    while t.kind == tyObject and t[0] != nil:
      r.add(".Sup")
      t = skipTypes(t[0], skipPtrs)
  if isObjLackingTypeField(t):
    globalError(p.config, x.info,
      "no 'of' operator available for pure objects")

  var ro = newRopeAppender()
  genOfHelper(p, dest, r, x.info, ro)
  var ofExpr = newRopeAppender()
  ofExpr.add "("
  if nilCheck != "":
    ofExpr.add "("
    ofExpr.add nilCheck
    ofExpr.add ") && ("
    ofExpr.add ro
    ofExpr.add "))"
  else:
    ofExpr.add ro
    ofExpr.add ")"

  putIntoDest(p, d, x, ofExpr, a.storage)

proc genOf(p: BProc, n: PNode, d: var TLoc) =
  genOf(p, n[1], n[2].typ, d)

proc genRepr(p: BProc, e: PNode, d: var TLoc) =
  if optTinyRtti in p.config.globalOptions:
    localError(p.config, e.info, "'repr' is not available for --newruntime")
  var a: TLoc
  initLocExpr(p, e[1], a)
  var t = skipTypes(e[1].typ, abstractVarRange)
  case t.kind
  of tyInt..tyInt64, tyUInt..tyUInt64:
    putIntoDest(p, d, e,
                ropecg(p.module, "#reprInt((NI64)$1)", [rdLoc(a)]), a.storage)
  of tyFloat..tyFloat128:
    putIntoDest(p, d, e, ropecg(p.module, "#reprFloat($1)", [rdLoc(a)]), a.storage)
  of tyBool:
    putIntoDest(p, d, e, ropecg(p.module, "#reprBool($1)", [rdLoc(a)]), a.storage)
  of tyChar:
    putIntoDest(p, d, e, ropecg(p.module, "#reprChar($1)", [rdLoc(a)]), a.storage)
  of tyEnum, tyOrdinal:
    putIntoDest(p, d, e,
                ropecg(p.module, "#reprEnum((NI)$1, $2)", [
                rdLoc(a), genTypeInfoV1(p.module, t, e.info)]), a.storage)
  of tyString:
    putIntoDest(p, d, e, ropecg(p.module, "#reprStr($1)", [rdLoc(a)]), a.storage)
  of tySet:
    putIntoDest(p, d, e, ropecg(p.module, "#reprSet($1, $2)", [
                addrLoc(p.config, a), genTypeInfoV1(p.module, t, e.info)]), a.storage)
  of tyOpenArray, tyVarargs:
    var b: TLoc
    case skipTypes(a.t, abstractVarRange).kind
    of tyOpenArray, tyVarargs:
      putIntoDest(p, b, e, "$1, $1Len_0" % [rdLoc(a)], a.storage)
    of tyString, tySequence:
      putIntoDest(p, b, e,
                  "($4) ? ($1$3) : NIM_NIL, $2" %
                    [rdLoc(a), lenExpr(p, a), dataField(p), dataFieldAccessor(p, a.rdLoc)],
                  a.storage)
    of tyArray:
      putIntoDest(p, b, e,
                  "$1, $2" % [rdLoc(a), rope(lengthOrd(p.config, a.t))], a.storage)
    else: internalError(p.config, e[0].info, "genRepr()")
    putIntoDest(p, d, e,
        ropecg(p.module, "#reprOpenArray($1, $2)", [rdLoc(b),
        genTypeInfoV1(p.module, elemType(t), e.info)]), a.storage)
  of tyCstring, tyArray, tyRef, tyPtr, tyPointer, tyNil, tySequence:
    putIntoDest(p, d, e,
                ropecg(p.module, "#reprAny($1, $2)", [
                rdLoc(a), genTypeInfoV1(p.module, t, e.info)]), a.storage)
  of tyEmpty, tyVoid:
    localError(p.config, e.info, "'repr' doesn't support 'void' type")
  else:
    putIntoDest(p, d, e, ropecg(p.module, "#reprAny($1, $2)",
                              [addrLoc(p.config, a), genTypeInfoV1(p.module, t, e.info)]),
                               a.storage)
  gcUsage(p.config, e)

proc rdMType(p: BProc; a: TLoc; nilCheck: var Rope; result: var Rope; enforceV1 = false) =
  var derefs = rdLoc(a)
  var t = skipTypes(a.t, abstractInst)
  while t.kind in {tyVar, tyLent, tyPtr, tyRef}:
    if t.kind notin {tyVar, tyLent}: nilCheck = derefs
    if t.kind notin {tyVar, tyLent} or not p.module.compileToCpp:
      derefs = "(*$1)" % [derefs]
    t = skipTypes(t.lastSon, abstractInst)
  result.add derefs
  discard getTypeDesc(p.module, t)
  if not p.module.compileToCpp:
    while t.kind == tyObject and t[0] != nil:
      result.add(".Sup")
      t = skipTypes(t[0], skipPtrs)
  result.add ".m_type"
  if optTinyRtti in p.config.globalOptions and enforceV1:
    result.add "->typeInfoV1"

proc genGetTypeInfo(p: BProc, e: PNode, d: var TLoc) =
  cgsym(p.module, "TNimType")
  let t = e[1].typ
  # ordinary static type information
  putIntoDest(p, d, e, genTypeInfoV1(p.module, t, e.info))

proc genGetTypeInfoV2(p: BProc, e: PNode, d: var TLoc) =
  let t = e[1].typ
  if isFinal(t) or e[0].sym.name.s != "getDynamicTypeInfo":
    # ordinary static type information
    putIntoDest(p, d, e, genTypeInfoV2(p.module, t, e.info))
  else:
    var a: TLoc
    initLocExpr(p, e[1], a)
    var nilCheck = ""
    # use the dynamic type stored at offset 0:
    var rt = newRopeAppender()
    rdMType(p, a, nilCheck, rt)
    putIntoDest(p, d, e, rt)

proc genAccessTypeField(p: BProc; e: PNode; d: var TLoc) =
  var a: TLoc
  initLocExpr(p, e[1], a)
  var nilCheck = ""
  # use the dynamic type stored at offset 0:
  var rt = newRopeAppender()
  rdMType(p, a, nilCheck, rt)
  putIntoDest(p, d, e, rt)

template genDollar(p: BProc, n: PNode, d: var TLoc, frmt: string) =
  var a: TLoc
  initLocExpr(p, n[1], a)
  a.r = ropecg(p.module, frmt, [rdLoc(a)])
  a.flags.excl lfIndirect # this flag should not be propagated here (not just for HCR)
  if d.k == locNone: getTemp(p, n.typ, d)
  genAssignment(p, d, a, {})
  gcUsage(p.config, n)

proc genArrayLen(p: BProc, e: PNode, d: var TLoc, op: TMagic) =
  var a = e[1]
  if a.kind == nkHiddenAddr: a = a[0]
  var typ = skipTypes(a.typ, abstractVar + tyUserTypeClasses)
  case typ.kind
  of tyOpenArray, tyVarargs:
    # Bug #9279, len(toOpenArray()) has to work:
    if a.kind in nkCallKinds and a[0].kind == nkSym and a[0].sym.magic == mSlice:
      # magic: pass slice to openArray:
      var m: TLoc
      var b, c: TLoc
      initLocExpr(p, a[1], m)
      initLocExpr(p, a[2], b)
      initLocExpr(p, a[3], c)
      if optBoundsCheck in p.options:
        genBoundsCheck(p, m, b, c)
      if op == mHigh:
        putIntoDest(p, d, e, ropecg(p.module, "($2)-($1)", [rdLoc(b), rdLoc(c)]))
      else:
        putIntoDest(p, d, e, ropecg(p.module, "($2)-($1)+1", [rdLoc(b), rdLoc(c)]))
    else:
      if not reifiedOpenArray(a):
        if op == mHigh: unaryExpr(p, e, d, "($1Len_0-1)")
        else: unaryExpr(p, e, d, "$1Len_0")
      else:
        if op == mHigh: unaryExpr(p, e, d, "($1.Field1-1)")
        else: unaryExpr(p, e, d, "$1.Field1")
  of tyCstring:
    if op == mHigh: unaryExpr(p, e, d, "($1 ? (#nimCStrLen($1)-1) : -1)")
    else: unaryExpr(p, e, d, "($1 ? #nimCStrLen($1) : 0)")
  of tyString:
    var a: TLoc
    initLocExpr(p, e[1], a)
    var x = lenExpr(p, a)
    if op == mHigh: x = "($1-1)" % [x]
    putIntoDest(p, d, e, x)
  of tySequence:
    # we go through a temporary here because people write bullshit code.
    var a, tmp: TLoc
    initLocExpr(p, e[1], a)
    getIntTemp(p, tmp)
    var x = lenExpr(p, a)
    if op == mHigh: x = "($1-1)" % [x]
    lineCg(p, cpsStmts, "$1 = $2;$n", [tmp.r, x])
    putIntoDest(p, d, e, tmp.r)
  of tyArray:
    # YYY: length(sideeffect) is optimized away incorrectly?
    if op == mHigh: putIntoDest(p, d, e, rope(lastOrd(p.config, typ)))
    else: putIntoDest(p, d, e, rope(lengthOrd(p.config, typ)))
  else: internalError(p.config, e.info, "genArrayLen()")

proc makePtrType(baseType: PType; idgen: IdGenerator): PType =
  result = newType(tyPtr, nextTypeId idgen, baseType.owner)
  addSonSkipIntLit(result, baseType, idgen)

proc makeAddr(n: PNode; idgen: IdGenerator): PNode =
  if n.kind == nkHiddenAddr:
    result = n
  else:
    result = newTree(nkHiddenAddr, n)
    result.typ = makePtrType(n.typ, idgen)

proc genSetLengthSeq(p: BProc, e: PNode, d: var TLoc) =
  if optSeqDestructors in p.config.globalOptions:
    e[1] = makeAddr(e[1], p.module.idgen)
    genCall(p, e, d)
    return
  var a, b, call: TLoc
  assert(d.k == locNone)
  var x = e[1]
  if x.kind in {nkAddr, nkHiddenAddr}: x = x[0]
  initLocExpr(p, x, a)
  initLocExpr(p, e[2], b)
  let t = skipTypes(e[1].typ, {tyVar})

  initLoc(call, locCall, e, OnHeap)
  if not p.module.compileToCpp:
    const setLenPattern = "($3) #setLengthSeqV2(($1)?&($1)->Sup:NIM_NIL, $4, $2)"
    call.r = ropecg(p.module, setLenPattern, [
      rdLoc(a), rdLoc(b), getTypeDesc(p.module, t),
      genTypeInfoV1(p.module, t.skipTypes(abstractInst), e.info)])

  else:
    const setLenPattern = "($3) #setLengthSeqV2($1, $4, $2)"
    call.r = ropecg(p.module, setLenPattern, [
      rdLoc(a), rdLoc(b), getTypeDesc(p.module, t),
      genTypeInfoV1(p.module, t.skipTypes(abstractInst), e.info)])

  genAssignment(p, a, call, {})
  gcUsage(p.config, e)

proc genSetLengthStr(p: BProc, e: PNode, d: var TLoc) =
  if optSeqDestructors in p.config.globalOptions:
    binaryStmtAddr(p, e, d, "setLengthStrV2")
  else:
    var a, b, call: TLoc
    if d.k != locNone: internalError(p.config, e.info, "genSetLengthStr")
    initLocExpr(p, e[1], a)
    initLocExpr(p, e[2], b)

    initLoc(call, locCall, e, OnHeap)
    call.r = ropecg(p.module, "#setLengthStr($1, $2)", [
        rdLoc(a), rdLoc(b)])
    genAssignment(p, a, call, {})
    gcUsage(p.config, e)

proc genSwap(p: BProc, e: PNode, d: var TLoc) =
  # swap(a, b) -->
  # temp = a
  # a = b
  # b = temp
  cowBracket(p, e[1])
  cowBracket(p, e[2])
  var a, b, tmp: TLoc
  getTemp(p, skipTypes(e[1].typ, abstractVar), tmp)
  initLocExpr(p, e[1], a) # eval a
  initLocExpr(p, e[2], b) # eval b
  genAssignment(p, tmp, a, {})
  genAssignment(p, a, b, {})
  genAssignment(p, b, tmp, {})

proc rdSetElemLoc(conf: ConfigRef; a: TLoc, typ: PType; result: var Rope) =
  # read a location of an set element; it may need a subtraction operation
  # before the set operation
  result.add "("
  result.add rdCharLoc(a)
  let setType = typ.skipTypes(abstractPtrs)
  assert(setType.kind == tySet)
  if firstOrd(conf, setType) != 0:
    result.add " - "
    result.add rope(firstOrd(conf, setType))
  result.add ")"

proc fewCmps(conf: ConfigRef; s: PNode): bool =
  # this function estimates whether it is better to emit code
  # for constructing the set or generating a bunch of comparisons directly
  if s.kind != nkCurly: return false
  if (getSize(conf, s.typ) <= conf.target.intSize) and (nfAllConst in s.flags):
    result = false            # it is better to emit the set generation code
  elif elemType(s.typ).kind in {tyInt, tyInt16..tyInt64}:
    result = true             # better not emit the set if int is basetype!
  else:
    result = s.len <= 8  # 8 seems to be a good value

template binaryExprIn(p: BProc, e: PNode, a, b, d: var TLoc, frmt: string) =
  var elem = newRopeAppender()
  rdSetElemLoc(p.config, b, a.t, elem)
  putIntoDest(p, d, e, frmt % [rdLoc(a), elem])

proc genInExprAux(p: BProc, e: PNode, a, b, d: var TLoc) =
  case int(getSize(p.config, skipTypes(e[1].typ, abstractVar)))
  of 1: binaryExprIn(p, e, a, b, d, "(($1 &((NU8)1<<((NU)($2)&7U)))!=0)")
  of 2: binaryExprIn(p, e, a, b, d, "(($1 &((NU16)1<<((NU)($2)&15U)))!=0)")
  of 4: binaryExprIn(p, e, a, b, d, "(($1 &((NU32)1<<((NU)($2)&31U)))!=0)")
  of 8: binaryExprIn(p, e, a, b, d, "(($1 &((NU64)1<<((NU)($2)&63U)))!=0)")
  else: binaryExprIn(p, e, a, b, d, "(($1[(NU)($2)>>3] &(1U<<((NU)($2)&7U)))!=0)")

template binaryStmtInExcl(p: BProc, e: PNode, d: var TLoc, frmt: string) =
  var a, b: TLoc
  assert(d.k == locNone)
  initLocExpr(p, e[1], a)
  initLocExpr(p, e[2], b)
  var elem = newRopeAppender()
  rdSetElemLoc(p.config, b, a.t, elem)
  lineF(p, cpsStmts, frmt, [rdLoc(a), elem])

proc genInOp(p: BProc, e: PNode, d: var TLoc) =
  var a, b, x, y: TLoc
  if (e[1].kind == nkCurly) and fewCmps(p.config, e[1]):
    # a set constructor but not a constant set:
    # do not emit the set, but generate a bunch of comparisons; and if we do
    # so, we skip the unnecessary range check: This is a semantical extension
    # that code now relies on. :-/ XXX
    let ea = if e[2].kind in {nkChckRange, nkChckRange64}:
               e[2][0]
             else:
               e[2]
    initLocExpr(p, ea, a)
    initLoc(b, locExpr, e, OnUnknown)
    if e[1].len > 0:
      b.r = rope("(")
      for i in 0..<e[1].len:
        let it = e[1][i]
        if it.kind == nkRange:
          initLocExpr(p, it[0], x)
          initLocExpr(p, it[1], y)
          b.r.addf("$1 >= $2 && $1 <= $3",
               [rdCharLoc(a), rdCharLoc(x), rdCharLoc(y)])
        else:
          initLocExpr(p, it, x)
          b.r.addf("$1 == $2", [rdCharLoc(a), rdCharLoc(x)])
        if i < e[1].len - 1: b.r.add(" || ")
      b.r.add(")")
    else:
      # handle the case of an empty set
      b.r = rope("0")
    putIntoDest(p, d, e, b.r)
  else:
    assert(e[1].typ != nil)
    assert(e[2].typ != nil)
    initLocExpr(p, e[1], a)
    initLocExpr(p, e[2], b)
    genInExprAux(p, e, a, b, d)

proc genSetOp(p: BProc, e: PNode, d: var TLoc, op: TMagic) =
  const
    lookupOpr: array[mLeSet..mMinusSet, string] = [
      "for ($1 = 0; $1 < $2; $1++) { $n" &
      "  $3 = (($4[$1] & ~ $5[$1]) == 0);$n" &
      "  if (!$3) break;}$n",
      "for ($1 = 0; $1 < $2; $1++) { $n" &
      "  $3 = (($4[$1] & ~ $5[$1]) == 0);$n" &
      "  if (!$3) break;}$n" &
      "if ($3) $3 = (#nimCmpMem($4, $5, $2) != 0);$n",
      "&",
      "|",
      "& ~"]
  var a, b, i: TLoc
  var setType = skipTypes(e[1].typ, abstractVar)
  var size = int(getSize(p.config, setType))
  case size
  of 1, 2, 4, 8:
    case op
    of mIncl:
      case size
      of 1: binaryStmtInExcl(p, e, d, "$1 |= ((NU8)1)<<(($2) & 7);$n")
      of 2: binaryStmtInExcl(p, e, d, "$1 |= ((NU16)1)<<(($2) & 15);$n")
      of 4: binaryStmtInExcl(p, e, d, "$1 |= ((NU32)1)<<(($2) & 31);$n")
      of 8: binaryStmtInExcl(p, e, d, "$1 |= ((NU64)1)<<(($2) & 63);$n")
      else: assert(false, $size)
    of mExcl:
      case size
      of 1: binaryStmtInExcl(p, e, d, "$1 &= ~(((NU8)1) << (($2) & 7));$n")
      of 2: binaryStmtInExcl(p, e, d, "$1 &= ~(((NU16)1) << (($2) & 15));$n")
      of 4: binaryStmtInExcl(p, e, d, "$1 &= ~(((NU32)1) << (($2) & 31));$n")
      of 8: binaryStmtInExcl(p, e, d, "$1 &= ~(((NU64)1) << (($2) & 63));$n")
      else: assert(false, $size)
    of mCard:
      if size <= 4: unaryExprChar(p, e, d, "#countBits32($1)")
      else: unaryExprChar(p, e, d, "#countBits64($1)")
    of mLtSet: binaryExprChar(p, e, d, "((($1 & ~ $2)==0)&&($1 != $2))")
    of mLeSet: binaryExprChar(p, e, d, "(($1 & ~ $2)==0)")
    of mEqSet: binaryExpr(p, e, d, "($1 == $2)")
    of mMulSet: binaryExpr(p, e, d, "($1 & $2)")
    of mPlusSet: binaryExpr(p, e, d, "($1 | $2)")
    of mMinusSet: binaryExpr(p, e, d, "($1 & ~ $2)")
    of mInSet:
      genInOp(p, e, d)
    else: internalError(p.config, e.info, "genSetOp()")
  else:
    case op
    of mIncl: binaryStmtInExcl(p, e, d, "$1[(NU)($2)>>3] |=(1U<<($2&7U));$n")
    of mExcl: binaryStmtInExcl(p, e, d, "$1[(NU)($2)>>3] &= ~(1U<<($2&7U));$n")
    of mCard:
      var a: TLoc
      initLocExpr(p, e[1], a)
      putIntoDest(p, d, e, ropecg(p.module, "#cardSet($1, $2)", [addrLoc(p.config, a), size]))
    of mLtSet, mLeSet:
      getTemp(p, getSysType(p.module.g.graph, unknownLineInfo, tyInt), i) # our counter
      initLocExpr(p, e[1], a)
      initLocExpr(p, e[2], b)
      if d.k == locNone: getTemp(p, getSysType(p.module.g.graph, unknownLineInfo, tyBool), d)
      if op == mLtSet:
        linefmt(p, cpsStmts, lookupOpr[mLtSet],
           [rdLoc(i), size, rdLoc(d), rdLoc(a), rdLoc(b)])
      else:
        linefmt(p, cpsStmts, lookupOpr[mLeSet],
           [rdLoc(i), size, rdLoc(d), rdLoc(a), rdLoc(b)])
    of mEqSet:
      var a, b: TLoc
      assert(e[1].typ != nil)
      assert(e[2].typ != nil)
      initLocExpr(p, e[1], a)
      initLocExpr(p, e[2], b)
      putIntoDest(p, d, e, ropecg(p.module, "(#nimCmpMem($1, $2, $3)==0)", [a.rdCharLoc, b.rdCharLoc, size]))
    of mMulSet, mPlusSet, mMinusSet:
      # we inline the simple for loop for better code generation:
      getTemp(p, getSysType(p.module.g.graph, unknownLineInfo, tyInt), i) # our counter
      initLocExpr(p, e[1], a)
      initLocExpr(p, e[2], b)
      if d.k == locNone: getTemp(p, setType, d)
      lineF(p, cpsStmts,
           "for ($1 = 0; $1 < $2; $1++) $n" &
           "  $3[$1] = $4[$1] $6 $5[$1];$n", [
          rdLoc(i), rope(size), rdLoc(d), rdLoc(a), rdLoc(b),
          rope(lookupOpr[op])])
    of mInSet: genInOp(p, e, d)
    else: internalError(p.config, e.info, "genSetOp")

proc genOrd(p: BProc, e: PNode, d: var TLoc) =
  unaryExprChar(p, e, d, "$1")

proc genSomeCast(p: BProc, e: PNode, d: var TLoc) =
  const
    ValueTypes = {tyTuple, tyObject, tyArray, tyOpenArray, tyVarargs, tyUncheckedArray}
  # we use whatever C gives us. Except if we have a value-type, we need to go
  # through its address:
  var a: TLoc
  initLocExpr(p, e[1], a)
  let etyp = skipTypes(e.typ, abstractRange+{tyOwned})
  let srcTyp = skipTypes(e[1].typ, abstractRange)
  if etyp.kind in ValueTypes and lfIndirect notin a.flags:
    putIntoDest(p, d, e, "(*($1*) ($2))" %
        [getTypeDesc(p.module, e.typ), addrLoc(p.config, a)], a.storage)
  elif etyp.kind == tyProc and etyp.callConv == ccClosure and srcTyp.callConv != ccClosure:
    putIntoDest(p, d, e, "(($1) ($2))" %
        [getClosureType(p.module, etyp, clHalfWithEnv), rdCharLoc(a)], a.storage)
  else:
    # C++ does not like direct casts from pointer to shorter integral types
    if srcTyp.kind in {tyPtr, tyPointer} and etyp.kind in IntegralTypes:
      putIntoDest(p, d, e, "(($1) (ptrdiff_t) ($2))" %
          [getTypeDesc(p.module, e.typ), rdCharLoc(a)], a.storage)
    elif optSeqDestructors in p.config.globalOptions and etyp.kind in {tySequence, tyString}:
      putIntoDest(p, d, e, "(*($1*) (&$2))" %
          [getTypeDesc(p.module, e.typ), rdCharLoc(a)], a.storage)
    elif etyp.kind == tyBool and srcTyp.kind in IntegralTypes:
      putIntoDest(p, d, e, "(($1) != 0)" % [rdCharLoc(a)], a.storage)
    else:
      if etyp.kind == tyPtr:
        # generates the definition of structs for casts like cast[ptr object](addr x)[]
        let internalType = etyp.skipTypes({tyPtr})
        if internalType.kind == tyObject:
          discard getTypeDesc(p.module, internalType)
      putIntoDest(p, d, e, "(($1) ($2))" %
          [getTypeDesc(p.module, e.typ), rdCharLoc(a)], a.storage)

proc genCast(p: BProc, e: PNode, d: var TLoc) =
  const ValueTypes = {tyFloat..tyFloat128, tyTuple, tyObject, tyArray}
  let
    destt = skipTypes(e.typ, abstractRange)
    srct = skipTypes(e[1].typ, abstractRange)
  if destt.kind in ValueTypes or srct.kind in ValueTypes:
    # 'cast' and some float type involved? --> use a union.
    inc(p.labels)
    var lbl = p.labels.rope
    var tmp: TLoc
    tmp.r = "LOC$1.source" % [lbl]
    linefmt(p, cpsLocals, "union { $1 source; $2 dest; } LOC$3;$n",
      [getTypeDesc(p.module, e[1].typ), getTypeDesc(p.module, e.typ), lbl])
    tmp.k = locExpr
    tmp.lode = lodeTyp srct
    tmp.storage = OnStack
    tmp.flags = {}
    expr(p, e[1], tmp)
    putIntoDest(p, d, e, "LOC$#.dest" % [lbl], tmp.storage)
  else:
    # I prefer the shorter cast version for pointer types -> generate less
    # C code; plus it's the right thing to do for closures:
    genSomeCast(p, e, d)

proc genRangeChck(p: BProc, n: PNode, d: var TLoc) =
  var a: TLoc
  var dest = skipTypes(n.typ, abstractVar)
  initLocExpr(p, n[0], a)
  if optRangeCheck notin p.options or (dest.kind in {tyUInt..tyUInt64} and
      checkUnsignedConversions notin p.config.legacyFeatures):
    discard "no need to generate a check because it was disabled"
  else:
    let n0t = n[0].typ

    # emit range check:
    if n0t.kind in {tyUInt, tyUInt64}:
      var first = newRopeAppender()
      genLiteral(p, n[1], dest, first)
      var last = newRopeAppender()
      genLiteral(p, n[2], dest, last)
      linefmt(p, cpsStmts, "if ($1 > ($5)($3)){ #raiseRangeErrorNoArgs(); ",
        [rdCharLoc(a), first, last,
        raiser, getTypeDesc(p.module, n0t)])
      raiseInstr(p, p.s(cpsStmts))
      linefmt p, cpsStmts, "}$n", []

    else:
      let raiser =
        case skipTypes(n.typ, abstractVarRange).kind
        of tyUInt..tyUInt64, tyChar: "raiseRangeErrorU"
        of tyFloat..tyFloat128: "raiseRangeErrorF"
        else: "raiseRangeErrorI"
      cgsym(p.module, raiser)

      let boundaryCast =
        if n0t.skipTypes(abstractVarRange).kind in {tyUInt, tyUInt32, tyUInt64}:
          "(NI64)"
        else:
          ""
      var first = newRopeAppender()
      genLiteral(p, n[1], dest, first)
      var last = newRopeAppender()
      genLiteral(p, n[2], dest, last)
      linefmt(p, cpsStmts, "if ($5($1) < $2 || $5($1) > $3){ $4($1, $2, $3); ",
        [rdCharLoc(a), first, last,
        raiser, boundaryCast])
      raiseInstr(p, p.s(cpsStmts))
      linefmt p, cpsStmts, "}$n", []

  putIntoDest(p, d, n, "(($1) ($2))" %
      [getTypeDesc(p.module, dest), rdCharLoc(a)], a.storage)

proc genConv(p: BProc, e: PNode, d: var TLoc) =
  let destType = e.typ.skipTypes({tyVar, tyLent, tyGenericInst, tyAlias, tySink})
  if sameBackendType(destType, e[1].typ):
    expr(p, e[1], d)
  else:
    genSomeCast(p, e, d)

proc convStrToCStr(p: BProc, n: PNode, d: var TLoc) =
  var a: TLoc
  initLocExpr(p, n[0], a)
  putIntoDest(p, d, n,
              ropecg(p.module, "#nimToCStringConv($1)", [rdLoc(a)]),
#                "($1 ? $1->data : (NCSTRING)\"\")" % [a.rdLoc],
              a.storage)

proc convCStrToStr(p: BProc, n: PNode, d: var TLoc) =
  var a: TLoc
  initLocExpr(p, n[0], a)
  putIntoDest(p, d, n,
              ropecg(p.module, "#cstrToNimstr($1)", [rdLoc(a)]),
              a.storage)
  gcUsage(p.config, n)

proc genStrEquals(p: BProc, e: PNode, d: var TLoc) =
  var x: TLoc
  var a = e[1]
  var b = e[2]
  if a.kind in {nkStrLit..nkTripleStrLit} and a.strVal == "":
    initLocExpr(p, e[2], x)
    putIntoDest(p, d, e,
      ropecg(p.module, "($1 == 0)", [lenExpr(p, x)]))
  elif b.kind in {nkStrLit..nkTripleStrLit} and b.strVal == "":
    initLocExpr(p, e[1], x)
    putIntoDest(p, d, e,
      ropecg(p.module, "($1 == 0)", [lenExpr(p, x)]))
  else:
    binaryExpr(p, e, d, "#eqStrings($1, $2)")

proc binaryFloatArith(p: BProc, e: PNode, d: var TLoc, m: TMagic) =
  if {optNaNCheck, optInfCheck} * p.options != {}:
    const opr: array[mAddF64..mDivF64, string] = ["+", "-", "*", "/"]
    var a, b: TLoc
    assert(e[1].typ != nil)
    assert(e[2].typ != nil)
    initLocExpr(p, e[1], a)
    initLocExpr(p, e[2], b)
    putIntoDest(p, d, e, ropecg(p.module, "(($4)($2) $1 ($4)($3))",
                              [opr[m], rdLoc(a), rdLoc(b),
                              getSimpleTypeDesc(p.module, e[1].typ)]))
    if optNaNCheck in p.options:
      linefmt(p, cpsStmts, "if ($1 != $1){ #raiseFloatInvalidOp(); ", [rdLoc(d)])
      raiseInstr(p, p.s(cpsStmts))
      linefmt p, cpsStmts, "}$n", []

    if optInfCheck in p.options:
      linefmt(p, cpsStmts, "if ($1 != 0.0 && $1*0.5 == $1) { #raiseFloatOverflow($1); ", [rdLoc(d)])
      raiseInstr(p, p.s(cpsStmts))
      linefmt p, cpsStmts, "}$n", []

  else:
    binaryArith(p, e, d, m)

proc skipAddr(n: PNode): PNode =
  result = if n.kind in {nkAddr, nkHiddenAddr}: n[0] else: n

proc genWasMoved(p: BProc; n: PNode) =
  var a: TLoc
  let n1 = n[1].skipAddr
  if p.withinBlockLeaveActions > 0 and notYetAlive(n1):
    discard
  else:
    initLocExpr(p, n1, a, {lfEnforceDeref})
    resetLoc(p, a)
    #linefmt(p, cpsStmts, "#nimZeroMem((void*)$1, sizeof($2));$n",
    #  [addrLoc(p.config, a), getTypeDesc(p.module, a.t)])

proc genMove(p: BProc; n: PNode; d: var TLoc) =
  var a: TLoc
  initLocExpr(p, n[1].skipAddr, a)
  if n.len == 4:
    # generated by liftdestructors:
    var src: TLoc
    initLocExpr(p, n[2], src)
    linefmt(p, cpsStmts, "if ($1.p != $2.p) {", [rdLoc(a), rdLoc(src)])
    genStmts(p, n[3])
    linefmt(p, cpsStmts, "}$n$1.len = $2.len; $1.p = $2.p;$n", [rdLoc(a), rdLoc(src)])
  else:
    if d.k == locNone: getTemp(p, n.typ, d)
    genAssignment(p, d, a, {})
    resetLoc(p, a)

proc genDup(p: BProc; src: TLoc; d: var TLoc; n: PNode) =
  if d.k == locNone: getTemp(p, n.typ, d)
  linefmt(p, cpsStmts, "#nimDupRef((void**)$1, (void*)$2);$n",
          [addrLoc(p.config, d), rdLoc(src)])

proc genDestroy(p: BProc; n: PNode) =
  if optSeqDestructors in p.config.globalOptions:
    let arg = n[1].skipAddr
    let t = arg.typ.skipTypes(abstractInst)
    case t.kind
    of tyString:
      var a: TLoc
      initLocExpr(p, arg, a)
      if optThreads in p.config.globalOptions:
        linefmt(p, cpsStmts, "if ($1.p && !($1.p->cap & NIM_STRLIT_FLAG)) {$n" &
          " #deallocShared($1.p);$n" &
          "}$n", [rdLoc(a)])
      else:
        linefmt(p, cpsStmts, "if ($1.p && !($1.p->cap & NIM_STRLIT_FLAG)) {$n" &
          " #dealloc($1.p);$n" &
          "}$n", [rdLoc(a)])
    of tySequence:
      var a: TLoc
      initLocExpr(p, arg, a)
      linefmt(p, cpsStmts, "if ($1.p && !($1.p->cap & NIM_STRLIT_FLAG)) {$n" &
        " #alignedDealloc($1.p, NIM_ALIGNOF($2));$n" &
        "}$n",
        [rdLoc(a), getTypeDesc(p.module, t.lastSon)])
    else: discard "nothing to do"
  else:
    let t = n[1].typ.skipTypes(abstractVar)
    let op = getAttachedOp(p.module.g.graph, t, attachedDestructor)
    if op != nil and getBody(p.module.g.graph, op).len != 0:
      internalError(p.config, n.info, "destructor turned out to be not trivial")
    discard "ignore calls to the default destructor"

proc genDispose(p: BProc; n: PNode) =
  when false:
    let elemType = n[1].typ.skipTypes(abstractVar).lastSon

    var a: TLoc
    initLocExpr(p, n[1].skipAddr, a)

    if isFinal(elemType):
      if elemType.destructor != nil:
        var destroyCall = newNodeI(nkCall, n.info)
        genStmts(p, destroyCall)
      lineFmt(p, cpsStmts, "#nimRawDispose($1, NIM_ALIGNOF($2))", [rdLoc(a), getTypeDesc(p.module, elemType)])
    else:
      # ``nimRawDisposeVirtual`` calls the ``finalizer`` which is the same as the
      # destructor, but it uses the runtime type. Afterwards the memory is freed:
      lineCg(p, cpsStmts, ["#nimDestroyAndDispose($#)", rdLoc(a)])

proc genSlice(p: BProc; e: PNode; d: var TLoc) =
  let (x, y) = genOpenArraySlice(p, e, e.typ, e.typ.lastSon,
    prepareForMutation = e[1].kind == nkHiddenDeref and
                         e[1].typ.skipTypes(abstractInst).kind == tyString and
                         p.config.selectedGC in {gcArc, gcOrc})
  if d.k == locNone: getTemp(p, e.typ, d)
  linefmt(p, cpsStmts, "$1.Field0 = $2; $1.Field1 = $3;$n", [rdLoc(d), x, y])
  when false:
    localError(p.config, e.info, "invalid context for 'toOpenArray'; " &
      "'toOpenArray' is only valid within a call expression")

proc genEnumToStr(p: BProc, e: PNode, d: var TLoc) =
  let t = e[1].typ.skipTypes(abstractInst+{tyRange})
  let toStrProc = getToStringProc(p.module.g.graph, t)
  # XXX need to modify this logic for IC.
  var n = copyTree(e)
  n[0] = newSymNode(toStrProc)
  expr(p, n, d)

proc genMagicExpr(p: BProc, e: PNode, d: var TLoc, op: TMagic) =
  case op
  of mOr, mAnd: genAndOr(p, e, d, op)
  of mNot..mUnaryMinusF64: unaryArith(p, e, d, op)
  of mUnaryMinusI..mAbsI: unaryArithOverflow(p, e, d, op)
  of mAddF64..mDivF64: binaryFloatArith(p, e, d, op)
  of mShrI..mXor: binaryArith(p, e, d, op)
  of mEqProc: genEqProc(p, e, d)
  of mAddI..mPred: binaryArithOverflow(p, e, d, op)
  of mRepr: genRepr(p, e, d)
  of mGetTypeInfo: genGetTypeInfo(p, e, d)
  of mGetTypeInfoV2: genGetTypeInfoV2(p, e, d)
  of mSwap: genSwap(p, e, d)
  of mInc, mDec:
    const opr: array[mInc..mDec, string] = ["+=", "-="]
    const fun64: array[mInc..mDec, string] = ["nimAddInt64", "nimSubInt64"]
    const fun: array[mInc..mDec, string] = ["nimAddInt","nimSubInt"]
    let underlying = skipTypes(e[1].typ, {tyGenericInst, tyAlias, tySink, tyVar, tyLent, tyRange, tyDistinct})
    if optOverflowCheck notin p.options or underlying.kind in {tyUInt..tyUInt64}:
      binaryStmt(p, e, d, opr[op])
    else:
      var a, b: TLoc
      assert(e[1].typ != nil)
      assert(e[2].typ != nil)
      initLocExpr(p, e[1], a)
      initLocExpr(p, e[2], b)

      let ranged = skipTypes(e[1].typ, {tyGenericInst, tyAlias, tySink, tyVar, tyLent, tyDistinct})
      let res = binaryArithOverflowRaw(p, ranged, a, b,
        if underlying.kind == tyInt64: fun64[op] else: fun[op])

      putIntoDest(p, a, e[1], "($#)($#)" % [
        getTypeDesc(p.module, ranged), res])

  of mConStrStr: genStrConcat(p, e, d)
  of mAppendStrCh:
    if optSeqDestructors in p.config.globalOptions:
      binaryStmtAddr(p, e, d, "nimAddCharV1")
    else:
      var dest, b, call: TLoc
      initLoc(call, locCall, e, OnHeap)
      initLocExpr(p, e[1], dest)
      initLocExpr(p, e[2], b)
      call.r = ropecg(p.module, "#addChar($1, $2)", [rdLoc(dest), rdLoc(b)])
      genAssignment(p, dest, call, {})
  of mAppendStrStr: genStrAppend(p, e, d)
  of mAppendSeqElem:
    if optSeqDestructors in p.config.globalOptions:
      e[1] = makeAddr(e[1], p.module.idgen)
      genCall(p, e, d)
    else:
      genSeqElemAppend(p, e, d)
  of mEqStr: genStrEquals(p, e, d)
  of mLeStr: binaryExpr(p, e, d, "(#cmpStrings($1, $2) <= 0)")
  of mLtStr: binaryExpr(p, e, d, "(#cmpStrings($1, $2) < 0)")
  of mIsNil: genIsNil(p, e, d)
  of mIntToStr: genDollar(p, e, d, "#nimIntToStr($1)")
  of mInt64ToStr: genDollar(p, e, d, "#nimInt64ToStr($1)")
  of mBoolToStr: genDollar(p, e, d, "#nimBoolToStr($1)")
  of mCharToStr: genDollar(p, e, d, "#nimCharToStr($1)")
  of mFloatToStr:
    if e[1].typ.skipTypes(abstractInst).kind == tyFloat32:
      genDollar(p, e, d, "#nimFloat32ToStr($1)")
    else:
      genDollar(p, e, d, "#nimFloatToStr($1)")
  of mCStrToStr: genDollar(p, e, d, "#cstrToNimstr($1)")
  of mStrToStr, mUnown: expr(p, e[1], d)
  of generatedMagics: genCall(p, e, d)
  of mEnumToStr:
    if optTinyRtti in p.config.globalOptions:
      genEnumToStr(p, e, d)
    else:
      genRepr(p, e, d)
  of mOf: genOf(p, e, d)
  of mNew: genNew(p, e)
  of mNewFinalize:
    if optTinyRtti in p.config.globalOptions:
      var a: TLoc
      initLocExpr(p, e[1], a)
      rawGenNew(p, a, "", needsInit = true)
      gcUsage(p.config, e)
    else:
      genNewFinalize(p, e)
  of mNewSeq:
    if optSeqDestructors in p.config.globalOptions:
      e[1] = makeAddr(e[1], p.module.idgen)
      genCall(p, e, d)
    else:
      genNewSeq(p, e)
  of mNewSeqOfCap: genNewSeqOfCap(p, e, d)
  of mSizeOf:
    let t = e[1].typ.skipTypes({tyTypeDesc})
    putIntoDest(p, d, e, "((NI)sizeof($1))" % [getTypeDesc(p.module, t, skVar)])
  of mAlignOf:
    let t = e[1].typ.skipTypes({tyTypeDesc})
    putIntoDest(p, d, e, "((NI)NIM_ALIGNOF($1))" % [getTypeDesc(p.module, t, skVar)])
  of mOffsetOf:
    var dotExpr: PNode
    if e[1].kind == nkDotExpr:
      dotExpr = e[1]
    elif e[1].kind == nkCheckedFieldExpr:
      dotExpr = e[1][0]
    else:
      internalError(p.config, e.info, "unknown ast")
    let t = dotExpr[0].typ.skipTypes({tyTypeDesc})
    let tname = getTypeDesc(p.module, t, skVar)
    let member =
      if t.kind == tyTuple:
        "Field" & rope(dotExpr[1].sym.position)
      else: dotExpr[1].sym.loc.r
    putIntoDest(p,d,e, "((NI)offsetof($1, $2))" % [tname, member])
  of mChr: genSomeCast(p, e, d)
  of mOrd: genOrd(p, e, d)
  of mLengthArray, mHigh, mLengthStr, mLengthSeq, mLengthOpenArray:
    genArrayLen(p, e, d, op)
  of mGCref: unaryStmt(p, e, d, "if ($1) { #nimGCref($1); }$n")
  of mGCunref: unaryStmt(p, e, d, "if ($1) { #nimGCunref($1); }$n")
  of mSetLengthStr: genSetLengthStr(p, e, d)
  of mSetLengthSeq: genSetLengthSeq(p, e, d)
  of mIncl, mExcl, mCard, mLtSet, mLeSet, mEqSet, mMulSet, mPlusSet, mMinusSet,
     mInSet:
    genSetOp(p, e, d, op)
  of mNewString, mNewStringOfCap, mExit, mParseBiggestFloat:
    var opr = e[0].sym
    # Why would anyone want to set nodecl to one of these hardcoded magics?
    # - not sure, and it wouldn't work if the symbol behind the magic isn't
    #   somehow forward-declared from some other usage, but it is *possible*
    if lfNoDecl notin opr.loc.flags:
      let prc = magicsys.getCompilerProc(p.module.g.graph, $opr.loc.r)
      assert prc != nil, $opr.loc.r
      # HACK:
      # Explicitly add this proc as declared here so the cgsym call doesn't
      # add a forward declaration - without this we could end up with the same
      # 2 forward declarations. That happens because the magic symbol and the original
      # one that shall be used have different ids (even though a call to one is
      # actually a call to the other) so checking into m.declaredProtos with the 2 different ids doesn't work.
      # Why would 2 identical forward declarations be a problem?
      # - in the case of hot code-reloading we generate function pointers instead
      #   of forward declarations and in C++ it is an error to redefine a global
      let wasDeclared = containsOrIncl(p.module.declaredProtos, prc.id)
      # Make the function behind the magic get actually generated - this will
      # not lead to a forward declaration! The genCall will lead to one.
      cgsym(p.module, $opr.loc.r)
      # make sure we have pointer-initialising code for hot code reloading
      if not wasDeclared and p.hcrOn:
        p.module.s[cfsDynLibInit].addf("\t$1 = ($2) hcrGetProc($3, \"$1\");$n",
             [mangleDynLibProc(prc), getTypeDesc(p.module, prc.loc.t), getModuleDllPath(p.module, prc)])
    genCall(p, e, d)
  of mDefault, mZeroDefault: genDefault(p, e, d)
  of mReset: genReset(p, e)
  of mEcho: genEcho(p, e[1].skipConv)
  of mArrToSeq: genArrToSeq(p, e, d)
  of mNLen..mNError, mSlurp..mQuoteAst:
    localError(p.config, e.info, strutils.`%`(errXMustBeCompileTime, e[0].sym.name.s))
  of mSpawn:
    when defined(leanCompiler):
      p.config.quitOrRaise "compiler built without support for the 'spawn' statement"
    else:
      let n = spawn.wrapProcForSpawn(p.module.g.graph, p.module.idgen, p.module.module, e, e.typ, nil, nil)
      expr(p, n, d)
  of mParallel:
    when defined(leanCompiler):
      p.config.quitOrRaise "compiler built without support for the 'parallel' statement"
    else:
      let n = semparallel.liftParallel(p.module.g.graph, p.module.idgen, p.module.module, e)
      expr(p, n, d)
  of mDeepCopy:
    if p.config.selectedGC in {gcArc, gcOrc} and optEnableDeepCopy notin p.config.globalOptions:
      localError(p.config, e.info,
        "for --gc:arc|orc 'deepcopy' support has to be enabled with --deepcopy:on")

    var a, b: TLoc
    let x = if e[1].kind in {nkAddr, nkHiddenAddr}: e[1][0] else: e[1]
    initLocExpr(p, x, a)
    initLocExpr(p, e[2], b)
    genDeepCopy(p, a, b)
  of mDotDot, mEqCString: genCall(p, e, d)
  of mWasMoved: genWasMoved(p, e)
  of mMove: genMove(p, e, d)
  of mDestroy: genDestroy(p, e)
  of mAccessEnv: unaryExpr(p, e, d, "$1.ClE_0")
  of mAccessTypeField: genAccessTypeField(p, e, d)
  of mSlice: genSlice(p, e, d)
  of mTrace: discard "no code to generate"
  of mDup:
    var a: TLoc
    let x = if e[1].kind in {nkAddr, nkHiddenAddr}: e[1][0] else: e[1]
    initLocExpr(p, x, a)
    genDup(p, a, d, e)
  else:
    when defined(debugMagics):
      echo p.prc.name.s, " ", p.prc.id, " ", p.prc.flags, " ", p.prc.ast[genericParamsPos].kind
    internalError(p.config, e.info, "genMagicExpr: " & $op)

proc genSetConstr(p: BProc, e: PNode, d: var TLoc) =
  # example: { a..b, c, d, e, f..g }
  # we have to emit an expression of the form:
  # nimZeroMem(tmp, sizeof(tmp)); inclRange(tmp, a, b); incl(tmp, c);
  # incl(tmp, d); incl(tmp, e); inclRange(tmp, f, g);
  var
    a, b, idx: TLoc
  if nfAllConst in e.flags:
    var elem = newRopeAppender()
    genSetNode(p, e, elem)
    putIntoDest(p, d, e, elem)
  else:
    if d.k == locNone: getTemp(p, e.typ, d)
    if getSize(p.config, e.typ) > 8:
      # big set:
      linefmt(p, cpsStmts, "#nimZeroMem($1, sizeof($2));$n",
          [rdLoc(d), getTypeDesc(p.module, e.typ)])
      for it in e.sons:
        if it.kind == nkRange:
          getTemp(p, getSysType(p.module.g.graph, unknownLineInfo, tyInt), idx) # our counter
          initLocExpr(p, it[0], a)
          initLocExpr(p, it[1], b)
          var aa = newRopeAppender()
          rdSetElemLoc(p.config, a, e.typ, aa)
          var bb = newRopeAppender()
          rdSetElemLoc(p.config, b, e.typ, bb)
          lineF(p, cpsStmts, "for ($1 = $3; $1 <= $4; $1++) $n" &
              "$2[(NU)($1)>>3] |=(1U<<((NU)($1)&7U));$n", [rdLoc(idx), rdLoc(d),
              aa, bb])
        else:
          initLocExpr(p, it, a)
          var aa = newRopeAppender()
          rdSetElemLoc(p.config, a, e.typ, aa)
          lineF(p, cpsStmts, "$1[(NU)($2)>>3] |=(1U<<((NU)($2)&7U));$n",
               [rdLoc(d), aa])
    else:
      # small set
      var ts = "NU" & $(getSize(p.config, e.typ) * 8)
      lineF(p, cpsStmts, "$1 = 0;$n", [rdLoc(d)])
      for it in e.sons:
        if it.kind == nkRange:
          getTemp(p, getSysType(p.module.g.graph, unknownLineInfo, tyInt), idx) # our counter
          initLocExpr(p, it[0], a)
          initLocExpr(p, it[1], b)
          var aa = newRopeAppender()
          rdSetElemLoc(p.config, a, e.typ, aa)
          var bb = newRopeAppender()
          rdSetElemLoc(p.config, b, e.typ, bb)

          lineF(p, cpsStmts, "for ($1 = $3; $1 <= $4; $1++) $n" &
              "$2 |=(($5)(1)<<(($1)%(sizeof($5)*8)));$n", [
              rdLoc(idx), rdLoc(d), aa, bb, rope(ts)])
        else:
          initLocExpr(p, it, a)
          var aa = newRopeAppender()
          rdSetElemLoc(p.config, a, e.typ, aa)
          lineF(p, cpsStmts,
               "$1 |=(($3)(1)<<(($2)%(sizeof($3)*8)));$n",
               [rdLoc(d), aa, rope(ts)])

proc genTupleConstr(p: BProc, n: PNode, d: var TLoc) =
  var rec: TLoc
  if not handleConstExpr(p, n, d):
    let t = n.typ
    discard getTypeDesc(p.module, t) # so that any fields are initialized
    if d.k == locNone: getTemp(p, t, d)
    for i in 0..<n.len:
      var it = n[i]
      if it.kind == nkExprColonExpr: it = it[1]
      initLoc(rec, locExpr, it, d.storage)
      rec.r = "$1.Field$2" % [rdLoc(d), rope(i)]
      rec.flags.incl(lfEnforceDeref)
      expr(p, it, rec)

proc isConstClosure(n: PNode): bool {.inline.} =
  result = n[0].kind == nkSym and isRoutine(n[0].sym) and
      n[1].kind == nkNilLit

proc genClosure(p: BProc, n: PNode, d: var TLoc) =
  assert n.kind in {nkPar, nkTupleConstr, nkClosure}

  if isConstClosure(n):
    inc(p.module.labels)
    var tmp = "CNSTCLOSURE" & rope(p.module.labels)
    var data = "static NIM_CONST $1 $2 = " % [getTypeDesc(p.module, n.typ), tmp]
    genBracedInit(p, n, isConst = true, n.typ, data)
    data.addf(";$n", [])
    p.module.s[cfsData].add data
    putIntoDest(p, d, n, tmp, OnStatic)
  else:
    var tmp, a, b: TLoc
    initLocExpr(p, n[0], a)
    initLocExpr(p, n[1], b)
    if n[0].skipConv.kind == nkClosure:
      internalError(p.config, n.info, "closure to closure created")
    # tasyncawait.nim breaks with this optimization:
    when false:
      if d.k != locNone:
        linefmt(p, cpsStmts, "$1.ClP_0 = $2; $1.ClE_0 = $3;$n",
                [d.rdLoc, a.rdLoc, b.rdLoc])
    else:
      getTemp(p, n.typ, tmp)
      linefmt(p, cpsStmts, "$1.ClP_0 = $2; $1.ClE_0 = $3;$n",
              [tmp.rdLoc, a.rdLoc, b.rdLoc])
      putLocIntoDest(p, d, tmp)

proc genArrayConstr(p: BProc, n: PNode, d: var TLoc) =
  var arr: TLoc
  if not handleConstExpr(p, n, d):
    if d.k == locNone: getTemp(p, n.typ, d)
    for i in 0..<n.len:
      initLoc(arr, locExpr, lodeTyp elemType(skipTypes(n.typ, abstractInst)), d.storage)
      var lit = newRopeAppender()
      intLiteral(i, lit)
      arr.r = "$1[$2]" % [rdLoc(d), lit]
      expr(p, n[i], arr)

proc genComplexConst(p: BProc, sym: PSym, d: var TLoc) =
  requestConstImpl(p, sym)
  assert((sym.loc.r != "") and (sym.loc.t != nil))
  putLocIntoDest(p, d, sym.loc)

template genStmtListExprImpl(exprOrStmt) {.dirty.} =
  #let hasNimFrame = magicsys.getCompilerProc("nimFrame") != nil
  let hasNimFrame = p.prc != nil and
      sfSystemModule notin p.module.module.flags and
      optStackTrace in p.prc.options
  var frameName: Rope = ""
  for i in 0..<n.len - 1:
    let it = n[i]
    if it.kind == nkComesFrom:
      if hasNimFrame and frameName == "":
        inc p.labels
        frameName = "FR" & rope(p.labels) & "_"
        let theMacro = it[0].sym
        add p.s(cpsStmts), initFrameNoDebug(p, frameName,
           makeCString theMacro.name.s,
           quotedFilename(p.config, theMacro.info), it.info.line.int)
    else:
      genStmts(p, it)
  if n.len > 0: exprOrStmt
  if frameName != "":
    p.s(cpsStmts).add deinitFrameNoDebug(p, frameName)

proc genStmtListExpr(p: BProc, n: PNode, d: var TLoc) =
  genStmtListExprImpl:
    expr(p, n[^1], d)

proc genStmtList(p: BProc, n: PNode) =
  genStmtListExprImpl:
    genStmts(p, n[^1])

from parampatterns import isLValue

proc upConv(p: BProc, n: PNode, d: var TLoc) =
  var a: TLoc
  initLocExpr(p, n[0], a)
  let dest = skipTypes(n.typ, abstractPtrs)
  if optObjCheck in p.options and not isObjLackingTypeField(dest):
    var nilCheck = ""
    var r = newRopeAppender()
    rdMType(p, a, nilCheck, r)
    if optTinyRtti in p.config.globalOptions:
      let checkFor = $getObjDepth(dest)
      let token = $genDisplayElem(MD5Digest(hashType(dest, p.config)))
      if nilCheck != "":
        linefmt(p, cpsStmts, "if ($1 && !#isObjDisplayCheck($2, $3, $4)){ #raiseObjectConversionError(); ",
                [nilCheck, r, checkFor, token])
      else:
        linefmt(p, cpsStmts, "if (!#isObjDisplayCheck($1, $2, $3)){ #raiseObjectConversionError(); ",
                [r, checkFor, token])
    else:
      let checkFor = genTypeInfoV1(p.module, dest, n.info)
      if nilCheck != "":
        linefmt(p, cpsStmts, "if ($1 && !#isObj($2, $3)){ #raiseObjectConversionError(); ",
                [nilCheck, r, checkFor])
      else:
        linefmt(p, cpsStmts, "if (!#isObj($1, $2)){ #raiseObjectConversionError(); ",
                [r, checkFor])
    raiseInstr(p, p.s(cpsStmts))
    linefmt p, cpsStmts, "}$n", []

  if n[0].typ.kind != tyObject:
    if n.isLValue:
      putIntoDest(p, d, n,
                "(*(($1*) (&($2))))" % [getTypeDesc(p.module, n.typ), rdLoc(a)], a.storage)
    else:
      putIntoDest(p, d, n,
                "(($1) ($2))" % [getTypeDesc(p.module, n.typ), rdLoc(a)], a.storage)
  else:
    putIntoDest(p, d, n, "(*($1*) ($2))" %
                        [getTypeDesc(p.module, dest), addrLoc(p.config, a)], a.storage)

proc downConv(p: BProc, n: PNode, d: var TLoc) =
  var arg = n[0]
  while arg.kind == nkObjDownConv: arg = arg[0]

  let dest = skipTypes(n.typ, abstractPtrs)
  let src = skipTypes(arg.typ, abstractPtrs)
  discard getTypeDesc(p.module, src)
  let isRef = skipTypes(arg.typ, abstractInstOwned).kind in {tyRef, tyPtr, tyVar, tyLent}
  if isRef and d.k == locNone and n.typ.skipTypes(abstractInstOwned).kind in {tyRef, tyPtr} and n.isLValue:
    # it can happen that we end up generating '&&x->Sup' here, so we pack
    # the '&x->Sup' into a temporary and then those address is taken
    # (see bug #837). However sometimes using a temporary is not correct:
    # init(TFigure(my)) # where it is passed to a 'var TFigure'. We test
    # this by ensuring the destination is also a pointer:
    var a: TLoc
    initLocExpr(p, arg, a)
    putIntoDest(p, d, n,
              "(*(($1*) (&($2))))" % [getTypeDesc(p.module, n.typ), rdLoc(a)], a.storage)
  elif p.module.compileToCpp:
    # C++ implicitly downcasts for us
    expr(p, arg, d)
  else:
    var a: TLoc
    initLocExpr(p, arg, a)
    var r = rdLoc(a) & (if isRef: "->Sup" else: ".Sup")
    for i in 2..abs(inheritanceDiff(dest, src)): r.add(".Sup")
    putIntoDest(p, d, n, if isRef: "&" & r else: r, a.storage)

proc exprComplexConst(p: BProc, n: PNode, d: var TLoc) =
  let t = n.typ
  discard getTypeDesc(p.module, t) # so that any fields are initialized
  let id = nodeTableTestOrSet(p.module.dataCache, n, p.module.labels)
  let tmp = p.module.tmpBase & rope(id)

  if id == p.module.labels:
    # expression not found in the cache:
    inc(p.module.labels)
    p.module.s[cfsData].addf("static NIM_CONST $1 $2 = ",
         [getTypeDesc(p.module, t, skConst), tmp])
    genBracedInit(p, n, isConst = true, t, p.module.s[cfsData])
    p.module.s[cfsData].addf(";$n", [])

  if d.k == locNone:
    fillLoc(d, locData, n, tmp, OnStatic)
  else:
    putDataIntoDest(p, d, n, tmp)
    # This fixes bug #4551, but we really need better dataflow
    # analysis to make this 100% safe.
    if t.kind notin {tySequence, tyString}:
      d.storage = OnStatic

proc genConstSetup(p: BProc; sym: PSym): bool =
  let m = p.module
  useHeader(m, sym)
  if sym.loc.k == locNone:
    fillBackendName(p.module, sym)
    fillLoc(sym.loc, locData, sym.astdef, OnStatic)
  if m.hcrOn: incl(sym.loc.flags, lfIndirect)
  result = lfNoDecl notin sym.loc.flags

proc genConstHeader(m, q: BModule; p: BProc, sym: PSym) =
  if sym.loc.r == "":
    if not genConstSetup(p, sym): return
  assert(sym.loc.r != "", $sym.name.s & $sym.itemId)
  if m.hcrOn:
    m.s[cfsVars].addf("static $1* $2;$n", [getTypeDesc(m, sym.loc.t, skVar), sym.loc.r]);
    m.initProc.procSec(cpsLocals).addf(
      "\t$1 = ($2*)hcrGetGlobal($3, \"$1\");$n", [sym.loc.r,
      getTypeDesc(m, sym.loc.t, skVar), getModuleDllPath(q, sym)])
  else:
    let headerDecl = "extern NIM_CONST $1 $2;$n" %
        [getTypeDesc(m, sym.loc.t, skVar), sym.loc.r]
    m.s[cfsData].add(headerDecl)
    if sfExportc in sym.flags and p.module.g.generatedHeader != nil:
      p.module.g.generatedHeader.s[cfsData].add(headerDecl)

proc genConstDefinition(q: BModule; p: BProc; sym: PSym) =
  # add a suffix for hcr - will later init the global pointer with this data
  let actualConstName = if q.hcrOn: sym.loc.r & "_const" else: sym.loc.r
  var data = newRopeAppender()
  data.addf("N_LIB_PRIVATE NIM_CONST $1 $2 = ",
           [getTypeDesc(q, sym.typ), actualConstName])
  genBracedInit(q.initProc, sym.astdef, isConst = true, sym.typ, data)
  data.addf(";$n", [])
  q.s[cfsData].add data
  if q.hcrOn:
    # generate the global pointer with the real name
    q.s[cfsVars].addf("static $1* $2;$n", [getTypeDesc(q, sym.loc.t, skVar), sym.loc.r])
    # register it (but ignore the boolean result of hcrRegisterGlobal)
    q.initProc.procSec(cpsLocals).addf(
      "\thcrRegisterGlobal($1, \"$2\", sizeof($3), NULL, (void**)&$2);$n",
      [getModuleDllPath(q, sym), sym.loc.r, rdLoc(sym.loc)])
    # always copy over the contents of the actual constant with the _const
    # suffix ==> this means that the constant is reloadable & updatable!
    q.initProc.procSec(cpsLocals).add(ropecg(q,
      "\t#nimCopyMem((void*)$1, (NIM_CONST void*)&$2, sizeof($3));$n",
      [sym.loc.r, actualConstName, rdLoc(sym.loc)]))

proc genConstStmt(p: BProc, n: PNode) =
  # This code is only used in the new DCE implementation.
  assert useAliveDataFromDce in p.module.flags
  let m = p.module
  for it in n:
    if it[0].kind == nkSym:
      let sym = it[0].sym
      if not isSimpleConst(sym.typ) and sym.itemId.item in m.alive and genConstSetup(p, sym):
        genConstDefinition(m, p, sym)

proc expr(p: BProc, n: PNode, d: var TLoc) =
  when defined(nimCompilerStacktraceHints):
    setFrameMsg p.config$n.info & " " & $n.kind
  p.currLineInfo = n.info

  case n.kind
  of nkSym:
    var sym = n.sym
    case sym.kind
    of skMethod:
      if useAliveDataFromDce in p.module.flags or {sfDispatcher, sfForward} * sym.flags != {}:
        # we cannot produce code for the dispatcher yet:
        fillProcLoc(p.module, n)
        genProcPrototype(p.module, sym)
      else:
        genProc(p.module, sym)
      putLocIntoDest(p, d, sym.loc)
    of skProc, skConverter, skIterator, skFunc:
      #if sym.kind == skIterator:
      #  echo renderTree(sym.getBody, {renderIds})
      if sfCompileTime in sym.flags:
        localError(p.config, n.info, "request to generate code for .compileTime proc: " &
           sym.name.s)
      if useAliveDataFromDce in p.module.flags and sym.typ.callConv != ccInline:
        fillProcLoc(p.module, n)
        genProcPrototype(p.module, sym)
      else:
        genProc(p.module, sym)
      if sym.loc.r == "" or sym.loc.lode == nil:
        internalError(p.config, n.info, "expr: proc not init " & sym.name.s)
      putLocIntoDest(p, d, sym.loc)
    of skConst:
      if isSimpleConst(sym.typ):
        var lit = newRopeAppender()
        genLiteral(p, sym.astdef, sym.typ, lit)
        putIntoDest(p, d, n, lit, OnStatic)
      elif useAliveDataFromDce in p.module.flags:
        genConstHeader(p.module, p.module, p, sym)
        assert((sym.loc.r != "") and (sym.loc.t != nil))
        putLocIntoDest(p, d, sym.loc)
      else:
        genComplexConst(p, sym, d)
    of skEnumField:
      # we never reach this case - as of the time of this comment,
      # skEnumField is folded to an int in semfold.nim, but this code
      # remains for robustness
      putIntoDest(p, d, n, rope(sym.position))
    of skVar, skForVar, skResult, skLet:
      if {sfGlobal, sfThread} * sym.flags != {}:
        genVarPrototype(p.module, n)
        if sfCompileTime in sym.flags:
          genSingleVar(p, sym, n, astdef(sym))

      if sym.loc.r == "" or sym.loc.t == nil:
        #echo "FAILED FOR PRCO ", p.prc.name.s
        #echo renderTree(p.prc.ast, {renderIds})
        internalError p.config, n.info, "expr: var not init " & sym.name.s & "_" & $sym.id
      if sfThread in sym.flags:
        accessThreadLocalVar(p, sym)
        if emulatedThreadVars(p.config):
          putIntoDest(p, d, sym.loc.lode, "NimTV_->" & sym.loc.r)
        else:
          putLocIntoDest(p, d, sym.loc)
      else:
        putLocIntoDest(p, d, sym.loc)
    of skTemp:
      when false:
        # this is more harmful than helpful.
        if sym.loc.r == "":
          # we now support undeclared 'skTemp' variables for easier
          # transformations in other parts of the compiler:
          assignLocalVar(p, n)
      if sym.loc.r == "" or sym.loc.t == nil:
        #echo "FAILED FOR PRCO ", p.prc.name.s
        #echo renderTree(p.prc.ast, {renderIds})
        internalError(p.config, n.info, "expr: temp not init " & sym.name.s & "_" & $sym.id)
      putLocIntoDest(p, d, sym.loc)
    of skParam:
      if sym.loc.r == "" or sym.loc.t == nil:
        # echo "FAILED FOR PRCO ", p.prc.name.s
        # debug p.prc.typ.n
        # echo renderTree(p.prc.ast, {renderIds})
        internalError(p.config, n.info, "expr: param not init " & sym.name.s & "_" & $sym.id)
      putLocIntoDest(p, d, sym.loc)
    else: internalError(p.config, n.info, "expr(" & $sym.kind & "); unknown symbol")
  of nkNilLit:
    if not isEmptyType(n.typ):
      var lit = newRopeAppender()
      genLiteral(p, n, lit)
      putIntoDest(p, d, n, lit)
  of nkStrLit..nkTripleStrLit:
    var lit = newRopeAppender()
    genLiteral(p, n, lit)
    putDataIntoDest(p, d, n, lit)
  of nkIntLit..nkUInt64Lit, nkFloatLit..nkFloat128Lit, nkCharLit:
    var lit = newRopeAppender()
    genLiteral(p, n, lit)
    putIntoDest(p, d, n, lit)
  of nkCall, nkHiddenCallConv, nkInfix, nkPrefix, nkPostfix, nkCommand,
     nkCallStrLit:
    genLineDir(p, n) # may be redundant, it is generated in fixupCall as well
    let op = n[0]
    if n.typ.isNil:
      # discard the value:
      var a: TLoc
      if op.kind == nkSym and op.sym.magic != mNone:
        genMagicExpr(p, n, a, op.sym.magic)
      else:
        genCall(p, n, a)
    else:
      # load it into 'd':
      if op.kind == nkSym and op.sym.magic != mNone:
        genMagicExpr(p, n, d, op.sym.magic)
      else:
        genCall(p, n, d)
  of nkCurly:
    if isDeepConstExpr(n) and n.len != 0:
      var lit = newRopeAppender()
      genSetNode(p, n, lit)
      putIntoDest(p, d, n, lit)
    else:
      genSetConstr(p, n, d)
  of nkBracket:
    if isDeepConstExpr(n) and n.len != 0:
      exprComplexConst(p, n, d)
    elif skipTypes(n.typ, abstractVarRange).kind == tySequence:
      genSeqConstr(p, n, d)
    else:
      genArrayConstr(p, n, d)
  of nkPar, nkTupleConstr:
    if n.typ != nil and n.typ.kind == tyProc and n.len == 2:
      genClosure(p, n, d)
    elif isDeepConstExpr(n) and n.len != 0:
      exprComplexConst(p, n, d)
    else:
      genTupleConstr(p, n, d)
  of nkObjConstr: genObjConstr(p, n, d)
  of nkCast: genCast(p, n, d)
  of nkHiddenStdConv, nkHiddenSubConv, nkConv: genConv(p, n, d)
  of nkHiddenAddr:
    if n[0].kind == nkDerefExpr:
      # addr ( deref ( x )) --> x
      var x = n[0][0]
      if n.typ.skipTypes(abstractVar).kind != tyOpenArray:
        x.typ = n.typ
      expr(p, x, d)
      return
    genAddr(p, n, d)
  of nkAddr: genAddr(p, n, d)
  of nkBracketExpr: genBracketExpr(p, n, d)
  of nkDerefExpr, nkHiddenDeref: genDeref(p, n, d)
  of nkDotExpr: genRecordField(p, n, d)
  of nkCheckedFieldExpr: genCheckedRecordField(p, n, d)
  of nkBlockExpr, nkBlockStmt: genBlock(p, n, d)
  of nkStmtListExpr: genStmtListExpr(p, n, d)
  of nkStmtList: genStmtList(p, n)
  of nkIfExpr, nkIfStmt: genIf(p, n, d)
  of nkWhen:
    # This should be a "when nimvm" node.
    expr(p, n[1][0], d)
  of nkObjDownConv: downConv(p, n, d)
  of nkObjUpConv: upConv(p, n, d)
  of nkChckRangeF, nkChckRange64, nkChckRange: genRangeChck(p, n, d)
  of nkStringToCString: convStrToCStr(p, n, d)
  of nkCStringToString: convCStrToStr(p, n, d)
  of nkLambdaKinds:
    var sym = n[namePos].sym
    genProc(p.module, sym)
    if sym.loc.r == "" or sym.loc.lode == nil:
      internalError(p.config, n.info, "expr: proc not init " & sym.name.s)
    putLocIntoDest(p, d, sym.loc)
  of nkClosure: genClosure(p, n, d)

  of nkEmpty: discard
  of nkWhileStmt: genWhileStmt(p, n)
  of nkVarSection, nkLetSection: genVarStmt(p, n)
  of nkConstSection:
    if useAliveDataFromDce in p.module.flags:
      genConstStmt(p, n)
    # else: consts generated lazily on use
  of nkForStmt: internalError(p.config, n.info, "for statement not eliminated")
  of nkCaseStmt: genCase(p, n, d)
  of nkReturnStmt: genReturnStmt(p, n)
  of nkBreakStmt: genBreakStmt(p, n)
  of nkAsgn:
    cow(p, n[1])
    if nfPreventCg notin n.flags:
      genAsgn(p, n, fastAsgn=false)
  of nkFastAsgn, nkSinkAsgn:
    cow(p, n[1])
    if nfPreventCg notin n.flags:
      # transf is overly aggressive with 'nkFastAsgn', so we work around here.
      # See tests/run/tcnstseq3 for an example that would fail otherwise.
      genAsgn(p, n, fastAsgn=p.prc != nil)
  of nkDiscardStmt:
    let ex = n[0]
    if ex.kind != nkEmpty:
      genLineDir(p, n)
      var a: TLoc
      initLocExprSingleUse(p, ex, a)
      line(p, cpsStmts, "(void)(" & a.r & ");\L")
  of nkAsmStmt: genAsmStmt(p, n)
  of nkTryStmt, nkHiddenTryStmt:
    case p.config.exc
    of excGoto:
      genTryGoto(p, n, d)
    of excCpp:
      genTryCpp(p, n, d)
    else:
      genTrySetjmp(p, n, d)
  of nkRaiseStmt: genRaiseStmt(p, n)
  of nkTypeSection:
    # we have to emit the type information for object types here to support
    # separate compilation:
    genTypeSection(p.module, n)
  of nkCommentStmt, nkIteratorDef, nkIncludeStmt,
     nkImportStmt, nkImportExceptStmt, nkExportStmt, nkExportExceptStmt,
     nkFromStmt, nkTemplateDef, nkMacroDef, nkStaticStmt:
    discard
  of nkPragma: genPragma(p, n)
  of nkPragmaBlock:
    var inUncheckedAssignSection = 0
    let pragmaList = n[0]
    for pi in pragmaList:
      if whichPragma(pi) == wCast:
        case whichPragma(pi[1])
        of wUncheckedAssign:
          inUncheckedAssignSection = 1
        else:
          discard

    inc p.inUncheckedAssignSection, inUncheckedAssignSection
    expr(p, n.lastSon, d)
    dec p.inUncheckedAssignSection, inUncheckedAssignSection

  of nkProcDef, nkFuncDef, nkMethodDef, nkConverterDef:
    if n[genericParamsPos].kind == nkEmpty:
      var prc = n[namePos].sym
      if useAliveDataFromDce in p.module.flags:
        if p.module.alive.contains(prc.itemId.item) and
            prc.magic in generatedMagics:
          genProc(p.module, prc)
      elif prc.skipGenericOwner.kind == skModule and sfCompileTime notin prc.flags:
        if ({sfExportc, sfCompilerProc} * prc.flags == {sfExportc}) or
            (sfExportc in prc.flags and lfExportLib in prc.loc.flags) or
            (prc.kind == skMethod):
          # due to a bug/limitation in the lambda lifting, unused inner procs
          # are not transformed correctly. We work around this issue (#411) here
          # by ensuring it's no inner proc (owner is a module).
          # Generate proc even if empty body, bugfix #11651.
          genProc(p.module, prc)
  of nkParForStmt: genParForStmt(p, n)
  of nkState: genState(p, n)
  of nkGotoState:
    # simply never set it back to 0 here from here on...
    inc p.splitDecls
    genGotoState(p, n)
  of nkBreakState: genBreakState(p, n, d)
  of nkMixinStmt, nkBindStmt: discard
  else: internalError(p.config, n.info, "expr(" & $n.kind & "); unknown node kind")

proc getDefaultValue(p: BProc; typ: PType; info: TLineInfo; result: var Rope) =
  var t = skipTypes(typ, abstractRange+{tyOwned}-{tyTypeDesc})
  case t.kind
  of tyBool: result.add rope"NIM_FALSE"
  of tyEnum, tyChar, tyInt..tyInt64, tyUInt..tyUInt64: result.add rope"0"
  of tyFloat..tyFloat128: result.add rope"0.0"
  of tyCstring, tyVar, tyLent, tyPointer, tyPtr, tyUntyped,
     tyTyped, tyTypeDesc, tyStatic, tyRef, tyNil:
    result.add rope"NIM_NIL"
  of tyString, tySequence:
    if optSeqDestructors in p.config.globalOptions:
      result.add "{0, NIM_NIL}"
    else:
      result.add "NIM_NIL"
  of tyProc:
    if t.callConv != ccClosure:
      result.add "NIM_NIL"
    else:
      result.add "{NIM_NIL, NIM_NIL}"
  of tyObject:
    var count = 0
    result.add "{"
    getNullValueAuxT(p, t, t, t.n, nil, result, count, true, info)
    result.add "}"
  of tyTuple:
    result.add "{"
    if p.vccAndC and t.len == 0:
      result.add "0"
    for i in 0..<t.len:
      if i > 0: result.add ", "
      getDefaultValue(p, t[i], info, result)
    result.add "}"
  of tyArray:
    result.add "{"
    for i in 0..<toInt(lengthOrd(p.config, t.sons[0])):
      if i > 0: result.add ", "
      getDefaultValue(p, t.sons[1], info, result)
    result.add "}"
    #result = rope"{}"
  of tyOpenArray, tyVarargs:
    result.add "{NIM_NIL, 0}"
  of tySet:
    if mapSetType(p.config, t) == ctArray: result.add "{}"
    else: result.add "0"
  else:
    globalError(p.config, info, "cannot create null element for: " & $t.kind)

proc caseObjDefaultBranch(obj: PNode; branch: Int128): int =
  for i in 1 ..< obj.len:
    for j in 0 .. obj[i].len - 2:
      if obj[i][j].kind == nkRange:
        let x = getOrdValue(obj[i][j][0])
        let y = getOrdValue(obj[i][j][1])
        if branch >= x and branch <= y:
          return i
      elif getOrdValue(obj[i][j]) == branch:
        return i
    if obj[i].len == 1:
      # else branch
      return i
  assert(false, "unreachable")

proc isEmptyCaseObjectBranch(n: PNode): bool =
  for it in n:
    if it.kind == nkSym and not isEmptyType(it.sym.typ): return false
  return true

proc getNullValueAux(p: BProc; t: PType; obj, constOrNil: PNode,
                     result: var Rope; count: var int;
                     isConst: bool, info: TLineInfo) =
  case obj.kind
  of nkRecList:
    for it in obj.sons:
      getNullValueAux(p, t, it, constOrNil, result, count, isConst, info)
  of nkRecCase:
    getNullValueAux(p, t, obj[0], constOrNil, result, count, isConst, info)
    if count > 0: result.add ", "
    var branch = Zero
    if constOrNil != nil:
      ## find kind value, default is zero if not specified
      for i in 1..<constOrNil.len:
        if constOrNil[i].kind == nkExprColonExpr:
          if constOrNil[i][0].sym.name.id == obj[0].sym.name.id:
            branch = getOrdValue(constOrNil[i][1])
            break
        elif i == obj[0].sym.position:
          branch = getOrdValue(constOrNil[i])
          break

    let selectedBranch = caseObjDefaultBranch(obj, branch)
    result.add "{"
    var countB = 0
    let b = lastSon(obj[selectedBranch])
    # designated initilization is the only way to init non first element of unions
    # branches are allowed to have no members (b.len == 0), in this case they don't need initializer
    if b.kind == nkRecList and not isEmptyCaseObjectBranch(b):
      result.add "._" & mangleRecFieldName(p.module, obj[0].sym) & "_" & $selectedBranch & " = {"
      getNullValueAux(p, t,  b, constOrNil, result, countB, isConst, info)
      result.add "}"
    elif b.kind == nkSym:
      result.add "." & mangleRecFieldName(p.module, b.sym) & " = "
      getNullValueAux(p, t,  b, constOrNil, result, countB, isConst, info)
    result.add "}"

  of nkSym:
    if count > 0: result.add ", "
    inc count
    let field = obj.sym
    if constOrNil != nil:
      for i in 1..<constOrNil.len:
        if constOrNil[i].kind == nkExprColonExpr:
          assert constOrNil[i][0].kind == nkSym, "illformed object constr; the field is not a sym"
          if constOrNil[i][0].sym.name.id == field.name.id:
            genBracedInit(p, constOrNil[i][1], isConst, field.typ, result)
            return
        elif i == field.position:
          genBracedInit(p, constOrNil[i], isConst, field.typ, result)
          return
    # not found, produce default value:
    getDefaultValue(p, field.typ, info, result)
  else:
    localError(p.config, info, "cannot create null element for: " & $obj)

proc getNullValueAuxT(p: BProc; orig, t: PType; obj, constOrNil: PNode,
                      result: var Rope; count: var int;
                      isConst: bool, info: TLineInfo) =
  var base = t[0]
  let oldRes = result
  let oldcount = count
  if base != nil:
    result.add "{"
    base = skipTypes(base, skipPtrs)
    getNullValueAuxT(p, orig, base, base.n, constOrNil, result, count, isConst, info)
    result.add "}"
  elif not isObjLackingTypeField(t):
    if optTinyRtti in p.config.globalOptions:
      result.add genTypeInfoV2(p.module, orig, obj.info)
    else:
      result.add genTypeInfoV1(p.module, orig, obj.info)
    inc count
  getNullValueAux(p, t, obj, constOrNil, result, count, isConst, info)
  # do not emit '{}' as that is not valid C:
  if oldcount == count: result = oldRes

proc genConstObjConstr(p: BProc; n: PNode; isConst: bool; result: var Rope) =
  let t = n.typ.skipTypes(abstractInstOwned)
  var count = 0
  #if not isObjLackingTypeField(t) and not p.module.compileToCpp:
  #  result.addf("{$1}", [genTypeInfo(p.module, t)])
  #  inc count
  result.add "{"
  if t.kind == tyObject:
    getNullValueAuxT(p, t, t, t.n, n, result, count, isConst, n.info)
  result.add("}\n")

proc genConstSimpleList(p: BProc, n: PNode; isConst: bool; result: var Rope) =
  result.add "{"
  if p.vccAndC and n.len == 0 and n.typ.kind == tyArray:
    getDefaultValue(p, n.typ[1], n.info, result)
  for i in 0..<n.len:
    let it = n[i]
    if i > 0: result.add ",\n"
    if it.kind == nkExprColonExpr: genBracedInit(p, it[1], isConst, it[0].typ, result)
    else: genBracedInit(p, it, isConst, it.typ, result)
  result.add("}\n")

proc genConstTuple(p: BProc, n: PNode; isConst: bool; tup: PType; result: var Rope) =
  result.add "{"
  if p.vccAndC and n.len == 0:
    result.add "0"
  for i in 0..<n.len:
    let it = n[i]
    if i > 0: result.add ",\n"
    if it.kind == nkExprColonExpr: genBracedInit(p, it[1], isConst, tup[i], result)
    else: genBracedInit(p, it, isConst, tup[i], result)
  result.add("}\n")

proc genConstSeq(p: BProc, n: PNode, t: PType; isConst: bool; result: var Rope) =
  var data = "{{$1, $1 | NIM_STRLIT_FLAG}" % [n.len.rope]
  let base = t.skipTypes(abstractInst)[0]
  if n.len > 0:
    # array part needs extra curlies:
    data.add(", {")
    for i in 0..<n.len:
      if i > 0: data.addf(",$n", [])
      genBracedInit(p, n[i], isConst, base, data)
    data.add("}")
  data.add("}")

  let tmpName = getTempName(p.module)

  appcg(p.module, cfsStrData,
        "static $5 struct {$n" &
        "  #TGenericSeq Sup;$n" &
        "  $1 data[$2];$n" &
        "} $3 = $4;$n", [
        getTypeDesc(p.module, base), n.len, tmpName, data,
        if isConst: "NIM_CONST" else: ""])

  result.add "(($1)&$2)" % [getTypeDesc(p.module, t), tmpName]

proc genConstSeqV2(p: BProc, n: PNode, t: PType; isConst: bool; result: var Rope) =
  let base = t.skipTypes(abstractInst)[0]
  var data = rope"{"
  for i in 0..<n.len:
    if i > 0: data.addf(",$n", [])
    genBracedInit(p, n[i], isConst, base, data)
  data.add("}")

  let payload = getTempName(p.module)

  appcg(p.module, cfsStrData,
    "static $5 struct {$n" &
    "  NI cap; $1 data[$2];$n" &
    "} $3 = {$2 | NIM_STRLIT_FLAG, $4};$n", [
    getTypeDesc(p.module, base), n.len, payload, data,
    if isConst: "const" else: ""])
  result.add "{$1, ($2*)&$3}" % [rope(n.len), getSeqPayloadType(p.module, t), payload]

proc genBracedInit(p: BProc, n: PNode; isConst: bool; optionalType: PType; result: var Rope) =
  case n.kind
  of nkHiddenStdConv, nkHiddenSubConv:
    genBracedInit(p, n[1], isConst, n.typ, result)
  else:
    var ty = tyNone
    var typ: PType = nil
    if optionalType == nil:
      if n.kind in nkStrKinds:
        ty = tyString
      else:
        internalError(p.config, n.info, "node has no type")
    else:
      typ = skipTypes(optionalType, abstractInstOwned + {tyStatic})
      ty = typ.kind
    case ty
    of tySet:
      let cs = toBitSet(p.config, n)
      genRawSetData(cs, int(getSize(p.config, n.typ)), result)
    of tySequence:
      if optSeqDestructors in p.config.globalOptions:
        genConstSeqV2(p, n, typ, isConst, result)
      else:
        genConstSeq(p, n, typ, isConst, result)
    of tyProc:
      if typ.callConv == ccClosure and n.safeLen > 1 and n[1].kind == nkNilLit:
        # n.kind could be: nkClosure, nkTupleConstr and maybe others; `n.safeLen`
        # guards against the case of `nkSym`, refs bug #14340.
        # Conversion: nimcall -> closure.
        # this hack fixes issue that nkNilLit is expanded to {NIM_NIL,NIM_NIL}
        # this behaviour is needed since closure_var = nil must be
        # expanded to {NIM_NIL,NIM_NIL}
        # in VM closures are initialized with nkPar(nkNilLit, nkNilLit)
        # leading to duplicate code like this:
        # "{NIM_NIL,NIM_NIL}, {NIM_NIL,NIM_NIL}"
        if n[0].kind == nkNilLit:
          result.add "{NIM_NIL,NIM_NIL}"
        else:
          var d: TLoc
          initLocExpr(p, n[0], d)
          result.add "{(($1) $2),NIM_NIL}" % [getClosureType(p.module, typ, clHalfWithEnv), rdLoc(d)]
      else:
        var d: TLoc
        initLocExpr(p, n, d)
        result.add rdLoc(d)
    of tyArray, tyVarargs:
      genConstSimpleList(p, n, isConst, result)
    of tyTuple:
      genConstTuple(p, n, isConst, typ, result)
    of tyOpenArray:
      if n.kind != nkBracket:
        internalError(p.config, n.info, "const openArray expression is not an array construction")

      var data = newRopeAppender()
      genConstSimpleList(p, n, isConst, data)

      let payload = getTempName(p.module)
      let ctype = getTypeDesc(p.module, typ[0])
      let arrLen = n.len
      appcg(p.module, cfsStrData,
        "static $5 $1 $3[$2] = $4;$n", [
        ctype, arrLen, payload, data,
        if isConst: "const" else: ""])
      result.add "{($1*)&$2, $3}" % [ctype, payload, rope arrLen]

    of tyObject:
      genConstObjConstr(p, n, isConst, result)
    of tyString, tyCstring:
      if optSeqDestructors in p.config.globalOptions and n.kind != nkNilLit and ty == tyString:
        genStringLiteralV2Const(p.module, n, isConst, result)
      else:
        var d: TLoc
        initLocExpr(p, n, d)
        result.add rdLoc(d)
    else:
      var d: TLoc
      initLocExpr(p, n, d)
      result.add rdLoc(d)
