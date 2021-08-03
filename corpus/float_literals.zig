================================================================================
float_literals
================================================================================

    const a = [_]f32 {
    1e1, 1e+1, 1e-1,
    1.0, 1.0e1, 1.0e+1, 1.0e-1,
    0x1p1, 0x1p+1, 0x1p-1,
    0x1.0, 0x1.0p1, 0x1.0p+1, 0x1.0p-1,
};

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (IDENTIFIER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (InitList
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT))
      (SuffixExpr
        (FLOAT)))))
