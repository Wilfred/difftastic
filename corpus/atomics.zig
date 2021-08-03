================================================================================
atomics
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;
const builtin = @import("builtin");

test "cmpxchg" {
    testCmpxchg();
    comptime testCmpxchg();
}

fn testCmpxchg() void {
    var x: i32 = 1234;
    if (@cmpxchgWeak(i32, &x, 99, 5678, .SeqCst, .SeqCst)) |x1| {
        expect(x1 == 1234);
    } else {
        @panic("cmpxchg should have failed");
    }

    while (@cmpxchgWeak(i32, &x, 1234, 5678, .SeqCst, .SeqCst)) |x1| {
        expect(x1 == 1234);
    }
    expect(x == 5678);

    expect(@cmpxchgStrong(i32, &x, 5678, 42, .SeqCst, .SeqCst) == null);
    expect(x == 42);
}

test "fence" {
    var x: i32 = 1234;
    @fence(.SeqCst);
    x = 5678;
}

test "atomicrmw and atomicload" {
    var data: u8 = 200;
    testAtomicRmw(&data);
    expect(data == 42);
    testAtomicLoad(&data);
}

fn testAtomicRmw(ptr: *u8) void {
    const prev_value = @atomicRmw(u8, ptr, .Xchg, 42, .SeqCst);
    expect(prev_value == 200);
    comptime {
        var x: i32 = 1234;
        const y: i32 = 12345;
        expect(@atomicLoad(i32, &x, .SeqCst) == 1234);
        expect(@atomicLoad(i32, &y, .SeqCst) == 12345);
    }
}

fn testAtomicLoad(ptr: *u8) void {
    const x = @atomicLoad(u8, ptr, .SeqCst);
    expect(x == 42);
}

test "cmpxchg with ptr" {
    var data1: i32 = 1234;
    var data2: i32 = 5678;
    var data3: i32 = 9101;
    var x: *i32 = &data1;
    if (@cmpxchgWeak(*i32, &x, &data2, &data3, .SeqCst, .SeqCst)) |x1| {
        expect(x1 == &data1);
    } else {
        @panic("cmpxchg should have failed");
    }

    while (@cmpxchgWeak(*i32, &x, &data1, &data3, .SeqCst, .SeqCst)) |x1| {
        expect(x1 == &data1);
    }
    expect(x == &data3);

    expect(@cmpxchgStrong(*i32, &x, &data3, &data2, .SeqCst, .SeqCst) == null);
    expect(x == &data2);
}

// TODO this test is disabled until this issue is resolved:
// https://github.com/ziglang/zig/issues/2883
// otherwise cross compiling will result in:
// lld: error: undefined symbol: __sync_val_compare_and_swap_16
//test "128-bit cmpxchg" {
//    var x: u128 align(16) = 1234; // TODO: https://github.com/ziglang/zig/issues/2987
//    if (@cmpxchgWeak(u128, &x, 99, 5678, .SeqCst, .SeqCst)) |x1| {
//        expect(x1 == 1234);
//    } else {
//        @panic("cmpxchg should have failed");
//    }
//
//    while (@cmpxchgWeak(u128, &x, 1234, 5678, .SeqCst, .SeqCst)) |x1| {
//        expect(x1 == 1234);
//    }
//    expect(x == 5678);
//
//    expect(@cmpxchgStrong(u128, &x, 5678, 42, .SeqCst, .SeqCst) == null);
//    expect(x == 42);
//}

test "cmpxchg with ignored result" {
    var x: i32 = 1234;
    var ptr = &x;

    _ = @cmpxchgStrong(i32, &x, 1234, 5678, .Monotonic, .Monotonic);

    expectEqual(@as(i32, 5678), x);
}

var a_global_variable = @as(u32, 1234);

test "cmpxchg on a global variable" {
    _ = @cmpxchgWeak(u32, &a_global_variable, 1234, 42, .Acquire, .Monotonic);
    expectEqual(@as(u32, 42), a_global_variable);
}

test "atomic load and rmw with enum" {
    const Value = enum(u8) {
        a,
        b,
        c,
    };
    var x = Value.a;

    expect(@atomicLoad(Value, &x, .SeqCst) != .b);

    _ = @atomicRmw(Value, &x, .Xchg, .c, .SeqCst);
    expect(@atomicLoad(Value, &x, .SeqCst) == .c);
    expect(@atomicLoad(Value, &x, .SeqCst) != .a);
    expect(@atomicLoad(Value, &x, .SeqCst) != .b);
}

test "atomic store" {
    var x: u32 = 0;
    @atomicStore(u32, &x, 1, .SeqCst);
    expect(@atomicLoad(u32, &x, .SeqCst) == 1);
    @atomicStore(u32, &x, 12345678, .SeqCst);
    expect(@atomicLoad(u32, &x, .SeqCst) == 12345678);
}

