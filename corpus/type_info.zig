================================================================================
type_info
================================================================================

    const std = @import("std");
const builtin = std.builtin;
const mem = std.mem;

const TypeInfo = builtin.TypeInfo;
const TypeId = builtin.TypeId;

const expect = std.testing.expect;
const expectEqualStrings = std.testing.expectEqualStrings;

test "type info: tag type, void info" {
    testBasic();
    comptime testBasic();
}

fn testBasic() void {
    expect(@TagType(TypeInfo) == TypeId);
    const void_info = @typeInfo(void);
    expect(void_info == TypeId.Void);
    expect(void_info.Void == {});
}

test "type info: integer, floating point type info" {
    testIntFloat();
    comptime testIntFloat();
}

fn testIntFloat() void {
    const u8_info = @typeInfo(u8);
    expect(u8_info == .Int);
    expect(u8_info.Int.signedness == .unsigned);
    expect(u8_info.Int.bits == 8);

    const f64_info = @typeInfo(f64);
    expect(f64_info == .Float);
    expect(f64_info.Float.bits == 64);
}

test "type info: pointer type info" {
    testPointer();
    comptime testPointer();
}

fn testPointer() void {
    const u32_ptr_info = @typeInfo(*u32);
    expect(u32_ptr_info == .Pointer);
    expect(u32_ptr_info.Pointer.size == TypeInfo.Pointer.Size.One);
    expect(u32_ptr_info.Pointer.is_const == false);
    expect(u32_ptr_info.Pointer.is_volatile == false);
    expect(u32_ptr_info.Pointer.alignment == @alignOf(u32));
    expect(u32_ptr_info.Pointer.child == u32);
    expect(u32_ptr_info.Pointer.sentinel == null);
}

test "type info: unknown length pointer type info" {
    testUnknownLenPtr();
    comptime testUnknownLenPtr();
}

fn testUnknownLenPtr() void {
    const u32_ptr_info = @typeInfo([*]const volatile f64);
    expect(u32_ptr_info == .Pointer);
    expect(u32_ptr_info.Pointer.size == TypeInfo.Pointer.Size.Many);
    expect(u32_ptr_info.Pointer.is_const == true);
    expect(u32_ptr_info.Pointer.is_volatile == true);
    expect(u32_ptr_info.Pointer.sentinel == null);
    expect(u32_ptr_info.Pointer.alignment == @alignOf(f64));
    expect(u32_ptr_info.Pointer.child == f64);
}

test "type info: null terminated pointer type info" {
    testNullTerminatedPtr();
    comptime testNullTerminatedPtr();
}

fn testNullTerminatedPtr() void {
    const ptr_info = @typeInfo([*:0]u8);
    expect(ptr_info == .Pointer);
    expect(ptr_info.Pointer.size == TypeInfo.Pointer.Size.Many);
    expect(ptr_info.Pointer.is_const == false);
    expect(ptr_info.Pointer.is_volatile == false);
    expect(ptr_info.Pointer.sentinel.? == 0);

    expect(@typeInfo([:0]u8).Pointer.sentinel != null);
}

test "type info: C pointer type info" {
    testCPtr();
    comptime testCPtr();
}

fn testCPtr() void {
    const ptr_info = @typeInfo([*c]align(4) const i8);
    expect(ptr_info == .Pointer);
    expect(ptr_info.Pointer.size == .C);
    expect(ptr_info.Pointer.is_const);
    expect(!ptr_info.Pointer.is_volatile);
    expect(ptr_info.Pointer.alignment == 4);
    expect(ptr_info.Pointer.child == i8);
}

test "type info: slice type info" {
    testSlice();
    comptime testSlice();
}

fn testSlice() void {
    const u32_slice_info = @typeInfo([]u32);
    expect(u32_slice_info == .Pointer);
    expect(u32_slice_info.Pointer.size == .Slice);
    expect(u32_slice_info.Pointer.is_const == false);
    expect(u32_slice_info.Pointer.is_volatile == false);
    expect(u32_slice_info.Pointer.alignment == 4);
    expect(u32_slice_info.Pointer.child == u32);
}

