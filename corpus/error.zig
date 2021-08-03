================================================================================
error
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectError = std.testing.expectError;
const expectEqual = std.testing.expectEqual;
const mem = std.mem;

pub fn foo() anyerror!i32 {
    const x = try bar();
    return x + 1;
}

pub fn bar() anyerror!i32 {
    return 13;
}

pub fn baz() anyerror!i32 {
    const y = foo() catch 1234;
    return y + 1;
}

test "error wrapping" {
    expect((baz() catch unreachable) == 15);
}

fn gimmeItBroke() []const u8 {
    return @errorName(error.ItBroke);
}

test "@errorName" {
    expect(mem.eql(u8, @errorName(error.AnError), "AnError"));
    expect(mem.eql(u8, @errorName(error.ALongerErrorName), "ALongerErrorName"));
}

test "error values" {
    const a = @errorToInt(error.err1);
    const b = @errorToInt(error.err2);
    expect(a != b);
}

test "redefinition of error values allowed" {
    shouldBeNotEqual(error.AnError, error.SecondError);
}
fn shouldBeNotEqual(a: anyerror, b: anyerror) void {
    if (a == b) unreachable;
}

test "error binary operator" {
    const a = errBinaryOperatorG(true) catch 3;
    const b = errBinaryOperatorG(false) catch 3;
    expect(a == 3);
    expect(b == 10);
}
fn errBinaryOperatorG(x: bool) anyerror!isize {
    return if (x) error.ItBroke else @as(isize, 10);
}

test "unwrap simple value from error" {
    const i = unwrapSimpleValueFromErrorDo() catch unreachable;
    expect(i == 13);
}
fn unwrapSimpleValueFromErrorDo() anyerror!isize {
    return 13;
}

test "error return in assignment" {
    doErrReturnInAssignment() catch unreachable;
}

fn doErrReturnInAssignment() anyerror!void {
    var x: i32 = undefined;
    x = try makeANonErr();
}

fn makeANonErr() anyerror!i32 {
    return 1;
}

test "error union type " {
    testErrorUnionType();
    comptime testErrorUnionType();
}

fn testErrorUnionType() void {
    const x: anyerror!i32 = 1234;
    if (x) |value| expect(value == 1234) else |_| unreachable;
    expect(@typeInfo(@TypeOf(x)) == .ErrorUnion);
    expect(@typeInfo(@typeInfo(@TypeOf(x)).ErrorUnion.error_set) == .ErrorSet);
    expect(@typeInfo(@TypeOf(x)).ErrorUnion.error_set == anyerror);
}

test "error set type" {
    testErrorSetType();
    comptime testErrorSetType();
}

const MyErrSet = error{
    OutOfMemory,
    FileNotFound,
};

fn testErrorSetType() void {
    expect(@typeInfo(MyErrSet).ErrorSet.?.len == 2);

    const a: MyErrSet!i32 = 5678;
    const b: MyErrSet!i32 = MyErrSet.OutOfMemory;

    if (a) |value| expect(value == 5678) else |err| switch (err) {
        error.OutOfMemory => unreachable,
        error.FileNotFound => unreachable,
    }
}

test "explicit error set cast" {
    testExplicitErrorSetCast(Set1.A);
    comptime testExplicitErrorSetCast(Set1.A);
}

const Set1 = error{
    A,
    B,
};
const Set2 = error{
    A,
    C,
};

fn testExplicitErrorSetCast(set1: Set1) void {
    var x = @errSetCast(Set2, set1);
    var y = @errSetCast(Set1, x);
    expect(y == error.A);
}

test "comptime test error for empty error set" {
    testComptimeTestErrorEmptySet(1234);
    comptime testComptimeTestErrorEmptySet(1234);
}

const EmptyErrorSet = error{};

fn testComptimeTestErrorEmptySet(x: EmptyErrorSet!i32) void {
    if (x) |v| expect(v == 1234) else |err| @compileError("bad");
}

test "syntax: optional operator in front of error union operator" {
    comptime {
        expect(?(anyerror!i32) == ?(anyerror!i32));
    }
}

