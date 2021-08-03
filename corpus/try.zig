================================================================================
try
================================================================================

    const expect = @import("std").testing.expect;

test "try on error union" {
    tryOnErrorUnionImpl();
    comptime tryOnErrorUnionImpl();
}

fn tryOnErrorUnionImpl() void {
    const x = if (returnsTen()) |val| val + 1 else |err| switch (err) {
        error.ItBroke, error.NoMem => 1,
        error.CrappedOut => @as(i32, 2),
        else => unreachable,
    };
    expect(x == 11);
}

fn returnsTen() anyerror!i32 {
    return 10;
}

test "try without vars" {
    const result1 = if (failIfTrue(true)) 1 else |_| @as(i32, 2);
    expect(result1 == 2);

    const result2 = if (failIfTrue(false)) 1 else |_| @as(i32, 2);
    expect(result2 == 1);
}

fn failIfTrue(ok: bool) anyerror!void {
    if (ok) {
        return error.ItBroke;
    } else {
        return;
    }
}

test "try then not executed with assignment" {
    if (failIfTrue(true)) {
        unreachable;
    } else |err| {
        expect(err == error.ItBroke);
    }
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments)))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (IfExpr
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments))
          (PtrPayload
            (IDENTIFIER)))
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (AdditionOp)
          (SuffixExpr
            (INTEGER)))
        (Payload
          (IDENTIFIER))
        (SuffixExpr
          (SwitchExpr
            (SuffixExpr
              (IDENTIFIER))
            (SwitchProngList
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)))
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignExpr
                  (SuffixExpr
                    (INTEGER))))
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignExpr
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (INTEGER))))))
              (SwitchProng
                (SwitchCase)
                (AssignExpr
                  (SuffixExpr))))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))
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
        (INTEGER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr))))
            (SuffixExpr
              (INTEGER))
            (Payload
              (IDENTIFIER))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr))))
            (SuffixExpr
              (INTEGER))
            (Payload
              (IDENTIFIER))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
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
      (BuildinTypeExpr)))
  (Block
    (IfStatement
      (IfPrefix
        (SuffixExpr
          (IDENTIFIER)))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)))))
      (LabeledStatement
        (Block
          (AssignExpr)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr))))
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr))))
        (Payload
          (IDENTIFIER))
        (LabeledStatement
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
                      (IDENTIFIER))))))))))))
