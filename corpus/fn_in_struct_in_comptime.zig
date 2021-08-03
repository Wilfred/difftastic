================================================================================
fn_in_struct_in_comptime
================================================================================

    const expect = @import("std").testing.expect;

fn get_foo() fn (*u8) usize {
    comptime {
        return struct {
            fn func(ptr: *u8) usize {
                var u = @ptrToInt(ptr);
                return u;
            }
        }.func;
    }
}

test "define a function in an anonymous struct in comptime" {
    const foo = get_foo();
    expect(foo(@intToPtr(*u8, 12345)) == 12345);
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
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (FnProto
        (ParamDeclList
          (ParamDecl
            (ParamType
              (PrefixTypeOp
                (PtrTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (Block
    (BlockExprStatement
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr
              (ContainerDecl
                (ContainerDeclType)
                (FnProto
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
                    (BuildinTypeExpr)))
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (BUILTINIDENTIFIER)
                      (FnCallArguments
                        (SuffixExpr
                          (IDENTIFIER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)))))
              (SuffixOp
                (IDENTIFIER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (INTEGER))))))
              (CompareOp)
              (SuffixExpr
                (INTEGER)))))))))
