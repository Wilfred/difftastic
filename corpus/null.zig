================================================================================
null
================================================================================

    const expect = @import("std").testing.expect;

test "optional type" {
    const x: ?bool = true;

    if (x) |y| {
        if (y) {
            // OK
        } else {
            unreachable;
        }
    } else {
        unreachable;
    }

    const next_x: ?i32 = null;

    const z = next_x orelse 1234;

    expect(z == 1234);

    const final_x: ?i32 = 13;

    const num = final_x orelse unreachable;

    expect(num == 13);
}

test "test maybe object and get a pointer to the inner value" {
    var maybe_bool: ?bool = true;

    if (maybe_bool) |*b| {
        b.* = false;
    }

    expect(maybe_bool.? == false);
}

test "rhs maybe unwrap return" {
    const x: ?bool = true;
    const y = x orelse return;
}

test "maybe return" {
    maybeReturnImpl();
    comptime maybeReturnImpl();
}

fn maybeReturnImpl() void {
    expect(foo(1235).?);
    if (foo(null) != null) unreachable;
    expect(!foo(1234).?);
}

fn foo(x: ?i32) ?bool {
    const value = x orelse return null;
    return value > 1234;
}

test "if var maybe pointer" {
    expect(shouldBeAPlus1(Particle{
        .a = 14,
        .b = 1,
        .c = 1,
        .d = 1,
    }) == 15);
}
fn shouldBeAPlus1(p: Particle) u64 {
    var maybe_particle: ?Particle = p;
    if (maybe_particle) |*particle| {
        particle.a += 1;
    }
    if (maybe_particle) |particle| {
        return particle.a;
    }
    return 0;
}
const Particle = struct {
    a: u64,
    b: u64,
    c: u64,
    d: u64,
};

test "null literal outside function" {
    const is_null = here_is_a_null_literal.context == null;
    expect(is_null);

    const is_non_null = here_is_a_null_literal.context != null;
    expect(!is_non_null);
}
const SillyStruct = struct {
    context: ?i32,
};
const here_is_a_null_literal = SillyStruct{ .context = null };

test "test null runtime" {
    testTestNullRuntime(null);
}
fn testTestNullRuntime(x: ?i32) void {
    expect(x == null);
    expect(!(x != null));
}

test "optional void" {
    optionalVoidImpl();
    comptime optionalVoidImpl();
}

fn optionalVoidImpl() void {
    expect(bar(null) == null);
    expect(bar({}) != null);
}

fn bar(x: ?void) ?void {
    if (x) |_| {
        return {};
    } else {
        return null;
    }
}

const StructWithOptional = struct {
    field: ?i32,
};

var struct_with_optional: StructWithOptional = undefined;

test "unwrap optional which is field of global var" {
    struct_with_optional.field = null;
    if (struct_with_optional.field) |payload| {
        unreachable;
    }
    struct_with_optional.field = 1234;
    if (struct_with_optional.field) |payload| {
        expect(payload == 1234);
    } else {
        unreachable;
    }
}

test "null with default unwrap" {
    const x: i32 = null orelse 1;
    expect(x == 1);
}

test "optional types" {
    comptime {
        const opt_type_struct = StructWithOptionalType{ .t = u8 };
        expect(opt_type_struct.t != null and opt_type_struct.t.? == u8);
    }
}

const StructWithOptionalType = struct {
    t: ?type,
};

