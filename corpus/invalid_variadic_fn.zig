================================================================================
invalid_variadic_fn
================================================================================

    fn f(a: ...) void { }

--------------------------------------------------------------------------------

(source_file
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (ParamType
          (SuffixExpr
            (IDENTIFIER))))
      (ERROR))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block))
