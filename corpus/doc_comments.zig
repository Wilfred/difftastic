================================================================================
doc_comments
================================================================================

    //! This is a container doc comment
//! That spans multiple lines

const MyStruct = struct {
    //! This is a container doc comment inside a struct

    /// And this is a doc comment
    a: u32,

    /// This is another doc comment
    b: i32,

    /// And one more field
    c: f32,
};

/// This is MyEnum
const MyEnum = enum {
    //! It has some fields

    /// This is Foo
    Foo,
    /// This is Bar
    Bar,
};

/// This is a doc comment for the error block
const Errors = error {
    /// This documents MyError1
    MyError1,
    /// This documents MyError2
    MyError2,
};

/// This is an add function
/// It adds two numbers
pub fn add(
    /// a is the first number
    a: u32,
    /// b is the second number
    b: u32) u64 {
    const mystruct = struct {
        /// c is a float
        c: f64,
    };
    return a + b;
}

/// This is a comptime block. Doc comments are allowed here by the parser but will be elided by zig fmt
comptime {
    const foo = add(40, 2);
}

/// This is a doc comment for a test
test "This is my test" {
}

/// foo is a a number
const foo = 5;

--------------------------------------------------------------------------------

(source_file
  (container_doc_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (container_doc_comment)
        (ContainerField
          (doc_comment)
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (doc_comment)
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (doc_comment)
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (doc_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (container_doc_comment)
        (ContainerField
          (doc_comment)
          (IDENTIFIER))
        (ContainerField
          (doc_comment)
          (IDENTIFIER)))))
  (doc_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ErrorSetDecl
        (IdentifierList
          (doc_comment)
          (IDENTIFIER)
          (doc_comment)
          (IDENTIFIER)))))
  (doc_comment)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (doc_comment)
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr))))
      (ParamDecl
        (doc_comment)
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (ContainerField
            (doc_comment)
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))))))
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (AdditionOp)
        (SuffixExpr
          (IDENTIFIER)))))
  (TopLevelComptime
    (doc_comment)
    (BlockExpr
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))))))
  (TestDecl
    (doc_comment)
    (STRINGLITERALSINGLE)
    (Block))
  (doc_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (INTEGER))))
