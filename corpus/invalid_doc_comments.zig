================================================================================
invalid_doc_comments
================================================================================

    //! This is a valid container doc comment

const Foo = struct {
    //! This is a valid container doc comment
};

//! This is an invalid container doc comment

--------------------------------------------------------------------------------

(source_file
  (container_doc_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (container_doc_comment))))
  (line_comment))
