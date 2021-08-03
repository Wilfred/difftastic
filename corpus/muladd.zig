================================================================================
muladd
================================================================================

    const expect = @import("std").testing.expect;

test "@mulAdd" {
    comptime testMulAdd();
    testMulAdd();
}

fn testMulAdd() void {
    {
        var a: f16 = 5.5;
        var b: f16 = 2.5;
        var c: f16 = 6.25;
        expect(@mulAdd(f16, a, b, c) == 20);
    }
    {
        var a: f32 = 5.5;
        var b: f32 = 2.5;
        var c: f32 = 6.25;
        expect(@mulAdd(f32, a, b, c) == 20);
    }
    {
        var a: f64 = 5.5;
        var b: f64 = 2.5;
        var c: f64 = 6.25;
        expect(@mulAdd(f64, a, b, c) == 20);
    }
    // Awaits implementation in libm.zig
    //{
    //    var a: f16 = 5.5;
    //    var b: f128 = 2.5;
    //    var c: f128 = 6.25;
    //    expect(@mulAdd(f128, a, b, c) == 20);
    //}
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
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments)))
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
    (LabeledStatement
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))))))
    (LabeledStatement
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))))))
    (LabeledStatement
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (FLOAT)))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))))))
    (line_comment)
    (line_comment)
    (line_comment)
    (line_comment)
    (line_comment)
    (line_comment)
    (line_comment)))
