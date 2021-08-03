================================================================================
invalid_misplaced_container_doc_comment
================================================================================

    const foo = error {
//! Container doc comments can't live here
/// This is error a
a,
/// This is error b
b,
/// This is error c
c
};

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ErrorSetDecl
        (line_comment)
        (IdentifierList
          (doc_comment)
          (IDENTIFIER)
          (doc_comment)
          (IDENTIFIER)
          (doc_comment)
          (IDENTIFIER))))))
