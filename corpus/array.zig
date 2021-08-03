================================================================================
array
================================================================================

    const std = @import("std");
const testing = std.testing;
const mem = std.mem;
const expect = testing.expect;
const expectEqual = testing.expectEqual;

test "arrays" {
    var array: [5]u32 = undefined;

    var i: u32 = 0;
    while (i < 5) {
        array[i] = i + 1;
        i = array[i];
    }

    i = 0;
    var accumulator = @as(u32, 0);
    while (i < 5) {
        accumulator += array[i];

        i += 1;
    }

    expect(accumulator == 15);
    expect(getArrayLen(&array) == 5);
}
fn getArrayLen(a: []const u32) usize {
    return a.len;
}

test "array with sentinels" {
    const S = struct {
        fn doTheTest(is_ct: bool) void {
            if (is_ct) {
                var zero_sized: [0:0xde]u8 = [_:0xde]u8{};
                // Disabled at runtime because of
                // https://github.com/ziglang/zig/issues/4372
                expectEqual(@as(u8, 0xde), zero_sized[0]);
                var reinterpreted = @ptrCast(*[1]u8, &zero_sized);
                expectEqual(@as(u8, 0xde), reinterpreted[0]);
            }
            var arr: [3:0x55]u8 = undefined;
            // Make sure the sentinel pointer is pointing after the last element
            if (!is_ct) {
                const sentinel_ptr = @ptrToInt(&arr[3]);
                const last_elem_ptr = @ptrToInt(&arr[2]);
                expectEqual(@as(usize, 1), sentinel_ptr - last_elem_ptr);
            }
            // Make sure the sentinel is writeable
            arr[3] = 0x55;
        }
    };

    S.doTheTest(false);
    comptime S.doTheTest(true);
}

test "void arrays" {
    var array: [4]void = undefined;
    array[0] = void{};
    array[1] = array[2];
    expect(@sizeOf(@TypeOf(array)) == 0);
    expect(array.len == 4);
}

test "array literal" {
    const hex_mult = [_]u16{
        4096,
        256,
        16,
        1,
    };

    expect(hex_mult.len == 4);
    expect(hex_mult[1] == 256);
}

test "array dot len const expr" {
    expect(comptime x: {
        break :x some_array.len == 4;
    });
}

const ArrayDotLenConstExpr = struct {
    y: [some_array.len]u8,
};
const some_array = [_]u8{
    0,
    1,
    2,
    3,
};

test "nested arrays" {
    const array_of_strings = [_][]const u8{
        "hello",
        "this",
        "is",
        "my",
        "thing",
    };
    for (array_of_strings) |s, i| {
        if (i == 0) expect(mem.eql(u8, s, "hello"));
        if (i == 1) expect(mem.eql(u8, s, "this"));
        if (i == 2) expect(mem.eql(u8, s, "is"));
        if (i == 3) expect(mem.eql(u8, s, "my"));
        if (i == 4) expect(mem.eql(u8, s, "thing"));
    }
}

var s_array: [8]Sub = undefined;
const Sub = struct {
    b: u8,
};
const Str = struct {
    a: []Sub,
};
test "set global var array via slice embedded in struct" {
    var s = Str{ .a = s_array[0..] };

    s.a[0].b = 1;
    s.a[1].b = 2;
    s.a[2].b = 3;

    expect(s_array[0].b == 1);
    expect(s_array[1].b == 2);
    expect(s_array[2].b == 3);
}

test "array literal with specified size" {
    var array = [2]u8{
        1,
        2,
    };
    expect(array[0] == 1);
    expect(array[1] == 2);
}

test "array len field" {
    var arr = [4]u8{ 0, 0, 0, 0 };
    var ptr = &arr;
    expect(arr.len == 4);
    comptime expect(arr.len == 4);
    expect(ptr.len == 4);
    comptime expect(ptr.len == 4);
}

test "single-item pointer to array indexing and slicing" {
    testSingleItemPtrArrayIndexSlice();
    comptime testSingleItemPtrArrayIndexSlice();
}

fn testSingleItemPtrArrayIndexSlice() void {
    {
        var array: [4]u8 = "aaaa".*;
        doSomeMangling(&array);
        expect(mem.eql(u8, "azya", &array));
    }
    {
        var array = "aaaa".*;
        doSomeMangling(&array);
        expect(mem.eql(u8, "azya", &array));
    }
}

fn doSomeMangling(array: *[4]u8) void {
    array[1] = 'z';
    array[2..3][0] = 'y';
}

test "implicit cast single-item pointer" {
    testImplicitCastSingleItemPtr();
    comptime testImplicitCastSingleItemPtr();
}

fn testImplicitCastSingleItemPtr() void {
    var byte: u8 = 100;
    const slice = @as(*[1]u8, &byte)[0..];
    slice[0] += 1;
    expect(byte == 101);
}

fn testArrayByValAtComptime(b: [2]u8) u8 {
    return b[0];
}