test "comptime err to int of error set with only 1 possible value" {
    testErrToIntWithOnePossibleValue(error.A, @errorToInt(error.A));
    comptime testErrToIntWithOnePossibleValue(error.A, @errorToInt(error.A));
}
fn testErrToIntWithOnePossibleValue(
    x: error{A},
    comptime value: u32,
) void {
    if (@errorToInt(x) != value) {
        @compileError("bad");
    }
}

test "empty error union" {
    const x = error{} || error{};
}

test "error union peer type resolution" {
    testErrorUnionPeerTypeResolution(1);
}

fn testErrorUnionPeerTypeResolution(x: i32) void {
    const y = switch (x) {
        1 => bar_1(),
        2 => baz_1(),
        else => quux_1(),
    };
    if (y) |_| {
        @panic("expected error");
    } else |e| {
        expect(e == error.A);
    }
}

fn bar_1() anyerror {
    return error.A;
}

fn baz_1() !i32 {
    return error.B;
}

fn quux_1() !i32 {
    return error.C;
}

test "error: fn returning empty error set can be passed as fn returning any error" {
    entry();
    comptime entry();
}

fn entry() void {
    foo2(bar2);
}

fn foo2(f: fn () anyerror!void) void {
    const x = f();
}

fn bar2() (error{}!void) {}

test "error: Zero sized error set returned with value payload crash" {
    _ = foo3(0) catch {};
    _ = comptime foo3(0) catch {};
}

const Error = error{};
fn foo3(b: usize) Error!usize {
    return b;
}

test "error: Infer error set from literals" {
    _ = nullLiteral("n") catch |err| handleErrors(err);
    _ = floatLiteral("n") catch |err| handleErrors(err);
    _ = intLiteral("n") catch |err| handleErrors(err);
    _ = comptime nullLiteral("n") catch |err| handleErrors(err);
    _ = comptime floatLiteral("n") catch |err| handleErrors(err);
    _ = comptime intLiteral("n") catch |err| handleErrors(err);
}

fn handleErrors(err: anytype) noreturn {
    switch (err) {
        error.T => {},
    }

    unreachable;
}

fn nullLiteral(str: []const u8) !?i64 {
    if (str[0] == 'n') return null;

    return error.T;
}

fn floatLiteral(str: []const u8) !?f64 {
    if (str[0] == 'n') return 1.0;

    return error.T;
}

fn intLiteral(str: []const u8) !?i64 {
    if (str[0] == 'n') return 1;

    return error.T;
}

test "nested error union function call in optional unwrap" {
    const S = struct {
        const Foo = struct {
            a: i32,
        };

        fn errorable() !i32 {
            var x: Foo = (try getFoo()) orelse return error.Other;
            return x.a;
        }

        fn errorable2() !i32 {
            var x: Foo = (try getFoo2()) orelse return error.Other;
            return x.a;
        }

        fn errorable3() !i32 {
            var x: Foo = (try getFoo3()) orelse return error.Other;
            return x.a;
        }

        fn getFoo() anyerror!?Foo {
            return Foo{ .a = 1234 };
        }

        fn getFoo2() anyerror!?Foo {
            return error.Failure;
        }

        fn getFoo3() anyerror!?Foo {
            return null;
        }
    };
    expect((try S.errorable()) == 1234);
    expectError(error.Failure, S.errorable2());
    expectError(error.Other, S.errorable3());
    comptime {
        expect((try S.errorable()) == 1234);
        expectError(error.Failure, S.errorable2());
        expectError(error.Other, S.errorable3());
    }
}

test "widen cast integer payload of error union function call" {
    const S = struct {
        fn errorable() !u64 {
            var x = @as(u64, try number());
            return x;
        }

        fn number() anyerror!u32 {
            return 1234;
        }
    };
    expect((try S.errorable()) == 1234);
}

test "return function call to error set from error union function" {
    const S = struct {
        fn errorable() anyerror!i32 {
            return fail();
        }

        fn fail() anyerror {
            return error.Failure;
        }
    };
    expectError(error.Failure, S.errorable());
    comptime expectError(error.Failure, S.errorable());
}

test "optional error set is the same size as error set" {
    comptime expect(@sizeOf(?anyerror) == @sizeOf(anyerror));
    const S = struct {
        fn returnsOptErrSet() ?anyerror {
            return null;
        }
    };
    expect(S.returnsOptErrSet() == null);
    comptime expect(S.returnsOptErrSet() == null);
}

