================================================================================
invalid_missing_semicolon
================================================================================

    const Foo = enum {
	A,
	B,
}

const Bar = enum {
	C,
	D,
};

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER))
        (ContainerField
          (IDENTIFIER))))
    (MISSING ";"))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER))
        (ContainerField
          (IDENTIFIER))))))
