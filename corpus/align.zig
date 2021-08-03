================================================================================
align
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const builtin = @import("builtin");

var foo: u8 align(4) = 100;

test "global variable alignment" {
    comptime expect(@typeInfo(@TypeOf(&foo)).Pointer.alignment == 4);
    comptime expect(@TypeOf(&foo) == *align(4) u8);
    {
        const slice = @as(*[1]u8, &foo)[0..];
        comptime expect(@TypeOf(slice) == *align(4) [1]u8);
    }
    {
        var runtime_zero: usize = 0;
        const slice = @as(*[1]u8, &foo)[runtime_zero..];
        comptime expect(@TypeOf(slice) == []align(4) u8);
    }
}

fn derp() align(@sizeOf(usize) * 2) i32 {
    return 1234;
}
fn noop1() align(1) void {}
fn noop4() align(4) void {}

test "function alignment" {
    // function alignment is a compile error on wasm32/wasm64
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    expect(derp() == 1234);
    expect(@TypeOf(noop1) == fn () align(1) void);
    expect(@TypeOf(noop4) == fn () align(4) void);
    noop1();
    noop4();
}

var baz: packed struct {
    a: u32,
    b: u32,
} = undefined;

test "packed struct alignment" {
    expect(@TypeOf(&baz.b) == *align(1) u32);
}

const blah: packed struct {
    a: u3,
    b: u3,
    c: u2,
} = undefined;

test "bit field alignment" {
    expect(@TypeOf(&blah.b) == *align(1:3:1) const u3);
}

test "default alignment allows unspecified in type syntax" {
    expect(*u32 == *align(@alignOf(u32)) u32);
}

test "implicitly decreasing pointer alignment" {
    const a: u32 align(4) = 3;
    const b: u32 align(8) = 4;
    expect(addUnaligned(&a, &b) == 7);
}

fn addUnaligned(a: *align(1) const u32, b: *align(1) const u32) u32 {
    return a.* + b.*;
}

test "implicitly decreasing slice alignment" {
    const a: u32 align(4) = 3;
    const b: u32 align(8) = 4;
    expect(addUnalignedSlice(@as(*const [1]u32, &a)[0..], @as(*const [1]u32, &b)[0..]) == 7);
}
fn addUnalignedSlice(a: []align(1) const u32, b: []align(1) const u32) u32 {
    return a[0] + b[0];
}

test "specifying alignment allows pointer cast" {
    testBytesAlign(0x33);
}
fn testBytesAlign(b: u8) void {
    var bytes align(4) = [_]u8{
        b,
        b,
        b,
        b,
    };
    const ptr = @ptrCast(*u32, &bytes[0]);
    expect(ptr.* == 0x33333333);
}

test "@alignCast pointers" {
    var x: u32 align(4) = 1;
    expectsOnly1(&x);
    expect(x == 2);
}
fn expectsOnly1(x: *align(1) u32) void {
    expects4(@alignCast(4, x));
}
fn expects4(x: *align(4) u32) void {
    x.* += 1;
}

test "@alignCast slices" {
    var array align(4) = [_]u32{
        1,
        1,
    };
    const slice = array[0..];
    sliceExpectsOnly1(slice);
    expect(slice[0] == 2);
}
fn sliceExpectsOnly1(slice: []align(1) u32) void {
    sliceExpects4(@alignCast(4, slice));
}
fn sliceExpects4(slice: []align(4) u32) void {
    slice[0] += 1;
}

test "implicitly decreasing fn alignment" {
    // function alignment is a compile error on wasm32/wasm64
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    testImplicitlyDecreaseFnAlign(alignedSmall, 1234);
    testImplicitlyDecreaseFnAlign(alignedBig, 5678);
}

fn testImplicitlyDecreaseFnAlign(ptr: fn () align(1) i32, answer: i32) void {
    expect(ptr() == answer);
}

fn alignedSmall() align(8) i32 {
    return 1234;
}
fn alignedBig() align(16) i32 {
    return 5678;
}

test "@alignCast functions" {
    // function alignment is a compile error on wasm32/wasm64
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    expect(fnExpectsOnly1(simple4) == 0x19);
}
fn fnExpectsOnly1(ptr: fn () align(1) i32) i32 {
    return fnExpects4(@alignCast(4, ptr));
}
fn fnExpects4(ptr: fn () align(4) i32) i32 {
    return ptr();
}
fn simple4() align(4) i32 {
    return 0x19;
}

test "generic function with align param" {
    // function alignment is a compile error on wasm32/wasm64
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    expect(whyWouldYouEverDoThis(1) == 0x1);
    expect(whyWouldYouEverDoThis(4) == 0x1);
    expect(whyWouldYouEverDoThis(8) == 0x1);
}

fn whyWouldYouEverDoThis(comptime align_bytes: u8) align(align_bytes) u8 {
    return 0x1;
}

