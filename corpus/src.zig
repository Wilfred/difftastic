================================================================================
src
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

test "@src" {
    doTheTest();
}

fn doTheTest() void {
    const src = @src();

    expect(src.line == 9);
    expect(src.column == 17);
    expect(std.mem.endsWith(u8, src.fn_name, "doTheTest"));
    expect(std.mem.endsWith(u8, src.file, "src.zig"));
    expect(src.fn_name[src.fn_name.len] == 0);
    expect(src.file[src.file.len] == 0);
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
          (IDENTIFIER)
          (FnCallArguments)))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments)))
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
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER)))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER)))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))
