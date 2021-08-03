================================================================================
cast
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const mem = std.mem;
const maxInt = std.math.maxInt;
const Vector = std.meta.Vector;

test "int to ptr cast" {
    const x = @as(usize, 13);
    const y = @intToPtr(*u8, x);
    const z = @ptrToInt(y);
    expect(z == 13);
}

test "integer literal to pointer cast" {
    const vga_mem = @intToPtr(*u16, 0xB8000);
    expect(@ptrToInt(vga_mem) == 0xB8000);
}

test "pointer reinterpret const float to int" {
    // https://github.com/ziglang/zig/issues/3345
    if (std.Target.current.cpu.arch == .mips) return error.SkipZigTest;

    const float: f64 = 5.99999999999994648725e-01;
    const float_ptr = &float;
    const int_ptr = @ptrCast(*const i32, float_ptr);
    const int_val = int_ptr.*;
    expect(int_val == 858993411);
}

test "implicitly cast indirect pointer to maybe-indirect pointer" {
    const S = struct {
        const Self = @This();
        x: u8,
        fn constConst(p: *const *const Self) u8 {
            return p.*.x;
        }
        fn maybeConstConst(p: ?*const *const Self) u8 {
            return p.?.*.x;
        }
        fn constConstConst(p: *const *const *const Self) u8 {
            return p.*.*.x;
        }
        fn maybeConstConstConst(p: ?*const *const *const Self) u8 {
            return p.?.*.*.x;
        }
    };
    const s = S{ .x = 42 };
    const p = &s;
    const q = &p;
    const r = &q;
    expect(42 == S.constConst(q));
    expect(42 == S.maybeConstConst(q));
    expect(42 == S.constConstConst(r));
    expect(42 == S.maybeConstConstConst(r));
}

test "explicit cast from integer to error type" {
    testCastIntToErr(error.ItBroke);
    comptime testCastIntToErr(error.ItBroke);
}
fn testCastIntToErr(err: anyerror) void {
    const x = @errorToInt(err);
    const y = @intToError(x);
    expect(error.ItBroke == y);
}

test "peer resolve arrays of different size to const slice" {
    expect(mem.eql(u8, boolToStr(true), "true"));
    expect(mem.eql(u8, boolToStr(false), "false"));
    comptime expect(mem.eql(u8, boolToStr(true), "true"));
    comptime expect(mem.eql(u8, boolToStr(false), "false"));
}
fn boolToStr(b: bool) []const u8 {
    return if (b) "true" else "false";
}

test "peer resolve array and const slice" {
    testPeerResolveArrayConstSlice(true);
    comptime testPeerResolveArrayConstSlice(true);
}
fn testPeerResolveArrayConstSlice(b: bool) void {
    const value1 = if (b) "aoeu" else @as([]const u8, "zz");
    const value2 = if (b) @as([]const u8, "zz") else "aoeu";
    expect(mem.eql(u8, value1, "aoeu"));
    expect(mem.eql(u8, value2, "zz"));
}

test "implicitly cast from T to anyerror!?T" {
    castToOptionalTypeError(1);
    comptime castToOptionalTypeError(1);
}

const A = struct {
    a: i32,
};
fn castToOptionalTypeError(z: i32) void {
    const x = @as(i32, 1);
    const y: anyerror!?i32 = x;
    expect((try y).? == 1);

    const f = z;
    const g: anyerror!?i32 = f;

    const a = A{ .a = z };
    const b: anyerror!?A = a;
    expect((b catch unreachable).?.a == 1);
}

test "implicitly cast from int to anyerror!?T" {
    implicitIntLitToOptional();
    comptime implicitIntLitToOptional();
}
fn implicitIntLitToOptional() void {
    const f: ?i32 = 1;
    const g: anyerror!?i32 = 1;
}

test "return null from fn() anyerror!?&T" {
    const a = returnNullFromOptionalTypeErrorRef();
    const b = returnNullLitFromOptionalTypeErrorRef();
    expect((try a) == null and (try b) == null);
}
fn returnNullFromOptionalTypeErrorRef() anyerror!?*A {
    const a: ?*A = null;
    return a;
}
fn returnNullLitFromOptionalTypeErrorRef() anyerror!?*A {
    return null;
}

test "peer type resolution: ?T and T" {
    expect(peerTypeTAndOptionalT(true, false).? == 0);
    expect(peerTypeTAndOptionalT(false, false).? == 3);
    comptime {
        expect(peerTypeTAndOptionalT(true, false).? == 0);
        expect(peerTypeTAndOptionalT(false, false).? == 3);
    }
}
fn peerTypeTAndOptionalT(c: bool, b: bool) ?usize {
    if (c) {
        return if (b) null else @as(usize, 0);
    }

    return @as(usize, 3);
}

