================================================================================
struct_contains_null_ptr_itself
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

test "struct contains null pointer which contains original struct" {
    var x: ?*NodeLineComment = null;
    expect(x == null);
}

pub const Node = struct {
    id: Id,
    comment: ?*NodeLineComment,

    pub const Id = enum {
        Root,
        LineComment,
    };
};

pub const NodeLineComment = struct {
    base: Node,
};

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
        (PrefixTypeOp)
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr)))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)))
        (ContainerField
          (IDENTIFIER)
          (PrefixTypeOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (ContainerDecl
              (ContainerDeclType)
              (ContainerField
                (IDENTIFIER))
              (ContainerField
                (IDENTIFIER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)))))))