test "debug info for optional error set" {
    const SomeError = error{Hello};
    var a_local_variable: ?SomeError = null;
}

test "nested catch" {
    const S = struct {
        fn entry() void {
            expectError(error.Bad, func());
        }
        fn fail() anyerror!Foo {
            return error.Wrong;
        }
        fn func() anyerror!Foo {
            const x = fail() catch
                fail() catch
                return error.Bad;
            unreachable;
        }
        const Foo = struct {
            field: i32,
        };
    };
    S.entry();
    comptime S.entry();
}

test "implicit cast to optional to error union to return result loc" {
    const S = struct {
        fn entry() void {
            var x: Foo = undefined;
            if (func(&x)) |opt| {
                expect(opt != null);
            } else |_| @panic("expected non error");
        }
        fn func(f: *Foo) anyerror!?*Foo {
            return f;
        }
        const Foo = struct {
            field: i32,
        };
    };
    S.entry();
    //comptime S.entry(); TODO
}

test "function pointer with return type that is error union with payload which is pointer of parent struct" {
    const S = struct {
        const Foo = struct {
            fun: fn (a: i32) (anyerror!*Foo),
        };

        const Err = error{UnspecifiedErr};

        fn bar(a: i32) anyerror!*Foo {
            return Err.UnspecifiedErr;
        }

        fn doTheTest() void {
            var x = Foo{ .fun = bar };
            expectError(error.UnspecifiedErr, x.fun(1));
        }
    };
    S.doTheTest();
}

