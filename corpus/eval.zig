================================================================================
eval
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;
const builtin = @import("builtin");

test "compile time recursion" {
    expect(some_data.len == 21);
}
var some_data: [@intCast(usize, fibonacci(7))]u8 = undefined;
fn fibonacci(x: i32) i32 {
    if (x <= 1) return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}

fn unwrapAndAddOne(blah: ?i32) i32 {
    return blah.? + 1;
}
const should_be_1235 = unwrapAndAddOne(1234);
test "static add one" {
    expect(should_be_1235 == 1235);
}

test "inlined loop" {
    comptime var i = 0;
    comptime var sum = 0;
    inline while (i <= 5) : (i += 1)
        sum += i;
    expect(sum == 15);
}

fn gimme1or2(comptime a: bool) i32 {
    const x: i32 = 1;
    const y: i32 = 2;
    comptime var z: i32 = if (a) x else y;
    return z;
}
test "inline variable gets result of const if" {
    expect(gimme1or2(true) == 1);
    expect(gimme1or2(false) == 2);
}

test "static function evaluation" {
    expect(statically_added_number == 3);
}
const statically_added_number = staticAdd(1, 2);
fn staticAdd(a: i32, b: i32) i32 {
    return a + b;
}

test "const expr eval on single expr blocks" {
    expect(constExprEvalOnSingleExprBlocksFn(1, true) == 3);
    comptime expect(constExprEvalOnSingleExprBlocksFn(1, true) == 3);
}

fn constExprEvalOnSingleExprBlocksFn(x: i32, b: bool) i32 {
    const literal = 3;

    const result = if (b) b: {
        break :b literal;
    } else b: {
        break :b x;
    };

    return result;
}

test "statically initialized list" {
    expect(static_point_list[0].x == 1);
    expect(static_point_list[0].y == 2);
    expect(static_point_list[1].x == 3);
    expect(static_point_list[1].y == 4);
}
const Point = struct {
    x: i32,
    y: i32,
};
const static_point_list = [_]Point{
    makePoint(1, 2),
    makePoint(3, 4),
};
fn makePoint(x: i32, y: i32) Point {
    return Point{
        .x = x,
        .y = y,
    };
}

test "static eval list init" {
    expect(static_vec3.data[2] == 1.0);
    expect(vec3(0.0, 0.0, 3.0).data[2] == 3.0);
}
const static_vec3 = vec3(0.0, 0.0, 1.0);
pub const Vec3 = struct {
    data: [3]f32,
};
pub fn vec3(x: f32, y: f32, z: f32) Vec3 {
    return Vec3{
        .data = [_]f32{
            x,
            y,
            z,
        },
    };
}

test "constant expressions" {
    var array: [array_size]u8 = undefined;
    expect(@sizeOf(@TypeOf(array)) == 20);
}
const array_size: u8 = 20;

test "constant struct with negation" {
    expect(vertices[0].x == -0.6);
}
const Vertex = struct {
    x: f32,
    y: f32,
    r: f32,
    g: f32,
    b: f32,
};
const vertices = [_]Vertex{
    Vertex{
        .x = -0.6,
        .y = -0.4,
        .r = 1.0,
        .g = 0.0,
        .b = 0.0,
    },
    Vertex{
        .x = 0.6,
        .y = -0.4,
        .r = 0.0,
        .g = 1.0,
        .b = 0.0,
    },
    Vertex{
        .x = 0.0,
        .y = 0.6,
        .r = 0.0,
        .g = 0.0,
        .b = 1.0,
    },
};

test "statically initialized struct" {
    st_init_str_foo.x += 1;
    expect(st_init_str_foo.x == 14);
}
const StInitStrFoo = struct {
    x: i32,
    y: bool,
};
var st_init_str_foo = StInitStrFoo{
    .x = 13,
    .y = true,
};

test "statically initalized array literal" {
    const y: [4]u8 = st_init_arr_lit_x;
    expect(y[3] == 4);
}
const st_init_arr_lit_x = [_]u8{
    1,
    2,
    3,
    4,
};

test "const slice" {
    comptime {
        const a = "1234567890";
        expect(a.len == 10);
        const b = a[1..2];
        expect(b.len == 1);
        expect(b[0] == '2');
    }
}

test "try to trick eval with runtime if" {
    expect(testTryToTrickEvalWithRuntimeIf(true) == 10);
}

fn testTryToTrickEvalWithRuntimeIf(b: bool) usize {
    comptime var i: usize = 0;
    inline while (i < 10) : (i += 1) {
        const result = if (b) false else true;
    }
    comptime {
        return i;
    }
}

