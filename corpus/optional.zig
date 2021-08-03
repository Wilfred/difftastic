================================================================================
optional
================================================================================

    const std = @import("std");
const testing = std.testing;
const expect = testing.expect;
const expectEqual = testing.expectEqual;

pub const EmptyStruct = struct {};

test "optional pointer to size zero struct" {
    var e = EmptyStruct{};
    var o: ?*EmptyStruct = &e;
    expect(o != null);
}

test "equality compare nullable pointers" {
    testNullPtrsEql();
    comptime testNullPtrsEql();
}

fn testNullPtrsEql() void {
    var number: i32 = 1234;

    var x: ?*i32 = null;
    var y: ?*i32 = null;
    expect(x == y);
    y = &number;
    expect(x != y);
    expect(x != &number);
    expect(&number != x);
    x = &number;
    expect(x == y);
    expect(x == &number);
    expect(&number == x);
}

test "address of unwrap optional" {
    const S = struct {
        const Foo = struct {
            a: i32,
        };

        var global: ?Foo = null;

        pub fn getFoo() anyerror!*Foo {
            return &global.?;
        }
    };
    S.global = S.Foo{ .a = 1234 };
    const foo = S.getFoo() catch unreachable;
    expect(foo.a == 1234);
}

test "equality compare optional with non-optional" {
    test_cmp_optional_non_optional();
    comptime test_cmp_optional_non_optional();
}

fn test_cmp_optional_non_optional() void {
    var ten: i32 = 10;
    var opt_ten: ?i32 = 10;
    var five: i32 = 5;
    var int_n: ?i32 = null;

    expect(int_n != ten);
    expect(opt_ten == ten);
    expect(opt_ten != five);

    // test evaluation is always lexical
    // ensure that the optional isn't always computed before the non-optional
    var mutable_state: i32 = 0;
    _ = blk1: {
        mutable_state += 1;
        break :blk1 @as(?f64, 10.0);
    } != blk2: {
        expect(mutable_state == 1);
        break :blk2 @as(f64, 5.0);
    };
    _ = blk1: {
        mutable_state += 1;
        break :blk1 @as(f64, 10.0);
    } != blk2: {
        expect(mutable_state == 2);
        break :blk2 @as(?f64, 5.0);
    };
}

test "passing an optional integer as a parameter" {
    const S = struct {
        fn entry() bool {
            var x: i32 = 1234;
            return foo(x);
        }

        fn foo(x: ?i32) bool {
            return x.? == 1234;
        }
    };
    expect(S.entry());
    comptime expect(S.entry());
}

test "unwrap function call with optional pointer return value" {
    const S = struct {
        fn entry() void {
            expect(foo().?.* == 1234);
            expect(bar() == null);
        }
        const global: i32 = 1234;
        fn foo() ?*const i32 {
            return &global;
        }
        fn bar() ?*i32 {
            return null;
        }
    };
    S.entry();
    comptime S.entry();
}

test "nested orelse" {
    const S = struct {
        fn entry() void {
            expect(func() == null);
        }
        fn maybe() ?Foo {
            return null;
        }
        fn func() ?Foo {
            const x = maybe() orelse
                maybe() orelse
                return null;
            unreachable;
        }
        const Foo = struct {
            field: i32,
        };
    };
    S.entry();
    comptime S.entry();
}

test "self-referential struct through a slice of optional" {
    const S = struct {
        const Node = struct {
            children: []?Node,
            data: ?u8,

            fn new() Node {
                return Node{
                    .children = undefined,
                    .data = null,
                };
            }
        };
    };

    var n = S.Node.new();
    expect(n.data == null);
}

test "assigning to an unwrapped optional field in an inline loop" {
    comptime var maybe_pos_arg: ?comptime_int = null;
    inline for ("ab") |x| {
        maybe_pos_arg = 0;
        if (maybe_pos_arg.? != 0) {
            @compileError("bad");
        }
        maybe_pos_arg.? = 10;
    }
}

