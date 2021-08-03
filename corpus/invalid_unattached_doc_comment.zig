================================================================================
invalid_unattached_doc_comment
================================================================================

    /// This doc comment is ok
const z = 2;

/// But this one is not

--------------------------------------------------------------------------------

(source_file
  (doc_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (INTEGER)))
  (doc_comment)
  (MISSING "export"))