test "optional pointer to 0 bit type null value at runtime" {
    const EmptyStruct = struct {};
    var x: ?*EmptyStruct = null;
    expect(x == null);
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
            (STRINGLITERALSINGLE))))
      (SuffixOp
        (IDENTIFIER))
      (SuffixOp
        (IDENTIFIER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr))
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER))
          (PtrPayload
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (IfStatement
              (IfPrefix
                (SuffixExpr
                  (IDENTIFIER)))
              (BlockExpr
                (Block
                  (line_comment)))
              (LabeledStatement
                (Block
                  (AssignExpr
                    (SuffixExpr)))))))
        (LabeledStatement
          (Block
            (AssignExpr
              (SuffixExpr)))))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr))
      (VarDecl
        (IDENTIFIER)
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (BitwiseOp)
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
                (INTEGER))))))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (BitwiseOp)
          (SuffixExpr)))
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
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr))
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER))
          (PtrPayload
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp))
              (AssignOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp))
              (CompareOp)
              (SuffixExpr)))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr))
      (VarDecl
        (IDENTIFIER)
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (BitwiseOp)))))
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
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (INTEGER))))
          (ERROR))))
    (AssignExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr)))
              (CompareOp)
              (SuffixExpr)))
          (SuffixExpr))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (INTEGER)))))
        (ERROR)))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (PrefixTypeOp)
        (SuffixExpr
          (BuildinTypeExpr)))))
  (PrefixTypeOp)
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (BitwiseOp)
      (SuffixExpr)))
  (AssignExpr
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (CompareOp)
      (SuffixExpr
        (INTEGER)))))(TestDecl
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
                  (IDENTIFIER))
                (InitList
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (INTEGER)))
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (INTEGER)))
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (INTEGER)))
                  (FieldInit
                    (IDENTIFIER)
                    (SuffixExpr
                      (INTEGER))))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (IDENTIFIER)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (VarDecl
    (IDENTIFIER)
    (PrefixTypeOp)
    (SuffixExpr
      (IDENTIFIER))
    (SuffixExpr
      (IDENTIFIER)))
  (IfStatement
    (IfPrefix
      (SuffixExpr
        (IDENTIFIER))
      (PtrPayload
        (IDENTIFIER)))
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (AssignOp)
          (SuffixExpr
            (INTEGER))))))
  (IfStatement
    (IfPrefix
      (SuffixExpr
        (IDENTIFIER))
      (PtrPayload
        (IDENTIFIER)))
    (BlockExpr
      (Block
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))))))
  (AssignExpr
    (SuffixExpr
      (INTEGER))))(VarDecl
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
          (BuildinTypeExpr))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))))
    (VarDecl
      (IDENTIFIER)
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER))))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER)
      (PrefixTypeOp)
      (SuffixExpr
        (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (IDENTIFIER))(InitList
  (FieldInit
    (IDENTIFIER)
    (SuffixExpr))))(TestDecl(STRINGLITERALSINGLE)(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (PrefixTypeOp)
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (GroupedExpr
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr)))))))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments)))(AssignExpr
  (SuffixExpr
    (SuffixExpr
      (IDENTIFIER))
    (FnCallArguments)))))(FnProto(IDENTIFIER)(ParamDeclList)(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr)))
      (CompareOp)
      (SuffixExpr)))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (Block)))
      (CompareOp)
      (SuffixExpr))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl
  (IDENTIFIER)
  (ParamType
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr)))))(PrefixTypeOp)(SuffixExpr(BuildinTypeExpr)))(Block(IfStatement(IfPrefix
  (SuffixExpr
    (IDENTIFIER))
  (PtrPayload
    (IDENTIFIER)))(BlockExpr
  (Block
    (AssignExpr
      (Block))))(LabeledStatement
  (Block
    (AssignExpr
      (SuffixExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (ContainerField
    (IDENTIFIER)
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr))))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER))(SuffixExpr))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (AssignOp)
  (SuffixExpr))(IfStatement
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))
    (PtrPayload
      (IDENTIFIER)))
  (BlockExpr
    (Block
      (AssignExpr
        (SuffixExpr)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER)))
  (AssignOp)
  (SuffixExpr
    (INTEGER)))(IfStatement
  (IfPrefix
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER)))
    (PtrPayload
      (IDENTIFIER)))
  (BlockExpr
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
  (LabeledStatement
    (Block
      (AssignExpr
        (SuffixExpr)))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (BinaryExpr
    (SuffixExpr)
    (BitwiseOp)
    (SuffixExpr
      (INTEGER))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr
          (INTEGER))))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement
  (BlockExpr
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER))
        (InitList
          (FieldInit
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER)))
                (CompareOp)
                (SuffixExpr))
              (BinaryExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp))
                (CompareOp)
                (SuffixExpr
                  (BuildinTypeExpr))))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl
  (ContainerDeclType)
  (ContainerField
    (IDENTIFIER)
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (ContainerDecl
      (ContainerDeclType))))(VarDecl
  (IDENTIFIER)
  (PrefixTypeOp)
  (PrefixTypeOp
    (PtrTypeStart))
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (CompareOp)
        (SuffixExpr))))))))