test "inlined loop has array literal with elided runtime scope on first iteration but not second iteration" {
    var runtime = [1]i32{3};
    comptime var i: usize = 0;
    inline while (i < 2) : (i += 1) {
        const result = if (i == 0) [1]i32{2} else runtime;
    }
    comptime {
        expect(i == 2);
    }
}

fn max(comptime T: type, a: T, b: T) T {
    if (T == bool) {
        return a or b;
    } else if (a > b) {
        return a;
    } else {
        return b;
    }
}
fn letsTryToCompareBools(a: bool, b: bool) bool {
    return max(bool, a, b);
}
test "inlined block and runtime block phi" {
    expect(letsTryToCompareBools(true, true));
    expect(letsTryToCompareBools(true, false));
    expect(letsTryToCompareBools(false, true));
    expect(!letsTryToCompareBools(false, false));

    comptime {
        expect(letsTryToCompareBools(true, true));
        expect(letsTryToCompareBools(true, false));
        expect(letsTryToCompareBools(false, true));
        expect(!letsTryToCompareBools(false, false));
    }
}

const CmdFn = struct {
    name: []const u8,
    func: fn (i32) i32,
};

const cmd_fns = [_]CmdFn{
    CmdFn{
        .name = "one",
        .func = one,
    },
    CmdFn{
        .name = "two",
        .func = two,
    },
    CmdFn{
        .name = "three",
        .func = three,
    },
};
fn one(value: i32) i32 {
    return value + 1;
}
fn two(value: i32) i32 {
    return value + 2;
}
fn three(value: i32) i32 {
    return value + 3;
}

fn performFn(comptime prefix_char: u8, start_value: i32) i32 {
    var result: i32 = start_value;
    comptime var i = 0;
    inline while (i < cmd_fns.len) : (i += 1) {
        if (cmd_fns[i].name[0] == prefix_char) {
            result = cmd_fns[i].func(result);
        }
    }
    return result;
}

test "comptime iterate over fn ptr list" {
    expect(performFn('t', 1) == 6);
    expect(performFn('o', 0) == 1);
    expect(performFn('w', 99) == 99);
}

test "eval @setRuntimeSafety at compile-time" {
    const result = comptime fnWithSetRuntimeSafety();
    expect(result == 1234);
}

fn fnWithSetRuntimeSafety() i32 {
    @setRuntimeSafety(true);
    return 1234;
}

test "eval @setFloatMode at compile-time" {
    const result = comptime fnWithFloatMode();
    expect(result == 1234.0);
}

fn fnWithFloatMode() f32 {
    @setFloatMode(builtin.FloatMode.Strict);
    return 1234.0;
}

const SimpleStruct = struct {
    field: i32,

    fn method(self: *const SimpleStruct) i32 {
        return self.field + 3;
    }
};

var simple_struct = SimpleStruct{ .field = 1234 };

const bound_fn = simple_struct.method;

test "call method on bound fn referring to var instance" {
    expect(bound_fn() == 1237);
}

test "ptr to local array argument at comptime" {
    comptime {
        var bytes: [10]u8 = undefined;
        modifySomeBytes(bytes[0..]);
        expect(bytes[0] == 'a');
        expect(bytes[9] == 'b');
    }
}

fn modifySomeBytes(bytes: []u8) void {
    bytes[0] = 'a';
    bytes[9] = 'b';
}

test "comparisons 0 <= uint and 0 > uint should be comptime" {
    testCompTimeUIntComparisons(1234);
}
fn testCompTimeUIntComparisons(x: u32) void {
    if (!(0 <= x)) {
        @compileError("this condition should be comptime known");
    }
    if (0 > x) {
        @compileError("this condition should be comptime known");
    }
    if (!(x >= 0)) {
        @compileError("this condition should be comptime known");
    }
    if (x < 0) {
        @compileError("this condition should be comptime known");
    }
}

test "const ptr to variable data changes at runtime" {
    expect(foo_ref.name[0] == 'a');
    foo_ref.name = "b";
    expect(foo_ref.name[0] == 'b');
}

const Foo = struct {
    name: []const u8,
};

var foo_contents = Foo{ .name = "a" };
const foo_ref = &foo_contents;

test "create global array with for loop" {
    expect(global_array[5] == 5 * 5);
    expect(global_array[9] == 9 * 9);
}

const global_array = x: {
    var result: [10]usize = undefined;
    for (result) |*item, index| {
        item.* = index * index;
    }
    break :x result;
};

