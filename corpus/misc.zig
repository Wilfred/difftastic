================================================================================
misc
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqualSlices = std.testing.expectEqualSlices;
const mem = std.mem;
const builtin = @import("builtin");

// normal comment

/// this is a documentation comment
/// doc comment line 2
fn emptyFunctionWithComments() void {}

test "empty function with comments" {
    emptyFunctionWithComments();
}

comptime {
    @export(disabledExternFn, .{ .name = "disabledExternFn", .linkage = .Internal });
}

fn disabledExternFn() callconv(.C) void {}

test "call disabled extern fn" {
    disabledExternFn();
}

test "short circuit" {
    testShortCircuit(false, true);
    comptime testShortCircuit(false, true);
}

fn testShortCircuit(f: bool, t: bool) void {
    var hit_1 = f;
    var hit_2 = f;
    var hit_3 = f;
    var hit_4 = f;

    if (t or x: {
        expect(f);
        break :x f;
    }) {
        hit_1 = t;
    }
    if (f or x: {
        hit_2 = t;
        break :x f;
    }) {
        expect(f);
    }

    if (t and x: {
        hit_3 = t;
        break :x f;
    }) {
        expect(f);
    }
    if (f and x: {
        expect(f);
        break :x f;
    }) {
        expect(f);
    } else {
        hit_4 = t;
    }
    expect(hit_1);
    expect(hit_2);
    expect(hit_3);
    expect(hit_4);
}

test "truncate" {
    expect(testTruncate(0x10fd) == 0xfd);
}
fn testTruncate(x: u32) u8 {
    return @truncate(u8, x);
}

fn first4KeysOfHomeRow() []const u8 {
    return "aoeu";
}

test "return string from function" {
    expect(mem.eql(u8, first4KeysOfHomeRow(), "aoeu"));
}

const g1: i32 = 1233 + 1;
var g2: i32 = 0;

test "global variables" {
    expect(g2 == 0);
    g2 = g1;
    expect(g2 == 1234);
}

test "memcpy and memset intrinsics" {
    var foo: [20]u8 = undefined;
    var bar: [20]u8 = undefined;

    @memset(&foo, 'A', foo.len);
    @memcpy(&bar, &foo, bar.len);

    if (bar[11] != 'A') unreachable;
}

test "builtin static eval" {
    const x: i32 = comptime x: {
        break :x 1 + 2 + 3;
    };
    expect(x == comptime 6);
}

test "slicing" {
    var array: [20]i32 = undefined;

    array[5] = 1234;

    var slice = array[5..10];

    if (slice.len != 5) unreachable;

    const ptr = &slice[0];
    if (ptr.* != 1234) unreachable;

    var slice_rest = array[10..];
    if (slice_rest.len != 10) unreachable;
}

test "constant equal function pointers" {
    const alias = emptyFn;
    expect(comptime x: {
        break :x emptyFn == alias;
    });
}

fn emptyFn() void {}

test "hex escape" {
    expect(mem.eql(u8, "\x68\x65\x6c\x6c\x6f", "hello"));
}

test "string concatenation" {
    expect(mem.eql(u8, "OK" ++ " IT " ++ "WORKED", "OK IT WORKED"));
}

test "array mult operator" {
    expect(mem.eql(u8, "ab" ** 5, "ababababab"));
}

test "string escapes" {
    expect(mem.eql(u8, "\"", "\x22"));
    expect(mem.eql(u8, "\'", "\x27"));
    expect(mem.eql(u8, "\n", "\x0a"));
    expect(mem.eql(u8, "\r", "\x0d"));
    expect(mem.eql(u8, "\t", "\x09"));
    expect(mem.eql(u8, "\\", "\x5c"));
    expect(mem.eql(u8, "\u{1234}\u{069}\u{1}", "\xe1\x88\xb4\x69\x01"));
}

test "multiline string" {
    const s1 =
        \\one
        \\two)
        \\three
    ;
    const s2 = "one\ntwo)\nthree";
    expect(mem.eql(u8, s1, s2));
}

test "multiline string comments at start" {
    const s1 =
        //\\one
        \\two)
        \\three
    ;
    const s2 = "two)\nthree";
    expect(mem.eql(u8, s1, s2));
}

