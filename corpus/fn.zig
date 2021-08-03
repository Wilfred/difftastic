================================================================================
fn
================================================================================

    const std = @import("std");
const testing = std.testing;
const expect = testing.expect;
const expectEqual = testing.expectEqual;

test "params" {
    expect(testParamsAdd(22, 11) == 33);
}
fn testParamsAdd(a: i32, b: i32) i32 {
    return a + b;
}

test "local variables" {
    testLocVars(2);
}
fn testLocVars(b: i32) void {
    const a: i32 = 1;
    if (a + b != 3) unreachable;
}

test "void parameters" {
    voidFun(1, void{}, 2, {});
}
fn voidFun(a: i32, b: void, c: i32, d: void) void {
    const v = b;
    const vv: void = if (a == 1) v else {};
    expect(a + c == 3);
    return vv;
}

test "mutable local variables" {
    var zero: i32 = 0;
    expect(zero == 0);

    var i = @as(i32, 0);
    while (i != 3) {
        i += 1;
    }
    expect(i == 3);
}

test "separate block scopes" {
    {
        const no_conflict: i32 = 5;
        expect(no_conflict == 5);
    }

    const c = x: {
        const no_conflict = @as(i32, 10);
        break :x no_conflict;
    };
    expect(c == 10);
}

test "call function with empty string" {
    acceptsString("");
}

fn acceptsString(foo: []u8) void {}

fn @"weird function name"() i32 {
    return 1234;
}
test "weird function name" {
    expect(@"weird function name"() == 1234);
}

test "implicit cast function unreachable return" {
    wantsFnWithVoid(fnWithUnreachable);
}

fn wantsFnWithVoid(f: fn () void) void {}

fn fnWithUnreachable() noreturn {
    unreachable;
}

test "function pointers" {
    const fns = [_]@TypeOf(fn1){
        fn1,
        fn2,
        fn3,
        fn4,
    };
    for (fns) |f, i| {
        expect(f() == @intCast(u32, i) + 5);
    }
}
fn fn1() u32 {
    return 5;
}
fn fn2() u32 {
    return 6;
}
fn fn3() u32 {
    return 7;
}
fn fn4() u32 {
    return 8;
}

test "number literal as an argument" {
    numberLiteralArg(3);
    comptime numberLiteralArg(3);
}

fn numberLiteralArg(a: anytype) void {
    expect(a == 3);
}

test "assign inline fn to const variable" {
    const a = inlineFn;
    a();
}

inline fn inlineFn() void {}

test "pass by non-copying value" {
    expect(addPointCoords(Point{ .x = 1, .y = 2 }) == 3);
}

const Point = struct {
    x: i32,
    y: i32,
};

fn addPointCoords(pt: Point) i32 {
    return pt.x + pt.y;
}

test "pass by non-copying value through var arg" {
    expect(addPointCoordsVar(Point{ .x = 1, .y = 2 }) == 3);
}

fn addPointCoordsVar(pt: anytype) i32 {
    comptime expect(@TypeOf(pt) == Point);
    return pt.x + pt.y;
}

test "pass by non-copying value as method" {
    var pt = Point2{ .x = 1, .y = 2 };
    expect(pt.addPointCoords() == 3);
}

const Point2 = struct {
    x: i32,
    y: i32,

    fn addPointCoords(self: Point2) i32 {
        return self.x + self.y;
    }
};

test "pass by non-copying value as method, which is generic" {
    var pt = Point3{ .x = 1, .y = 2 };
    expect(pt.addPointCoords(i32) == 3);
}

const Point3 = struct {
    x: i32,
    y: i32,

    fn addPointCoords(self: Point3, comptime T: type) i32 {
        return self.x + self.y;
    }
};

test "pass by non-copying value as method, at comptime" {
    comptime {
        var pt = Point2{ .x = 1, .y = 2 };
        expect(pt.addPointCoords() == 3);
    }
}

fn outer(y: u32) fn (u32) u32 {
    const Y = @TypeOf(y);
    const st = struct {
        fn get(z: u32) u32 {
            return z + @sizeOf(Y);
        }
    };
    return st.get;
}

test "return inner function which references comptime variable of outer function" {
    var func = outer(10);
    expect(func(3) == 7);
}