test "type info: array type info" {
    testArray();
    comptime testArray();
}

fn testArray() void {
    {
        const info = @typeInfo([42]u8);
        expect(info == .Array);
        expect(info.Array.len == 42);
        expect(info.Array.child == u8);
        expect(info.Array.sentinel == null);
    }

    {
        const info = @typeInfo([10:0]u8);
        expect(info.Array.len == 10);
        expect(info.Array.child == u8);
        expect(info.Array.sentinel.? == @as(u8, 0));
        expect(@sizeOf([10:0]u8) == info.Array.len + 1);
    }
}

test "type info: optional type info" {
    testOptional();
    comptime testOptional();
}

fn testOptional() void {
    const null_info = @typeInfo(?void);
    expect(null_info == .Optional);
    expect(null_info.Optional.child == void);
}

test "type info: error set, error union info" {
    testErrorSet();
    comptime testErrorSet();
}

fn testErrorSet() void {
    const TestErrorSet = error{
        First,
        Second,
        Third,
    };

    const error_set_info = @typeInfo(TestErrorSet);
    expect(error_set_info == .ErrorSet);
    expect(error_set_info.ErrorSet.?.len == 3);
    expect(mem.eql(u8, error_set_info.ErrorSet.?[0].name, "First"));

    const error_union_info = @typeInfo(TestErrorSet!usize);
    expect(error_union_info == .ErrorUnion);
    expect(error_union_info.ErrorUnion.error_set == TestErrorSet);
    expect(error_union_info.ErrorUnion.payload == usize);

    const global_info = @typeInfo(anyerror);
    expect(global_info == .ErrorSet);
    expect(global_info.ErrorSet == null);
}

test "type info: enum info" {
    testEnum();
    comptime testEnum();
}

fn testEnum() void {
    const Os = enum {
        Windows,
        Macos,
        Linux,
        FreeBSD,
    };

    const os_info = @typeInfo(Os);
    expect(os_info == .Enum);
    expect(os_info.Enum.layout == .Auto);
    expect(os_info.Enum.fields.len == 4);
    expect(mem.eql(u8, os_info.Enum.fields[1].name, "Macos"));
    expect(os_info.Enum.fields[3].value == 3);
    expect(os_info.Enum.tag_type == u2);
    expect(os_info.Enum.decls.len == 0);
}

test "type info: union info" {
    testUnion();
    comptime testUnion();
}

fn testUnion() void {
    const typeinfo_info = @typeInfo(TypeInfo);
    expect(typeinfo_info == .Union);
    expect(typeinfo_info.Union.layout == .Auto);
    expect(typeinfo_info.Union.tag_type.? == TypeId);
    expect(typeinfo_info.Union.fields.len == 25);
    expect(typeinfo_info.Union.fields[4].field_type == @TypeOf(@typeInfo(u8).Int));
    expect(typeinfo_info.Union.decls.len == 22);

    const TestNoTagUnion = union {
        Foo: void,
        Bar: u32,
    };

    const notag_union_info = @typeInfo(TestNoTagUnion);
    expect(notag_union_info == .Union);
    expect(notag_union_info.Union.tag_type == null);
    expect(notag_union_info.Union.layout == .Auto);
    expect(notag_union_info.Union.fields.len == 2);
    expect(notag_union_info.Union.fields[0].alignment == @alignOf(void));
    expect(notag_union_info.Union.fields[1].field_type == u32);
    expect(notag_union_info.Union.fields[1].alignment == @alignOf(u32));

    const TestExternUnion = extern union {
        foo: *c_void,
    };

    const extern_union_info = @typeInfo(TestExternUnion);
    expect(extern_union_info.Union.layout == .Extern);
    expect(extern_union_info.Union.tag_type == null);
    expect(extern_union_info.Union.fields[0].field_type == *c_void);
}

test "type info: struct info" {
    testStruct();
    comptime testStruct();
}