test "@ptrCast preserves alignment of bigger source" {
    var x: u32 align(16) = 1234;
    const ptr = @ptrCast(*u8, &x);
    expect(@TypeOf(ptr) == *align(16) u8);
}

test "runtime known array index has best alignment possible" {
    // take full advantage of over-alignment
    var array align(4) = [_]u8{ 1, 2, 3, 4 };
    expect(@TypeOf(&array[0]) == *align(4) u8);
    expect(@TypeOf(&array[1]) == *u8);
    expect(@TypeOf(&array[2]) == *align(2) u8);
    expect(@TypeOf(&array[3]) == *u8);

    // because align is too small but we still figure out to use 2
    var bigger align(2) = [_]u64{ 1, 2, 3, 4 };
    expect(@TypeOf(&bigger[0]) == *align(2) u64);
    expect(@TypeOf(&bigger[1]) == *align(2) u64);
    expect(@TypeOf(&bigger[2]) == *align(2) u64);
    expect(@TypeOf(&bigger[3]) == *align(2) u64);

    // because pointer is align 2 and u32 align % 2 == 0 we can assume align 2
    var smaller align(2) = [_]u32{ 1, 2, 3, 4 };
    var runtime_zero: usize = 0;
    comptime expect(@TypeOf(smaller[runtime_zero..]) == []align(2) u32);
    comptime expect(@TypeOf(smaller[runtime_zero..].ptr) == [*]align(2) u32);
    testIndex(smaller[runtime_zero..].ptr, 0, *align(2) u32);
    testIndex(smaller[runtime_zero..].ptr, 1, *align(2) u32);
    testIndex(smaller[runtime_zero..].ptr, 2, *align(2) u32);
    testIndex(smaller[runtime_zero..].ptr, 3, *align(2) u32);

    // has to use ABI alignment because index known at runtime only
    testIndex2(array[runtime_zero..].ptr, 0, *u8);
    testIndex2(array[runtime_zero..].ptr, 1, *u8);
    testIndex2(array[runtime_zero..].ptr, 2, *u8);
    testIndex2(array[runtime_zero..].ptr, 3, *u8);
}
fn testIndex(smaller: [*]align(2) u32, index: usize, comptime T: type) void {
    comptime expect(@TypeOf(&smaller[index]) == T);
}
fn testIndex2(ptr: [*]align(4) u8, index: usize, comptime T: type) void {
    comptime expect(@TypeOf(&ptr[index]) == T);
}

test "alignstack" {
    expect(fnWithAlignedStack() == 1234);
}

fn fnWithAlignedStack() i32 {
    @setAlignStack(256);
    return 1234;
}

test "alignment of structs" {
    expect(@alignOf(struct {
        a: i32,
        b: *i32,
    }) == @alignOf(usize));
}

test "alignment of function with c calling convention" {
    var runtime_nothing = nothing;
    const casted1 = @ptrCast(*const u8, runtime_nothing);
    const casted2 = @ptrCast(fn () callconv(.C) void, casted1);
    casted2();
}

fn nothing() callconv(.C) void {}

test "return error union with 128-bit integer" {
    expect(3 == try give());
}
fn give() anyerror!u128 {
    return 3;
}

test "alignment of >= 128-bit integer type" {
    expect(@alignOf(u128) == 16);
    expect(@alignOf(u129) == 16);
}

test "alignment of struct with 128-bit field" {
    expect(@alignOf(struct {
        x: u128,
    }) == 16);

    comptime {
        expect(@alignOf(struct {
            x: u128,
        }) == 16);
    }
}

test "size of extern struct with 128-bit field" {
    expect(@sizeOf(extern struct {
        x: u128,
        y: u8,
    }) == 32);

    comptime {
        expect(@sizeOf(extern struct {
            x: u128,
            y: u8,
        }) == 32);
    }
}

const DefaultAligned = struct {
    nevermind: u32,
    badguy: i128,
};

test "read 128-bit field from default aligned struct in stack memory" {
    var default_aligned = DefaultAligned{
        .nevermind = 1,
        .badguy = 12,
    };
    expect((@ptrToInt(&default_aligned.badguy) % 16) == 0);
    expect(12 == default_aligned.badguy);
}

var default_aligned_global = DefaultAligned{
    .nevermind = 1,
    .badguy = 12,
};

test "read 128-bit field from default aligned struct in global memory" {
    expect((@ptrToInt(&default_aligned_global.badguy) % 16) == 0);
    expect(12 == default_aligned_global.badguy);
}

test "struct field explicit alignment" {
    const S = struct {
        const Node = struct {
            next: *Node,
            massive_byte: u8 align(64),
        };
    };

    var node: S.Node = undefined;
    node.massive_byte = 100;
    expect(node.massive_byte == 100);
    comptime expect(@TypeOf(&node.massive_byte) == *align(64) u8);
    expect(@ptrToInt(&node.massive_byte) % 64 == 0);
}

