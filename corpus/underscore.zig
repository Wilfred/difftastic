================================================================================
underscore
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

test "ignore lval with underscore" {
    _ = false;
}

test "ignore lval with underscore (for loop)" {
    for ([_]void{}) |_, i| {
        for ([_]void{}) |_, j| {
            break;
        }
        break;
    }
}

test "ignore lval with underscore (while loop)" {
    while (optionalReturnError()) |_| {
        while (optionalReturnError()) |_| {
            break;
        } else |_| {}
        break;
    } else |_| {}
}

fn optionalReturnError() !?u32 {
    return error.optionalReturnError;
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
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (LabeledStatement
        (LoopStatement
          (ForStatement
            (ForPrefix
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (IDENTIFIER))))
              (SuffixExpr
                (BuildinTypeExpr))
              (InitList)
              (PtrIndexPayload
                (IDENTIFIER)
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (LabeledStatement
                  (LoopStatement
                    (ForStatement
                      (ForPrefix
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList)
                        (PtrIndexPayload
                          (IDENTIFIER)
                          (IDENTIFIER)))
                      (BlockExpr
                        (Block
                          (AssignExpr))))))
                (AssignExpr))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (LabeledStatement
        (LoopStatement
          (WhileStatement
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (LabeledStatement
                  (LoopStatement
                    (WhileStatement
                      (WhilePrefix
                        (SuffixExpr
                          (IDENTIFIER)
                          (FnCallArguments))
                        (PtrPayload
                          (IDENTIFIER)))
                      (BlockExpr
                        (Block
                          (AssignExpr)))
                      (Payload
                        (IDENTIFIER))
                      (LabeledStatement
                        (Block)))))
                (AssignExpr)))
            (Payload
              (IDENTIFIER))
            (LabeledStatement
              (Block)))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)))))
