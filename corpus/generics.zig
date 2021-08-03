================================================================================
generics
================================================================================

    const expect = @import("std").testing.expect;

test "simple generic fn" {
    expect(max(i32, 3, -1) == 3);
    expect(max(f32, 0.123, 0.456) == 0.456);
    expect(add(2, 3) == 5);
}

fn max(comptime T: type, a: T, b: T) T {
    return if (a > b) a else b;
}

fn add(comptime a: i32, b: i32) i32 {
    return (comptime a) + b;
}

const the_max = max(u32, 1234, 5678);
test "compile time generic eval" {
    expect(the_max == 5678);
}

fn gimmeTheBigOne(a: u32, b: u32) u32 {
    return max(u32, a, b);
}

fn shouldCallSameInstance(a: u32, b: u32) u32 {
    return max(u32, a, b);
}

fn sameButWithFloats(a: f64, b: f64) f64 {
    return max(f64, a, b);
}

test "fn with comptime args" {
    expect(gimmeTheBigOne(1234, 5678) == 5678);
    expect(shouldCallSameInstance(34, 12) == 34);
    expect(sameButWithFloats(0.43, 0.49) == 0.49);
}

test "var params" {
    expect(max_i32(12, 34) == 34);
    expect(max_f64(1.2, 3.4) == 3.4);
}

comptime {
    expect(max_i32(12, 34) == 34);
    expect(max_f64(1.2, 3.4) == 3.4);
}

fn max_var(a: anytype, b: anytype) @TypeOf(a + b) {
    return if (a > b) a else b;
}

fn max_i32(a: i32, b: i32) i32 {
    return max_var(a, b);
}

fn max_f64(a: f64, b: f64) f64 {
    return max_var(a, b);
}

pub fn List(comptime T: type) type {
    return SmallList(T, 8);
}

pub fn SmallList(comptime T: type, comptime STATIC_SIZE: usize) type {
    return struct {
        items: []T,
        length: usize,
        prealloc_items: [STATIC_SIZE]T,
    };
}

test "function with return type type" {
    var list: List(i32) = undefined;
    var list2: List(i32) = undefined;
    list.length = 10;
    list2.length = 10;
    expect(list.prealloc_items.len == 8);
    expect(list2.prealloc_items.len == 8);
}

test "generic struct" {
    var a1 = GenNode(i32){
        .value = 13,
        .next = null,
    };
    var b1 = GenNode(bool){
        .value = true,
        .next = null,
    };
    expect(a1.value == 13);
    expect(a1.value == a1.getVal());
    expect(b1.getVal());
}
fn GenNode(comptime T: type) type {
    return struct {
        value: T,
        next: ?*GenNode(T),
        fn getVal(n: *const GenNode(T)) T {
            return n.value;
        }
    };
}

test "const decls in struct" {
    expect(GenericDataThing(3).count_plus_one == 4);
}
fn GenericDataThing(comptime count: isize) type {
    return struct {
        const count_plus_one = count + 1;
    };
}

test "use generic param in generic param" {
    expect(aGenericFn(i32, 3, 4) == 7);
}
fn aGenericFn(comptime T: type, comptime a: T, b: T) T {
    return a + b;
}

test "generic fn with implicit cast" {
    expect(getFirstByte(u8, &[_]u8{13}) == 13);
    expect(getFirstByte(u16, &[_]u16{
        0,
        13,
    }) == 0);
}
fn getByte(ptr: ?*const u8) u8 {
    return ptr.?.*;
}
fn getFirstByte(comptime T: type, mem: []const T) u8 {
    return getByte(@ptrCast(*const u8, &mem[0]));
}

const foos = [_]fn (anytype) bool{
    foo1,
    foo2,
};

fn foo1(arg: anytype) bool {
    return arg;
}
fn foo2(arg: anytype) bool {
    return !arg;
}

