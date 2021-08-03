================================================================================
for
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;
const mem = std.mem;

test "continue in for loop" {
    const array = [_]i32{
        1,
        2,
        3,
        4,
        5,
    };
    var sum: i32 = 0;
    for (array) |x| {
        sum += x;
        if (x < 3) {
            continue;
        }
        break;
    }
    if (sum != 6) unreachable;
}

test "for loop with pointer elem var" {
    const source = "abcdefg";
    var target: [source.len]u8 = undefined;
    mem.copy(u8, target[0..], source);
    mangleString(target[0..]);
    expect(mem.eql(u8, &target, "bcdefgh"));

    for (source) |*c, i|
        expect(@TypeOf(c) == *const u8);
    for (target) |*c, i|
        expect(@TypeOf(c) == *u8);
}

fn mangleString(s: []u8) void {
    for (s) |*c| {
        c.* += 1;
    }
}

test "basic for loop" {
    const expected_result = [_]u8{ 9, 8, 7, 6, 0, 1, 2, 3 } ** 3;

    var buffer: [expected_result.len]u8 = undefined;
    var buf_index: usize = 0;

    const array = [_]u8{ 9, 8, 7, 6 };
    for (array) |item| {
        buffer[buf_index] = item;
        buf_index += 1;
    }
    for (array) |item, index| {
        buffer[buf_index] = @intCast(u8, index);
        buf_index += 1;
    }
    const array_ptr = &array;
    for (array_ptr) |item| {
        buffer[buf_index] = item;
        buf_index += 1;
    }
    for (array_ptr) |item, index| {
        buffer[buf_index] = @intCast(u8, index);
        buf_index += 1;
    }
    const unknown_size: []const u8 = &array;
    for (unknown_size) |item| {
        buffer[buf_index] = item;
        buf_index += 1;
    }
    for (unknown_size) |item, index| {
        buffer[buf_index] = @intCast(u8, index);
        buf_index += 1;
    }

    expect(mem.eql(u8, buffer[0..buf_index], &expected_result));
}

test "break from outer for loop" {
    testBreakOuter();
    comptime testBreakOuter();
}

fn testBreakOuter() void {
    var array = "aoeu";
    var count: usize = 0;
    outer: for (array) |_| {
        for (array) |_| {
            count += 1;
            break :outer;
        }
    }
    expect(count == 1);
}

test "continue outer for loop" {
    testContinueOuter();
    comptime testContinueOuter();
}

fn testContinueOuter() void {
    var array = "aoeu";
    var counter: usize = 0;
    outer: for (array) |_| {
        for (array) |_| {
            counter += 1;
            continue :outer;
        }
    }
    expect(counter == array.len);
}

test "2 break statements and an else" {
    const S = struct {
        fn entry(t: bool, f: bool) void {
            var buf: [10]u8 = undefined;
            var ok = false;
            ok = for (buf) |item| {
                if (f) break false;
                if (t) break true;
            } else false;
            expect(ok);
        }
    };
    S.entry(true, false);
    comptime S.entry(true, false);
}

test "for with null and T peer types and inferred result location type" {
    const S = struct {
        fn doTheTest(slice: []const u8) void {
            if (for (slice) |item| {
                if (item == 10) {
                    break item;
                }
            } else null) |v| {
                @panic("fail");
            }
        }
    };
    S.doTheTest(&[_]u8{ 1, 2 });
    comptime S.doTheTest(&[_]u8{ 1, 2 });
}

