================================================================================
type
================================================================================

    const builtin = @import("builtin");
const TypeInfo = builtin.TypeInfo;

const std = @import("std");
const testing = std.testing;

fn testTypes(comptime types: []const type) void {
    inline for (types) |testType| {
        testing.expect(testType == @Type(@typeInfo(testType)));
    }
}

test "Type.MetaType" {
    testing.expect(type == @Type(TypeInfo{ .Type = undefined }));
    testTypes(&[_]type{type});
}

test "Type.Void" {
    testing.expect(void == @Type(TypeInfo{ .Void = undefined }));
    testTypes(&[_]type{void});
}

test "Type.Bool" {
    testing.expect(bool == @Type(TypeInfo{ .Bool = undefined }));
    testTypes(&[_]type{bool});
}

test "Type.NoReturn" {
    testing.expect(noreturn == @Type(TypeInfo{ .NoReturn = undefined }));
    testTypes(&[_]type{noreturn});
}

test "Type.Int" {
    testing.expect(u1 == @Type(TypeInfo{ .Int = TypeInfo.Int{ .signedness = .unsigned, .bits = 1 } }));
    testing.expect(i1 == @Type(TypeInfo{ .Int = TypeInfo.Int{ .signedness = .signed, .bits = 1 } }));
    testing.expect(u8 == @Type(TypeInfo{ .Int = TypeInfo.Int{ .signedness = .unsigned, .bits = 8 } }));
    testing.expect(i8 == @Type(TypeInfo{ .Int = TypeInfo.Int{ .signedness = .signed, .bits = 8 } }));
    testing.expect(u64 == @Type(TypeInfo{ .Int = TypeInfo.Int{ .signedness = .unsigned, .bits = 64 } }));
    testing.expect(i64 == @Type(TypeInfo{ .Int = TypeInfo.Int{ .signedness = .signed, .bits = 64 } }));
    testTypes(&[_]type{ u8, u32, i64 });
}

test "Type.Float" {
    testing.expect(f16 == @Type(TypeInfo{ .Float = TypeInfo.Float{ .bits = 16 } }));
    testing.expect(f32 == @Type(TypeInfo{ .Float = TypeInfo.Float{ .bits = 32 } }));
    testing.expect(f64 == @Type(TypeInfo{ .Float = TypeInfo.Float{ .bits = 64 } }));
    testing.expect(f128 == @Type(TypeInfo{ .Float = TypeInfo.Float{ .bits = 128 } }));
    testTypes(&[_]type{ f16, f32, f64, f128 });
}

test "Type.Pointer" {
    testTypes(&[_]type{
        // One Value Pointer Types
        *u8,                               *const u8,
        *volatile u8,                      *const volatile u8,
        *align(4) u8,                      *align(4) const u8,
        *align(4) volatile u8,             *align(4) const volatile u8,
        *align(8) u8,                      *align(8) const u8,
        *align(8) volatile u8,             *align(8) const volatile u8,
        *allowzero u8,                     *allowzero const u8,
        *allowzero volatile u8,            *allowzero const volatile u8,
        *allowzero align(4) u8,            *allowzero align(4) const u8,
        *allowzero align(4) volatile u8,   *allowzero align(4) const volatile u8,
        // Many Values Pointer Types
        [*]u8,                             [*]const u8,
        [*]volatile u8,                    [*]const volatile u8,
        [*]align(4) u8,                    [*]align(4) const u8,
        [*]align(4) volatile u8,           [*]align(4) const volatile u8,
        [*]align(8) u8,                    [*]align(8) const u8,
        [*]align(8) volatile u8,           [*]align(8) const volatile u8,
        [*]allowzero u8,                   [*]allowzero const u8,
        [*]allowzero volatile u8,          [*]allowzero const volatile u8,
        [*]allowzero align(4) u8,          [*]allowzero align(4) const u8,
        [*]allowzero align(4) volatile u8, [*]allowzero align(4) const volatile u8,
        // Slice Types
        []u8,                              []const u8,
        []volatile u8,                     []const volatile u8,
        []align(4) u8,                     []align(4) const u8,
        []align(4) volatile u8,            []align(4) const volatile u8,
        []align(8) u8,                     []align(8) const u8,
        []align(8) volatile u8,            []align(8) const volatile u8,
        []allowzero u8,                    []allowzero const u8,
        []allowzero volatile u8,           []allowzero const volatile u8,
        []allowzero align(4) u8,           []allowzero align(4) const u8,
        []allowzero align(4) volatile u8,  []allowzero align(4) const volatile u8,
        // C Pointer Types
        [*c]u8,                            [*c]const u8,
        [*c]volatile u8,                   [*c]const volatile u8,
        [*c]align(4) u8,                   [*c]align(4) const u8,
        [*c]align(4) volatile u8,          [*c]align(4) const volatile u8,
        [*c]align(8) u8,                   [*c]align(8) const u8,
        [*c]align(8) volatile u8,          [*c]align(8) const volatile u8,
    });
}