test "peer type resolution: [0]u8 and []const u8" {
    expect(peerTypeEmptyArrayAndSlice(true, "hi").len == 0);
    expect(peerTypeEmptyArrayAndSlice(false, "hi").len == 1);
    comptime {
        expect(peerTypeEmptyArrayAndSlice(true, "hi").len == 0);
        expect(peerTypeEmptyArrayAndSlice(false, "hi").len == 1);
    }
}
fn peerTypeEmptyArrayAndSlice(a: bool, slice: []const u8) []const u8 {
    if (a) {
        return &[_]u8{};
    }

    return slice[0..1];
}

test "implicitly cast from [N]T to ?[]const T" {
    expect(mem.eql(u8, castToOptionalSlice().?, "hi"));
    comptime expect(mem.eql(u8, castToOptionalSlice().?, "hi"));
}

fn castToOptionalSlice() ?[]const u8 {
    return "hi";
}

test "implicitly cast from [0]T to anyerror![]T" {
    testCastZeroArrayToErrSliceMut();
    comptime testCastZeroArrayToErrSliceMut();
}

fn testCastZeroArrayToErrSliceMut() void {
    expect((gimmeErrOrSlice() catch unreachable).len == 0);
}

fn gimmeErrOrSlice() anyerror![]u8 {
    return &[_]u8{};
}

test "peer type resolution: [0]u8, []const u8, and anyerror![]u8" {
    const S = struct {
        fn doTheTest() anyerror!void {
            {
                var data = "hi".*;
                const slice = data[0..];
                expect((try peerTypeEmptyArrayAndSliceAndError(true, slice)).len == 0);
                expect((try peerTypeEmptyArrayAndSliceAndError(false, slice)).len == 1);
            }
            {
                var data: [2]u8 = "hi".*;
                const slice = data[0..];
                expect((try peerTypeEmptyArrayAndSliceAndError(true, slice)).len == 0);
                expect((try peerTypeEmptyArrayAndSliceAndError(false, slice)).len == 1);
            }
        }
    };
    try S.doTheTest();
    try comptime S.doTheTest();
}
fn peerTypeEmptyArrayAndSliceAndError(a: bool, slice: []u8) anyerror![]u8 {
    if (a) {
        return &[_]u8{};
    }

    return slice[0..1];
}

test "resolve undefined with integer" {
    testResolveUndefWithInt(true, 1234);
    comptime testResolveUndefWithInt(true, 1234);
}
fn testResolveUndefWithInt(b: bool, x: i32) void {
    const value = if (b) x else undefined;
    if (b) {
        expect(value == x);
    }
}

test "implicit cast from &const [N]T to []const T" {
    testCastConstArrayRefToConstSlice();
    comptime testCastConstArrayRefToConstSlice();
}

fn testCastConstArrayRefToConstSlice() void {
    {
        const blah = "aoeu".*;
        const const_array_ref = &blah;
        expect(@TypeOf(const_array_ref) == *const [4:0]u8);
        const slice: []const u8 = const_array_ref;
        expect(mem.eql(u8, slice, "aoeu"));
    }
    {
        const blah: [4]u8 = "aoeu".*;
        const const_array_ref = &blah;
        expect(@TypeOf(const_array_ref) == *const [4]u8);
        const slice: []const u8 = const_array_ref;
        expect(mem.eql(u8, slice, "aoeu"));
    }
}

test "peer type resolution: error and [N]T" {
    expect(mem.eql(u8, try testPeerErrorAndArray(0), "OK"));
    comptime expect(mem.eql(u8, try testPeerErrorAndArray(0), "OK"));
    expect(mem.eql(u8, try testPeerErrorAndArray2(1), "OKK"));
    comptime expect(mem.eql(u8, try testPeerErrorAndArray2(1), "OKK"));
}

fn testPeerErrorAndArray(x: u8) anyerror![]const u8 {
    return switch (x) {
        0x00 => "OK",
        else => error.BadValue,
    };
}
fn testPeerErrorAndArray2(x: u8) anyerror![]const u8 {
    return switch (x) {
        0x00 => "OK",
        0x01 => "OKK",
        else => error.BadValue,
    };
}

test "@floatToInt" {
    testFloatToInts();
    comptime testFloatToInts();
}