test "for copies its payload" {
    const S = struct {
        fn doTheTest() void {
            var x = [_]usize{ 1, 2, 3 };
            for (x) |value, i| {
                // Modify the original array
                x[i] += 99;
                expectEqual(value, i + 1);
            }
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "for on slice with allowzero ptr" {
    const S = struct {
        fn doTheTest(slice: []const u8) void {
            var ptr = @ptrCast([*]allowzero const u8, slice.ptr)[0..slice.len];
            for (ptr) |x, i| expect(x == i + 1);
            for (ptr) |*x, i| expect(x.* == i + 1);
        }
    };
    S.doTheTest(&[_]u8{ 1, 2, 3, 4 });
    comptime S.doTheTest(&[_]u8{ 1, 2, 3, 4 });
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
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
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
                    (IDENTIFIER)))
                (IfStatement
                  (IfPrefix
                    (BinaryExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (CompareOp)
                      (SuffixExpr
                        (INTEGER))))
                  (BlockExpr
                    (Block
                      (AssignExpr))))
                (AssignExpr))))))
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
            (SuffixExpr))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))))
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (IDENTIFIER)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))))))
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
                (UnaryExpr (PrefixOp)
                (SuffixExpr
                  (IDENTIFIER)))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))
    (AssignExpr
      (SuffixExpr
        (LabeledTypeExpr
          (LoopTypeExpr
            (ForTypeExpr
              (ForPrefix
                (SuffixExpr
                  (IDENTIFIER))
                (PtrIndexPayload
                  (IDENTIFIER)
                  (IDENTIFIER)))
              (SuffixExpr
                (IDENTIFIER)))))
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
            (SuffixExpr
              (BuildinTypeExpr))))))
    (AssignExpr
      (SuffixExpr
        (LabeledTypeExpr
          (LoopTypeExpr
            (ForTypeExpr
              (ForPrefix
                (SuffixExpr
                  (IDENTIFIER))
                (PtrIndexPayload
                  (IDENTIFIER)
                  (IDENTIFIER)))
              (SuffixExpr
                (IDENTIFIER)))))
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
            (SuffixExpr
              (BuildinTypeExpr))))))))(FnProto
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
                (IDENTIFIER)
                (SuffixOp))
              (AssignOp)
              (SuffixExpr
                (INTEGER)))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
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
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER)))
        (MultiplyOp 
          (SuffixExpr
            (INTEGER))))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))))
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
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
            (INTEGER))
          (SuffixExpr
            (INTEGER))))
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
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (IDENTIFIER))))
                  (AssignOp)
                  (SuffixExpr
                    (IDENTIFIER)))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
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
                    (SuffixOp
                      (SuffixExpr
                        (IDENTIFIER))))
                  (AssignOp)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (IDENTIFIER)))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
      (VarDecl
        (IDENTIFIER)
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
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
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignOp)
                (SuffixExpr
                  (IDENTIFIER)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (INTEGER))))))))
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
                  (SuffixOp
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignOp)
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (IDENTIFIER)))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (INTEGER))))))))
    (VarDecl
      (IDENTIFIER)
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER))))
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
                (IDENTIFIER)
                (SuffixOp
                  (SuffixExpr
                    (IDENTIFIER))))
              (AssignOp)
              (SuffixExpr
                (IDENTIFIER)))
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (INTEGER))))))))
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
                (SuffixOp
                  (SuffixExpr
                    (IDENTIFIER))))
              (AssignOp)
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
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
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (IDENTIFIER))))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))(LabeledStatement(BlockLabel
  (IDENTIFIER))(LoopStatement
  (ForStatement
    (ForPrefix
      (SuffixExpr
        (IDENTIFIER))
      (PtrIndexPayload
        (IDENTIFIER)))
    (BlockExpr
      (Block
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
                      (INTEGER)))
                  (AssignExpr
                    (BreakLabel
                      (IDENTIFIER)))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE))))(VarDecl(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))(LabeledStatement(BlockLabel
  (IDENTIFIER))(LoopStatement
  (ForStatement
    (ForPrefix
      (SuffixExpr
        (IDENTIFIER))
      (PtrIndexPayload
        (IDENTIFIER)))
    (BlockExpr
      (Block
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
                      (INTEGER)))
                  (AssignExpr
                    (BreakLabel
                      (IDENTIFIER)))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
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
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER))
          (AssignOp)
          (LoopExpr
            (ForExpr
              (ForPrefix
                (SuffixExpr
                  (IDENTIFIER))
                (PtrIndexPayload
                  (IDENTIFIER)))
              (Block
                (AssignExpr
                  (IfExpr
                    (IfPrefix
                      (SuffixExpr
                        (IDENTIFIER)))
                    (SuffixExpr)))
                (AssignExpr
                  (IfExpr
                    (IfPrefix
                      (SuffixExpr
                        (IDENTIFIER)))
                    (SuffixExpr))))
              (SuffixExpr))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr)
      (SuffixExpr))))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr)
      (SuffixExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
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
              (PrefixTypeOp
                (SliceTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))))
        (SuffixExpr
          (BuildinTypeExpr)))
      (Block
        (IfStatement
          (IfPrefix
            (LoopExpr
              (ForExpr
                (ForPrefix
                  (SuffixExpr
                    (IDENTIFIER))
                  (PtrIndexPayload
                    (IDENTIFIER)))
                (Block
                  (IfStatement
                    (IfPrefix
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
                            (IDENTIFIER)))))))
                (SuffixExpr)))
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
                        (STRINGLITERALSINGLE)))))))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
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
          (INTEGER)))))))(AssignExpr(SuffixExpr
  (SuffixExpr
    (IDENTIFIER))
  (SuffixOp
    (IDENTIFIER))
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
        (INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
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
              (line_comment)
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignOp)
                (SuffixExpr
                  (INTEGER)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER))
                    (BinaryExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (AdditionOp)
                      (SuffixExpr
                        (INTEGER)))))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr
  (IDENTIFIER))(SuffixOp
  (IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
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
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))
        (SuffixOp
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (LabeledTypeExpr
          (LoopTypeExpr
            (ForTypeExpr
              (ForPrefix
                (SuffixExpr
                  (IDENTIFIER))
                (PtrIndexPayload
                  (IDENTIFIER)
                  (IDENTIFIER)))
              (SuffixExpr
                (IDENTIFIER)))))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))))
    (AssignExpr
      (SuffixExpr
        (LabeledTypeExpr
          (LoopTypeExpr
            (ForTypeExpr
              (ForPrefix
                (SuffixExpr
                  (IDENTIFIER))
                (PtrIndexPayload
                  (IDENTIFIER)
                  (IDENTIFIER)))
              (SuffixExpr
                (IDENTIFIER)))))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp))
            (CompareOp)
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (AdditionOp)
              (SuffixExpr
                (INTEGER)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
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
      (INTEGER))
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER)))))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (IDENTIFIER))))(SuffixExpr
  (BuildinTypeExpr))(InitList
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (INTEGER))))))))))