test "Type.Array" {
    testing.expect([123]u8 == @Type(TypeInfo{
        .Array = TypeInfo.Array{
            .len = 123,
            .child = u8,
            .sentinel = null,
        },
    }));
    testing.expect([2]u32 == @Type(TypeInfo{
        .Array = TypeInfo.Array{
            .len = 2,
            .child = u32,
            .sentinel = null,
        },
    }));
    testing.expect([2:0]u32 == @Type(TypeInfo{
        .Array = TypeInfo.Array{
            .len = 2,
            .child = u32,
            .sentinel = 0,
        },
    }));
    testTypes(&[_]type{ [1]u8, [30]usize, [7]bool });
}

test "Type.ComptimeFloat" {
    testTypes(&[_]type{comptime_float});
}
test "Type.ComptimeInt" {
    testTypes(&[_]type{comptime_int});
}
test "Type.Undefined" {
    testTypes(&[_]type{@TypeOf(undefined)});
}
test "Type.Null" {
    testTypes(&[_]type{@TypeOf(null)});
}
test "@Type create slice with null sentinel" {
    const Slice = @Type(builtin.TypeInfo{
        .Pointer = .{
            .size = .Slice,
            .is_const = true,
            .is_volatile = false,
            .is_allowzero = false,
            .alignment = 8,
            .child = *i32,
            .sentinel = null,
        },
    });
    testing.expect(Slice == []align(8) const *i32);
}
test "@Type picks up the sentinel value from TypeInfo" {
    testTypes(&[_]type{
        [11:0]u8,                            [4:10]u8,
        [*:0]u8,                             [*:0]const u8,
        [*:0]volatile u8,                    [*:0]const volatile u8,
        [*:0]align(4) u8,                    [*:0]align(4) const u8,
        [*:0]align(4) volatile u8,           [*:0]align(4) const volatile u8,
        [*:0]align(8) u8,                    [*:0]align(8) const u8,
        [*:0]align(8) volatile u8,           [*:0]align(8) const volatile u8,
        [*:0]allowzero u8,                   [*:0]allowzero const u8,
        [*:0]allowzero volatile u8,          [*:0]allowzero const volatile u8,
        [*:0]allowzero align(4) u8,          [*:0]allowzero align(4) const u8,
        [*:0]allowzero align(4) volatile u8, [*:0]allowzero align(4) const volatile u8,
        [*:5]allowzero align(4) volatile u8, [*:5]allowzero align(4) const volatile u8,
        [:0]u8,                              [:0]const u8,
        [:0]volatile u8,                     [:0]const volatile u8,
        [:0]align(4) u8,                     [:0]align(4) const u8,
        [:0]align(4) volatile u8,            [:0]align(4) const volatile u8,
        [:0]align(8) u8,                     [:0]align(8) const u8,
        [:0]align(8) volatile u8,            [:0]align(8) const volatile u8,
        [:0]allowzero u8,                    [:0]allowzero const u8,
        [:0]allowzero volatile u8,           [:0]allowzero const volatile u8,
        [:0]allowzero align(4) u8,           [:0]allowzero align(4) const u8,
        [:0]allowzero align(4) volatile u8,  [:0]allowzero align(4) const volatile u8,
        [:4]allowzero align(4) volatile u8,  [:4]allowzero align(4) const volatile u8,
    });
}