test "compile-time downcast when the bits fit" {
    comptime {
        const spartan_count: u16 = 255;
        const byte = @intCast(u8, spartan_count);
        expect(byte == 255);
    }
}

const hi1 = "hi";
const hi2 = hi1;
test "const global shares pointer with other same one" {
    assertEqualPtrs(&hi1[0], &hi2[0]);
    comptime expect(&hi1[0] == &hi2[0]);
}
fn assertEqualPtrs(ptr1: *const u8, ptr2: *const u8) void {
    expect(ptr1 == ptr2);
}

test "@setEvalBranchQuota" {
    comptime {
        // 1001 for the loop and then 1 more for the expect fn call
        @setEvalBranchQuota(1002);
        var i = 0;
        var sum = 0;
        while (i < 1001) : (i += 1) {
            sum += i;
        }
        expect(sum == 500500);
    }
}

test "float literal at compile time not lossy" {
    expect(16777216.0 + 1.0 == 16777217.0);
    expect(9007199254740992.0 + 1.0 == 9007199254740993.0);
}

test "f32 at compile time is lossy" {
    expect(@as(f32, 1 << 24) + 1 == 1 << 24);
}

test "f64 at compile time is lossy" {
    expect(@as(f64, 1 << 53) + 1 == 1 << 53);
}

test "f128 at compile time is lossy" {
    expect(@as(f128, 10384593717069655257060992658440192.0) + 1 == 10384593717069655257060992658440192.0);
}

comptime {
    expect(@as(f128, 1 << 113) == 10384593717069655257060992658440192);
}

pub fn TypeWithCompTimeSlice(comptime field_name: []const u8) type {
    return struct {
        pub const Node = struct {};
    };
}

test "string literal used as comptime slice is memoized" {
    const a = "link";
    const b = "link";
    comptime expect(TypeWithCompTimeSlice(a).Node == TypeWithCompTimeSlice(b).Node);
    comptime expect(TypeWithCompTimeSlice("link").Node == TypeWithCompTimeSlice("link").Node);
}

test "comptime slice of undefined pointer of length 0" {
    const slice1 = @as([*]i32, undefined)[0..0];
    expect(slice1.len == 0);
    const slice2 = @as([*]i32, undefined)[100..100];
    expect(slice2.len == 0);
}

fn copyWithPartialInline(s: []u32, b: []u8) void {
    comptime var i: usize = 0;
    inline while (i < 4) : (i += 1) {
        s[i] = 0;
        s[i] |= @as(u32, b[i * 4 + 0]) << 24;
        s[i] |= @as(u32, b[i * 4 + 1]) << 16;
        s[i] |= @as(u32, b[i * 4 + 2]) << 8;
        s[i] |= @as(u32, b[i * 4 + 3]) << 0;
    }
}

test "binary math operator in partially inlined function" {
    var s: [4]u32 = undefined;
    var b: [16]u8 = undefined;

    for (b) |*r, i|
        r.* = @intCast(u8, i + 1);

    copyWithPartialInline(s[0..], b[0..]);
    expect(s[0] == 0x1020304);
    expect(s[1] == 0x5060708);
    expect(s[2] == 0x90a0b0c);
    expect(s[3] == 0xd0e0f10);
}

test "comptime function with the same args is memoized" {
    comptime {
        expect(MakeType(i32) == MakeType(i32));
        expect(MakeType(i32) != MakeType(f64));
    }
}

fn MakeType(comptime T: type) type {
    return struct {
        field: T,
    };
}

test "comptime function with mutable pointer is not memoized" {
    comptime {
        var x: i32 = 1;
        const ptr = &x;
        increment(ptr);
        increment(ptr);
        expect(x == 3);
    }
}

fn increment(value: *i32) void {
    value.* += 1;
}

fn generateTable(comptime T: type) [1010]T {
    var res: [1010]T = undefined;
    var i: usize = 0;
    while (i < 1010) : (i += 1) {
        res[i] = @intCast(T, i);
    }
    return res;
}

fn doesAlotT(comptime T: type, value: usize) T {
    @setEvalBranchQuota(5000);
    const table = comptime blk: {
        break :blk generateTable(T);
    };
    return table[value];
}

test "@setEvalBranchQuota at same scope as generic function call" {
    expect(doesAlotT(u32, 2) == 2);
}

test "comptime slice of slice preserves comptime var" {
    comptime {
        var buff: [10]u8 = undefined;
        buff[0..][0..][0] = 1;
        expect(buff[0..][0..][0] == 1);
    }
}

