================================================================================
ptrcast
================================================================================

    const std = @import("std");
const builtin = std.builtin;
const expect = std.testing.expect;

test "reinterpret bytes as integer with nonzero offset" {
    testReinterpretBytesAsInteger();
    comptime testReinterpretBytesAsInteger();
}

fn testReinterpretBytesAsInteger() void {
    const bytes = "\x12\x34\x56\x78\xab";
    const expected = switch (builtin.endian) {
        builtin.Endian.Little => 0xab785634,
        builtin.Endian.Big => 0x345678ab,
    };
    expect(@ptrCast(*align(1) const u32, bytes[1..5]).* == expected);
}

test "reinterpret bytes of an array into an extern struct" {
    testReinterpretBytesAsExternStruct();
    comptime testReinterpretBytesAsExternStruct();
}

fn testReinterpretBytesAsExternStruct() void {
    var bytes align(2) = [_]u8{ 1, 2, 3, 4, 5, 6 };

    const S = extern struct {
        a: u8,
        b: u16,
        c: u8,
    };

    var ptr = @ptrCast(*const S, &bytes);
    var val = ptr.c;
    expect(val == 5);
}

test "reinterpret struct field at comptime" {
    const numNative = comptime Bytes.init(0x12345678);
    if (builtin.endian != .Little) {
        expect(std.mem.eql(u8, &[_]u8{ 0x12, 0x34, 0x56, 0x78 }, &numNative.bytes));
    } else {
        expect(std.mem.eql(u8, &[_]u8{ 0x78, 0x56, 0x34, 0x12 }, &numNative.bytes));
    }
}

const Bytes = struct {
    bytes: [4]u8,

    pub fn init(v: u32) Bytes {
        var res: Bytes = undefined;
        @ptrCast(*align(1) u32, &res.bytes).* = v;

        return res;
    }
};

test "comptime ptrcast keeps larger alignment" {
    comptime {
        const a: u32 = 1234;
        const p = @ptrCast([*]const u8, &a);
        std.debug.assert(@TypeOf(p) == [*]align(@alignOf(u32)) const u8);
    }
}

test "implicit optional pointer to optional c_void pointer" {
    var buf: [4]u8 = "aoeu".*;
    var x: ?[*]u8 = &buf;
    var y: ?*c_void = x;
    var z = @ptrCast(*[4]u8, y);
    expect(std.mem.eql(u8, z, "aoeu"));
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
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (STRINGLITERAL
          (STRINGLITERALSINGLE))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
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
                (SuffixExpr
                  (INTEGER))))
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
                  (PtrTypeStart)
                  (SuffixExpr
                    (INTEGER)))
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER)))))
              (SuffixOp))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER)))))))
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
      (ByteAlign
        (SuffixExpr
          (INTEGER)))
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
          (INTEGER))))
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
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (PtrTypeStart))
          (SuffixExpr
            (IDENTIFIER))
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (SuffixOp
        (IDENTIFIER))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (CompareOp)
          (SuffixExpr
            (INTEGER)))))))(TestDecl
  (STRINGLITERALSINGLE)
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (SuffixExpr
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (INTEGER)))))
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))
      (BlockExpr
        (Block
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
                        (INTEGER))))
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER)))))))))))
  (LabeledStatement
    (Block
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
                    (INTEGER))))
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))))))))))))))(VarDecl(IDENTIFIER)(SuffixExpr(ContainerDecl(ContainerDeclType)(ContainerField(IDENTIFIER)(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr)))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (IDENTIFIER)))(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr))(AssignExpr
  (SuffixExpr
    (BUILTINIDENTIFIER)
    (FnCallArguments
      (PrefixTypeOp
        (PtrTypeStart)
        (SuffixExpr
          (INTEGER)))
      (SuffixExpr
        (BuildinTypeExpr))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER)))))
  (SuffixOp))(AssignOp)(SuffixExpr
  (IDENTIFIER)))(AssignExpr(SuffixExpr
  (IDENTIFIER)))))))(TestDecl(STRINGLITERALSINGLE)(Block(BlockExprStatement(BlockExpr(Block(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(VarDecl
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
        (IDENTIFIER))))))(AssignExpr(SuffixExpr
  (IDENTIFIER)
  (SuffixOp
    (IDENTIFIER))
  (SuffixOp
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
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr)))))
      (SuffixExpr
        (BuildinTypeExpr)))))))))))(TestDecl(STRINGLITERALSINGLE)(Block(VarDecl(IDENTIFIER)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))(SuffixOp)))(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(IDENTIFIER))))(VarDecl(IDENTIFIER)(PrefixTypeOp)(PrefixTypeOp(PtrTypeStart))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(PtrTypeStart))(PrefixTypeOp(ArrayTypeStart(SuffixExpr
  (INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (IDENTIFIER))(SuffixExpr
  (STRINGLITERAL
    (STRINGLITERALSINGLE)))))))))))