test "Type.Optional" {
    testTypes(&[_]type{
        ?u8,
        ?*u8,
        ?[]u8,
        ?[*]u8,
        ?[*c]u8,
    });
}

test "Type.ErrorUnion" {
    testTypes(&[_]type{
        error{}!void,
        error{Error}!void,
    });
}

test "Type.Opaque" {
    const Opaque = @Type(.{
        .Opaque = .{
            .decls = &[_]TypeInfo.Declaration{},
        },
    });
    testing.expect(Opaque != opaque {});
    testing.expectEqualSlices(
        TypeInfo.Declaration,
        &[_]TypeInfo.Declaration{},
        @typeInfo(Opaque).Opaque.decls,
    );
}

test "Type.Vector" {
    testTypes(&[_]type{
        @Vector(0, u8),
        @Vector(4, u8),
        @Vector(8, *u8),
        std.meta.Vector(0, u8),
        std.meta.Vector(4, u8),
        std.meta.Vector(8, *u8),
    });
}

test "Type.AnyFrame" {
    testTypes(&[_]type{
        anyframe,
        anyframe->u8,
        anyframe->anyframe->u8,
    });
}

test "Type.EnumLiteral" {
    testTypes(&[_]type{
        @TypeOf(.Dummy),
    });
}

fn add(a: i32, b: i32) i32 {
    return a + b;
}

test "Type.Frame" {
    testTypes(&[_]type{
        @Frame(add),
    });
}

test "Type.ErrorSet" {
    // error sets don't compare equal so just check if they compile
    _ = @Type(@typeInfo(error{}));
    _ = @Type(@typeInfo(error{A}));
    _ = @Type(@typeInfo(error{ A, B, C }));
}

test "Type.Struct" {
    const A = @Type(@typeInfo(struct { x: u8, y: u32 }));
    const infoA = @typeInfo(A).Struct;
    testing.expectEqual(TypeInfo.ContainerLayout.Auto, infoA.layout);
    testing.expectEqualSlices(u8, "x", infoA.fields[0].name);
    testing.expectEqual(u8, infoA.fields[0].field_type);
    testing.expectEqual(@as(?u8, null), infoA.fields[0].default_value);
    testing.expectEqualSlices(u8, "y", infoA.fields[1].name);
    testing.expectEqual(u32, infoA.fields[1].field_type);
    testing.expectEqual(@as(?u32, null), infoA.fields[1].default_value);
    testing.expectEqualSlices(TypeInfo.Declaration, &[_]TypeInfo.Declaration{}, infoA.decls);
    testing.expectEqual(@as(bool, false), infoA.is_tuple);

    var a = A{ .x = 0, .y = 1 };
    testing.expectEqual(@as(u8, 0), a.x);
    testing.expectEqual(@as(u32, 1), a.y);
    a.y += 1;
    testing.expectEqual(@as(u32, 2), a.y);

    const B = @Type(@typeInfo(extern struct { x: u8, y: u32 = 5 }));
    const infoB = @typeInfo(B).Struct;
    testing.expectEqual(TypeInfo.ContainerLayout.Extern, infoB.layout);
    testing.expectEqualSlices(u8, "x", infoB.fields[0].name);
    testing.expectEqual(u8, infoB.fields[0].field_type);
    testing.expectEqual(@as(?u8, null), infoB.fields[0].default_value);
    testing.expectEqualSlices(u8, "y", infoB.fields[1].name);
    testing.expectEqual(u32, infoB.fields[1].field_type);
    testing.expectEqual(@as(?u32, 5), infoB.fields[1].default_value);
    testing.expectEqual(@as(usize, 0), infoB.decls.len);
    testing.expectEqual(@as(bool, false), infoB.is_tuple);

    const C = @Type(@typeInfo(packed struct { x: u8 = 3, y: u32 = 5 }));
    const infoC = @typeInfo(C).Struct;
    testing.expectEqual(TypeInfo.ContainerLayout.Packed, infoC.layout);
    testing.expectEqualSlices(u8, "x", infoC.fields[0].name);
    testing.expectEqual(u8, infoC.fields[0].field_type);
    testing.expectEqual(@as(?u8, 3), infoC.fields[0].default_value);
    testing.expectEqualSlices(u8, "y", infoC.fields[1].name);
    testing.expectEqual(u32, infoC.fields[1].field_type);
    testing.expectEqual(@as(?u32, 5), infoC.fields[1].default_value);
    testing.expectEqual(@as(usize, 0), infoC.decls.len);
    testing.expectEqual(@as(bool, false), infoC.is_tuple);
}

