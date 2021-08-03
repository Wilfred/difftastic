================================================================================
slice
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqualSlices = std.testing.expectEqualSlices;
const expectEqual = std.testing.expectEqual;
const mem = std.mem;

const x = @intToPtr([*]i32, 0x1000)[0..0x500];
const y = x[0x100..];
test "compile time slice of pointer to hard coded address" {
    expect(@ptrToInt(x) == 0x1000);
    expect(x.len == 0x500);

    expect(@ptrToInt(y) == 0x1100);
    expect(y.len == 0x400);
}

test "runtime safety lets us slice from len..len" {
    var an_array = [_]u8{
        1,
        2,
        3,
    };
    expect(mem.eql(u8, sliceFromLenToLen(an_array[0..], 3, 3), ""));
}

fn sliceFromLenToLen(a_slice: []u8, start: usize, end: usize) []u8 {
    return a_slice[start..end];
}

test "implicitly cast array of size 0 to slice" {
    var msg = [_]u8{};
    assertLenIsZero(&msg);
}

fn assertLenIsZero(msg: []const u8) void {
    expect(msg.len == 0);
}

test "C pointer" {
    var buf: [*c]const u8 = "kjdhfkjdhfdkjhfkfjhdfkjdhfkdjhfdkjhf";
    var len: u32 = 10;
    var slice = buf[0..len];
    expectEqualSlices(u8, "kjdhfkjdhf", slice);
}

test "C pointer slice access" {
    var buf: [10]u32 = [1]u32{42} ** 10;
    const c_ptr = @ptrCast([*c]const u32, &buf);

    var runtime_zero: usize = 0;
    comptime expectEqual([]const u32, @TypeOf(c_ptr[runtime_zero..1]));
    comptime expectEqual(*const [1]u32, @TypeOf(c_ptr[0..1]));

    for (c_ptr[0..5]) |*cl| {
        expectEqual(@as(u32, 42), cl.*);
    }
}

fn sliceSum(comptime q: []const u8) i32 {
    comptime var result = 0;
    inline for (q) |item| {
        result += item;
    }
    return result;
}

test "comptime slices are disambiguated" {
    expect(sliceSum(&[_]u8{ 1, 2 }) == 3);
    expect(sliceSum(&[_]u8{ 3, 4 }) == 7);
}

test "slice type with custom alignment" {
    const LazilyResolvedType = struct {
        anything: i32,
    };
    var slice: []align(32) LazilyResolvedType = undefined;
    var array: [10]LazilyResolvedType align(32) = undefined;
    slice = &array;
    slice[1].anything = 42;
    expect(array[1].anything == 42);
}