fn testFloatToInts() void {
    const x = @as(i32, 1e4);
    expect(x == 10000);
    const y = @floatToInt(i32, @as(f32, 1e4));
    expect(y == 10000);
    expectFloatToInt(f16, 255.1, u8, 255);
    expectFloatToInt(f16, 127.2, i8, 127);
    expectFloatToInt(f16, -128.2, i8, -128);
    expectFloatToInt(f32, 255.1, u8, 255);
    expectFloatToInt(f32, 127.2, i8, 127);
    expectFloatToInt(f32, -128.2, i8, -128);
    expectFloatToInt(comptime_int, 1234, i16, 1234);
}

fn expectFloatToInt(comptime F: type, f: F, comptime I: type, i: I) void {
    expect(@floatToInt(I, f) == i);
}

test "cast u128 to f128 and back" {
    comptime testCast128();
    testCast128();
}

fn testCast128() void {
    expect(cast128Int(cast128Float(0x7fff0000000000000000000000000000)) == 0x7fff0000000000000000000000000000);
}

fn cast128Int(x: f128) u128 {
    return @bitCast(u128, x);
}

fn cast128Float(x: u128) f128 {
    return @bitCast(f128, x);
}

test "single-item pointer of array to slice and to unknown length pointer" {
    testCastPtrOfArrayToSliceAndPtr();
    comptime testCastPtrOfArrayToSliceAndPtr();
}

fn testCastPtrOfArrayToSliceAndPtr() void {
    {
        var array = "aoeu".*;
        const x: [*]u8 = &array;
        x[0] += 1;
        expect(mem.eql(u8, array[0..], "boeu"));
        const y: []u8 = &array;
        y[0] += 1;
        expect(mem.eql(u8, array[0..], "coeu"));
    }
    {
        var array: [4]u8 = "aoeu".*;
        const x: [*]u8 = &array;
        x[0] += 1;
        expect(mem.eql(u8, array[0..], "boeu"));
        const y: []u8 = &array;
        y[0] += 1;
        expect(mem.eql(u8, array[0..], "coeu"));
    }
}

test "cast *[1][*]const u8 to [*]const ?[*]const u8" {
    const window_name = [1][*]const u8{"window name"};
    const x: [*]const ?[*]const u8 = &window_name;
    expect(mem.eql(u8, std.mem.spanZ(@ptrCast([*:0]const u8, x[0].?)), "window name"));
}

test "@intCast comptime_int" {
    const result = @intCast(i32, 1234);
    expect(@TypeOf(result) == i32);
    expect(result == 1234);
}

test "@floatCast comptime_int and comptime_float" {
    {
        const result = @floatCast(f16, 1234);
        expect(@TypeOf(result) == f16);
        expect(result == 1234.0);
    }
    {
        const result = @floatCast(f16, 1234.0);
        expect(@TypeOf(result) == f16);
        expect(result == 1234.0);
    }
    {
        const result = @floatCast(f32, 1234);
        expect(@TypeOf(result) == f32);
        expect(result == 1234.0);
    }
    {
        const result = @floatCast(f32, 1234.0);
        expect(@TypeOf(result) == f32);
        expect(result == 1234.0);
    }
}

test "vector casts" {
    const S = struct {
        fn doTheTest() void {
            // Upcast (implicit, equivalent to @intCast)
            var up0: Vector(2, u8) = [_]u8{ 0x55, 0xaa };
            var up1 = @as(Vector(2, u16), up0);
            var up2 = @as(Vector(2, u32), up0);
            var up3 = @as(Vector(2, u64), up0);
            // Downcast (safety-checked)
            var down0 = up3;
            var down1 = @intCast(Vector(2, u32), down0);
            var down2 = @intCast(Vector(2, u16), down0);
            var down3 = @intCast(Vector(2, u8), down0);

            expect(mem.eql(u16, &@as([2]u16, up1), &[2]u16{ 0x55, 0xaa }));
            expect(mem.eql(u32, &@as([2]u32, up2), &[2]u32{ 0x55, 0xaa }));
            expect(mem.eql(u64, &@as([2]u64, up3), &[2]u64{ 0x55, 0xaa }));

            expect(mem.eql(u32, &@as([2]u32, down1), &[2]u32{ 0x55, 0xaa }));
            expect(mem.eql(u16, &@as([2]u16, down2), &[2]u16{ 0x55, 0xaa }));
            expect(mem.eql(u8, &@as([2]u8, down3), &[2]u8{ 0x55, 0xaa }));
        }

        fn doTheTestFloat() void {
            var vec = @splat(2, @as(f32, 1234.0));
            var wider: Vector(2, f64) = vec;
            expect(wider[0] == 1234.0);
            expect(wider[1] == 1234.0);
        }
    };

    S.doTheTest();
    comptime S.doTheTest();
    S.doTheTestFloat();
    comptime S.doTheTestFloat();
}