test "comptime evalutating function that takes array by value" {
    const arr = [_]u8{ 0, 1 };
    _ = comptime testArrayByValAtComptime(arr);
    _ = comptime testArrayByValAtComptime(arr);
}

test "implicit comptime in array type size" {
    var arr: [plusOne(10)]bool = undefined;
    expect(arr.len == 11);
}

fn plusOne(x: u32) u32 {
    return x + 1;
}

test "runtime initialize array elem and then implicit cast to slice" {
    var two: i32 = 2;
    const x: []const i32 = &[_]i32{two};
    expect(x[0] == 2);
}

test "array literal as argument to function" {
    const S = struct {
        fn entry(two: i32) void {
            foo(&[_]i32{
                1,
                2,
                3,
            });
            foo(&[_]i32{
                1,
                two,
                3,
            });
            foo2(true, &[_]i32{
                1,
                2,
                3,
            });
            foo2(true, &[_]i32{
                1,
                two,
                3,
            });
        }
        fn foo(x: []const i32) void {
            expect(x[0] == 1);
            expect(x[1] == 2);
            expect(x[2] == 3);
        }
        fn foo2(trash: bool, x: []const i32) void {
            expect(trash);
            expect(x[0] == 1);
            expect(x[1] == 2);
            expect(x[2] == 3);
        }
    };
    S.entry(2);
    comptime S.entry(2);
}

test "double nested array to const slice cast in array literal" {
    const S = struct {
        fn entry(two: i32) void {
            const cases = [_][]const []const i32{
                &[_][]const i32{&[_]i32{1}},
                &[_][]const i32{&[_]i32{ 2, 3 }},
                &[_][]const i32{
                    &[_]i32{4},
                    &[_]i32{ 5, 6, 7 },
                },
            };
            check(&cases);

            const cases2 = [_][]const i32{
                &[_]i32{1},
                &[_]i32{ two, 3 },
            };
            expect(cases2.len == 2);
            expect(cases2[0].len == 1);
            expect(cases2[0][0] == 1);
            expect(cases2[1].len == 2);
            expect(cases2[1][0] == 2);
            expect(cases2[1][1] == 3);

            const cases3 = [_][]const []const i32{
                &[_][]const i32{&[_]i32{1}},
                &[_][]const i32{&[_]i32{ two, 3 }},
                &[_][]const i32{
                    &[_]i32{4},
                    &[_]i32{ 5, 6, 7 },
                },
            };
            check(&cases3);
        }

        fn check(cases: []const []const []const i32) void {
            expect(cases.len == 3);
            expect(cases[0].len == 1);
            expect(cases[0][0].len == 1);
            expect(cases[0][0][0] == 1);
            expect(cases[1].len == 1);
            expect(cases[1][0].len == 2);
            expect(cases[1][0][0] == 2);
            expect(cases[1][0][1] == 3);
            expect(cases[2].len == 2);
            expect(cases[2][0].len == 1);
            expect(cases[2][0][0] == 4);
            expect(cases[2][1].len == 3);
            expect(cases[2][1][0] == 5);
            expect(cases[2][1][1] == 6);
            expect(cases[2][1][2] == 7);
        }
    };
    S.entry(2);
    comptime S.entry(2);
}

test "read/write through global variable array of struct fields initialized via array mult" {
    const S = struct {
        fn doTheTest() void {
            expect(storage[0].term == 1);
            storage[0] = MyStruct{ .term = 123 };
            expect(storage[0].term == 123);
        }

        pub const MyStruct = struct {
            term: usize,
        };

        var storage: [1]MyStruct = [_]MyStruct{MyStruct{ .term = 1 }} ** 1;
    };
    S.doTheTest();
}

test "implicit cast zero sized array ptr to slice" {
    {
        var b = "".*;
        const c: []const u8 = &b;
        expect(c.len == 0);
    }
    {
        var b: [0]u8 = "".*;
        const c: []const u8 = &b;
        expect(c.len == 0);
    }
}