test "Type.Enum" {
    const Foo = @Type(.{
        .Enum = .{
            .layout = .Auto,
            .tag_type = u8,
            .fields = &[_]TypeInfo.EnumField{
                .{ .name = "a", .value = 1 },
                .{ .name = "b", .value = 5 },
            },
            .decls = &[_]TypeInfo.Declaration{},
            .is_exhaustive = true,
        },
    });
    testing.expectEqual(true, @typeInfo(Foo).Enum.is_exhaustive);
    testing.expectEqual(@as(u8, 1), @enumToInt(Foo.a));
    testing.expectEqual(@as(u8, 5), @enumToInt(Foo.b));
    const Bar = @Type(.{
        .Enum = .{
            .layout = .Extern,
            .tag_type = u32,
            .fields = &[_]TypeInfo.EnumField{
                .{ .name = "a", .value = 1 },
                .{ .name = "b", .value = 5 },
            },
            .decls = &[_]TypeInfo.Declaration{},
            .is_exhaustive = false,
        },
    });
    testing.expectEqual(false, @typeInfo(Bar).Enum.is_exhaustive);
    testing.expectEqual(@as(u32, 1), @enumToInt(Bar.a));
    testing.expectEqual(@as(u32, 5), @enumToInt(Bar.b));
    testing.expectEqual(@as(u32, 6), @enumToInt(@intToEnum(Bar, 6)));
}

test "Type.Union" {
    const Untagged = @Type(.{
        .Union = .{
            .layout = .Auto,
            .tag_type = null,
            .fields = &[_]TypeInfo.UnionField{
                .{ .name = "int", .field_type = i32, .alignment = @alignOf(f32) },
                .{ .name = "float", .field_type = f32, .alignment = @alignOf(f32) },
            },
            .decls = &[_]TypeInfo.Declaration{},
        },
    });
    var untagged = Untagged{ .int = 1 };
    untagged.float = 2.0;
    untagged.int = 3;
    testing.expectEqual(@as(i32, 3), untagged.int);

    const PackedUntagged = @Type(.{
        .Union = .{
            .layout = .Packed,
            .tag_type = null,
            .fields = &[_]TypeInfo.UnionField{
                .{ .name = "signed", .field_type = i32, .alignment = @alignOf(i32) },
                .{ .name = "unsigned", .field_type = u32, .alignment = @alignOf(u32) },
            },
            .decls = &[_]TypeInfo.Declaration{},
        },
    });
    var packed_untagged = PackedUntagged{ .signed = -1 };
    testing.expectEqual(@as(i32, -1), packed_untagged.signed);
    testing.expectEqual(~@as(u32, 0), packed_untagged.unsigned);

    const Tag = @Type(.{
        .Enum = .{
            .layout = .Auto,
            .tag_type = u1,
            .fields = &[_]TypeInfo.EnumField{
                .{ .name = "signed", .value = 0 },
                .{ .name = "unsigned", .value = 1 },
            },
            .decls = &[_]TypeInfo.Declaration{},
            .is_exhaustive = true,
        },
    });
    const Tagged = @Type(.{
        .Union = .{
            .layout = .Auto,
            .tag_type = Tag,
            .fields = &[_]TypeInfo.UnionField{
                .{ .name = "signed", .field_type = i32, .alignment = @alignOf(i32) },
                .{ .name = "unsigned", .field_type = u32, .alignment = @alignOf(u32) },
            },
            .decls = &[_]TypeInfo.Declaration{},
        },
    });
    var tagged = Tagged{ .signed = -1 };
    testing.expectEqual(Tag.signed, tagged);
    tagged = .{ .unsigned = 1 };
    testing.expectEqual(Tag.unsigned, tagged);
}