test "coerce an anon struct literal to optional struct" {
    const S = struct {
        const Struct = struct {
            field: u32,
        };
        export fn doTheTest() void {
            var maybe_dims: ?Struct = null;
            maybe_dims = .{ .field = 1 };
            expect(maybe_dims.?.field == 1);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "optional with void type" {
    const Foo = struct {
        x: ?void,
    };
    var x = Foo{ .x = null };
    expect(x.x == null);
}

test "0-bit child type coerced to optional return ptr result location" {
    const S = struct {
        fn doTheTest() void {
            var y = Foo{};
            var z = y.thing();
            expect(z != null);
        }

        const Foo = struct {
            pub const Bar = struct {
                field: *Foo,
            };

            pub fn thing(self: *Foo) ?Bar {
                return Bar{ .field = self };
            }
        };
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "0-bit child type coerced to optional" {
    const S = struct {
        fn doTheTest() void {
            var it: Foo = .{
                .list = undefined,
            };
            expect(it.foo() != null);
        }

        const Empty = struct {};
        const Foo = struct {
            list: [10]Empty,

            fn foo(self: *Foo) ?*Empty {
                const data = &self.list[0];
                return data;
            }
        };
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "array of optional unaligned types" {
    const Enum = enum { one, two, three };

    const SomeUnion = union(enum) {
        Num: Enum,
        Other: u32,
    };

    const values = [_]?SomeUnion{
        SomeUnion{ .Num = .one },
        SomeUnion{ .Num = .two },
        SomeUnion{ .Num = .three },
        SomeUnion{ .Num = .one },
        SomeUnion{ .Num = .two },
        SomeUnion{ .Num = .three },
    };

    // The index must be a runtime value
    var i: usize = 0;
    expectEqual(Enum.one, values[i].?.Num);
    i += 1;
    expectEqual(Enum.two, values[i].?.Num);
    i += 1;
    expectEqual(Enum.three, values[i].?.Num);
    i += 1;
    expectEqual(Enum.one, values[i].?.Num);
    i += 1;
    expectEqual(Enum.two, values[i].?.Num);
    i += 1;
    expectEqual(Enum.three, values[i].?.Num);
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
      (ContainerDecl
        (ContainerDeclType))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (InitList))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (IDENTIFIER))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr)))))))(TestDecl
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp)
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp)
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (UnaryExpr (PrefixOp)
    (SuffixExpr
      (IDENTIFIER))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER)))
    (CompareOp)
    (SuffixExpr
      (IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (SuffixExpr
    (IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr
  (SuffixExpr
    (IDENTIFIER))
  (CompareOp)
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(UnaryExpr (PrefixOp)(SuffixExpr
  (IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr
  (IDENTIFIER))(SuffixExpr))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr))(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (IDENTIFIER)))(Block(AssignExpr
  (BinaryExpr
    (BitwiseOp)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments))(BitwiseOp)(SuffixExpr)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))(CompareOp)(SuffixExpr
  (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(IDENTIFIER))))))(line_comment)(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(BinaryExpr(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (BreakLabel
    (IDENTIFIER))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (FLOAT))))))))(CompareOp)(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (BreakLabel
    (IDENTIFIER))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (FLOAT))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(BinaryExpr(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (BreakLabel
    (IDENTIFIER))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (FLOAT))))))))(CompareOp)(SuffixExpr(LabeledTypeExpr(BlockLabel(IDENTIFIER))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (BreakLabel
    (IDENTIFIER))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (FLOAT)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (PrefixTypeOp)
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp))
    (CompareOp)
    (SuffixExpr
      (INTEGER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments)))))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))
        (ERROR)
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))
        (CompareOp)
        (SuffixExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (INTEGER)))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (BinaryExpr
    (BitwiseOp)
    (SuffixExpr
      (IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(PrefixTypeOp
  (PtrTypeStart))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments))
        (CompareOp)
        (SuffixExpr))))))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(SuffixExpr
  (IDENTIFIER)))(Block(AssignExpr
  (SuffixExpr)))(FnProto(IDENTIFIER)(ParamDeclList)(PrefixTypeOp)(SuffixExpr
  (IDENTIFIER)))(Block(VarDecl
  (IDENTIFIER)
  (BinaryExpr
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments))
      (BitwiseOp)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments)))
    (BitwiseOp)
    (SuffixExpr)))(AssignExpr
  (SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER)
      (PrefixTypeOp
        (SliceTypeStart))
      (PrefixTypeOp)
      (SuffixExpr
        (IDENTIFIER)))
    (ContainerField
      (IDENTIFIER)
      (PrefixTypeOp)
      (SuffixExpr
        (BuildinTypeExpr)))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList)
      (SuffixExpr
        (IDENTIFIER)))
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))(CompareOp)(SuffixExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr))(LabeledStatement(LoopStatement(ForStatement(ForPrefix(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))(PtrIndexPayload
  (IDENTIFIER)))(BlockExpr(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER))
    (AssignOp)
    (SuffixExpr
      (INTEGER)))
  (IfStatement
    (IfPrefix
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp))
    (AssignOp)
    (SuffixExpr
      (INTEGER))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp)
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr
    (InitList
      (FieldInit
        (IDENTIFIER)
        (SuffixExpr
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp)
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp)(SuffixExpr
  (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(BinaryExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER)))(CompareOp)(SuffixExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER))
  (InitList))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (ContainerField
            (IDENTIFIER)
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (IDENTIFIER))))))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList
        (ParamDecl
          (IDENTIFIER)
          (ParamType
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (IDENTIFIER)))))
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
              (IDENTIFIER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr
  (BuildinTypeExpr)))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr
    (InitList
      (FieldInit
        (IDENTIFIER)
        (SuffixExpr)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments))
        (CompareOp)
        (SuffixExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER)
      (PrefixTypeOp
        (ArrayTypeStart
          (SuffixExpr
            (INTEGER))))
      (SuffixExpr
        (IDENTIFIER)))
    (FnProto
      (IDENTIFIER)
      (ParamDeclList
        (ParamDecl
          (IDENTIFIER)
          (ParamType
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (IDENTIFIER)))))
      (PrefixTypeOp)
      (PrefixTypeOp
        (PtrTypeStart))
      (SuffixExpr
        (IDENTIFIER)))
    (Block
      (VarDecl
        (IDENTIFIER)
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments)))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER))(ContainerField(IDENTIFIER)))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(PrefixTypeOp)(SuffixExpr(IDENTIFIER))(InitList(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER))))))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER)))(SuffixOp)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER)))(SuffixOp)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER)))(SuffixOp)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER)))(SuffixOp)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER)))(SuffixOp)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(SuffixExpr
  (IDENTIFIER)))(SuffixOp)(SuffixOp(IDENTIFIER)))))))))