test "anonymous list literal syntax" {
    const S = struct {
        fn doTheTest() void {
            var array: [4]u8 = .{ 1, 2, 3, 4 };
            expect(array[0] == 1);
            expect(array[1] == 2);
            expect(array[2] == 3);
            expect(array[3] == 4);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "anonymous literal in array" {
    const S = struct {
        const Foo = struct {
            a: usize = 2,
            b: usize = 4,
        };
        fn doTheTest() void {
            var array: [2]Foo = .{
                .{ .a = 3 },
                .{ .b = 3 },
            };
            expect(array[0].a == 3);
            expect(array[0].b == 4);
            expect(array[1].a == 2);
            expect(array[1].b == 3);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "access the null element of a null terminated array" {
    const S = struct {
        fn doTheTest() void {
            var array: [4:0]u8 = .{ 'a', 'o', 'e', 'u' };
            expect(array[4] == 0);
            var len: usize = 4;
            expect(array[len] == 0);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "type deduction for array subscript expression" {
    const S = struct {
        fn doTheTest() void {
            var array = [_]u8{ 0x55, 0xAA };
            var v0 = true;
            expectEqual(@as(u8, 0xAA), array[if (v0) 1 else 0]);
            var v1 = false;
            expectEqual(@as(u8, 0x55), array[if (v1) 1 else 0]);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "sentinel element count towards the ABI size calculation" {
    const S = struct {
        fn doTheTest() void {
            const T = packed struct {
                fill_pre: u8 = 0x55,
                data: [0:0]u8 = undefined,
                fill_post: u8 = 0xAA,
            };
            var x = T{};
            var as_slice = mem.asBytes(&x);
            expectEqual(@as(usize, 3), as_slice.len);
            expectEqual(@as(u8, 0x55), as_slice[0]);
            expectEqual(@as(u8, 0xAA), as_slice[2]);
        }
    };

    S.doTheTest();
    comptime S.doTheTest();
}

test "zero-sized array with recursive type definition" {
    const U = struct {
        fn foo(comptime T: type, comptime n: usize) type {
            return struct {
                s: [n]T,
                x: usize = n,
            };
        }
    };

    const S = struct {
        list: U.foo(@This(), 0),
    };

    var t: S = .{ .list = .{ .s = undefined } };
    expectEqual(@as(usize, 0), t.list.x);
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
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
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
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
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (IDENTIFIER))))
                  (AssignOp)
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (AdditionOp)
                    (SuffixExpr
                      (INTEGER))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (IDENTIFIER))))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (INTEGER)))
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
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (IDENTIFIER)))))
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
                (INTEGER))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER)))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
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
            (IfStatement
              (IfPrefix
                (SuffixExpr
                  (IDENTIFIER)))
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))
                        (SuffixExpr
                          (INTEGER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList))
                  (line_comment)
                  (line_comment)
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (SuffixExpr
                          (BUILTINIDENTIFIER)
                          (FnCallArguments
                            (SuffixExpr
                              (BuildinTypeExpr))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (IDENTIFIER)
                          (SuffixOp
                            (SuffixExpr
                              (INTEGER)))))))
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
                          (IDENTIFIER))))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))))))))))
          (VarDecl
            (IDENTIFIER)
            (PrefixTypeOp
              (ArrayTypeStart
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr))
          (line_comment)
          (IfStatement
            (IfPrefix
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (IDENTIFIER))))
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))))))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))))))))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (INTEGER))))
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AdditionOp)
                  (SuffixExpr
                    (IDENTIFIER)))))))))
    (line_comment)
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr))))(AssignExpr(SuffixExpr(SuffixExpr
  (IDENTIFIER))(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (SuffixExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER))))(AssignOp)(SuffixExpr(BuildinTypeExpr))(InitList))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER))))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
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
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (SuffixExpr
          (INTEGER))))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
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
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (INTEGER)))))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))))(SuffixExpr
  (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))))(LabeledStatement(LoopStatement(ForStatement
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
          (IfTypeExpr
            (IfPrefix
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)))
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
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))
      (AssignExpr
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)))
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
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))
      (AssignExpr
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)))
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
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))
      (AssignExpr
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)))
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
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))
      (AssignExpr
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER))
                (CompareOp)
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)))
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
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE)))))))))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER))(SuffixExpr))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp
  (SliceTypeStart))(SuffixExpr
  (IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(SuffixOp
  (SuffixExpr
    (INTEGER)))(SuffixOp
  (IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(SuffixOp
  (SuffixExpr
    (INTEGER)))(SuffixOp
  (IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(SuffixOp
  (SuffixExpr
    (INTEGER)))(SuffixOp
  (IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
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
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
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
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
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
      (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (SuffixExpr
          (INTEGER))))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (SuffixExpr
          (INTEGER))))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(VarDecl(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL
  (STRINGLITERALSINGLE))(SuffixOp)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (STRINGLITERAL
        (STRINGLITERALSINGLE)))
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))(UnaryExpr (PrefixOp)(SuffixExpr
  (IDENTIFIER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(CHAR_LITERAL)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(CHAR_LITERAL))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(SuffixOp(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(INTEGER)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER))))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(SliceTypeStart))(PrefixTypeOp(SliceTypeStart))(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(AssignOp)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER)))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER))(BinaryExpr(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(MultiplyOp (SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(InitList(SuffixExpr(CHAR_LITERAL))(SuffixExpr(CHAR_LITERAL))(SuffixExpr(CHAR_LITERAL))(SuffixExpr(CHAR_LITERAL)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IDENTIFIER))))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IfTypeExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(VarDecl(IDENTIFIER)(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(IfTypeExpr(IfPrefix(SuffixExpr(IDENTIFIER)))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(ContainerField(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments))(SuffixExpr(INTEGER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))))))))
