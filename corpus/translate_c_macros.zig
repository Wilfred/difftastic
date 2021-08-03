================================================================================
translate_c_macros
================================================================================

    const expect = @import("std").testing.expect;
const expectEqual = @import("std").testing.expectEqual;

const h = @cImport(@cInclude("stage1/behavior/translate_c_macros.h"));

test "initializer list expression" {
    expectEqual(h.Color{
        .r = 200,
        .g = 200,
        .b = 200,
        .a = 255,
    }, h.LIGHTGRAY);
}

test "sizeof in macros" {
    expectEqual(@as(c_int, @sizeOf(u32)), h.MY_SIZEOF(u32));
    expectEqual(@as(c_int, @sizeOf(u32)), h.MY_SIZEOF2(u32));
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
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER)))
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER)))
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER)))
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))))))
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr)))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))))))
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))))))))))