test "extern struct with stdcallcc fn pointer" {
    const S = extern struct {
        ptr: fn () callconv(if (std.builtin.arch == .i386) .Stdcall else .C) i32,

        fn foo() callconv(if (std.builtin.arch == .i386) .Stdcall else .C) i32 {
            return 1234;
        }
    };

    var s: S = undefined;
    s.ptr = S.foo;
    expect(s.ptr() == 1234);
}

test "implicit cast fn call result to optional in field result" {
    const S = struct {
        fn entry() void {
            var x = Foo{
                .field = optionalPtr(),
            };
            expect(x.field.?.* == 999);
        }

        const glob: i32 = 999;

        fn optionalPtr() *const i32 {
            return &glob;
        }

        const Foo = struct {
            field: ?*const i32,
        };
    };
    S.entry();
    comptime S.entry();
}

test "discard the result of a function that returns a struct" {
    const S = struct {
        fn entry() void {
            _ = func();
        }

        fn func() Foo {
            return undefined;
        }

        const Foo = struct {
            a: u64,
            b: u64,
        };
    };
    S.entry();
    comptime S.entry();
}

test "function call with anon list literal" {
    const S = struct {
        fn doTheTest() void {
            consumeVec(.{ 9, 8, 7 });
        }

        fn consumeVec(vec: [3]f32) void {
            expect(vec[0] == 9);
            expect(vec[1] == 8);
            expect(vec[2] == 7);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "ability to give comptime types and non comptime types to same parameter" {
    const S = struct {
        fn doTheTest() void {
            var x: i32 = 1;
            expect(foo(x) == 10);
            expect(foo(i32) == 20);
        }

        fn foo(arg: anytype) i32 {
            if (@typeInfo(@TypeOf(arg)) == .Type and arg == i32) return 20;
            return 9 + arg;
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "function with inferred error set but returning no error" {
    const S = struct {
        fn foo() !void {}
    };

    const return_ty = @typeInfo(@TypeOf(S.foo)).Fn.return_type.?;
    expectEqual(0, @typeInfo(@typeInfo(return_ty).ErrorUnion.error_set).ErrorSet.?.len);
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
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
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
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
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
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (AdditionOp)
        (SuffixExpr
          (IDENTIFIER)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER)))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
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
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (BinaryExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AdditionOp)
                (SuffixExpr
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (BuildinTypeExpr))
            (InitList)
            (SuffixExpr
              (INTEGER))
            (Block))))))
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
            (BuildinTypeExpr))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (IfExpr
        (IfPrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (IDENTIFIER))
        (Block)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (AdditionOp)
              (SuffixExpr
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))))
      (LabeledStatement
        (LoopStatement
          (WhileStatement
            (WhilePrefix
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (LabeledStatement
        (Block
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (CompareOp)
                  (SuffixExpr
                    (INTEGER))))))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (LabeledTypeExpr
            (BlockLabel
              (IDENTIFIER))
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (INTEGER)))))
              (AssignExpr
                (BreakLabel
                  (IDENTIFIER))
                (SuffixExpr
                  (IDENTIFIER)))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (PrefixTypeOp
            (SliceTypeStart))
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (INTEGER))))
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
                (FnCallArguments))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (FnProto
              (ParamDeclList)
              (SuffixExpr
                (BuildinTypeExpr)))))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr)))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))
        (InitList
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))))
      (LabeledStatement
        (LoopStatement
          (ForStatement
            (ForPrefix
              (SuffixExpr
                (IDENTIFIER))
              (PtrIndexPayload
                (IDENTIFIER)
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER)
                          (FnCallArguments))
                        (CompareOp)
                        (BinaryExpr
                          (SuffixExpr
                            (BUILTINIDENTIFIER)
                            (FnCallArguments
                              (SuffixExpr
                                (BuildinTypeExpr))
                              (SuffixExpr
                                (IDENTIFIER))))
                          (AdditionOp)
                          (SuffixExpr
                            (INTEGER))))))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (INTEGER))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (INTEGER))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (INTEGER))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (INTEGER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER)))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (INTEGER)))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType)))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block)
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
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (InitList
                    (FieldInit
                      (IDENTIFIER)
                      (SuffixExpr
                        (INTEGER)))
                    (FieldInit
                      (IDENTIFIER)
                      (SuffixExpr
                        (INTEGER))))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
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
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))))))
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
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (InitList
                    (FieldInit
                      (IDENTIFIER)
                      (SuffixExpr
                        (INTEGER)))
                    (FieldInit
                      (IDENTIFIER)
                      (SuffixExpr
                        (INTEGER))))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType)))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (AdditionOp)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))))
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
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
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
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
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
                (SuffixExpr
                  (IDENTIFIER))))
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (SuffixExpr
                  (BuildinTypeExpr)))))
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
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))))))))
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
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER)))))
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
                      (INTEGER)))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
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
                (BuildinTypeExpr)))))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (VarDecl
      (IDENTIFIER)
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
                    (BuildinTypeExpr)))))
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block
            (AssignExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AdditionOp)
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER))))))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (ContainerField
              (IDENTIFIER)
              (SuffixExpr
                (FnProto
                  (ParamDeclList)
                  (CallConv
                    (SuffixExpr
                      (IfTypeExpr
                        (IfPrefix
                          (BinaryExpr
                            (SuffixExpr
                              (IDENTIFIER)
                              (SuffixOp
                                (IDENTIFIER))
                              (SuffixOp
                                (IDENTIFIER)))
                            (CompareOp)
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (IDENTIFIER))
                        (SuffixExpr
                          (IDENTIFIER)))))
                  (SuffixExpr
                    (BuildinTypeExpr)))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (CallConv
                (SuffixExpr
                  (IfTypeExpr
                    (IfPrefix
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER)
                          (SuffixOp
                            (IDENTIFIER))
                          (SuffixOp
                            (IDENTIFIER)))
                        (CompareOp)
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER)))))
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (INTEGER)))))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (AssignOp)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))))
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
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER))
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments)))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (BinaryExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (IDENTIFIER))
                        (SuffixOp)
                        (SuffixOp))
                      (CompareOp)
                      (SuffixExpr
                        (INTEGER)))))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER)))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (PrefixTypeOp
                (PtrTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (AssignExpr
                (BinaryExpr
                  (BitwiseOp)
                  (SuffixExpr
                    (IDENTIFIER)))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (ContainerDecl
                  (ContainerDeclType)
                  (ContainerField
                    (IDENTIFIER)
                    (PrefixTypeOp)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (SuffixExpr
                (IDENTIFIER)))
            (Block
              (AssignExpr
                (SuffixExpr)))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (ContainerDecl
                  (ContainerDeclType)
                  (ContainerField
                    (IDENTIFIER)
                    (SuffixExpr
                      (BuildinTypeExpr)))
                  (ContainerField
                    (IDENTIFIER)
                    (SuffixExpr
                      (BuildinTypeExpr)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (InitList
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))))))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (INTEGER))))
                    (SuffixExpr
                      (BuildinTypeExpr)))))
              (SuffixExpr
                (BuildinTypeExpr)))
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
                        (INTEGER))))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (BinaryExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (IDENTIFIER))))
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
                        (FnCallArguments
                          (SuffixExpr
                            (BuildinTypeExpr))))
                      (CompareOp)
                      (SuffixExpr
                        (INTEGER)))))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType)))
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (AssignExpr
                (IfExpr
                  (IfPrefix
                    (BinaryExpr
                      (BinaryExpr
                        (SuffixExpr
                          (BUILTINIDENTIFIER)
                          (FnCallArguments
                            (SuffixExpr
                              (BUILTINIDENTIFIER)
                              (FnCallArguments
                                (SuffixExpr
                                  (IDENTIFIER))))))
                        (CompareOp)
                        (SuffixExpr
                          (IDENTIFIER)))
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER))
                        (CompareOp)
                        (SuffixExpr
                          (BuildinTypeExpr)))))
                  (SuffixExpr
                    (INTEGER))))
              (AssignExpr
                (BinaryExpr
                  (SuffixExpr
                    (INTEGER))
                  (AdditionOp)
                  (SuffixExpr
                    (IDENTIFIER))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))))))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER))))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp)
              (SuffixOp
                (IDENTIFIER)))))))))