fn testStruct() void {
    const unpacked_struct_info = @typeInfo(TestUnpackedStruct);
    expect(unpacked_struct_info.Struct.is_tuple == false);
    expect(unpacked_struct_info.Struct.fields[0].alignment == @alignOf(u32));
    expect(unpacked_struct_info.Struct.fields[0].default_value.? == 4);
    expectEqualStrings("foobar", unpacked_struct_info.Struct.fields[1].default_value.?);

    const struct_info = @typeInfo(TestStruct);
    expect(struct_info == .Struct);
    expect(struct_info.Struct.is_tuple == false);
    expect(struct_info.Struct.layout == .Packed);
    expect(struct_info.Struct.fields.len == 4);
    expect(struct_info.Struct.fields[0].alignment == 2 * @alignOf(usize));
    expect(struct_info.Struct.fields[2].field_type == *TestStruct);
    expect(struct_info.Struct.fields[2].default_value == null);
    expect(struct_info.Struct.fields[3].default_value.? == 4);
    expect(struct_info.Struct.fields[3].alignment == 1);
    expect(struct_info.Struct.decls.len == 2);
    expect(struct_info.Struct.decls[0].is_pub);
    expect(!struct_info.Struct.decls[0].data.Fn.is_extern);
    expect(struct_info.Struct.decls[0].data.Fn.lib_name == null);
    expect(struct_info.Struct.decls[0].data.Fn.return_type == void);
    expect(struct_info.Struct.decls[0].data.Fn.fn_type == fn (*const TestStruct) void);
}

const TestUnpackedStruct = struct {
    fieldA: u32 = 4,
    fieldB: *const [6:0]u8 = "foobar",
};

const TestStruct = packed struct {
    fieldA: usize align(2 * @alignOf(usize)),
    fieldB: void,
    fieldC: *Self,
    fieldD: u32 = 4,

    pub fn foo(self: *const Self) void {}
    const Self = @This();
};

test "type info: opaque info" {
    testOpaque();
    comptime testOpaque();
}

fn testOpaque() void {
    const Foo = opaque {
        const A = 1;
        fn b() void {}
    };

    const foo_info = @typeInfo(Foo);
    expect(foo_info.Opaque.decls.len == 2);
}

test "type info: function type info" {
    // wasm doesn't support align attributes on functions
    if (builtin.arch == .wasm32 or builtin.arch == .wasm64) return error.SkipZigTest;
    testFunction();
    comptime testFunction();
}

fn testFunction() void {
    const fn_info = @typeInfo(@TypeOf(foo));
    expect(fn_info == .Fn);
    expect(fn_info.Fn.alignment == 0);
    expect(fn_info.Fn.calling_convention == .C);
    expect(!fn_info.Fn.is_generic);
    expect(fn_info.Fn.args.len == 2);
    expect(fn_info.Fn.is_var_args);
    expect(fn_info.Fn.return_type.? == usize);
    const fn_aligned_info = @typeInfo(@TypeOf(fooAligned));
    expect(fn_aligned_info.Fn.alignment == 4);

    const test_instance: TestStruct = undefined;
    const bound_fn_info = @typeInfo(@TypeOf(test_instance.foo));
    expect(bound_fn_info == .BoundFn);
    expect(bound_fn_info.BoundFn.args[0].arg_type.? == *const TestStruct);
}

extern fn foo(a: usize, b: bool, ...) callconv(.C) usize;
extern fn fooAligned(a: usize, b: bool, ...) align(4) callconv(.C) usize;

test "typeInfo with comptime parameter in struct fn def" {
    const S = struct {
        pub fn func(comptime x: f32) void {}
    };
    comptime var info = @typeInfo(S);
}

test "type info: vectors" {
    testVector();
    comptime testVector();
}

fn testVector() void {
    const vec_info = @typeInfo(std.meta.Vector(4, i32));
    expect(vec_info == .Vector);
    expect(vec_info.Vector.len == 4);
    expect(vec_info.Vector.child == i32);
}