test "multiline string comments at end" {
    const s1 =
        \\one
        \\two)
        //\\three
    ;
    const s2 = "one\ntwo)";
    expect(mem.eql(u8, s1, s2));
}

test "multiline string comments in middle" {
    const s1 =
        \\one
        //\\two)
        \\three
    ;
    const s2 = "one\nthree";
    expect(mem.eql(u8, s1, s2));
}

test "multiline string comments at multiple places" {
    const s1 =
        \\one
        //\\two
        \\three
        //\\four
        \\five
    ;
    const s2 = "one\nthree\nfive";
    expect(mem.eql(u8, s1, s2));
}

test "multiline C string" {
    const s1 =
        \\one
        \\two)
        \\three
    ;
    const s2 = "one\ntwo)\nthree";
    expect(std.cstr.cmp(s1, s2) == 0);
}

test "type equality" {
    expect(*const u8 != *u8);
}

const global_a: i32 = 1234;
const global_b: *const i32 = &global_a;
const global_c: *const f32 = @ptrCast(*const f32, global_b);
test "compile time global reinterpret" {
    const d = @ptrCast(*const i32, global_c);
    expect(d.* == 1234);
}

test "explicit cast maybe pointers" {
    const a: ?*i32 = undefined;
    const b: ?*f32 = @ptrCast(?*f32, a);
}

test "generic malloc free" {
    const a = memAlloc(u8, 10) catch unreachable;
    memFree(u8, a);
}
var some_mem: [100]u8 = undefined;
fn memAlloc(comptime T: type, n: usize) anyerror![]T {
    return @ptrCast([*]T, &some_mem[0])[0..n];
}
fn memFree(comptime T: type, memory: []T) void {}

test "cast undefined" {
    const array: [100]u8 = undefined;
    const slice = @as([]const u8, &array);
    testCastUndefined(slice);
}
fn testCastUndefined(x: []const u8) void {}

test "cast small unsigned to larger signed" {
    expect(castSmallUnsignedToLargerSigned1(200) == @as(i16, 200));
    expect(castSmallUnsignedToLargerSigned2(9999) == @as(i64, 9999));
}
fn castSmallUnsignedToLargerSigned1(x: u8) i16 {
    return x;
}
fn castSmallUnsignedToLargerSigned2(x: u16) i64 {
    return x;
}

test "implicit cast after unreachable" {
    expect(outer() == 1234);
}
fn inner() i32 {
    return 1234;
}
fn outer() i64 {
    return inner();
}

test "pointer dereferencing" {
    var x = @as(i32, 3);
    const y = &x;

    y.* += 1;

    expect(x == 4);
    expect(y.* == 4);
}

test "call result of if else expression" {
    expect(mem.eql(u8, f2(true), "a"));
    expect(mem.eql(u8, f2(false), "b"));
}
fn f2(x: bool) []const u8 {
    return (if (x) fA else fB)();
}
fn fA() []const u8 {
    return "a";
}
fn fB() []const u8 {
    return "b";
}

test "const expression eval handling of variables" {
    var x = true;
    while (x) {
        x = false;
    }
}

test "constant enum initialization with differing sizes" {
    test3_1(test3_foo);
    test3_2(test3_bar);
}
const Test3Foo = union(enum) {
    One: void,
    Two: f32,
    Three: Test3Point,
};
const Test3Point = struct {
    x: i32,
    y: i32,
};
const test3_foo = Test3Foo{
    .Three = Test3Point{
        .x = 3,
        .y = 4,
    },
};
const test3_bar = Test3Foo{ .Two = 13 };
fn test3_1(f: Test3Foo) void {
    switch (f) {
        Test3Foo.Three => |pt| {
            expect(pt.x == 3);
            expect(pt.y == 4);
        },
        else => unreachable,
    }
}
fn test3_2(f: Test3Foo) void {
    switch (f) {
        Test3Foo.Two => |x| {
            expect(x == 13);
        },
        else => unreachable,
    }
}

test "character literals" {
    expect('\'' == single_quote);
}
const single_quote = '\'';

test "take address of parameter" {
    testTakeAddressOfParameter(12.34);
}
fn testTakeAddressOfParameter(f: f32) void {
    const f_ptr = &f;
    expect(f_ptr.* == 12.34);
}