test "comptime_int @intToFloat" {
    {
        const result = @intToFloat(f16, 1234);
        expect(@TypeOf(result) == f16);
        expect(result == 1234.0);
    }
    {
        const result = @intToFloat(f32, 1234);
        expect(@TypeOf(result) == f32);
        expect(result == 1234.0);
    }
    {
        const result = @intToFloat(f64, 1234);
        expect(@TypeOf(result) == f64);
        expect(result == 1234.0);
    }
    {
        const result = @intToFloat(f128, 1234);
        expect(@TypeOf(result) == f128);
        expect(result == 1234.0);
    }
    // big comptime_int (> 64 bits) to f128 conversion
    {
        const result = @intToFloat(f128, 0x1_0000_0000_0000_0000);
        expect(@TypeOf(result) == f128);
        expect(result == 0x1_0000_0000_0000_0000.0);
    }
}

test "@intCast i32 to u7" {
    var x: u128 = maxInt(u128);
    var y: i32 = 120;
    var z = x >> @intCast(u7, y);
    expect(z == 0xff);
}

test "@floatCast cast down" {
    {
        var double: f64 = 0.001534;
        var single = @floatCast(f32, double);
        expect(single == 0.001534);
    }
    {
        const double: f64 = 0.001534;
        const single = @floatCast(f32, double);
        expect(single == 0.001534);
    }
}

test "implicit cast undefined to optional" {
    expect(MakeType(void).getNull() == null);
    expect(MakeType(void).getNonNull() != null);
}

fn MakeType(comptime T: type) type {
    return struct {
        fn getNull() ?T {
            return null;
        }

        fn getNonNull() ?T {
            return @as(T, undefined);
        }
    };
}

test "implicit cast from *[N]T to ?[*]T" {
    var x: ?[*]u16 = null;
    var y: [4]u16 = [4]u16{ 0, 1, 2, 3 };

    x = &y;
    expect(std.mem.eql(u16, x.?[0..4], y[0..4]));
    x.?[0] = 8;
    y[3] = 6;
    expect(std.mem.eql(u16, x.?[0..4], y[0..4]));
}

test "implicit cast from *[N]T to [*c]T" {
    var x: [4]u16 = [4]u16{ 0, 1, 2, 3 };
    var y: [*c]u16 = &x;

    expect(std.mem.eql(u16, x[0..4], y[0..4]));
    x[0] = 8;
    y[3] = 6;
    expect(std.mem.eql(u16, x[0..4], y[0..4]));
}

test "implicit cast from *T to ?*c_void" {
    var a: u8 = 1;
    incrementVoidPtrValue(&a);
    std.testing.expect(a == 2);
}

fn incrementVoidPtrValue(value: ?*c_void) void {
    @ptrCast(*u8, value.?).* += 1;
}

test "implicit cast from [*]T to ?*c_void" {
    var a = [_]u8{ 3, 2, 1 };
    var runtime_zero: usize = 0;
    incrementVoidPtrArray(a[runtime_zero..].ptr, 3);
    expect(std.mem.eql(u8, &a, &[_]u8{ 4, 3, 2 }));
}

fn incrementVoidPtrArray(array: ?*c_void, len: usize) void {
    var n: usize = 0;
    while (n < len) : (n += 1) {
        @ptrCast([*]u8, array.?)[n] += 1;
    }
}

test "*usize to *void" {
    var i = @as(usize, 0);
    var v = @ptrCast(*void, &i);
    v.* = {};
}

test "compile time int to ptr of function" {
    foobar(FUNCTION_CONSTANT);
}

pub const FUNCTION_CONSTANT = @intToPtr(PFN_void, maxInt(usize));
pub const PFN_void = fn (*c_void) callconv(.C) void;

fn foobar(func: PFN_void) void {
    std.testing.expect(@ptrToInt(func) == maxInt(usize));
}

test "implicit ptr to *c_void" {
    var a: u32 = 1;
    var ptr: *align(@alignOf(u32)) c_void = &a;
    var b: *u32 = @ptrCast(*u32, ptr);
    expect(b.* == 1);
    var ptr2: ?*align(@alignOf(u32)) c_void = &a;
    var c: *u32 = @ptrCast(*u32, ptr2.?);
    expect(c.* == 1);
}

test "@intCast to comptime_int" {
    expect(@intCast(comptime_int, 0) == 0);
}

test "implicit cast comptime numbers to any type when the value fits" {
    const a: u64 = 255;
    var b: u8 = a;
    expect(b == 255);
}

test "@intToEnum passed a comptime_int to an enum with one item" {
    const E = enum {
        A,
    };
    const x = @intToEnum(E, 0);
    expect(x == E.A);
}

