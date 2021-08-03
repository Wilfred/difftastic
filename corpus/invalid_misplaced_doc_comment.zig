================================================================================
invalid_misplaced_doc_comment
================================================================================

    /// This is doc comment is ok
pub fn add(a: u32, b: u32) u64 {
    /// This is a doc comment, but it's not allowed here
    var sum = a + b;
    return sum;
}

--------------------------------------------------------------------------------

(source_file
  (doc_comment)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr))))
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (line_comment)
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (AdditionOp)
        (SuffixExpr
          (IDENTIFIER))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)))))