test "pointer comparison" {
    const a = @as([]const u8, "a");
    const b = &a;
    expect(ptrEql(b, b));
}
fn ptrEql(a: *const []const u8, b: *const []const u8) bool {
    return a == b;
}

test "string concatenation" {
    const a = "OK" ++ " IT " ++ "WORKED";
    const b = "OK IT WORKED";

    comptime expect(@TypeOf(a) == *const [12:0]u8);
    comptime expect(@TypeOf(b) == *const [12:0]u8);

    const len = mem.len(b);
    const len_with_null = len + 1;
    {
        var i: u32 = 0;
        while (i < len_with_null) : (i += 1) {
            expect(a[i] == b[i]);
        }
    }
    expect(a[len] == 0);
    expect(b[len] == 0);
}

test "pointer to void return type" {
    testPointerToVoidReturnType() catch unreachable;
}
fn testPointerToVoidReturnType() anyerror!void {
    const a = testPointerToVoidReturnType2();
    return a.*;
}
const test_pointer_to_void_return_type_x = void{};
fn testPointerToVoidReturnType2() *const void {
    return &test_pointer_to_void_return_type_x;
}

test "non const ptr to aliased type" {
    const int = i32;
    expect(?*int == ?*i32);
}

test "array 2D const double ptr" {
    const rect_2d_vertexes = [_][1]f32{
        [_]f32{1.0},
        [_]f32{2.0},
    };
    testArray2DConstDoublePtr(&rect_2d_vertexes[0][0]);
}

fn testArray2DConstDoublePtr(ptr: *const f32) void {
    const ptr2 = @ptrCast([*]const f32, ptr);
    expect(ptr2[0] == 1.0);
    expect(ptr2[1] == 2.0);
}

const AStruct = struct {
    x: i32,
};
const AnEnum = enum {
    One,
    Two,
};
const AUnionEnum = union(enum) {
    One: i32,
    Two: void,
};
const AUnion = union {
    One: void,
    Two: void,
};

test "@typeName" {
    const Struct = struct {};
    const Union = union {
        unused: u8,
    };
    const Enum = enum {
        Unused,
    };
    comptime {
        expect(mem.eql(u8, @typeName(i64), "i64"));
        expect(mem.eql(u8, @typeName(*usize), "*usize"));
        // https://github.com/ziglang/zig/issues/675
        expect(mem.eql(u8, "behavior.misc.TypeFromFn(u8)", @typeName(TypeFromFn(u8))));
        expect(mem.eql(u8, @typeName(Struct), "Struct"));
        expect(mem.eql(u8, @typeName(Union), "Union"));
        expect(mem.eql(u8, @typeName(Enum), "Enum"));
    }
}

fn TypeFromFn(comptime T: type) type {
    return struct {};
}

test "double implicit cast in same expression" {
    var x = @as(i32, @as(u16, nine()));
    expect(x == 9);
}
fn nine() u8 {
    return 9;
}

test "global variable initialized to global variable array element" {
    expect(global_ptr == &gdt[0]);
}
const GDTEntry = struct {
    field: i32,
};
var gdt = [_]GDTEntry{
    GDTEntry{ .field = 1 },
    GDTEntry{ .field = 2 },
};
var global_ptr = &gdt[0];

// can't really run this test but we can make sure it has no compile error
// and generates code
const vram = @intToPtr([*]volatile u8, 0x20000000)[0..0x8000];
export fn writeToVRam() void {
    vram[0] = 'X';
}

const OpaqueA = opaque {};
const OpaqueB = opaque {};
test "opaque types" {
    expect(*OpaqueA != *OpaqueB);
    expect(mem.eql(u8, @typeName(OpaqueA), "OpaqueA"));
    expect(mem.eql(u8, @typeName(OpaqueB), "OpaqueB"));
}

test "variable is allowed to be a pointer to an opaque type" {
    var x: i32 = 1234;
    _ = hereIsAnOpaqueType(@ptrCast(*OpaqueA, &x));
}
fn hereIsAnOpaqueType(ptr: *OpaqueA) *OpaqueA {
    var a = ptr;
    return a;
}

test "comptime if inside runtime while which unconditionally breaks" {
    testComptimeIfInsideRuntimeWhileWhichUnconditionallyBreaks(true);
    comptime testComptimeIfInsideRuntimeWhileWhichUnconditionallyBreaks(true);
}
fn testComptimeIfInsideRuntimeWhileWhichUnconditionallyBreaks(cond: bool) void {
    while (cond) {
        if (false) {}
        break;
    }
}