test "type info: anyframe and anyframe->T" {
    testAnyFrame();
    comptime testAnyFrame();
}

fn testAnyFrame() void {
    {
        const anyframe_info = @typeInfo(anyframe->i32);
        expect(anyframe_info == .AnyFrame);
        expect(anyframe_info.AnyFrame.child.? == i32);
    }

    {
        const anyframe_info = @typeInfo(anyframe);
        expect(anyframe_info == .AnyFrame);
        expect(anyframe_info.AnyFrame.child == null);
    }
}

test "type info: pass to function" {
    _ = passTypeInfo(@typeInfo(void));
    _ = comptime passTypeInfo(@typeInfo(void));
}

fn passTypeInfo(comptime info: TypeInfo) type {
    return void;
}

test "type info: TypeId -> TypeInfo impl cast" {
    _ = passTypeInfo(TypeId.Void);
    _ = comptime passTypeInfo(TypeId.Void);
}

test "type info: extern fns with and without lib names" {
    const S = struct {
        extern fn bar1() void;
        extern "cool" fn bar2() void;
    };
    const info = @typeInfo(S);
    comptime {
        for (info.Struct.decls) |decl| {
            if (std.mem.eql(u8, decl.name, "bar1")) {
                expect(decl.data.Fn.lib_name == null);
            } else {
                expectEqualStrings("cool", decl.data.Fn.lib_name.?);
            }
        }
    }
}

test "data field is a compile-time value" {
    const S = struct {
        const Bar = @as(isize, -1);
    };
    comptime expect(@typeInfo(S).Struct.decls[0].data.Var == isize);
}

test "sentinel of opaque pointer type" {
    const c_void_info = @typeInfo(*c_void);
    expect(c_void_info.Pointer.sentinel == null);
}

test "@typeInfo does not force declarations into existence" {
    const S = struct {
        x: i32,

        fn doNotReferenceMe() void {
            @compileError("test failed");
        }
    };
    comptime expect(@typeInfo(S).Struct.fields.len == 1);
}

test "defaut value for a var-typed field" {
    const S = struct { x: anytype };
    expect(@typeInfo(S).Struct.fields[0].default_value == null);
}

fn add(a: i32, b: i32) i32 {
    return a + b;
}

test "type info for async frames" {
    switch (@typeInfo(@Frame(add))) {
        .Frame => |frame| {
            expect(frame.function == add);
        },
        else => unreachable,
    }
}

test "type info: value is correctly copied" {
    comptime {
        var ptrInfo = @typeInfo([]u32);
        ptrInfo.Pointer.size = .One;
        expect(@typeInfo([]u32).Pointer.size == .Slice);
    }
}

test "Declarations are returned in declaration order" {
    const S = struct {
        const a = 1;
        const b = 2;
        const c = 3;
        const d = 4;
        const e = 5;
    };
    const d = @typeInfo(S).Struct.decls;
    expect(std.mem.eql(u8, d[0].name, "a"));
    expect(std.mem.eql(u8, d[1].name, "b"));
    expect(std.mem.eql(u8, d[2].name, "c"));
    expect(std.mem.eql(u8, d[3].name, "d"));
    expect(std.mem.eql(u8, d[4].name, "e"));
}

test "Struct.is_tuple" {
    expect(@typeInfo(@TypeOf(.{0})).Struct.is_tuple);
    expect(!@typeInfo(@TypeOf(.{ .a = 0 })).Struct.is_tuple);
}

test "StructField.is_comptime" {
    const info = @typeInfo(struct { x: u8 = 3, comptime y: u32 = 5 }).Struct;
    expect(!info.fields[0].is_comptime);
    expect(info.fields[1].is_comptime);
}