test "align(@alignOf(T)) T does not force resolution of T" {
    const S = struct {
        const A = struct {
            a: *align(@alignOf(A)) A,
        };
        fn doTheTest() void {
            suspend {
                resume @frame();
            }
            _ = bar(@Frame(doTheTest));
        }
        fn bar(comptime T: type) *align(@alignOf(T)) T {
            ok = true;
            return undefined;
        }

        var ok = false;
    };
    _ = async S.doTheTest();
    expect(S.ok);
}

test "align(N) on functions" {
    // function alignment is a compile error on wasm32/wasm64
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    expect((@ptrToInt(overaligned_fn) & (0x1000 - 1)) == 0);
}
fn overaligned_fn() align(0x1000) i32 {
    return 42;
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
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (ByteAlign
      (SuffixExpr
        (INTEGER)))
    (SuffixExpr
      (INTEGER)))
  (TestDecl
    (STRINGLITERALSINGLE)
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
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (UnaryExpr (PrefixOp)
                (SuffixExpr
                  (IDENTIFIER)))))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart)
            (SuffixExpr
              (INTEGER)))
          (SuffixExpr
            (BuildinTypeExpr))))))
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp
              (PtrTypeStart))
            (PrefixTypeOp
              (ArrayTypeStart
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (BuildinTypeExpr))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixOp
          (SuffixExpr
            (INTEGER)))))
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
            (PrefixTypeOp
              (PtrTypeStart)
              (SuffixExpr
                (INTEGER)))
            (PrefixTypeOp
              (ArrayTypeStart
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (BuildinTypeExpr))))))))(LabeledStatement
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER))))
      (SuffixOp
        (SuffixExpr
          (IDENTIFIER)))))
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
          (PrefixTypeOp
            (SliceTypeStart)
            (ByteAlign
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(BinaryExpr(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BuildinTypeExpr))))(MultiplyOp 
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(SuffixExpr
  (INTEGER)))(SuffixExpr(BuildinTypeExpr)))(Block)(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(SuffixExpr
  (INTEGER)))(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr
  (IfExpr
    (IfPrefix
      (BinaryExpr
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER)))
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER)))))
    (SuffixExpr
      (IDENTIFIER))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))
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
              (IDENTIFIER))))
        (CompareOp)
        (SuffixExpr
          (FnProto
            (ParamDeclList)
            (ByteAlign
              (SuffixExpr
                (INTEGER)))
            (SuffixExpr
              (BuildinTypeExpr))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))
        (CompareOp)
        (SuffixExpr
          (FnProto
            (ParamDeclList)
            (ByteAlign
              (SuffixExpr
                (INTEGER)))
            (SuffixExpr
              (BuildinTypeExpr))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments)))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (ContainerField
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))
  (ContainerField
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))))))
      (CompareOp)
      (PrefixTypeOp
        (PtrTypeStart)
        (SuffixExpr
          (INTEGER)))
      (SuffixExpr
        (BuildinTypeExpr))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))))
    (CompareOp)
    (PrefixTypeOp
      (PtrTypeStart)
      (SuffixExpr
        (INTEGER))
      (INTEGER)
      (INTEGER))
    (SuffixExpr
      (BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (CompareOp)
    (PrefixTypeOp
      (PtrTypeStart)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr
  (INTEGER)))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr
  (INTEGER)))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER)))))(CompareOp)(SuffixExpr
  (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AdditionOp)(SuffixExpr(IDENTIFIER)(SuffixOp)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (PrefixTypeOp
          (PtrTypeStart))
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp
        (PtrTypeStart))
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixOp
    (SuffixExpr
      (INTEGER))))))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AdditionOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(IfExpr(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(FnProto(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(IfExpr(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(FnProto(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(FnProto(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(IfExpr(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(ByteAlign(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(line_comment)(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(line_comment)(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER))))))(CompareOp)(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))))(line_comment)(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))))))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))))))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))))(CompareOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(FnProto(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments)))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))(CompareOp)(SuffixExpr(INTEGER))))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))(CompareOp)(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))(CompareOp)(SuffixExpr(INTEGER))))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))(CompareOp)(SuffixExpr(INTEGER)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(MultiplyOp (SuffixExpr(INTEGER)))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(MultiplyOp (SuffixExpr(INTEGER)))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ByteAlign(SuffixExpr(INTEGER))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(MultiplyOp (SuffixExpr(INTEGER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(PtrTypeStart)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr))(AssignExpr(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(IfExpr(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(BitwiseOp)(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(INTEGER))(AdditionOp)(SuffixExpr(INTEGER))))))))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList)(ByteAlign(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))