test "implicit comptime while" {
    while (false) {
        @compileError("bad");
    }
}

fn fnThatClosesOverLocalConst() type {
    const c = 1;
    return struct {
        fn g() i32 {
            return c;
        }
    };
}

test "function closes over local const" {
    const x = fnThatClosesOverLocalConst().g();
    expect(x == 1);
}

test "cold function" {
    thisIsAColdFn();
    comptime thisIsAColdFn();
}

fn thisIsAColdFn() void {
    @setCold(true);
}

const PackedStruct = packed struct {
    a: u8,
    b: u8,
};
const PackedUnion = packed union {
    a: u8,
    b: u32,
};
const PackedEnum = packed enum {
    A,
    B,
};

test "packed struct, enum, union parameters in extern function" {
    testPackedStuff(&(PackedStruct{
        .a = 1,
        .b = 2,
    }), &(PackedUnion{ .a = 1 }), PackedEnum.A);
}

export fn testPackedStuff(a: *const PackedStruct, b: *const PackedUnion, c: PackedEnum) void {}

test "slicing zero length array" {
    const s1 = ""[0..];
    const s2 = ([_]u32{})[0..];
    expect(s1.len == 0);
    expect(s2.len == 0);
    expect(mem.eql(u8, s1, ""));
    expect(mem.eql(u32, s2, &[_]u32{}));
}

const addr1 = @ptrCast(*const u8, emptyFn);
test "comptime cast fn to ptr" {
    const addr2 = @ptrCast(*const u8, emptyFn);
    comptime expect(addr1 == addr2);
}

test "equality compare fn ptrs" {
    var a = emptyFn;
    expect(a == a);
}

test "self reference through fn ptr field" {
    const S = struct {
        const A = struct {
            f: fn (A) u8,
        };

        fn foo(a: A) u8 {
            return 12;
        }
    };
    var a: S.A = undefined;
    a.f = S.foo;
    expect(a.f(a) == 12);
}

test "volatile load and store" {
    var number: i32 = 1234;
    const ptr = @as(*volatile i32, &number);
    ptr.* += 1;
    expect(ptr.* == 1235);
}

test "slice string literal has correct type" {
    comptime {
        expect(@TypeOf("aoeu"[0..]) == *const [4:0]u8);
        const array = [_]i32{ 1, 2, 3, 4 };
        expect(@TypeOf(array[0..]) == *const [4]i32);
    }
    var runtime_zero: usize = 0;
    comptime expect(@TypeOf("aoeu"[runtime_zero..]) == [:0]const u8);
    const array = [_]i32{ 1, 2, 3, 4 };
    comptime expect(@TypeOf(array[runtime_zero..]) == []const i32);
}

test "struct inside function" {
    testStructInFn();
    comptime testStructInFn();
}

fn testStructInFn() void {
    const BlockKind = u32;

    const Block = struct {
        kind: BlockKind,
    };

    var block = Block{ .kind = 1234 };

    block.kind += 1;

    expect(block.kind == 1235);
}

test "fn call returning scalar optional in equality expression" {
    expect(getNull() == null);
}

fn getNull() ?*i32 {
    return null;
}

test "thread local variable" {
    const S = struct {
        threadlocal var t: i32 = 1234;
    };
    S.t += 1;
    expect(S.t == 1235);
}

test "unicode escape in character literal" {
    var a: u24 = '\u{01f4a9}';
    expect(a == 128169);
}

test "unicode character in character literal" {
    expect('ðŸ’©' == 128169);
}

test "result location zero sized array inside struct field implicit cast to slice" {
    const E = struct {
        entries: []u32,
    };
    var foo = E{ .entries = &[_]u32{} };
    expect(foo.entries.len == 0);
}

var global_foo: *i32 = undefined;

test "global variable assignment with optional unwrapping with var initialized to undefined" {
    const S = struct {
        var data: i32 = 1234;
        fn foo() ?*i32 {
            return &data;
        }
    };
    global_foo = S.foo() orelse {
        @panic("bad");
    };
    expect(global_foo.* == 1234);
}