test "typeInfo resolves usingnamespace declarations" {
    const A = struct {
        pub const f1 = 42;
    };

    const B = struct {
        const f0 = 42;
        usingnamespace A;
    };

    expect(@typeInfo(B).Struct.decls.len == 2);
    //a
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
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))))))
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
            (Block))))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr)))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr)))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (BuildinTypeExpr)))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (BUILTINIDENTIFIER)
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
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
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
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr))))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (BuildinTypeExpr)))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (BUILTINIDENTIFIER)
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
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (BuildinTypeExpr)))))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr)))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER))
              (SuffixOp))
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
                (PrefixTypeOp
                  (SliceTypeStart
                    (SuffixExpr
                      (INTEGER))))
                (SuffixExpr
                  (BuildinTypeExpr)))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr))))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart)
            (SuffixExpr
              (INTEGER)))
          (SuffixExpr
            (BuildinTypeExpr)))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))))))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr)))))))(TestDecl
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
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (PrefixTypeOp
          (SliceTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
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
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr)))))))(TestDecl
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
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp
              (ArrayTypeStart
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (BuildinTypeExpr)))))
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
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
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
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER)))
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
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr)))))))
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp
              (ArrayTypeStart
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))
            (SuffixExpr
              (BuildinTypeExpr)))))
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
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER)))
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
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp))
              (CompareOp)
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (INTEGER))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))
                  (SuffixExpr
                    (BuildinTypeExpr))))
              (CompareOp)
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER)))
                (AdditionOp)
                (SuffixExpr
                  (INTEGER))))))))))(TestDecl
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
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr)))))
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
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr)))))))(TestDecl
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
      (ErrorSetDecl
        (IdentifierList
          (IDENTIFIER)
          (IDENTIFIER)
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
            (IDENTIFIER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
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
                (IDENTIFIER))
              (SuffixOp)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (BuildinTypeExpr)))))
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
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr)))))
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
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr))))))(TestDecl
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
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER))
        (ContainerField
          (IDENTIFIER))
        (ContainerField
          (IDENTIFIER))
        (ContainerField
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
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
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
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
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
              (IDENTIFIER))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER)))))))(TestDecl
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
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER))
            (SuffixOp))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr)))
                (SuffixOp
                  (IDENTIFIER)))))))))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
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
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
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
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))))))))
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
            (BuildinTypeExpr))))))
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
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (BuildinTypeExpr)))))))(TestDecl
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
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
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
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE)))
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (SuffixExpr
              (INTEGER)))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp)))))
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
            (IDENTIFIER))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))))
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
              (IDENTIFIER))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (BinaryExpr
            (SuffixExpr
              (INTEGER))
            (MultiplyOp 
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr)))))))))
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
                (IDENTIFIER))
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (IDENTIFIER))))))
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
                (IDENTIFIER))
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr)))))
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
                (IDENTIFIER))
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp))
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
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
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
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))))))
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
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))
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
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (FnProto
              (ParamDeclList
                (ParamDecl
                  (ParamType
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (IDENTIFIER)))))
              (SuffixExpr
                (BuildinTypeExpr)))))))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType)
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (ContainerField
        (IDENTIFIER)
        (PrefixTypeOp
          (PtrTypeStart))
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE)))))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType)
      (ContainerField
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (ByteAlign
          (BinaryExpr
            (SuffixExpr
              (INTEGER))
            (MultiplyOp 
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr)))))))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (INTEGER)))
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
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block)
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments))))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (INTEGER)))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr)))
          (Block))))
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
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (line_comment)
      (AssignExpr
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
            (IDENTIFIER))))
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)))))))
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
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
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
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))))))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))))))
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
              (IDENTIFIER))
            (SuffixOp))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)))))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER))
    (SuffixExpr))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))))))))
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
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp))
          (CompareOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER)))))))(FnProto
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
    (ParamDecl))
  (CallConv
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (BuildinTypeExpr)))(FnProto
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
    (ParamDecl))
  (ByteAlign
    (SuffixExpr
      (INTEGER)))
  (CallConv
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (BuildinTypeExpr)))(TestDecl
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
          (Block))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))))(TestDecl
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
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (BuildinTypeExpr)))))))
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
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
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
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr)))))))(TestDecl
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
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (PrefixTypeOp)
            (SuffixExpr
              (BuildinTypeExpr)))))
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
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp))
              (CompareOp)
              (SuffixExpr
                (BuildinTypeExpr))))))))
  (LabeledStatement
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr))))
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
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr)))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr)))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (IDENTIFIER)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (BuildinTypeExpr))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
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
          (STRINGLITERALSINGLE)
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (BuildinTypeExpr))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (BlockExprStatement
      (BlockExpr
        (Block
          (LabeledStatement
            (LoopStatement
              (ForStatement
                (ForPrefix
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER))
                    (SuffixOp
                      (IDENTIFIER)))
                  (PtrIndexPayload
                    (IDENTIFIER)))
                (BlockExpr
                  (Block
                    (IfStatement
                      (IfPrefix
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
                              (IDENTIFIER)
                              (SuffixOp
                                (IDENTIFIER)))
                            (SuffixExpr
                              (STRINGLITERAL
                                (STRINGLITERALSINGLE))))))
                      (BlockExpr
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
                                      (IDENTIFIER))
                                    (SuffixOp
                                      (IDENTIFIER)))
                                  (CompareOp)
                                  (SuffixExpr)))))))
                      (LabeledStatement
                        (Block
                          (AssignExpr
                            (SuffixExpr
                              (IDENTIFIER)
                              (FnCallArguments
                                (SuffixExpr
                                  (STRINGLITERAL
                                    (STRINGLITERALSINGLE)))
                                (SuffixExpr
                                  (IDENTIFIER)
                                  (SuffixOp
                                    (IDENTIFIER))
                                  (SuffixOp
                                    (IDENTIFIER))
                                  (SuffixOp
                                    (IDENTIFIER))
                                  (SuffixOp))))))))))))))))))(TestDecl
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
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (UnaryExpr (PrefixOp)
                (SuffixExpr
                  (INTEGER)))))))))
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
                (IDENTIFIER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (BuildinTypeExpr))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (BuildinTypeExpr)))))
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
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList)
          (SuffixExpr
            (BuildinTypeExpr)))
        (Block
          (AssignExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))))
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
                (IDENTIFIER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (SuffixExpr
                (INTEGER)))
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr)))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (BuildinTypeExpr))))
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (BinaryExpr
    (SuffixExpr
      (IDENTIFIER))
    (AdditionOp)
    (SuffixExpr
      (IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block
  (SwitchExpr
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))))))
    (SwitchProngList
      (SwitchProng
        (SwitchCase
          (SwitchItem
            (SuffixExpr
              (IDENTIFIER))))
        (PtrPayload
          (IDENTIFIER))
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
                      (IDENTIFIER)))))))))
      (SwitchProng
        (SwitchCase)
        (AssignExpr
          (SuffixExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (BlockExprStatement
    (BlockExpr
      (Block
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (PrefixTypeOp
                (SliceTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (SuffixOp
              (IDENTIFIER)))
          (AssignOp)
          (SuffixExpr
            (IDENTIFIER)))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (BinaryExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (PrefixTypeOp
                      (SliceTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr)))
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER)))
                (CompareOp)
                (SuffixExpr
                  (IDENTIFIER)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)))
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
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
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
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
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
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
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
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
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
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
              (IDENTIFIER)
              (SuffixOp
                (SuffixExpr
                  (INTEGER)))
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (InitList
                    (SuffixExpr
                      (INTEGER)))))))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (InitList
                    (FieldInit
                      (IDENTIFIER)
                      (SuffixExpr
                        (INTEGER))))))))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType)
          (ContainerField
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))
          (ContainerField
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER))))))
    (SuffixOp
      (IDENTIFIER))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (SuffixExpr
            (INTEGER)))
        (SuffixOp
          (IDENTIFIER)))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (SuffixExpr
          (INTEGER)))
      (SuffixOp
        (IDENTIFIER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (INTEGER))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (INTEGER)))
    (SuffixExpr
      (IDENTIFIER)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER)))
      (CompareOp)
      (SuffixExpr
        (INTEGER))))))(line_comment))))