test "atomic store comptime" {
    comptime testAtomicStore();
    testAtomicStore();
}

fn testAtomicStore() void {
    var x: u32 = 0;
    @atomicStore(u32, &x, 1, .SeqCst);
    expect(@atomicLoad(u32, &x, .SeqCst) == 1);
    @atomicStore(u32, &x, 12345678, .SeqCst);
    expect(@atomicLoad(u32, &x, .SeqCst) == 12345678);
}

test "atomicrmw with floats" {
    if (builtin.arch == .aarch64 or builtin.arch == .arm or builtin.arch == .riscv64) {
        // https://github.com/ziglang/zig/issues/4457
        return error.SkipZigTest;
    }
    testAtomicRmwFloat();
    comptime testAtomicRmwFloat();
}

fn testAtomicRmwFloat() void {
    var x: f32 = 0;
    expect(x == 0);
    _ = @atomicRmw(f32, &x, .Xchg, 1, .SeqCst);
    expect(x == 1);
    _ = @atomicRmw(f32, &x, .Add, 5, .SeqCst);
    expect(x == 6);
    _ = @atomicRmw(f32, &x, .Sub, 2, .SeqCst);
    expect(x == 4);
}

test "atomicrmw with ints" {
    testAtomicRmwInt();
    comptime testAtomicRmwInt();
}

fn testAtomicRmwInt() void {
    var x: u8 = 1;
    var res = @atomicRmw(u8, &x, .Xchg, 3, .SeqCst);
    expect(x == 3 and res == 1);
    _ = @atomicRmw(u8, &x, .Add, 3, .SeqCst);
    expect(x == 6);
    _ = @atomicRmw(u8, &x, .Sub, 1, .SeqCst);
    expect(x == 5);
    _ = @atomicRmw(u8, &x, .And, 4, .SeqCst);
    expect(x == 4);
    _ = @atomicRmw(u8, &x, .Nand, 4, .SeqCst);
    expect(x == 0xfb);
    _ = @atomicRmw(u8, &x, .Or, 6, .SeqCst);
    expect(x == 0xff);
    _ = @atomicRmw(u8, &x, .Xor, 2, .SeqCst);
    expect(x == 0xfd);

    _ = @atomicRmw(u8, &x, .Max, 1, .SeqCst);
    expect(x == 0xfd);
    _ = @atomicRmw(u8, &x, .Min, 1, .SeqCst);
    expect(x == 1);
}

test "atomics with different types" {
    testAtomicsWithType(bool, true, false);
    inline for (.{ u1, i5, u15 }) |T| {
        var x: T = 0;
        testAtomicsWithType(T, 0, 1);
    }
    testAtomicsWithType(u0, 0, 0);
    testAtomicsWithType(i0, 0, 0);
}

fn testAtomicsWithType(comptime T: type, a: T, b: T) void {
    var x: T = b;
    @atomicStore(T, &x, a, .SeqCst);
    expect(x == a);
    expect(@atomicLoad(T, &x, .SeqCst) == a);
    expect(@atomicRmw(T, &x, .Xchg, b, .SeqCst) == a);
    expect(@cmpxchgStrong(T, &x, b, a, .SeqCst, .SeqCst) == null);
    if (@sizeOf(T) != 0)
        expect(@cmpxchgStrong(T, &x, b, a, .SeqCst, .SeqCst).? == a);
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
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (TestDecl
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
          (FnCallArguments)))))
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
    (IfStatement
      (IfPrefix
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))))
      (PtrPayload
        (IDENTIFIER)))
    (BlockExpr
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
                  (INTEGER))))))))
    (LabeledStatement
      (Block
        (AssignExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))))))))
  (LabeledStatement
    (LoopStatement
      (WhileStatement
        (WhilePrefix
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (IDENTIFIER)))
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))))
        (PtrPayload
          (IDENTIFIER)))
      (BlockExpr
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
                    (INTEGER)))))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))))
      (CompareOp)
      (SuffixExpr)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (INTEGER)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (IDENTIFIER))(SuffixExpr
  (IDENTIFIER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(BlockExprStatement(BlockExpr(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (IDENTIFIER))))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)))
        (SuffixExpr
          (IDENTIFIER))))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(IfStatement(IfPrefix(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))))(LabeledStatement(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(PtrPayload(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))))(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(line_comment)(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(IfStatement(IfPrefix(BinaryExpr(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER))))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(BlockExpr(Block(line_comment)(AssignExpr(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr)(SuffixExpr))))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(InitList(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr))))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr)))))(AssignExpr(SuffixExpr(IfTypeExpr(IfPrefix(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))(SuffixOp))(CompareOp)(SuffixExpr(IDENTIFIER))))))))
