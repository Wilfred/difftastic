================================================================================
invalid_declaration_after_field
================================================================================

    const T = struct {
    const a: u32 = 10;
    b: u32,
    c: u32
    const d: u32 = 11;
};

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))))))
