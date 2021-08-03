================================================================================
merge_error_sets
================================================================================

    const A = error{
    FileNotFound,
    NotDir,
};
const B = error{OutOfMemory};

const C = A || B;

fn foo() C!void {
    return error.NotDir;
}

test "merge error sets" {
    if (foo()) {
        @panic("unexpected");
    } else |err| switch (err) {
        error.OutOfMemory => @panic("unexpected"),
        error.FileNotFound => @panic("unexpected"),
        error.NotDir => {},
    }
}

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ErrorSetDecl
        (IdentifierList
          (IDENTIFIER)
          (IDENTIFIER)))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ErrorSetDecl
        (IdentifierList
          (IDENTIFIER)))))
  (VarDecl
    (IDENTIFIER)
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (MultiplyOp 
        (SuffixExpr
          (IDENTIFIER))))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList)
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (BuildinTypeExpr)))
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))))
    (TestDecl
      (STRINGLITERALSINGLE)
      (Block
        (IfStatement
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments)))
          (BlockExpr
            (Block
              (AssignExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (STRINGLITERAL
                        (STRINGLITERALSINGLE))))))))
          (Payload
            (IDENTIFIER))
          (SwitchExpr
            (SuffixExpr
              (IDENTIFIER))
            (SwitchProngList
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
                        (STRINGLITERAL
                          (STRINGLITERALSINGLE)))))))
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
                        (STRINGLITERAL
                          (STRINGLITERALSINGLE)))))))
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignExpr
                  (Block)))))))))