test "@intToEnum runtime to  an extern enum with duplicate values" {
    const E = extern enum(u8) {
        A = 1,
        B = 1,
    };
    var a: u8 = 1;
    var x = @intToEnum(E, a);
    expect(x == E.A);
    expect(x == E.B);
}

test "@intCast to u0 and use the result" {
    const S = struct {
        fn doTheTest(zero: u1, one: u1, bigzero: i32) void {
            expect((one << @intCast(u0, bigzero)) == 1);
            expect((zero << @intCast(u0, bigzero)) == 0);
        }
    };
    S.doTheTest(0, 1, 0);
    comptime S.doTheTest(0, 1, 0);
}

test "peer type resolution: unreachable, null, slice" {
    const S = struct {
        fn doTheTest(num: usize, word: []const u8) void {
            const result = switch (num) {
                0 => null,
                1 => word,
                else => unreachable,
            };
            expect(mem.eql(u8, result.?, "hi"));
        }
    };
    S.doTheTest(1, "hi");
}

test "peer type resolution: unreachable, error set, unreachable" {
    const Error = error{
        FileDescriptorAlreadyPresentInSet,
        OperationCausesCircularLoop,
        FileDescriptorNotRegistered,
        SystemResources,
        UserResourceLimitReached,
        FileDescriptorIncompatibleWithEpoll,
        Unexpected,
    };
    var err = Error.SystemResources;
    const transformed_err = switch (err) {
        error.FileDescriptorAlreadyPresentInSet => unreachable,
        error.OperationCausesCircularLoop => unreachable,
        error.FileDescriptorNotRegistered => unreachable,
        error.SystemResources => error.SystemResources,
        error.UserResourceLimitReached => error.UserResourceLimitReached,
        error.FileDescriptorIncompatibleWithEpoll => unreachable,
        error.Unexpected => unreachable,
    };
    expect(transformed_err == error.SystemResources);
}

test "implicit cast comptime_int to comptime_float" {
    comptime expect(@as(comptime_float, 10) == @as(f32, 10));
    expect(2 == 2.0);
}

test "implicit cast *[0]T to E![]const u8" {
    var x = @as(anyerror![]const u8, &[0]u8{});
    expect((x catch unreachable).len == 0);
}

test "peer cast *[0]T to E![]const T" {
    var buffer: [5]u8 = "abcde".*;
    var buf: anyerror![]const u8 = buffer[0..];
    var b = false;
    var y = if (b) &[0]u8{} else buf;
    expect(mem.eql(u8, "abcde", y catch unreachable));
}

test "peer cast *[0]T to []const T" {
    var buffer: [5]u8 = "abcde".*;
    var buf: []const u8 = buffer[0..];
    var b = false;
    var y = if (b) &[0]u8{} else buf;
    expect(mem.eql(u8, "abcde", y));
}

var global_array: [4]u8 = undefined;
test "cast from array reference to fn" {
    const f = @ptrCast(fn () callconv(.C) void, &global_array);
    expect(@ptrToInt(f) == @ptrToInt(&global_array));
}