test "return result loc as peer result loc in inferred error set function" {
    const S = struct {
        fn doTheTest() void {
            if (foo(2)) |x| {
                expect(x.Two);
            } else |e| switch (e) {
                error.Whatever => @panic("fail"),
            }
            expectError(error.Whatever, foo(99));
        }
        const FormValue = union(enum) {
            One: void,
            Two: bool,
        };

        fn foo(id: u64) !FormValue {
            return switch (id) {
                2 => FormValue{ .Two = true },
                1 => FormValue{ .One = {} },
                else => return error.Whatever,
            };
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "error payload type is correctly resolved" {
    const MyIntWrapper = struct {
        const Self = @This();

        x: i32,

        pub fn create() anyerror!Self {
            return Self{ .x = 42 };
        }
    };

    expectEqual(MyIntWrapper{ .x = 42 }, try MyIntWrapper.create());
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
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
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
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments))))
  (AssignExpr
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (AdditionOp)
      (SuffixExpr
        (INTEGER)))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (INTEGER))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments))
      (BitwiseOp)
      (SuffixExpr
        (INTEGER))))
  (AssignExpr
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (AdditionOp)
      (SuffixExpr
        (INTEGER)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (GroupedExpr
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments))
                  (BitwiseOp)
                  (SuffixExpr))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
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
                    (IDENTIFIER))))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))
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
                    (IDENTIFIER))))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))))(TestDecl
  (STRINGLITERALSINGLE)
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
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IfTypeExpr
        (IfPrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixExpr)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)))
        (BitwiseOp)
        (SuffixExpr
          (INTEGER))))
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)))
        (BitwiseOp)
        (SuffixExpr
          (INTEGER))))
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
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IfTypeExpr
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))
        (BitwiseOp)
        (SuffixExpr)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (INTEGER))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))
        (BitwiseOp)
        (SuffixExpr)))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (SuffixExpr
        (IDENTIFIER))
      (FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (BinaryExpr
    (BinaryExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER))
            (PtrPayload
              (IDENTIFIER)))
          (SuffixExpr
            (IDENTIFIER)))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))
      (ERROR)
      (BitwiseOp)
      (SuffixExpr
        (IDENTIFIER)))
    (BitwiseOp)
    (SuffixExpr)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
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
          (IDENTIFIER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER)))))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (BuildinTypeExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (SuffixExpr
        (IDENTIFIER))
      (FnCallArguments)))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ErrorSetDecl
    (IdentifierList
      (IDENTIFIER)
      (IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp)
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))))(AssignExpr
  (BinaryExpr
    (BinaryExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER))
            (PtrPayload
              (IDENTIFIER)))
          (SuffixExpr
            (IDENTIFIER)))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))
      (ERROR)
      (BitwiseOp)
      (SuffixExpr
        (IDENTIFIER)))
    (BitwiseOp)
    (SuffixExpr
      (SwitchExpr
        (SuffixExpr
          (IDENTIFIER))
        (SwitchProngList
          (SwitchProng
            (SwitchCase
              (SwitchItem
                (SuffixExpr
                  (IDENTIFIER))))
            (AssignExpr
              (SuffixExpr)))
          (SwitchProng
            (SwitchCase
              (SwitchItem
                (SuffixExpr
                  (IDENTIFIER))))
            (AssignExpr
              (SuffixExpr))))))))(MISSING ";"))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))))))
  (AssignExpr
    (SuffixExpr
      (SuffixExpr
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ErrorSetDecl
    (IdentifierList
      (IDENTIFIER)
      (IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ErrorSetDecl
    (IdentifierList
      (IDENTIFIER)
      (IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (IDENTIFIER)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER)))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block
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
          (INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ErrorSetDecl
    (IdentifierList
      (IDENTIFIER
        (MISSING "IDENTIFIER_token1"))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (BinaryExpr
    (BinaryExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER))
            (PtrPayload
              (IDENTIFIER)))
          (SuffixExpr
            (IDENTIFIER)))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))
      (ERROR)
      (BitwiseOp)
      (SuffixExpr
        (IDENTIFIER)))
    (BitwiseOp)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (BlockExprStatement
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (PrefixTypeOp)
                (SuffixExpr
                  (GroupedExpr
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (BuildinTypeExpr))))
                (CompareOp)
                (PrefixTypeOp)
                (SuffixExpr
                  (GroupedExpr
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (BuildinTypeExpr)))))))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)))))))
  (AssignExpr
    (SuffixExpr
      (SuffixExpr
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)))))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (ErrorSetDecl
          (IdentifierList
            (IDENTIFIER))))))
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(IfStatement
  (IfPrefix
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))))
      (CompareOp)
      (SuffixExpr
        (IDENTIFIER))))
  (BlockExpr
    (Block
      (AssignExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (BinaryExpr
      (SuffixExpr
        (ErrorSetDecl
          (IdentifierList
            (IDENTIFIER
              (MISSING "IDENTIFIER_token1")))))
      (MultiplyOp 
        (SuffixExpr
          (ErrorSetDecl
            (IdentifierList
              (IDENTIFIER
                (MISSING "IDENTIFIER_token1")))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (INTEGER)))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (SwitchExpr
        (SuffixExpr
          (IDENTIFIER))
        (SwitchProngList
          (SwitchProng
            (SwitchCase
              (SwitchItem
                (SuffixExpr
                  (INTEGER))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))))
          (SwitchProng
            (SwitchCase
              (SwitchItem
                (SuffixExpr
                  (INTEGER))))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))))
          (SwitchProng
            (SwitchCase)
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))))))))
  (IfStatement
    (IfPrefix
      (SuffixExpr
        (IDENTIFIER))
      (PtrPayload
        (IDENTIFIER)))
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))
    (Payload
      (IDENTIFIER))
    (LabeledStatement
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
                  (IDENTIFIER))))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments)))
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments)))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (FnProto
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr))))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (GroupedExpr
      (SuffixExpr
        (ErrorSetDecl
          (IdentifierList
            (IDENTIFIER
              (MISSING "IDENTIFIER_token1")))))
      (SuffixExpr
        (BuildinTypeExpr)))))(Block)(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER))))
        (BitwiseOp)
        (Block)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (INTEGER))))
        (BitwiseOp)
        (Block)))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ErrorSetDecl
      (IdentifierList
        (IDENTIFIER
          (MISSING "IDENTIFIER_token1"))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (Payload
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (Payload
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (Payload
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (Payload
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (Payload
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (BinaryExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (Payload
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType)))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (SwitchExpr
    (SuffixExpr
      (IDENTIFIER))
    (SwitchProngList
      (SwitchProng
        (SwitchCase
          (SwitchItem
            (SuffixExpr
              (IDENTIFIER))))
        (AssignExpr
          (Block)))))
  (AssignExpr
    (SuffixExpr)))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (PrefixTypeOp)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (IfExpr
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))))
          (CompareOp)
          (SuffixExpr
            (CHAR_LITERAL))))
      (SuffixExpr)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (PrefixTypeOp)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (IfExpr
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))))
          (CompareOp)
          (SuffixExpr
            (CHAR_LITERAL))))
      (SuffixExpr
        (FLOAT))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (PrefixTypeOp)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (IfExpr
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))))
          (CompareOp)
          (SuffixExpr
            (CHAR_LITERAL))))
      (SuffixExpr
        (INTEGER))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (ContainerDecl
                (ContainerDeclType)
                (ContainerField
                  (IDENTIFIER)
                  (SuffixExpr
                    (BuildinTypeExpr))))))
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
              (BinaryExpr
                (SuffixExpr
                  (GroupedExpr
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments)))))
              (BitwiseOp)
              (SuffixExpr
                (IDENTIFIER))))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))))
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
            (BinaryExpr
              (SuffixExpr
                (GroupedExpr
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments)))))
            (BitwiseOp)
            (SuffixExpr
              (IDENTIFIER))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))))
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
          (BinaryExpr
            (SuffixExpr
              (GroupedExpr
                (UnaryExpr (PrefixOp)
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments)))))
          (BitwiseOp)
          (SuffixExpr
            (IDENTIFIER))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList)
      (SuffixExpr
        (BuildinTypeExpr))
      (PrefixTypeOp)
      (SuffixExpr
        (IDENTIFIER)))
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER))))))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList)
      (SuffixExpr
        (BuildinTypeExpr))
      (PrefixTypeOp)
      (SuffixExpr
        (IDENTIFIER)))
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList)
      (SuffixExpr
        (BuildinTypeExpr))
      (PrefixTypeOp)
      (SuffixExpr
        (IDENTIFIER)))
    (Block
      (AssignExpr
        (SuffixExpr))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (GroupedExpr
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments)))))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments)))))(BlockExprStatement(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (GroupedExpr
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (FnCallArguments)))))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (GroupedExpr
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments)))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (PrefixTypeOp)
  (SuffixExpr
    (BuildinTypeExpr))))(CompareOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments))(CompareOp)(SuffixExpr)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments))(CompareOp)(SuffixExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER)))))(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(IDENTIFIER))(SuffixExpr))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER))
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(Block(VarDecl(IDENTIFIER)(BinaryExpr
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments))
    (BitwiseOp)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (BitwiseOp)
  (SuffixExpr
    (IDENTIFIER))))(AssignExpr(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (ContainerField
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER))(SuffixExpr))(AssignExpr(IfExpr
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)))))
  (PtrPayload
    (IDENTIFIER)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (CompareOp)
          (SuffixExpr))))))(Payload
  (IDENTIFIER))(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (STRINGLITERAL
        (STRINGLITERALSINGLE))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(line_comment)))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (FnProto
      (ParamDeclList
        (ParamDecl
          (IDENTIFIER)
          (ParamType
            (SuffixExpr
              (BuildinTypeExpr)))))
      (SuffixExpr
        (GroupedExpr
          (SuffixExpr
            (BuildinTypeExpr))
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ErrorSetDecl(IdentifierList
  (IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (INTEGER)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (INTEGER))))(PtrPayload
  (IDENTIFIER)))(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))))))))(Payload(IDENTIFIER))(SwitchExpr(SuffixExpr
  (IDENTIFIER))(SwitchProngList
  (SwitchProng
    (SwitchCase
      (SwitchItem
        (SuffixExpr
          (IDENTIFIER))))
    (AssignExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(SwitchExpr
  (SuffixExpr
    (IDENTIFIER))
  (SwitchProngList
    (SwitchProng
      (SwitchCase
        (SwitchItem
          (SuffixExpr
            (INTEGER))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr)))))
    (SwitchProng
      (SwitchCase
        (SwitchItem
          (SuffixExpr
            (INTEGER))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (Block)))))
    (SwitchProng
      (SwitchCase)
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))))))
