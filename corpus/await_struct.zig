================================================================================
await_struct
================================================================================

    const std = @import("std");
const builtin = @import("builtin");
const expect = std.testing.expect;

const Foo = struct {
    x: i32,
};

var await_a_promise: anyframe = undefined;
var await_final_result = Foo{ .x = 0 };

test "coroutine await struct" {
    await_seq('a');
    var p = async await_amain();
    await_seq('f');
    resume await_a_promise;
    await_seq('i');
    expect(await_final_result.x == 1234);
    expect(std.mem.eql(u8, &await_points, "abcdefghi"));
}
fn await_amain() callconv(.Async) void {
    await_seq('b');
    var p = async await_another();
    await_seq('e');
    await_final_result = await p;
    await_seq('h');
}
fn await_another() callconv(.Async) Foo {
    await_seq('c');
    suspend {
        await_seq('d');
        await_a_promise = @frame();
    }
    await_seq('g');
    return Foo{ .x = 1234 };
}

var await_points = [_]u8{0} ** "abcdefghi".len;
var await_seq_index: usize = 0;

fn await_seq(c: u8) void {
    await_points[await_seq_index] = c;
    await_seq_index += 1;
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
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr)
    (SuffixExpr))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER))
    (InitList
      (FieldInit
        (IDENTIFIER)
        (SuffixExpr
          (INTEGER)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (CHAR_LITERAL)))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (CHAR_LITERAL)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (CHAR_LITERAL)))))
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
                (SuffixExpr
                  (IDENTIFIER)))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))))))))))(FnProto
  (IDENTIFIER)
  (ParamDeclList)
  (CallConv
    (SuffixExpr
      (IDENTIFIER)))
  (SuffixExpr
    (BuildinTypeExpr)))(Block
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (CHAR_LITERAL)))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (CHAR_LITERAL)))))
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
      (SuffixExpr
        (CHAR_LITERAL))))))(FnProto(IDENTIFIER)(ParamDeclList)(CallConv
  (SuffixExpr
    (IDENTIFIER)))(SuffixExpr
  (IDENTIFIER)))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL)))))(BlockExprStatement
  (BlockExpr
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (CHAR_LITERAL)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (CHAR_LITERAL)))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (InitList
    (FieldInit
      (IDENTIFIER)
      (SuffixExpr
        (INTEGER))))))(VarDecl(IDENTIFIER)(BinaryExpr
  (PrefixTypeOp
    (ArrayTypeStart
      (SuffixExpr
        (IDENTIFIER))))
  (SuffixExpr
    (BuildinTypeExpr))
  (InitList
    (SuffixExpr
      (INTEGER)))
  (MultiplyOp 
    (SuffixExpr
      (STRINGLITERAL
        (STRINGLITERALSINGLE))
      (SuffixOp
        (IDENTIFIER)))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (INTEGER)))(FnProto
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
      (INTEGER)))))
