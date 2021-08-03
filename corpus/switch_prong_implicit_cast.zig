================================================================================
switch_prong_implicit_cast
================================================================================

    const expect = @import("std").testing.expect;

const FormValue = union(enum) {
    One: void,
    Two: bool,
};

fn foo(id: u64) !FormValue {
    return switch (id) {
        2 => FormValue{ .Two = true },
        1 => FormValue{ .One = {} },
        else => return error.Whatever,
    };
}

test "switch prong implicit cast" {
    const result = switch (foo(2) catch unreachable) {
        FormValue.One => false,
        FormValue.Two => |x| x,
    };
    expect(result);
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
            (BuildinTypeExpr))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (IDENTIFIER)))
  (Block
    (AssignExpr
      (SuffixExpr
        (SwitchExpr
          (SuffixExpr
            (IDENTIFIER))
          (SwitchProngList
            (SwitchProng
              (SwitchCase
                (SwitchItem
                  (SuffixExpr
                    (INTEGER))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr)))))
            (SwitchProng
              (SwitchCase
                (SwitchItem
                  (SuffixExpr
                    (INTEGER))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (Block)))))
            (SwitchProng
              (SwitchCase)
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (SwitchExpr
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))))
              (BitwiseOp)
              (SuffixExpr))
            (SwitchProngList
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER)))))
                (AssignExpr
                  (SuffixExpr)))
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER)))))
                (PtrPayload
                  (IDENTIFIER))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))))