test "*const [N]null u8 to ?[]const u8" {
    const S = struct {
        fn doTheTest() void {
            var a = "Hello";
            var b: ?[]const u8 = a;
            expect(mem.eql(u8, b.?, "Hello"));
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "peer resolution of string literals" {
    const S = struct {
        const E = extern enum {
            a,
            b,
            c,
            d,
        };

        fn doTheTest(e: E) void {
            const cmd = switch (e) {
                .a => "one",
                .b => "two",
                .c => "three",
                .d => "four",
            };
            expect(mem.eql(u8, cmd, "two"));
        }
    };
    S.doTheTest(.b);
    comptime S.doTheTest(.b);
}

test "type coercion related to sentinel-termination" {
    const S = struct {
        fn doTheTest() void {
            // [:x]T to []T
            {
                var array = [4:0]i32{ 1, 2, 3, 4 };
                var slice: [:0]i32 = &array;
                var dest: []i32 = slice;
                expect(mem.eql(i32, dest, &[_]i32{ 1, 2, 3, 4 }));
            }

            // [*:x]T to [*]T
            {
                var array = [4:99]i32{ 1, 2, 3, 4 };
                var dest: [*]i32 = &array;
                expect(dest[0] == 1);
                expect(dest[1] == 2);
                expect(dest[2] == 3);
                expect(dest[3] == 4);
                expect(dest[4] == 99);
            }

            // [N:x]T to [N]T
            {
                var array = [4:0]i32{ 1, 2, 3, 4 };
                var dest: [4]i32 = array;
                expect(mem.eql(i32, &dest, &[_]i32{ 1, 2, 3, 4 }));
            }

            // *[N:x]T to *[N]T
            {
                var array = [4:0]i32{ 1, 2, 3, 4 };
                var dest: *[4]i32 = &array;
                expect(mem.eql(i32, dest, &[_]i32{ 1, 2, 3, 4 }));
            }

            // [:x]T to [*:x]T
            {
                var array = [4:0]i32{ 1, 2, 3, 4 };
                var slice: [:0]i32 = &array;
                var dest: [*:0]i32 = slice;
                expect(dest[0] == 1);
                expect(dest[1] == 2);
                expect(dest[2] == 3);
                expect(dest[3] == 4);
                expect(dest[4] == 0);
            }
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "cast i8 fn call peers to i32 result" {
    const S = struct {
        fn doTheTest() void {
            var cond = true;
            const value: i32 = if (cond) smallBoi() else bigBoi();
            expect(value == 123);
        }
        fn smallBoi() i8 {
            return 123;
        }
        fn bigBoi() i16 {
            return 1234;
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "return u8 coercing into ?u32 return type" {
    const S = struct {
        fn doTheTest() void {
            expect(foo(123).? == 123);
        }
        fn foo(arg: u8) ?u32 {
            return arg;
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "peer result null and comptime_int" {
    const S = struct {
        fn blah(n: i32) ?i32 {
            if (n == 0) {
                return null;
            } else if (n < 0) {
                return -1;
            } else {
                return 1;
            }
        }
    };

    expect(S.blah(0) == null);
    comptime expect(S.blah(0) == null);
    expect(S.blah(10).? == 1);
    comptime expect(S.blah(10).? == 1);
    expect(S.blah(-10).? == -1);
    comptime expect(S.blah(-10).? == -1);
}

test "peer type resolution implicit cast to return type" {
    const S = struct {
        fn doTheTest() void {
            for ("hello") |c| _ = f(c);
        }
        fn f(c: u8) []const u8 {
            return switch (c) {
                'h', 'e' => &[_]u8{c}, // should cast to slice
                'l', ' ' => &[_]u8{ c, '.' }, // should cast to slice
                else => ([_]u8{c})[0..], // is a slice
            };
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "peer type resolution implicit cast to variable type" {
    const S = struct {
        fn doTheTest() void {
            var x: []const u8 = undefined;
            for ("hello") |c| x = switch (c) {
                'h', 'e' => &[_]u8{c}, // should cast to slice
                'l', ' ' => &[_]u8{ c, '.' }, // should cast to slice
                else => ([_]u8{c})[0..], // is a slice
            };
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "variable initialization uses result locations properly with regards to the type" {
    var b = true;
    const x: i32 = if (b) 1 else 2;
    expect(x == 1);
}

test "cast between [*c]T and ?[*:0]T on fn parameter" {
    const S = struct {
        const Handler = ?fn ([*c]const u8) callconv(.C) void;
        fn addCallback(handler: Handler) void {}

        fn myCallback(cstr: ?[*:0]const u8) callconv(.C) void {}

        fn doTheTest() void {
            addCallback(myCallback);
        }
    };
    S.doTheTest();
}

test "cast between C pointer with different but compatible types" {
    const S = struct {
        fn foo(arg: [*]c_ushort) u16 {
            return arg[0];
        }
        fn doTheTest() void {
            var x = [_]u16{ 4, 2, 1, 3 };
            expect(foo(@ptrCast([*]u16, &x)) == 4);
        }
    };
    S.doTheTest();
}

var global_struct: struct { f0: usize } = undefined;

test "assignment to optional pointer result loc" {
    var foo: struct { ptr: ?*c_void } = .{ .ptr = &global_struct };
    expect(foo.ptr.? == @ptrCast(*c_void, &global_struct));
}

test "peer type resolve string lit with sentinel-terminated mutable slice" {
    var array: [4:0]u8 = undefined;
    array[4] = 0; // TODO remove this when #4372 is solved
    var slice: [:0]u8 = array[0..4 :0];
    comptime expect(@TypeOf(slice, "hi") == [:0]const u8);
    comptime expect(@TypeOf("hi", slice) == [:0]const u8);
}

test "peer type resolve array pointers, one of them const" {
    var array1: [4]u8 = undefined;
    const array2: [5]u8 = undefined;
    comptime expect(@TypeOf(&array1, &array2) == []const u8);
    comptime expect(@TypeOf(&array2, &array1) == []const u8);
}

test "peer type resolve array pointer and unknown pointer" {
    const const_array: [4]u8 = undefined;
    var array: [4]u8 = undefined;
    var const_ptr: [*]const u8 = undefined;
    var ptr: [*]u8 = undefined;

    comptime expect(@TypeOf(&array, ptr) == [*]u8);
    comptime expect(@TypeOf(ptr, &array) == [*]u8);

    comptime expect(@TypeOf(&const_array, ptr) == [*]const u8);
    comptime expect(@TypeOf(ptr, &const_array) == [*]const u8);

    comptime expect(@TypeOf(&array, const_ptr) == [*]const u8);
    comptime expect(@TypeOf(const_ptr, &array) == [*]const u8);

    comptime expect(@TypeOf(&const_array, const_ptr) == [*]const u8);
    comptime expect(@TypeOf(const_ptr, &const_array) == [*]const u8);
}

test "comptime float casts" {
    const a = @intToFloat(comptime_float, 1);
    expect(a == 1);
    expect(@TypeOf(a) == comptime_float);
    const b = @floatToInt(comptime_int, 2);
    expect(b == 2);
    expect(@TypeOf(b) == comptime_int);
}

test "cast from ?[*]T to ??[*]T" {
    const a: ??[*]u8 = @as(?[*]u8, null);
    expect(a != null and a.? == null);
}

test "cast between *[N]void and []void" {
    var a: [4]void = undefined;
    var b: []void = &a;
    expect(b.len == 4);
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
  (TestDecl
    (STRINGLITERALSINGLE)
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
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (BuildinTypeExpr))
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
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))))
      (AssignExpr
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
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (line_comment)
      (AssignExpr
        (IfExpr
          (IfPrefix
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (IDENTIFIER))))
          (SuffixExpr
            (IDENTIFIER))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (FLOAT)))
      (VarDecl
        (IDENTIFIER)
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER)))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(TestDecl
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
              (BUILTINIDENTIFIER)
              (FnCallArguments)))
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
                (SuffixOp)
                (SuffixOp
                  (IDENTIFIER)))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (PrefixTypeOp)
                  (PrefixTypeOp
                    (PtrTypeStart))
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
                (SuffixOp)
                (SuffixOp)
                (SuffixOp
                  (IDENTIFIER)))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (PrefixTypeOp
                    (PtrTypeStart))
                  (PrefixTypeOp
                    (PtrTypeStart))
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
                (SuffixOp)
                (SuffixOp)
                (SuffixOp
                  (IDENTIFIER)))))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList
              (ParamDecl
                (IDENTIFIER)
                (ParamType
                  (PrefixTypeOp)
                  (PrefixTypeOp
                    (PtrTypeStart))
                  (PrefixTypeOp
                    (PtrTypeStart))
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
                (SuffixOp)
                (SuffixOp)
                (SuffixOp)
                (SuffixOp
                  (IDENTIFIER))))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))))
    (VarDecl
      (IDENTIFIER)
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))(VarDecl
  (IDENTIFIER)
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (INTEGER))
      (CompareOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (INTEGER))
      (CompareOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (INTEGER))
      (CompareOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (INTEGER))
      (CompareOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER))
    (CompareOp)
    (SuffixExpr
      (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
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
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr
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
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IfTypeExpr
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IfTypeExpr
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IfTypeExpr
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE)))))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (INTEGER)))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr
      (INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (GroupedExpr
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
    (SuffixOp))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (GroupedExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (BitwiseOp)
        (SuffixExpr)))
    (SuffixOp)
    (SuffixOp
      (IDENTIFIER)))
  (CompareOp)
  (SuffixExpr
    (INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr
  (IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (BinaryExpr
      (SuffixExpr
        (GroupedExpr
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)))))
    (CompareOp)
    (SuffixExpr))
  (BinaryExpr
    (SuffixExpr
      (GroupedExpr
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)))))
  (CompareOp)
  (SuffixExpr))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr)))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr)
    (SuffixExpr)))(ERROR)(CompareOp)(SuffixExpr
  (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr)
    (SuffixExpr)))(ERROR)(CompareOp)(SuffixExpr
  (INTEGER))))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr)
          (SuffixExpr)))
      (ERROR)
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr)
          (SuffixExpr)))
      (ERROR)
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IfTypeExpr
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER))))))))))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr)
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE)))))
  (BitwiseOp
    (MISSING "|"))
  (SuffixExpr
    (IDENTIFIER)))(CompareOp)(SuffixExpr
  (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr)
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE)))))
  (BitwiseOp
    (MISSING "|"))
  (SuffixExpr
    (IDENTIFIER)))(CompareOp)(SuffixExpr
  (INTEGER))))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (MISSING "|"))
        (SuffixExpr
          (IDENTIFIER)))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))))
        (BitwiseOp
          (MISSING "|"))
        (SuffixExpr
          (IDENTIFIER)))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(AssignExpr(BinaryExpr(BitwiseOp)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (IDENTIFIER))))(SuffixExpr
  (BuildinTypeExpr))(InitList))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments))
  (MISSING "))(SuffixOp))(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))))(ERROR)(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments))
  (MISSING "))(SuffixOp))(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))))(ERROR)))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments))
    (BitwiseOp)
    (SuffixExpr)))(SuffixOp
  (IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(BitwiseOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (BuildinTypeExpr)))(Block(LabeledStatement
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))
        (SuffixOp)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER)))))
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
                  (FnCallArguments
                    (SuffixExpr)
                    (SuffixExpr
                      (IDENTIFIER))))))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
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
                (FnCallArguments
                  (SuffixExpr)
                  (SuffixExpr
                    (IDENTIFIER))))))
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))))(LabeledStatement(Block(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))
    (SuffixOp)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (GroupedExpr
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr)
                (SuffixExpr
                  (IDENTIFIER))))))
        (SuffixOp
          (IDENTIFIER)))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (GroupedExpr
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr)
              (SuffixExpr
                (IDENTIFIER))))))
      (SuffixOp
        (IDENTIFIER)))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))))))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))))(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(AssignExpr(BinaryExpr(BitwiseOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IfTypeExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))(SuffixExpr))))(IfStatement(IfPrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr(IDENTIFIER)))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr(IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(FLOAT)))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(FLOAT)))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp))))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(FLOAT))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(FLOAT))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(line_comment)(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER))(BitShiftOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(FLOAT)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(FLOAT))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)(FnCallArguments)))(CompareOp)(SuffixExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)(FnCallArguments)))(CompareOp)(SuffixExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp)))(SuffixOp))(AssignOp)(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER)))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)))(WhileContinueExpr(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp)))(SuffixOp(SuffixExpr(IDENTIFIER))))(AssignOp)(SuffixExpr(INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(Block))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(VarDecl(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList(ParamDecl(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(INTEGER)))(ContainerField(IDENTIFIER)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(BitShiftOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(BitShiftOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr)))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER)(IDENTIFIER)(IDENTIFIER)(IDENTIFIER)(IDENTIFIER)(IDENTIFIER)(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr)))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr)))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr)))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr)))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(FLOAT))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(BitwiseOp)(SuffixExpr)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(IfExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(BinaryExpr(SuffixExpr(IDENTIFIER))(BitwiseOp)(SuffixExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(IfExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList))(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(FnProto(ParamDeclList)(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr))))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(line_comment)(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(line_comment)(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(line_comment)(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(line_comment)(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(line_comment)(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(ERROR(SuffixExpr(IfTypeExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER)))(FnCallArguments)))(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(ERROR)(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(AssignExpr(SuffixExpr))))(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(AssignExpr(BinaryExpr(AdditionOp)(SuffixExpr(INTEGER))))))(LabeledStatement(Block(AssignExpr(SuffixExpr(INTEGER)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER)))(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER)))(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(SuffixOp))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(SuffixOp))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(LabeledTypeExpr(LoopTypeExpr(ForTypeExpr(ForPrefix(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(PtrIndexPayload(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(CHAR_LITERAL)))(SwitchItem(SuffixExpr(CHAR_LITERAL))))(AssignExpr(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))))))(line_comment)(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(CHAR_LITERAL)))(SwitchItem(SuffixExpr(CHAR_LITERAL))))(AssignExpr(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(CHAR_LITERAL))))))(line_comment)(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr(GroupedExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))))(SuffixOp(SuffixExpr(INTEGER)))))))(line_comment))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(LabeledTypeExpr(LoopTypeExpr(ForTypeExpr(ForPrefix(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(PtrIndexPayload(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))))(AssignOp)(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(CHAR_LITERAL)))(SwitchItem(SuffixExpr(CHAR_LITERAL))))(AssignExpr(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))))))(line_comment)(SwitchProng(SwitchCase(SwitchItem(SuffixExpr(CHAR_LITERAL)))(SwitchItem(SuffixExpr(CHAR_LITERAL))))(AssignExpr(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(CHAR_LITERAL))))))(line_comment)(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr(GroupedExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))))(SuffixOp(SuffixExpr(INTEGER)))))))(line_comment))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IfTypeExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(FnProto(ParamDeclList(ParamDecl(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp))(CompareOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(line_comment)(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(CompareOp)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER)))))))))