test "comptime slice of pointer preserves comptime var" {
    comptime {
        var buff: [10]u8 = undefined;
        var a = @ptrCast([*]u8, &buff);
        a[0..1][0] = 1;
        expect(buff[0..][0..][0] == 1);
    }
}

const SingleFieldStruct = struct {
    x: i32,

    fn read_x(self: *const SingleFieldStruct) i32 {
        return self.x;
    }
};
test "const ptr to comptime mutable data is not memoized" {
    comptime {
        var foo = SingleFieldStruct{ .x = 1 };
        expect(foo.read_x() == 1);
        foo.x = 2;
        expect(foo.read_x() == 2);
    }
}

test "array concat of slices gives slice" {
    comptime {
        var a: []const u8 = "aoeu";
        var b: []const u8 = "asdf";
        const c = a ++ b;
        expect(std.mem.eql(u8, c, "aoeuasdf"));
    }
}

test "comptime shlWithOverflow" {
    const ct_shifted: u64 = comptime amt: {
        var amt = @as(u64, 0);
        _ = @shlWithOverflow(u64, ~@as(u64, 0), 16, &amt);
        break :amt amt;
    };

    const rt_shifted: u64 = amt: {
        var amt = @as(u64, 0);
        _ = @shlWithOverflow(u64, ~@as(u64, 0), 16, &amt);
        break :amt amt;
    };

    expect(ct_shifted == rt_shifted);
}

test "runtime 128 bit integer division" {
    var a: u128 = 152313999999999991610955792383;
    var b: u128 = 10000000000000000000;
    var c = a / b;
    expect(c == 15231399999);
}

pub const Info = struct {
    version: u8,
};

pub const diamond_info = Info{ .version = 0 };

test "comptime modification of const struct field" {
    comptime {
        var res = diamond_info;
        res.version = 1;
        expect(diamond_info.version == 0);
        expect(res.version == 1);
    }
}

test "pointer to type" {
    comptime {
        var T: type = i32;
        expect(T == i32);
        var ptr = &T;
        expect(@TypeOf(ptr) == *type);
        ptr.* = f32;
        expect(T == f32);
        expect(*T == *f32);
    }
}

test "slice of type" {
    comptime {
        var types_array = [_]type{ i32, f64, type };
        for (types_array) |T, i| {
            switch (i) {
                0 => expect(T == i32),
                1 => expect(T == f64),
                2 => expect(T == type),
                else => unreachable,
            }
        }
        for (types_array[0..]) |T, i| {
            switch (i) {
                0 => expect(T == i32),
                1 => expect(T == f64),
                2 => expect(T == type),
                else => unreachable,
            }
        }
    }
}

const Wrapper = struct {
    T: type,
};

fn wrap(comptime T: type) Wrapper {
    return Wrapper{ .T = T };
}

test "function which returns struct with type field causes implicit comptime" {
    const ty = wrap(i32).T;
    expect(ty == i32);
}

test "call method with comptime pass-by-non-copying-value self parameter" {
    const S = struct {
        a: u8,

        fn b(comptime s: @This()) u8 {
            return s.a;
        }
    };

    const s = S{ .a = 2 };
    var b = s.b();
    expect(b == 2);
}

test "@tagName of @typeInfo" {
    const str = @tagName(@typeInfo(u8));
    expect(std.mem.eql(u8, str, "Int"));
}

test "setting backward branch quota just before a generic fn call" {
    @setEvalBranchQuota(1001);
    loopNTimes(1001);
}

fn loopNTimes(comptime n: usize) void {
    comptime var i = 0;
    inline while (i < n) : (i += 1) {}
}

test "variable inside inline loop that has different types on different iterations" {
    testVarInsideInlineLoop(.{ true, @as(u32, 42) });
}

fn testVarInsideInlineLoop(args: anytype) void {
    comptime var i = 0;
    inline while (i < args.len) : (i += 1) {
        const x = args[i];
        if (i == 0) expect(x);
        if (i == 1) expect(x == 42);
    }
}

test "inline for with same type but different values" {
    var res: usize = 0;
    inline for ([_]type{ [2]u8, [1]u8, [2]u8 }) |T| {
        var a: T = undefined;
        res += a.len;
    }
    expect(res == 5);
}

test "refer to the type of a generic function" {
    const Func = fn (type) void;
    const f: Func = doNothingWithType;
    f(i32);
}

fn doNothingWithType(comptime T: type) void {}