test "access len index of sentinel-terminated slice" {
    const S = struct {
        fn doTheTest() void {
            var slice: [:0]const u8 = "hello";

            expect(slice.len == 5);
            expect(slice[5] == 0);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "obtaining a null terminated slice" {
    // here we have a normal array
    var buf: [50]u8 = undefined;

    buf[0] = 'a';
    buf[1] = 'b';
    buf[2] = 'c';
    buf[3] = 0;

    // now we obtain a null terminated slice:
    const ptr = buf[0..3 :0];

    var runtime_len: usize = 3;
    const ptr2 = buf[0..runtime_len :0];
    // ptr2 is a null-terminated slice
    comptime expect(@TypeOf(ptr2) == [:0]u8);
    comptime expect(@TypeOf(ptr2[0..2]) == *[2]u8);
    var runtime_zero: usize = 0;
    comptime expect(@TypeOf(ptr2[runtime_zero..2]) == []u8);
}

test "empty array to slice" {
    const S = struct {
        fn doTheTest() void {
            const empty: []align(16) u8 = &[_]u8{};
            const align_1: []align(1) u8 = empty;
            const align_4: []align(4) u8 = empty;
            const align_16: []align(16) u8 = empty;
            expectEqual(1, @typeInfo(@TypeOf(align_1)).Pointer.alignment);
            expectEqual(4, @typeInfo(@TypeOf(align_4)).Pointer.alignment);
            expectEqual(16, @typeInfo(@TypeOf(align_16)).Pointer.alignment);
        }
    };

    S.doTheTest();
    comptime S.doTheTest();
}

test "@ptrCast slice to pointer" {
    const S = struct {
        fn doTheTest() void {
            var array align(@alignOf(u16)) = [5]u8{ 0xff, 0xff, 0xff, 0xff, 0xff };
            var slice: []u8 = &array;
            var ptr = @ptrCast(*u16, slice);
            expect(ptr.* == 65535);
        }
    };

    S.doTheTest();
    comptime S.doTheTest();
}

test "slice syntax resulting in pointer-to-array" {
    const S = struct {
        fn doTheTest() void {
            testArray();
            testArrayZ();
            testArray0();
            testArrayAlign();
            testPointer();
            testPointerZ();
            testPointer0();
            testPointerAlign();
            testSlice();
            testSliceZ();
            testSlice0();
            testSliceOpt();
            testSliceAlign();
        }

        fn testArray() void {
            var array = [5]u8{ 1, 2, 3, 4, 5 };
            var slice = array[1..3];
            comptime expect(@TypeOf(slice) == *[2]u8);
            expect(slice[0] == 2);
            expect(slice[1] == 3);
        }

        fn testArrayZ() void {
            var array = [5:0]u8{ 1, 2, 3, 4, 5 };
            comptime expect(@TypeOf(array[1..3]) == *[2]u8);
            comptime expect(@TypeOf(array[1..5]) == *[4:0]u8);
            comptime expect(@TypeOf(array[1..]) == *[4:0]u8);
            comptime expect(@TypeOf(array[1..3 :4]) == *[2:4]u8);
        }

        fn testArray0() void {
            {
                var array = [0]u8{};
                var slice = array[0..0];
                comptime expect(@TypeOf(slice) == *[0]u8);
            }
            {
                var array = [0:0]u8{};
                var slice = array[0..0];
                comptime expect(@TypeOf(slice) == *[0:0]u8);
                expect(slice[0] == 0);
            }
        }

        fn testArrayAlign() void {
            var array align(4) = [5]u8{ 1, 2, 3, 4, 5 };
            var slice = array[4..5];
            comptime expect(@TypeOf(slice) == *align(4) [1]u8);
            expect(slice[0] == 5);
            comptime expect(@TypeOf(array[0..2]) == *align(4) [2]u8);
        }

        fn testPointer() void {
            var array = [5]u8{ 1, 2, 3, 4, 5 };
            var pointer: [*]u8 = &array;
            var slice = pointer[1..3];
            comptime expect(@TypeOf(slice) == *[2]u8);
            expect(slice[0] == 2);
            expect(slice[1] == 3);
        }

        fn testPointerZ() void {
            var array = [5:0]u8{ 1, 2, 3, 4, 5 };
            var pointer: [*:0]u8 = &array;
            comptime expect(@TypeOf(pointer[1..3]) == *[2]u8);
            comptime expect(@TypeOf(pointer[1..3 :4]) == *[2:4]u8);
        }

        fn testPointer0() void {
            var pointer: [*]const u0 = &[1]u0{0};
            var slice = pointer[0..1];
            comptime expect(@TypeOf(slice) == *const [1]u0);
            expect(slice[0] == 0);
        }

        fn testPointerAlign() void {
            var array align(4) = [5]u8{ 1, 2, 3, 4, 5 };
            var pointer: [*]align(4) u8 = &array;
            var slice = pointer[4..5];
            comptime expect(@TypeOf(slice) == *align(4) [1]u8);
            expect(slice[0] == 5);
            comptime expect(@TypeOf(pointer[0..2]) == *align(4) [2]u8);
        }

        fn testSlice() void {
            var array = [5]u8{ 1, 2, 3, 4, 5 };
            var src_slice: []u8 = &array;
            var slice = src_slice[1..3];
            comptime expect(@TypeOf(slice) == *[2]u8);
            expect(slice[0] == 2);
            expect(slice[1] == 3);
        }

        fn testSliceZ() void {
            var array = [5:0]u8{ 1, 2, 3, 4, 5 };
            var slice: [:0]u8 = &array;
            comptime expect(@TypeOf(slice[1..3]) == *[2]u8);
            comptime expect(@TypeOf(slice[1..]) == [:0]u8);
            comptime expect(@TypeOf(slice[1..3 :4]) == *[2:4]u8);
        }

        fn testSliceOpt() void {
            var array: [2]u8 = [2]u8{ 1, 2 };
            var slice: ?[]u8 = &array;
            comptime expect(@TypeOf(&array, slice) == ?[]u8);
            comptime expect(@TypeOf(slice.?[0..2]) == *[2]u8);
        }

        fn testSlice0() void {
            {
                var array = [0]u8{};
                var src_slice: []u8 = &array;
                var slice = src_slice[0..0];
                comptime expect(@TypeOf(slice) == *[0]u8);
            }
            {
                var array = [0:0]u8{};
                var src_slice: [:0]u8 = &array;
                var slice = src_slice[0..0];
                comptime expect(@TypeOf(slice) == *[0]u8);
            }
        }

        fn testSliceAlign() void {
            var array align(4) = [5]u8{ 1, 2, 3, 4, 5 };
            var src_slice: []align(4) u8 = &array;
            var slice = src_slice[4..5];
            comptime expect(@TypeOf(slice) == *align(4) [1]u8);
            expect(slice[0] == 5);
            comptime expect(@TypeOf(src_slice[0..2]) == *align(4) [2]u8);
        }

        fn testConcatStrLiterals() void {
            expectEqualSlices("a"[0..] ++ "b"[0..], "ab");
            expectEqualSlices("a"[0..:0] ++ "b"[0..:0], "ab");
        }
    };

    S.doTheTest();
    comptime S.doTheTest();
}

test "slice of hardcoded address to pointer" {
    const S = struct {
        fn doTheTest() void {
            const pointer = @intToPtr([*]u8, 0x04)[0..2];
            comptime expect(@TypeOf(pointer) == *[2]u8);
            const slice: []const u8 = pointer;
            expect(@ptrToInt(slice.ptr) == 4);
            expect(slice.len == 2);
        }
    };

    S.doTheTest();
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
          (INTEGER)))
      (SuffixOp
        (SuffixExpr
          (INTEGER))
        (SuffixExpr
          (INTEGER)))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
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
                (BUILTINIDENTIFIER)
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
                (BUILTINIDENTIFIER)
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
                (SuffixOp
                  (IDENTIFIER)))
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
              (IDENTIFIER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (InitList
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))
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
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))))
                (SuffixExpr
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (PrefixTypeOp
            (SliceTypeStart))
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
    (PrefixTypeOp
      (SliceTypeStart))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))))))
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
        (InitList))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER))))))))(FnProto
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
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER)))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (PtrTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (SuffixExpr
            (IDENTIFIER)))))))(TestDecl
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
      (BinaryExpr
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (InitList
          (SuffixExpr
            (INTEGER)))
        (MultiplyOp 
          (SuffixExpr
            (INTEGER))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (BuildinTypeExpr))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (PrefixTypeOp
            (SliceTypeStart))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (INTEGER)))))))))
    (AssignExpr
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER)))))))))
    (LabeledStatement
      (LoopStatement
        (ForStatement
          (ForPrefix
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))
            (PtrIndexPayload
              (IDENTIFIER)))
          (BlockExpr
            (Block
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
                      (SuffixOp))))))))))))(FnProto
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (INTEGER)))
  (LabeledStatement
    (LoopStatement
      (ForStatement
        (ForPrefix
          (SuffixExpr
            (IDENTIFIER))
          (PtrIndexPayload
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))))(TestDecl
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
                (UnaryExpr (PrefixOp)
                (PrefixTypeOp
                  (ArrayTypeStart
                    (SuffixExpr
                      (IDENTIFIER))))
                (SuffixExpr
                  (BuildinTypeExpr))
                (InitList
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))))
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
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (IDENTIFIER))))
              (SuffixExpr
                (BuildinTypeExpr))
              (InitList
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType)
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))))))(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr))(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (IDENTIFIER))
  (ByteAlign
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER)))
  (SuffixOp
    (IDENTIFIER)))(AssignOp)(SuffixExpr
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
          (IDENTIFIER)))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr
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
        (PrefixTypeOp
          (SliceTypeStart
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
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
                (INTEGER))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments)))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(VarDecl(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(AssignOp)(SuffixExpr
  (CHAR_LITERAL)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(AssignOp)(SuffixExpr
  (CHAR_LITERAL)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(AssignOp)(SuffixExpr
  (CHAR_LITERAL)))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(AssignOp)(SuffixExpr
  (INTEGER)))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (IDENTIFIER))
    (SuffixExpr
      (INTEGER)))))(line_comment)(AssignExpr(SuffixExpr
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
        (SliceTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))))
      (CompareOp)
      (PrefixTypeOp
        (PtrTypeStart))
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (IDENTIFIER))
              (SuffixExpr
                (INTEGER))))))
      (CompareOp)
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr
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
        (PrefixTypeOp
          (SliceTypeStart)
          (ByteAlign
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (UnaryExpr (PrefixOp)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (InitList)))
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (SliceTypeStart)
        (ByteAlign
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (SliceTypeStart)
        (ByteAlign
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (SliceTypeStart)
        (ByteAlign
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER)))
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
                    (IDENTIFIER)))))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))))))
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
                    (IDENTIFIER)))))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))))))
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
                    (IDENTIFIER)))))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr
  (IDENTIFIER))(SuffixOp
  (IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (ByteAlign
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr)))))
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))
      (InitList
        (SuffixExpr
          (INTEGER))
        (SuffixExpr
          (INTEGER))
        (SuffixExpr
          (INTEGER))
        (SuffixExpr
          (INTEGER))
        (SuffixExpr
          (INTEGER))))
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))
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
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (InitList
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))
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
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))))))
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
            (INTEGER)))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
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
    (InitList
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))))))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))))))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))))))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))))))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr)))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (InitList))
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
                (PtrTypeStart))
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (BuildinTypeExpr))))))))
  (LabeledStatement
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
        (InitList))
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
                (PtrTypeStart))
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (BuildinTypeExpr))))))
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
                (INTEGER)))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (ByteAlign
      (SuffixExpr
        (INTEGER)))
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (InitList
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))
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
            (BuildinTypeExpr))))))
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
      (SuffixExpr
        (IDENTIFIER))
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))))))
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
            (BuildinTypeExpr)))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (InitList
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER)))))(AssignExpr
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
          (PtrTypeStart))
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))))))(AssignExpr
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
          (INTEGER))))))(AssignExpr
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
          (INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (InitList
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER))))(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp
    (PtrTypeStart
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))))
      (CompareOp)
      (PrefixTypeOp
        (PtrTypeStart))
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr))))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))))
      (CompareOp)
      (PrefixTypeOp
        (PtrTypeStart))
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr))(UnaryExpr (PrefixOp)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(InitList
  (SuffixExpr
    (INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr
  (IDENTIFIER))(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))))
    (CompareOp)
    (PrefixTypeOp
      (PtrTypeStart))
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (SuffixExpr
          (INTEGER))))
    (CompareOp)
    (SuffixExpr
      (INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr
  (INTEGER)))(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(PtrTypeStart)(SuffixExpr
  (INTEGER)))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr
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
    (BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))
  (CompareOp)
  (SuffixExpr
    (INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))))
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
    (BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER))))(CompareOp)(PrefixTypeOp
  (PtrTypeStart))(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(CompareOp)(SuffixExpr
  (INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (SuffixExpr
      (INTEGER))))(CompareOp)(SuffixExpr
  (INTEGER)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))))))(CompareOp)(PrefixTypeOp(SliceTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))
      (SuffixExpr
        (INTEGER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr
  (IDENTIFIER)))(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp)(SuffixOp
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr
  (IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))))))))(LabeledStatement(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(ByteAlign(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))))(CompareOp)(PrefixTypeOp(PtrTypeStart)(SuffixExpr(INTEGER)))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(INTEGER))))(AdditionOp)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(INTEGER)))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(INTEGER))(ERROR)(SuffixExpr(INTEGER))))(AdditionOp)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp(SuffixExpr(INTEGER))(ERROR)(SuffixExpr(INTEGER)))))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(SuffixOp(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))))(CompareOp)(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))(CompareOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))))))
