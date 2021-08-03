================================================================================
switch_prong_err_enum
================================================================================

    const expect = @import("std").testing.expect;

var read_count: u64 = 0;

fn readOnce() anyerror!u64 {
    read_count += 1;
    return read_count;
}

const FormValue = union(enum) {
    Address: u64,
    Other: bool,
};

fn doThing(form_id: u64) anyerror!FormValue {
    return switch (form_id) {
        17 => FormValue{ .Address = try readOnce() },
        else => error.InvalidDebugInfo,
    };
}

test "switch prong returns error enum" {
    switch (doThing(17) catch unreachable) {
        FormValue.Address => |payload| {
            expect(payload == 1);
        },
        else => unreachable,
    }
    expect(read_count == 1);
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
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
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
      (BuildinTypeExpr))
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
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments)))))))
          (SwitchProng
            (SwitchCase)
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
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
          (PtrPayload
            (IDENTIFIER))
          (AssignExpr
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
                        (INTEGER)))))))))
        (SwitchProng
          (SwitchCase)
          (AssignExpr
            (SuffixExpr)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))))