test "array of generic fns" {
    expect(foos[0](true));
    expect(!foos[1](true));
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
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (INTEGER))
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (INTEGER)))))
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
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (FLOAT))
                (SuffixExpr
                  (FLOAT))))
            (CompareOp)
            (SuffixExpr
              (FLOAT))))))
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
                (SuffixExpr
                  (INTEGER))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
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
          (IDENTIFIER))))
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (IDENTIFIER)))))
  (SuffixExpr
    (IDENTIFIER)))(Block
  (AssignExpr
    (SuffixExpr
      (IfTypeExpr
        (IfPrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (BinaryExpr
      (SuffixExpr
        (GroupedExpr
          (SuffixExpr
            (SuffixExpr
              (IDENTIFIER)))))
      (AdditionOp)
      (SuffixExpr
        (IDENTIFIER)))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER))
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
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(TestDecl
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
              (FnCallArguments
                (SuffixExpr
                  (INTEGER))
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
              (FnCallArguments
                (SuffixExpr
                  (FLOAT))
                (SuffixExpr
                  (FLOAT))))
            (CompareOp)
            (SuffixExpr
              (FLOAT))))))))(TestDecl
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
              (FnCallArguments
                (SuffixExpr
                  (FLOAT))
                (SuffixExpr
                  (FLOAT))))
            (CompareOp)
            (SuffixExpr
              (FLOAT))))))))(TopLevelComptime
  (BlockExpr
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
                (FnCallArguments
                  (SuffixExpr
                    (FLOAT))
                  (SuffixExpr
                    (FLOAT))))
              (CompareOp)
              (SuffixExpr
                (FLOAT)))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType))
    (ParamDecl
      (IDENTIFIER)
      (ParamType)))
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER))
        (AdditionOp)
        (SuffixExpr
          (IDENTIFIER))))))(Block
  (AssignExpr
    (SuffixExpr
      (IfTypeExpr
        (IfPrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (IDENTIFIER))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER))
        (SuffixExpr
          (INTEGER))))))(FnProto
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
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (PrefixTypeOp
            (SliceTypeStart))
          (SuffixExpr
            (IDENTIFIER)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (IDENTIFIER))))
          (SuffixExpr
            (IDENTIFIER)))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))))
      (SuffixExpr))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))))
      (SuffixExpr))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
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
              (INTEGER))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr))
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr))))
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
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (FnCallArguments))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER))
            (FnCallArguments)))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (IDENTIFIER)))
        (ContainerField
          (IDENTIFIER)
          (PrefixTypeOp)
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (IDENTIFIER)))))
        (FnProto
          (IDENTIFIER)
          (ParamDeclList
            (ParamDecl
              (IDENTIFIER)
              (ParamType
                (PrefixTypeOp
                  (PtrTypeStart))
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))))))
          (SuffixExpr
            (IDENTIFIER)))
        (Block
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
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
                    (INTEGER))))
              (BitwiseOp
                (MISSING "|"))
              (SuffixExpr
                (IDENTIFIER)))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (BuildinTypeExpr)))))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (VarDecl
          (IDENTIFIER)
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (AdditionOp)
            (SuffixExpr
              (INTEGER))))))))(TestDecl
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
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))
            (CompareOp)
            (SuffixExpr
              (INTEGER))))))))(FnProto
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
          (IDENTIFIER))))
    (ParamDecl
      (IDENTIFIER)
      (ParamType
        (SuffixExpr
          (IDENTIFIER)))))
  (SuffixExpr
    (IDENTIFIER)))(Block
  (AssignExpr
    (BinaryExpr
      (SuffixExpr
        (IDENTIFIER))
      (AdditionOp)
      (SuffixExpr
        (IDENTIFIER)))))(TestDecl
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
                  (BuildinTypeExpr))
                (UnaryExpr (PrefixOp)
                (PrefixTypeOp
                  (ArrayTypeStart
                    (SuffixExpr
                      (IDENTIFIER))))
                (SuffixExpr
                  (BuildinTypeExpr))
                (InitList
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
              (SuffixExpr
                (BuildinTypeExpr))
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
          (INTEGER))))))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl
  (IDENTIFIER)
  (ParamType
    (PrefixTypeOp)
    (PrefixTypeOp
      (PtrTypeStart))
    (SuffixExpr
      (BuildinTypeExpr)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp)
  (SuffixOp))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl
  (IDENTIFIER)
  (ParamType
    (SuffixExpr
      (BuildinTypeExpr))))(ParamDecl
  (IDENTIFIER)
  (ParamType
    (PrefixTypeOp
      (SliceTypeStart))
    (SuffixExpr
      (IDENTIFIER)))))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (FnCallArguments
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (PrefixTypeOp
          (PtrTypeStart))
        (SuffixExpr
          (BuildinTypeExpr))
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (SuffixExpr
              (INTEGER)))))))))))(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (IDENTIFIER))))(SuffixExpr(FnProto(ParamDeclList
  (ParamDecl
    (ParamType)))(SuffixExpr
  (BuildinTypeExpr))))(InitList(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(SuffixExpr(IDENTIFIER))))(FnProto(IDENTIFIER)(ParamDeclList(ParamDecl(IDENTIFIER)(ParamType)))(SuffixExpr(BuildinTypeExpr)))(Block(AssignExpr(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER)))))(TestDecl(STRINGLITERALSINGLE)(Block(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER)))
    (FnCallArguments
      (SuffixExpr))))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (UnaryExpr (PrefixOp)
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (SuffixExpr
        (INTEGER)))
    (FnCallArguments
      (SuffixExpr))))))))))
