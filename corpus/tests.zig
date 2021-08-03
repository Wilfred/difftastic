================================================================================
tests
================================================================================

    test "thing" {
    var i = 0;
}

test {
    var l = 0;
}

--------------------------------------------------------------------------------

(source_file
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (INTEGER)))))
  (TestDecl
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (INTEGER))))))
