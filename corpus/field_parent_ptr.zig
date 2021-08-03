================================================================================
field_parent_ptr
================================================================================

    const expect = @import("std").testing.expect;

test "@fieldParentPtr non-first field" {
    testParentFieldPtr(&foo.c);
    comptime testParentFieldPtr(&foo.c);
}

test "@fieldParentPtr first field" {
    testParentFieldPtrFirst(&foo.a);
    comptime testParentFieldPtrFirst(&foo.a);
}

const Foo = struct {
    a: bool,
    b: f32,
    c: i32,
    d: i32,
};

const foo = Foo{
    .a = true,
    .b = 0.123,
    .c = 1234,
    .d = -10,
};

fn testParentFieldPtr(c: *const i32) void {
    expect(c == &foo.c);

    const base = @fieldParentPtr(Foo, "c", c);
    expect(base == &foo);
    expect(&base.c == c);
}

fn testParentFieldPtrFirst(a: *const bool) void {
    expect(a == &foo.a);

    const base = @fieldParentPtr(Foo, "a", a);
    expect(base == &foo);
    expect(&base.a == a);
}

--------------------------------------------------------------------------------

(source_file
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))))))
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))))))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (FnCallArguments
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr))(FieldInit(IDENTIFIER)(SuffixExpr
  (FLOAT)))(FieldInit(IDENTIFIER)(SuffixExpr
  (INTEGER)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr
  (INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr
  (IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))))
