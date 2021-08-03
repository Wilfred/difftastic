================================================================================
undefined
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const mem = std.mem;

fn initStaticArray() [10]i32 {
    var array: [10]i32 = undefined;
    array[0] = 1;
    array[4] = 2;
    array[7] = 3;
    array[9] = 4;
    return array;
}
const static_array = initStaticArray();
test "init static array to undefined" {
    expect(static_array[0] == 1);
    expect(static_array[4] == 2);
    expect(static_array[7] == 3);
    expect(static_array[9] == 4);

    comptime {
        expect(static_array[0] == 1);
        expect(static_array[4] == 2);
        expect(static_array[7] == 3);
        expect(static_array[9] == 4);
    }
}

const Foo = struct {
    x: i32,

    fn setFooXMethod(foo: *Foo) void {
        foo.x = 3;
    }
};

fn setFooX(foo: *Foo) void {
    foo.x = 2;
}

test "assign undefined to struct" {
    comptime {
        var foo: Foo = undefined;
        setFooX(&foo);
        expect(foo.x == 2);
    }
    {
        var foo: Foo = undefined;
        setFooX(&foo);
        expect(foo.x == 2);
    }
}

test "assign undefined to struct with method" {
    comptime {
        var foo: Foo = undefined;
        foo.setFooXMethod();
        expect(foo.x == 3);
    }
    {
        var foo: Foo = undefined;
        foo.setFooXMethod();
        expect(foo.x == 3);
    }
}

test "type name of undefined" {
    const x = undefined;
    expect(mem.eql(u8, @typeName(@TypeOf(x)), "(undefined)"));
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
            (STRINGLITERALSINGLE))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))))
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
                  (SuffixExpr
                    (INTEGER))))
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
                  (SuffixExpr
                    (INTEGER))))
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
                  (SuffixExpr
                    (INTEGER))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (BlockExprStatement
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))))
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
                        (SuffixExpr
                          (INTEGER))))
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
                        (SuffixExpr
                          (INTEGER))))
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
                        (SuffixExpr
                          (INTEGER))))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (PrefixTypeOp
                  (PtrTypeStart))
                (SuffixExpr
                  (IDENTIFIER)))))
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (AssignOp)
            (SuffixExpr
              (INTEGER)))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))
      (AssignOp)
      (SuffixExpr
        (INTEGER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (BlockExprStatement
        (BlockExpr
          (Block
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER))
              (SuffixExpr))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER))))))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER)))
                  (CompareOp)
                  (SuffixExpr
                    (INTEGER)))))))))
    (LabeledStatement
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (IDENTIFIER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (BlockExprStatement
    (BlockExpr
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments)))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER)))
                (CompareOp)
                (SuffixExpr
                  (INTEGER)))))))))
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER))))))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))))))))