test "peer result location with typed parent, runtime condition, comptime prongs" {
    const S = struct {
        fn doTheTest(arg: i32) i32 {
            const st = Structy{
                .bleh = if (arg == 1) 1 else 1,
            };

            if (st.bleh == 1)
                return 1234;
            return 0;
        }

        const Structy = struct {
            bleh: i32,
        };
    };
    expect(S.doTheTest(0) == 1234);
    expect(S.doTheTest(1) == 1234);
}

test "nested optional field in struct" {
    const S2 = struct {
        y: u8,
    };
    const S1 = struct {
        x: ?S2,
    };
    var s = S1{
        .x = S2{ .y = 127 },
    };
    expect(s.x.?.y == 127);
}

fn maybe(x: bool) anyerror!?u32 {
    return switch (x) {
        true => @as(u32, 42),
        else => null,
    };
}

test "result location is optional inside error union" {
    const x = maybe(true) catch unreachable;
    expect(x.? == 42);
}

threadlocal var buffer: [11]u8 = undefined;

test "pointer to thread local array" {
    const s = "Hello world";
    std.mem.copy(u8, buffer[0..], s);
    std.testing.expectEqualSlices(u8, buffer[0..], s);
}

test "auto created variables have correct alignment" {
    const S = struct {
        fn foo(str: [*]const u8) u32 {
            for (@ptrCast([*]align(1) const u32, str)[0..1]) |v| {
                return v;
            }
            return 0;
        }
    };
    expect(S.foo("\x7a\x7a\x7a\x7a") == 0x7a7a7a7a);
    comptime expect(S.foo("\x7a\x7a\x7a\x7a") == 0x7a7a7a7a);
}

