================================================================================
incomplete_struct_param_tld
================================================================================

    const expect = @import("std").testing.expect;

const A = struct {
    b: B,
};

const B = struct {
    c: C,
};

const C = struct {
    x: i32,

    fn d(c: *const C) i32 {
        return c.x;
    }
};

fn foo(a: A) i32 {
    return a.b.c.d();
}

test "incomplete struct param top level declaration" {
    const a = A{
        .b = B{
            .c = C{ .x = 13 },
        },
    };
    expect(foo(a) == 13);
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
            (IDENTIFIER))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (PrefixTypeOp
                  (PtrTypeStart))
                (SuffixExpr
                  (IDENTIFIER)))))
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (IDENTIFIER)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (IDENTIFIER))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER))
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (INTEGER)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))))
              (CompareOp)
              (SuffixExpr
                (INTEGER)))))))))