test "Type.Union from Type.Enum" {
    const Tag = @Type(.{
        .Enum = .{
            .layout = .Auto,
            .tag_type = u0,
            .fields = &[_]TypeInfo.EnumField{
                .{ .name = "working_as_expected", .value = 0 },
            },
            .decls = &[_]TypeInfo.Declaration{},
            .is_exhaustive = true,
        },
    });
    const T = @Type(.{
        .Union = .{
            .layout = .Auto,
            .tag_type = Tag,
            .fields = &[_]TypeInfo.UnionField{
                .{ .name = "working_as_expected", .field_type = u32, .alignment = @alignOf(u32) },
            },
            .decls = &[_]TypeInfo.Declaration{},
        },
    });
    _ = T;
    _ = @typeInfo(T).Union;
}

test "Type.Union from regular enum" {
    const E = enum { working_as_expected = 0 };
    const T = @Type(.{
        .Union = .{
            .layout = .Auto,
            .tag_type = E,
            .fields = &[_]TypeInfo.UnionField{
                .{ .name = "working_as_expected", .field_type = u32, .alignment = @alignOf(u32) },
            },
            .decls = &[_]TypeInfo.Declaration{},
        },
    });
    _ = T;
    _ = @typeInfo(T).Union;
}

test "Type.Fn" {
    // wasm doesn't support align attributes on functions
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    const foo = struct {
        fn func(a: usize, b: bool) align(4) callconv(.C) usize {
            return 0;
        }
    }.func;
    const Foo = @Type(@typeInfo(@TypeOf(foo)));
    const foo_2: Foo = foo;
}

