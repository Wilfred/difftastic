================================================================================
bitcast
================================================================================

    const std = @import("std");
const builtin = @import("builtin");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;
const maxInt = std.math.maxInt;

test "@bitCast i32 -> u32" {
    testBitCast_i32_u32();
    comptime testBitCast_i32_u32();
}

fn testBitCast_i32_u32() void {
    expect(conv(-1) == maxInt(u32));
    expect(conv2(maxInt(u32)) == -1);
}

fn conv(x: i32) u32 {
    return @bitCast(u32, x);
}
fn conv2(x: u32) i32 {
    return @bitCast(i32, x);
}

test "@bitCast extern enum to its integer type" {
    const SOCK = extern enum {
        A,
        B,

        fn testBitCastExternEnum() void {
            var SOCK_DGRAM = @This().B;
            var sock_dgram = @bitCast(c_int, SOCK_DGRAM);
            expect(sock_dgram == 1);
        }
    };

    SOCK.testBitCastExternEnum();
    comptime SOCK.testBitCastExternEnum();
}

test "@bitCast packed structs at runtime and comptime" {
    const Full = packed struct {
        number: u16,
    };
    const Divided = packed struct {
        half1: u8,
        quarter3: u4,
        quarter4: u4,
    };
    const S = struct {
        fn doTheTest() void {
            var full = Full{ .number = 0x1234 };
            var two_halves = @bitCast(Divided, full);
            switch (builtin.endian) {
                builtin.Endian.Big => {
                    expect(two_halves.half1 == 0x12);
                    expect(two_halves.quarter3 == 0x3);
                    expect(two_halves.quarter4 == 0x4);
                },
                builtin.Endian.Little => {
                    expect(two_halves.half1 == 0x34);
                    expect(two_halves.quarter3 == 0x2);
                    expect(two_halves.quarter4 == 0x1);
                },
            }
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "@bitCast extern structs at runtime and comptime" {
    const Full = extern struct {
        number: u16,
    };
    const TwoHalves = extern struct {
        half1: u8,
        half2: u8,
    };
    const S = struct {
        fn doTheTest() void {
            var full = Full{ .number = 0x1234 };
            var two_halves = @bitCast(TwoHalves, full);
            switch (builtin.endian) {
                builtin.Endian.Big => {
                    expect(two_halves.half1 == 0x12);
                    expect(two_halves.half2 == 0x34);
                },
                builtin.Endian.Little => {
                    expect(two_halves.half1 == 0x34);
                    expect(two_halves.half2 == 0x12);
                },
            }
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "bitcast packed struct to integer and back" {
    const LevelUpMove = packed struct {
        move_id: u9,
        level: u7,
    };
    const S = struct {
        fn doTheTest() void {
            var move = LevelUpMove{ .move_id = 1, .level = 2 };
            var v = @bitCast(u16, move);
            var back_to_a_move = @bitCast(LevelUpMove, v);
            expect(back_to_a_move.move_id == 1);
            expect(back_to_a_move.level == 2);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "implicit cast to error union by returning" {
    const S = struct {
        fn entry() void {
            expect((func(-1) catch unreachable) == maxInt(u64));
        }
        pub fn func(sz: i64) anyerror!u64 {
            return @bitCast(u64, sz);
        }
    };
    S.entry();
    comptime S.entry();
}

// issue #3010: compiler segfault
test "bitcast literal [4]u8 param to u32" {
    const ip = @bitCast(u32, [_]u8{ 255, 255, 255, 255 });
    expect(ip == maxInt(u32));
}

test "bitcast packed struct literal to byte" {
    const Foo = packed struct {
        value: u8,
    };
    const casted = @bitCast(u8, Foo{ .value = 0xF });
    expect(casted == 0xf);
}

test "comptime bitcast used in expression has the correct type" {
    const Foo = packed struct {
        value: u8,
    };
    expect(@bitCast(u8, Foo{ .value = 0xF }) == 0xf);
}

test "bitcast result to _" {
    _ = @bitCast(u8, @as(i8, 1));
}

test "nested bitcast" {
    const S = struct {
        fn moo(x: isize) void {
            @import("std").testing.expectEqual(@intCast(isize, 42), x);
        }

        fn foo(x: isize) void {
            @This().moo(
                @bitCast(isize, if (x != 0) @bitCast(usize, x) else @bitCast(usize, x)),
            );
        }
    };

    S.foo(42);
    comptime S.foo(42);
}

test "bitcast passed as tuple element" {
    const S = struct {
        fn foo(args: anytype) void {
            comptime expect(@TypeOf(args[0]) == f32);
            expect(args[0] == 12.34);
        }
    };
    S.foo(.{@bitCast(f32, @as(u32, 0x414570A4))});
}

test "triple level result location with bitcast sandwich passed as tuple element" {
    const S = struct {
        fn foo(args: anytype) void {
            comptime expect(@TypeOf(args[0]) == f64);
            expect(args[0] > 12.33 and args[0] < 12.35);
        }
    };
    S.foo(.{@as(f64, @bitCast(f32, @as(u32, 0x414570A4)))});
}

test "bitcast generates a temporary value" {
    var y = @as(u16, 0x55AA);
    const x = @bitCast(u16, @bitCast([2]u8, y));
    expectEqual(y, x);
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
                  (INTEGER)))))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))))))
          (CompareOp)
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER))
        (ContainerField
          (IDENTIFIER))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList)
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments)
              (SuffixOp
                (IDENTIFIER))))
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
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
                    (IDENTIFIER))
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
      (FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
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
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
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
                  (INTEGER)))))
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))
                (SuffixExpr
                  (IDENTIFIER)))))
          (SwitchExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (SwitchProngList
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER))
                      (SuffixOp
                        (IDENTIFIER)))))
                (AssignExpr
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
                              (IDENTIFIER)
                              (SuffixOp
                                (IDENTIFIER)))
                            (CompareOp)
                            (SuffixExpr
                              (INTEGER)))))))))
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER))
                      (SuffixOp
                        (IDENTIFIER)))))
                (AssignExpr
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
                              (IDENTIFIER)
                              (SuffixOp
                                (IDENTIFIER)))
                            (CompareOp)
                            (SuffixExpr
                              (INTEGER)))))))))))))))
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
      (FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
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
                  (INTEGER)))))
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))
                (SuffixExpr
                  (IDENTIFIER)))))
          (SwitchExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (SwitchProngList
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER))
                      (SuffixOp
                        (IDENTIFIER)))))
                (AssignExpr
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
                              (INTEGER)))))))))
              (SwitchProng
                (SwitchCase
                  (SwitchItem
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER))
                      (SuffixOp
                        (IDENTIFIER)))))
                (AssignExpr
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
                              (INTEGER)))))))))))))))
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
      (FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block
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
                  (INTEGER)))
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER)))))
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
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
                  (IDENTIFIER))
                (SuffixExpr
                  (IDENTIFIER)))))
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
                      (IDENTIFIER)))
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
      (FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block
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
                (BinaryExpr
                  (SuffixExpr
                    (GroupedExpr
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER)
                          (FnCallArguments
                            (UnaryExpr (PrefixOp)
                            (SuffixExpr
                              (INTEGER)))))
                      (BitwiseOp)
                      (SuffixExpr))))
                (CompareOp)
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr)))))))))
      (FnProto
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
          (BuildinTypeExpr)))
      (Block
        (AssignExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (IDENTIFIER)))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments)))))(line_comment)(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
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
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType)
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (IDENTIFIER))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
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
          (BuildinTypeExpr))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (IDENTIFIER))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER))))))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
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
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (IDENTIFIER))))))
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
            (FnCallArguments)
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
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
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (SuffixExpr
                            (IDENTIFIER))))
                      (SuffixExpr
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (SuffixExpr
                            (IDENTIFIER)))))))))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (INTEGER)))))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (INTEGER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType)
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
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))))))
                (CompareOp)
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
                  (FLOAT))))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (InitList
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (INTEGER)))))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType)
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
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))))))
                (CompareOp)
                (SuffixExpr
                  (BuildinTypeExpr))))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))))
                  (CompareOp)
                  (SuffixExpr
                    (FLOAT)))
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))))
                  (CompareOp)
                  (SuffixExpr
                    (FLOAT)))))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (InitList
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (INTEGER)))))))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER)))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))
      (SuffixExpr
        (IDENTIFIER))))))))
