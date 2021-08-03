================================================================================
ir_block_deps
================================================================================

    const expect = @import("std").testing.expect;

fn foo(id: u64) !i32 {
    return switch (id) {
        1 => getErrInt(),
        2 => {
            const size = try getErrInt();
            return try getErrInt();
        },
        else => error.ItBroke,
    };
}

fn getErrInt() anyerror!i32 {
    return 0;
}

test "ir block deps" {
    expect((foo(1) catch unreachable) == 0);
    expect((foo(2) catch unreachable) == 0);
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
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
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
                  (IDENTIFIER)
                  (FnCallArguments))))
            (SwitchProng
              (SwitchCase
                (SwitchItem
                  (SuffixExpr
                    (INTEGER))))
              (AssignExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments))))
                (AssignExpr
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments)))))))
        (SwitchProng
          (SwitchCase)
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (GroupedExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (INTEGER))))
                (BitwiseOp)
                (SuffixExpr))))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (GroupedExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (INTEGER))))
                (BitwiseOp)
                (SuffixExpr))))
          (CompareOp)
          (SuffixExpr
            (INTEGER)))))))))
