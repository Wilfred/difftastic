================================================================================
truncate
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

test "truncate u0 to larger integer allowed and has comptime known result" {
    var x: u0 = 0;
    const y = @truncate(u8, x);
    comptime expect(y == 0);
}

test "truncate.u0.literal" {
    var z = @truncate(u0, 0);
    expect(z == 0);
}

test "truncate.u0.const" {
    const c0: usize = 0;
    var z = @truncate(u0, c0);
    expect(z == 0);
}

test "truncate.u0.var" {
    var d: u8 = 2;
    var z = @truncate(u0, d);
    expect(z == 0);
}

test "truncate sign mismatch but comptime known so it works anyway" {
    const x: u32 = 10;
    var result = @truncate(i8, x);
    expect(result == 10);
}

test "truncate on comptime integer" {
    var x = @truncate(u16, 9999);
    expect(x == 9999);
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
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))))
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)))))
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)))))
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)))))
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))))
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
