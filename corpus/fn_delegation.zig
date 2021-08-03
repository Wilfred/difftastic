================================================================================
fn_delegation
================================================================================

    const expect = @import("std").testing.expect;

const Foo = struct {
    a: u64 = 10,

    fn one(self: Foo) u64 {
        return self.a + 1;
    }

    const two = __two;

    fn __two(self: Foo) u64 {
        return self.a + 2;
    }

    const three = __three;

    const four = custom(Foo, 4);
};

fn __three(self: Foo) u64 {
    return self.a + 3;
}

fn custom(comptime T: type, comptime num: u64) fn (T) u64 {
    return struct {
        fn function(self: T) u64 {
            return self.a + num;
        }
    }.function;
}

test "fn delegation" {
    const foo = Foo{};
    expect(foo.one() == 11);
    expect(foo.two() == 12);
    expect(foo.three() == 13);
    expect(foo.four() == 14);
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (SuffixExpr
                  (IDENTIFIER)))))
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (SuffixExpr
                  (IDENTIFIER)))))
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER))
              (SuffixExpr
                (INTEGER))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (IDENTIFIER)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (AdditionOp)
        (SuffixExpr
          (INTEGER)))))
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
      (FnProto
        (ParamDeclList
          (ParamDecl
            (ParamType
              (SuffixExpr
                (IDENTIFIER)))))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (Block
    (AssignExpr
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (FnProto
            (IDENTIFIER)
            (ParamDeclList
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (SuffixExpr
                    (IDENTIFIER)))))
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER)))
                (AdditionOp)
                (SuffixExpr
                  (IDENTIFIER))))))
        (SuffixOp
          (IDENTIFIER)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (InitList))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (FnCallArguments))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (FnCallArguments))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (FnCallArguments))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (FnCallArguments))
              (CompareOp)
              (SuffixExpr
                (INTEGER)))))))))