test "zero extend from u0 to u1" {
    var zero_u0: u0 = 0;
    var zero_u1: u1 = zero_u0;
    expect(zero_u1 == 0);
}

test "bit shift a u1" {
    var x: u1 = 1;
    var y = x << 0;
    expect(y == 1);
}

test "comptime pointer cast array and then slice" {
    const array = [_]u8{ 1, 2, 3, 4, 5, 6, 7, 8 };

    const ptrA: [*]const u8 = @ptrCast([*]const u8, &array);
    const sliceA: []const u8 = ptrA[0..2];

    const ptrB: [*]const u8 = &array;
    const sliceB: []const u8 = ptrB[0..2];

    expect(sliceA[1] == 2);
    expect(sliceB[1] == 2);
}

test "slice bounds in comptime concatenation" {
    const bs = comptime blk: {
        const b = "........1........";
        break :blk b[8..9];
    };
    const str = "" ++ bs;
    expect(str.len == 1);
    expect(std.mem.eql(u8, str, "1"));

    const str2 = bs ++ "";
    expect(str2.len == 1);
    expect(std.mem.eql(u8, str2, "1"));
}

test "comptime bitwise operators" {
    comptime {
        expect(3 & 1 == 1);
        expect(3 & -1 == 3);
        expect(-3 & -1 == -3);
        expect(3 | -1 == -1);
        expect(-3 | -1 == -1);
        expect(3 ^ -1 == -4);
        expect(-3 ^ -1 == 2);
        expect(~@as(i8, -1) == 0);
        expect(~@as(i128, -1) == 0);
        expect(18446744073709551615 & 18446744073709551611 == 18446744073709551611);
        expect(-18446744073709551615 & -18446744073709551611 == -18446744073709551615);
        expect(~@as(u128, 0) == 0xffffffffffffffffffffffffffffffff);
    }
}

test "*align(1) u16 is the same as *align(1:0:2) u16" {
    comptime {
        expect(*align(1:0:2) u16 == *align(1) u16);
        expect(*align(2:0:2) u16 == *u16);
    }
}

test "array concatenation forces comptime" {
    var a = oneItem(3) ++ oneItem(4);
    expect(std.mem.eql(i32, &a, &[_]i32{ 3, 4 }));
}

test "array multiplication forces comptime" {
    var a = oneItem(3) ** scalar(2);
    expect(std.mem.eql(i32, &a, &[_]i32{ 3, 3 }));
}

fn oneItem(x: i32) [1]i32 {
    return [_]i32{x};
}

fn scalar(x: u32) u32 {
    return x;
}

test "no undeclared identifier error in unanalyzed branches" {
    if (false) {
        lol_this_doesnt_exist = nonsense;
    }
}

test "comptime assign int to optional int" {
    comptime {
        var x: ?i32 = null;
        x = 2;
        x.? *= 10;
        expectEqual(20, x.?);
    }
}

test "return 0 from function that has u0 return type" {
    const S = struct {
        fn foo_zero() u0 {
            return 0;
        }
    };
    comptime {
        if (S.foo_zero() != 0) {
            @compileError("test failed");
        }
    }
}

