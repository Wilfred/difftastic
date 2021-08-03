================================================================================
void
================================================================================

    const expect = @import("std").testing.expect;

const Foo = struct {
    a: void,
    b: i32,
    c: void,
};

test "compare void with void compile time known" {
    comptime {
        const foo = Foo{
            .a = {},
            .b = 1,
            .c = {},
        };
        expect(foo.a == {});
    }
}

test "iterate over a void slice" {
    var j: usize = 0;
    for (times(10)) |_, i| {
        expect(i == j);
        j += 1;
    }
}

fn times(n: usize) []const void {
    return @as([*]void, undefined)[0..n];
}

test "void optional" {
    var x: ?void = {};
    expect(x != null);
}

test "void array as a local variable initializer" {
    var x = [_]void{{}} ** 1004;
    var y = x[0];
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
            (STRINGLITERALSINGLE))))
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (BlockExprStatement
        (BlockExpr
          (Block
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (Block))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER)))
                (FieldInit
                  (IDENTIFIER)
                  (Block))))
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
                    (Block))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (LabeledStatement
        (LoopStatement
          (ForStatement
            (ForPrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))))
              (PtrIndexPayload
                (IDENTIFIER)
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER))
                        (CompareOp)
                        (SuffixExpr
                          (IDENTIFIER))))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (PrefixTypeOp
      (SliceTypeStart))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr))
        (SuffixOp
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (IDENTIFIER))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (Block))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr)))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (BinaryExpr
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (IDENTIFIER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (InitList
            (Block))
          (MultiplyOp 
            (SuffixExpr
              (INTEGER))))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))))))))
