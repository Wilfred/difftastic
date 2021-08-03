================================================================================
const_slice_child
================================================================================

    const std = @import("std");
const debug = std.debug;
const testing = std.testing;
const expect = testing.expect;

var argv: [*]const [*]const u8 = undefined;

test "const slice child" {
    const strs = [_][*]const u8{
        "one",
        "two",
        "three",
    };
    argv = &strs;
    bar(strs.len);
}

fn foo(args: [][]const u8) void {
    expect(args.len == 3);
    expect(streql(args[0], "one"));
    expect(streql(args[1], "two"));
    expect(streql(args[2], "three"));
}

fn bar(argc: usize) void {
    const args = testing.allocator.alloc([]const u8, argc) catch unreachable;
    defer testing.allocator.free(args);
    for (args) |_, i| {
        const ptr = argv[i];
        args[i] = ptr[0..strlen(ptr)];
    }
    foo(args);
}

fn strlen(ptr: [*]const u8) usize {
    var count: usize = 0;
    while (ptr[count] != 0) : (count += 1) {}
    return count;
}

fn streql(a: []const u8, b: []const u8) bool {
    if (a.len != b.len) return false;
    for (a) |item, index| {
        if (b[index] != item) return false;
    }
    return true;
}

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (PtrTypeStart))
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (IDENTIFIER))))
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (BuildinTypeExpr))
        (InitList
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (SliceTypeStart))
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (PrefixTypeOp
            (SliceTypeStart))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER))))
      (BitwiseOp)
      (SuffixExpr)))
  (BlockExprStatement
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))))))
  (LabeledStatement
    (LoopStatement
      (ForStatement
        (ForPrefix
          (SuffixExpr
            (IDENTIFIER))
          (PtrIndexPayload
            (IDENTIFIER)
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (IDENTIFIER)))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (IDENTIFIER))))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER))))))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (LabeledStatement
    (LoopStatement
      (WhileStatement
        (WhilePrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (IDENTIFIER))))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))
          (WhileContinueExpr
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (INTEGER)))))
        (BlockExpr
          (Block)))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr))))
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (IfExpr
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))))
      (SuffixExpr)))
  (LabeledStatement
    (LoopStatement
      (ForStatement
        (ForPrefix
          (SuffixExpr
            (IDENTIFIER))
          (PtrIndexPayload
            (IDENTIFIER)
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (AssignExpr
              (IfExpr
                (IfPrefix
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (IDENTIFIER))))
                    (CompareOp)
                    (SuffixExpr
                      (IDENTIFIER))))
                (SuffixExpr))))))))
  (AssignExpr
    (SuffixExpr))))