extern var opaque_extern_var: opaque {};
var var_to_export: u32 = 42;
test "extern variable with non-pointer opaque type" {
    @export(var_to_export, .{ .name = "opaque_extern_var" });
    expect(@ptrCast(*align(1) u32, &opaque_extern_var).* == 42);
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
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (line_comment)
  (doc_comment)
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
          (FnCallArguments)))))
  (TopLevelComptime
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER))
              (SuffixExpr
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (STRINGLITERAL
                        (STRINGLITERALSINGLE))))
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (CallConv
      (SuffixExpr
        (IDENTIFIER)))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block)
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))))
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
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)))
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER)))))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER))
            (AssignOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (IDENTIFIER)))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))))))
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (IDENTIFIER)))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))))))
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER)))))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER)))))))
      (LabeledStatement
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER))
            (AssignOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
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
                (FnCallArguments
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
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (PrefixTypeOp
      (SliceTypeStart))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE)))))
  (TestDecl
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
                  (IDENTIFIER)
                  (FnCallArguments))
                (SuffixExpr
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (BinaryExpr
      (SuffixExpr
        (INTEGER))
      (AdditionOp)
      (SuffixExpr
        (INTEGER))))
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
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
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
  (TestDecl
    (STRINGLITERALSINGLE)
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
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (CHAR_LITERAL))
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)))
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))))))(AssignExpr
  (SuffixExpr
    (IfTypeExpr
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
      (SuffixExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (SuffixExpr
      (LabeledTypeExpr
        (BlockLabel
          (IDENTIFIER))
        (Block
          (AssignExpr
            (BreakLabel
              (IDENTIFIER))
            (BinaryExpr
              (BinaryExpr
                (SuffixExpr
                  (INTEGER))
                (AdditionOp)
                (SuffixExpr
                  (INTEGER)))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (SuffixExpr
            (INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
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
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (AssignOp)
  (SuffixExpr
    (INTEGER)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER)))))(AssignExpr
  (SuffixExpr
    (IfTypeExpr
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr))))(VarDecl
  (IDENTIFIER)
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))))(AssignExpr(SuffixExpr
  (IfTypeExpr
    (IfPrefix
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr))))(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER)))))(AssignExpr(SuffixExpr
  (IfTypeExpr
    (IfPrefix
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (SuffixExpr
        (LabeledTypeExpr
          (BlockLabel
            (IDENTIFIER))
          (Block
            (AssignExpr
              (BreakLabel
                (IDENTIFIER))
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (IDENTIFIER)))))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
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
          (STRINGLITERAL
            (STRINGLITERALSINGLE)))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (BinaryExpr
          (BinaryExpr
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE)))
            (AdditionOp)
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))
          (AdditionOp)
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (BinaryExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (MultiplyOp 
            (SuffixExpr
              (INTEGER)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
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
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))(AssignExpr
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
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (line_comment)
  (SuffixExpr
    (STRINGLITERAL)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))(AssignExpr
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
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL))
  (line_comment))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))(AssignExpr
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
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL))
  (line_comment)
  (ERROR))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))(AssignExpr
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
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL))
  (line_comment)
  (ERROR
    (line_comment)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))(AssignExpr
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
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL)))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (BuildinTypeExpr))
        (CompareOp)
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (BuildinTypeExpr))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (IDENTIFIER)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (PrefixTypeOp)
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER))))
  (BitwiseOp)
  (SuffixExpr)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (IDENTIFIER)))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType
  (SuffixExpr
    (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(IDENTIFIER)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (IDENTIFIER))
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))))(SuffixOp(SuffixExpr
  (INTEGER))(SuffixExpr
  (IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr
  (BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp
  (SliceTypeStart))(SuffixExpr
  (IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER))(CompareOp)(SuffixExpr
  (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp))(CompareOp)(SuffixExpr
  (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr)))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr)))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(GroupedExpr(SuffixExpr(IfTypeExpr(IfPrefix
  (SuffixExpr
    (IDENTIFIER)))(SuffixExpr
  (IDENTIFIER))(SuffixExpr
  (IDENTIFIER)))))(FnCallArguments))))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr
  (IDENTIFIER)))(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))))(PtrPayload(IDENTIFIER))(AssignExpr(Block(AssignExpr
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
          (INTEGER))))))(AssignExpr
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
          (INTEGER)))))))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))))(PtrPayload(IDENTIFIER))(AssignExpr(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER)))))))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (CHAR_LITERAL))(CompareOp)(SuffixExpr
  (IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(CHAR_LITERAL)))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(FLOAT)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(FLOAT)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(BinaryExpr(BinaryExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(AdditionOp)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(AdditionOp)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)))))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (IDENTIFIER)))(WhileContinueExpr
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER)))))(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (IDENTIFIER))))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (IDENTIFIER)))))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(BitwiseOp)(SuffixExpr)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(InitList))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(BitwiseOp)(SuffixExpr(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(CompareOp)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(FLOAT)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(FLOAT)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(FLOAT))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(FLOAT)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)))))(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp
        (PtrTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))))(line_comment)(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixExpr
    (STRINGLITERAL
      (STRINGLITERALSINGLE)))))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(FnCallArguments)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))))(line_comment)(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(CHAR_LITERAL))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(CompareOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr(IDENTIFIER)))(BlockExpr(Block(IfStatement(IfPrefix(SuffixExpr))(BlockExpr(Block)))(AssignExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block(LabeledStatement(LoopStatement(WhileStatement(WhilePrefix(SuffixExpr))(BlockExpr(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments))(MISSING ";"))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr)))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(GroupedExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))))(UnaryExpr (PrefixOp)(SuffixExpr(GroupedExpr(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(IDENTIFIER))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block)(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(GroupedExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList))(SuffixOp(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(FnProto(ParamDeclList(ParamDecl(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(INTEGER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(IDENTIFIER))))))(CompareOp)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER))))))(CompareOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments))(CompareOp)(SuffixExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr)))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(CHAR_LITERAL)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(ERROR(UNEXPECTED 240))(CompareOp)(SuffixExpr(INTEGER))))(ERROR)))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(BitwiseOp)(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))(BitwiseOp)(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IfTypeExpr(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER))))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(AssignExpr(IfExpr(IfPrefix(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(SwitchExpr(SuffixExpr(IDENTIFIER))(SwitchProngList(SwitchProng(SwitchCase(SwitchItem(SuffixExpr)))(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(SwitchProng(SwitchCase)(AssignExpr(SuffixExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr)))(BitwiseOp)(SuffixExpr)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp))(CompareOp)(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(PtrIndexPayload(IDENTIFIER)))(BlockExpr(Block(AssignExpr(SuffixExpr(IDENTIFIER))))))))(AssignExpr(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))(CompareOp)(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(SuffixOp))(CompareOp)(SuffixExpr(INTEGER)))))))))