test "Type.BoundFn" {
    // wasm doesn't support align attributes on functions
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;

    const TestStruct = packed struct {
        pub fn foo(self: *const @This()) align(4) callconv(.Unspecified) void {}
    };
    const test_instance: TestStruct = undefined;
    testing.expect(std.meta.eql(
        @typeName(@TypeOf(test_instance.foo)),
        @typeName(@Type(@typeInfo(@TypeOf(test_instance.foo)))),
    ));
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
                    (IDENTIFIER))
                  (FnCallArguments
                    (BinaryExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (CompareOp)
                      (SuffixExpr
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (BUILTINIDENTIFIER)
                            (FnCallArguments
                              (SuffixExpr
                                (IDENTIFIER))))))))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BuildinTypeExpr))
              (CompareOp)
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (InitList
                    (FieldInit
                      (IDENTIFIER)
                      (SuffixExpr)))))))))
      (AssignExpr
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
                (BuildinTypeExpr)))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (BuildinTypeExpr))
            (CompareOp)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr)))))))))
    (AssignExpr
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
              (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (BuildinTypeExpr))
          (CompareOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr)))))))))
  (AssignExpr
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
            (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (BuildinTypeExpr))
        (CompareOp)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr)))))))))(AssignExpr
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
          (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BuildinTypeExpr))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (InitList
            (FieldInit
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BuildinTypeExpr))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (InitList
            (FieldInit
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BuildinTypeExpr))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (InitList
            (FieldInit
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BuildinTypeExpr))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (InitList
            (FieldInit
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BuildinTypeExpr))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (InitList
            (FieldInit
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER))))))))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BuildinTypeExpr))
      (CompareOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
          (InitList
            (FieldInit
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER)))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (FieldInit
                  (IDENTIFIER)
                  (SuffixExpr
                    (INTEGER))))))))))))(AssignExpr(SuffixExpr
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
        (BuildinTypeExpr))
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (BuildinTypeExpr))
    (CompareOp)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (BuildinTypeExpr))
    (CompareOp)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (BuildinTypeExpr))
    (CompareOp)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp
  (IDENTIFIER))(FnCallArguments
  (BinaryExpr
    (SuffixExpr
      (BuildinTypeExpr))
    (CompareOp)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (InitList
              (FieldInit
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (UnaryExpr (PrefixOp)
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (InitList
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (IDENTIFIER))))(SuffixExpr
  (BuildinTypeExpr))(InitList
  (line_comment)
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (line_comment)
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (line_comment)
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (SliceTypeStart)
    (ByteAlign
      (SuffixExpr
        (INTEGER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (line_comment)
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr))
  (PrefixTypeOp
    (PtrTypeStart)
    (SuffixExpr
      (INTEGER)))
  (SuffixExpr
    (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(CompareOp)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER))
    (InitList
      (FieldInit
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(CompareOp)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER))
    (InitList
      (FieldInit
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(CompareOp)(SuffixExpr
  (BUILTINIDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER))
    (InitList
      (FieldInit
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr)))
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr))(FieldInit(IDENTIFIER)(SuffixExpr))(FieldInit(IDENTIFIER)(SuffixExpr))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr)))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(PrefixTypeOp(SliceTypeStart)(ByteAlign(SuffixExpr(INTEGER))))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(PtrTypeStart(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp(SliceTypeStart(SuffixExpr(INTEGER)))(ByteAlign(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(SliceTypeStart))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER(MISSING "IDENTIFIER_token1")))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(BinaryExpr(SuffixExpr(IDENTIFIER))(CompareOp)(SuffixExpr(ContainerDecl(ContainerDeclType)))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(INTEGER))(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(PrefixTypeOp)(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(BinaryExpr(SuffixExpr(IDENTIFIER))(AdditionOp)(SuffixExpr(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER(MISSING "IDENTIFIER_token1"))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER)))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ErrorSetDecl(IdentifierList(IDENTIFIER)(IDENTIFIER)(IDENTIFIER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))(ContainerField(IDENTIFIER)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(SuffixExpr(INTEGER)))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr)))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))(FieldInit(IDENTIFIER)(SuffixExpr))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))(FieldInit(IDENTIFIER)(SuffixExpr))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER))(SuffixExpr(INTEGER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(FLOAT)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(AssignOp)(SuffixExpr(INTEGER)))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER)))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))(FieldInit(IDENTIFIER)(SuffixExpr))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr)))))))(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(InitList(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(SuffixExpr(IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(INTEGER))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))(FieldInit(IDENTIFIER)(SuffixExpr))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(SuffixExpr(INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(SuffixExpr(IDENTIFIER)))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList(SuffixExpr(InitList(FieldInit(IDENTIFIER)(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(FieldInit(IDENTIFIER)(SuffixExpr(BuildinTypeExpr)))(FieldInit(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))))))))))(FieldInit(IDENTIFIER)(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(IDENTIFIER))))(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(InitList)))))))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(IDENTIFIER)))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))(SuffixOp(IDENTIFIER))))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(IfExpr(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr))))(ParamDecl(IDENTIFIER)(ParamType(SuffixExpr(BuildinTypeExpr)))))(ByteAlign(SuffixExpr(INTEGER)))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(INTEGER)))))(SuffixOp(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)))))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(line_comment)(AssignExpr(IfExpr(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments)))))(ByteAlign(SuffixExpr(INTEGER)))(CallConv(SuffixExpr(IDENTIFIER)))(SuffixExpr(BuildinTypeExpr)))(Block))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER)))))))))))))))))))