test "two comptime calls with array default initialized to undefined" {
    const S = struct {
        const CrossTarget = struct {
            dynamic_linker: DynamicLinker = DynamicLinker{},

            pub fn parse() void {
                var result: CrossTarget = .{};
                result.getCpuArch();
            }

            pub fn getCpuArch(self: CrossTarget) void {}
        };

        const DynamicLinker = struct {
            buffer: [255]u8 = undefined,
        };
    };

    comptime {
        S.CrossTarget.parse();
        S.CrossTarget.parse();
    }
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
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (INTEGER))))))))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
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
      (IfExpr
        (IfPrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (INTEGER))))
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))
        (AdditionOp)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (AdditionOp)
              (SuffixExpr
                (INTEGER))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (PrefixTypeOp)
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp))
        (AdditionOp)
        (SuffixExpr
          (INTEGER)))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (INTEGER)))))
  (TestDecl
    (STRINGLITERALSINGLE)
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (INTEGER)))
      (AssignExpr
        (SuffixExpr
          (LabeledTypeExpr
            (LoopTypeExpr
              (WhileTypeExpr
                (WhilePrefix
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))
                  (WhileContinueExpr
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (AssignOp)
                      (SuffixExpr
                        (INTEGER)))))
                (SuffixExpr
                  (IDENTIFIER))))))
        (AssignOp)
        (SuffixExpr
          (IDENTIFIER)))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
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
                  (SuffixExpr)))
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
                  (SuffixExpr)))
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
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (INTEGER))
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
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr)))
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
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr)))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (INTEGER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER)))))))))
    (AssignExpr
      (SuffixExpr
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
                (SuffixOp
                  (SuffixExpr
                    (INTEGER)))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER)))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER)))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER)))
                (SuffixOp
                  (IDENTIFIER)))
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
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (IDENTIFIER))))
    (SuffixExpr
      (IDENTIFIER))
    (InitList
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))))
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
      (IDENTIFIER)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)))
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
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
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))))
              (CompareOp)
              (SuffixExpr
                (FLOAT))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (FLOAT))
                    (SuffixExpr
                      (FLOAT))
                    (SuffixExpr
                      (FLOAT))))
                (BitwiseOp
                  (MISSING "|"))
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER)))))
              (CompareOp)
              (SuffixExpr
                (FLOAT))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (FLOAT))
        (SuffixExpr
          (FLOAT))
        (SuffixExpr
          (FLOAT)))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))))))
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
            (BuildinTypeExpr)))))
    (SuffixExpr
      (IDENTIFIER)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (IDENTIFIER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (InitList
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER)))))))
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
          (BuildinTypeExpr))
        (SuffixExpr))
      (AssignExpr
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
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
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
                    (INTEGER)))
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (FLOAT)))))))))(VarDecl
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
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr)))
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr)))
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))))))(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixExpr
    (IDENTIFIER))
  (InitList
    (SuffixExpr
      (IDENTIFIER))
    (InitList
      (FieldInit
        (IDENTIFIER)
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (FLOAT))))
    (FieldInit
      (IDENTIFIER)
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (FLOAT))))
  (FieldInit
    (IDENTIFIER)
    (SuffixExpr
      (FLOAT)))
  (FieldInit
    (IDENTIFIER)
    (SuffixExpr
      (FLOAT)))
  (FieldInit
    (IDENTIFIER)
    (SuffixExpr
      (FLOAT))))(SuffixExpr
  (IDENTIFIER))(InitList
  (FieldInit
    (IDENTIFIER)
    (SuffixExpr
      (FLOAT)))
  (FieldInit
    (IDENTIFIER)
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (FLOAT))))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT)))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT)))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT)))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT)))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT)))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT)))(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (FLOAT))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))(AssignOp)(SuffixExpr
  (INTEGER)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr)))(ContainerField
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr
  (INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (IDENTIFIER)))(AssignExpr(SuffixExpr
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
        (INTEGER))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))))
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
              (INTEGER))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))
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
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))))
            (CompareOp)
            (SuffixExpr
              (CHAR_LITERAL)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr)))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement
  (WhilePrefix
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))
    (WhileContinueExpr
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (INTEGER)))))
  (BlockExpr
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (SuffixExpr
                (IDENTIFIER)))
            (SuffixExpr)
            (SuffixExpr)))))))))(BlockExprStatement(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(InitList
  (SuffixExpr
    (INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))(LabeledStatement(LoopStatement
  (WhileStatement
    (WhilePrefix
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER)))
      (WhileContinueExpr
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER))
          (AssignOp)
          (SuffixExpr
            (INTEGER)))))
    (BlockExpr
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (IfTypeExpr
              (IfPrefix
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (CompareOp)
                  (SuffixExpr
                    (INTEGER))))
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (BuildinTypeExpr))))
          (InitList
            (SuffixExpr
              (INTEGER)))
          (ERROR)))))))(BlockExprStatement(BlockExpr
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
              (INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (IDENTIFIER)))))(SuffixExpr(IDENTIFIER)))(Block(IfStatement(IfPrefix(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (BuildinTypeExpr))))(BlockExpr(Block
  (AssignExpr
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER))))))(IfStatement(IfPrefix
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER))
    (CompareOp)
    (SuffixExpr
      (IDENTIFIER))))(BlockExpr
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)))))(LabeledStatement
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr)
        (SuffixExpr))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr)
        (SuffixExpr))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr)
        (SuffixExpr))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr)
        (SuffixExpr)))))))(BlockExprStatement(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(FnProto
  (ParamDeclList
    (ParamDecl
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))))(WhileContinueExpr
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER)))))(BlockExpr(Block
  (IfStatement
    (IfPrefix
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (SuffixExpr
              (INTEGER))))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER))))
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER))
          (AssignOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (IDENTIFIER)))
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL))
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL))
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL))
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr))))(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (FLOAT))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(SuffixOp
  (IDENTIFIER))))))(AssignExpr(SuffixExpr(FLOAT))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl
  (IDENTIFIER)
  (ParamType
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (AdditionOp)
  (SuffixExpr
    (INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER)))))))(AssignExpr
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
          (CHAR_LITERAL))))))(AssignExpr
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
          (CHAR_LITERAL)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(CHAR_LITERAL)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(CHAR_LITERAL))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(GroupedExpr(BinaryExpr
  (SuffixExpr
    (INTEGER))
  (CompareOp)
  (SuffixExpr
    (IDENTIFIER)))))))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))))))))(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(INTEGER))(CompareOp)(SuffixExpr(IDENTIFIER))))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))))))))(IfStatement(IfPrefix(UnaryExpr (PrefixOp)(SuffixExpr(GroupedExpr(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER)))))))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))))))))(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(SuffixOp
  (SuffixExpr
    (INTEGER))))(CompareOp)(SuffixExpr(CHAR_LITERAL))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(SuffixOp
  (SuffixExpr
    (INTEGER))))(CompareOp)(SuffixExpr(CHAR_LITERAL))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (INTEGER))))(CompareOp)(BinaryExpr(SuffixExpr(INTEGER))(MultiplyOp (SuffixExpr
  (INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER))))(CompareOp)(BinaryExpr(SuffixExpr
  (INTEGER))(MultiplyOp 
  (SuffixExpr
    (INTEGER)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(LabeledStatement(LoopStatement(ForStatement
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
          (SuffixOp))
        (AssignOp)
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (MultiplyOp 
            (SuffixExpr
              (IDENTIFIER)))))))))(AssignExpr(BreakLabel
  (IDENTIFIER))(SuffixExpr
  (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
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
          (INTEGER)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER)))))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER))))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER)))))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(line_comment)(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (INTEGER)))(WhileContinueExpr
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER)))))(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(FLOAT))(AdditionOp)(SuffixExpr(FLOAT)))(CompareOp)(SuffixExpr(FLOAT))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(FLOAT))(AdditionOp)(SuffixExpr(FLOAT)))(CompareOp)(SuffixExpr(FLOAT))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(BinaryExpr
  (SuffixExpr
    (INTEGER))
  (BitShiftOp)
  (SuffixExpr
    (INTEGER)))))(AdditionOp)(SuffixExpr(INTEGER)))(CompareOp)(BinaryExpr(SuffixExpr(INTEGER))(BitShiftOp)(SuffixExpr(INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(BinaryExpr
  (SuffixExpr
    (INTEGER))
  (BitShiftOp)
  (SuffixExpr
    (INTEGER)))))(AdditionOp)(SuffixExpr(INTEGER)))(CompareOp)(BinaryExpr(SuffixExpr(INTEGER))(BitShiftOp)(SuffixExpr(INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (FLOAT))))(AdditionOp)(SuffixExpr(INTEGER)))(CompareOp)(SuffixExpr(FLOAT))))))))(TopLevelComptime(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(BinaryExpr
  (SuffixExpr
    (INTEGER))
  (BitShiftOp)
  (SuffixExpr
    (INTEGER)))))(CompareOp)(SuffixExpr(INTEGER)))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)))(CompareOp)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)))(CompareOp)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))))(BitwiseOp(MISSING "|"))(SuffixExpr(IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))(WhileContinueExpr(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER))))(AssignOp)(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (BinaryExpr
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (MultiplyOp 
            (SuffixExpr
              (INTEGER)))
          (AdditionOp)
          (SuffixExpr
            (INTEGER)))))))(BitShiftOp)(SuffixExpr
  (INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (IDENTIFIER))))(AssignOp)(BinaryExpr(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (BinaryExpr
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (MultiplyOp 
              (SuffixExpr
                (INTEGER)))
            (AdditionOp)
            (SuffixExpr
              (INTEGER)))))))
  (BitShiftOp)
  (SuffixExpr
    (INTEGER))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (IDENTIFIER))))(AssignOp)(BinaryExpr
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (BinaryExpr
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (MultiplyOp 
                (SuffixExpr
                  (INTEGER)))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))))
    (BitShiftOp)
    (SuffixExpr
      (INTEGER))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (IDENTIFIER))))
  (AssignOp)
  (BinaryExpr
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (BinaryExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (MultiplyOp 
                  (SuffixExpr
                    (INTEGER)))
                (AdditionOp)
                (SuffixExpr
                  (INTEGER)))))))
      (BitShiftOp)
      (SuffixExpr
        (INTEGER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(LabeledTypeExpr(LoopTypeExpr
  (ForTypeExpr
    (ForPrefix
      (SuffixExpr
        (IDENTIFIER))
      (PtrIndexPayload
        (IDENTIFIER)
        (IDENTIFIER)))
    (SuffixExpr
      (IDENTIFIER)))))(SuffixOp))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (AdditionOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(AssignExpr
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
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))))))))(AssignExpr
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
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr)))))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(VarDecl
  (IDENTIFIER)
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER)))(WhileContinueExpr(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (INTEGER)))))(BlockExpr(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (IDENTIFIER))))
  (AssignOp)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(AssignExpr
  (BreakLabel
    (IDENTIFIER))
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER))))(CompareOp)(SuffixExpr
  (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER)))
  (SuffixOp
    (SuffixExpr
      (INTEGER)))
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(AssignOp)(SuffixExpr
  (INTEGER)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER)))
        (SuffixOp
          (SuffixExpr
            (INTEGER)))
        (SuffixOp
          (SuffixExpr
            (INTEGER))))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER)))(SuffixOp
  (SuffixExpr
    (INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (SuffixExpr
          (INTEGER)))
      (SuffixOp
        (SuffixExpr
          (INTEGER)))
      (SuffixOp
        (SuffixExpr
          (INTEGER))))
    (CompareOp)
    (SuffixExpr
      (INTEGER)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments))
    (CompareOp)
    (SuffixExpr
      (INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr
  (IDENTIFIER))(AdditionOp)(SuffixExpr
  (IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE)))))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))))
    (SuffixExpr
      (INTEGER))
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))))(AssignExpr(BreakLabel(IDENTIFIER))(SuffixExpr(IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))))(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(BreakLabel(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER))(MultiplyOp (SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(BuildinTypeExpr)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr))))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(IDENTIFIER))(PtrIndexPayload(IDENTIFIER)(IDENTIFIER)))(BlockExpr(Block(SwitchExpr(SuffixExpr
  (IDENTIFIER))(SwitchProngList
  (SwitchProng
    (SwitchCase
      (SwitchItem
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
              (BuildinTypeExpr)))))))
  (SwitchProng
    (SwitchCase
      (SwitchItem
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
              (BuildinTypeExpr)))))))
  (SwitchProng
    (SwitchCase
      (SwitchItem
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
              (BuildinTypeExpr)))))))
  (SwitchProng
    (SwitchCase)
    (AssignExpr
      (SuffixExpr))))))))))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (INTEGER))))(PtrIndexPayload(IDENTIFIER)(IDENTIFIER)))(BlockExpr(Block(SwitchExpr(SuffixExpr
  (IDENTIFIER))(SwitchProngList
  (SwitchProng
    (SwitchCase
      (SwitchItem
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
              (BuildinTypeExpr)))))))
  (SwitchProng
    (SwitchCase
      (SwitchItem
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
              (BuildinTypeExpr)))))))
  (SwitchProng
    (SwitchCase
      (SwitchItem
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
              (BuildinTypeExpr)))))))
  (SwitchProng
    (SwitchCase)
    (AssignExpr
      (SuffixExpr)))))))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(ERROR(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)))(WhileContinueExpr(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))(BlockExpr(Block))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(InitList(SuffixExpr)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(WhileContinueExpr(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))))(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IfTypeExpr(IfPrefix(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER))))(SuffixExpr(IDENTIFIER)))(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IfTypeExpr(IfPrefix(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER))))(SuffixExpr(IDENTIFIER)))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList(ParamDecl(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER))(BitShiftOp)(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(AssignExpr(BreakLabel(IDENTIFIER))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))))))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(AdditionOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(INTEGER))(BitwiseOp)(SuffixExpr(INTEGER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(INTEGER))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(INTEGER))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(INTEGER))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(SuffixExpr(INTEGER))(BitwiseOp)(SuffixExpr(INTEGER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))(BitwiseOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(CompareOp)(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER))(INTEGER)(INTEGER))(SuffixExpr(BuildinTypeExpr))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER))(INTEGER)(INTEGER))(SuffixExpr(BuildinTypeExpr))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(AdditionOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))(MultiplyOp (SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))))(TestDecl(STRINGLITERALSINGLE)(Block(IfStatement(IfPrefix(SuffixExpr))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER)(SuffixOp))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))))(BlockExprStatement(BlockExpr(Block(IfStatement(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))(CompareOp)(SuffixExpr(INTEGER))))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(InitList))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))))))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))))))
