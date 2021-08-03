================================================================================
if
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;

test "if statements" {
    shouldBeEqual(1, 1);
    firstEqlThird(2, 1, 2);
}
fn shouldBeEqual(a: i32, b: i32) void {
    if (a != b) {
        unreachable;
    } else {
        return;
    }
}
fn firstEqlThird(a: i32, b: i32, c: i32) void {
    if (a == b) {
        unreachable;
    } else if (b == c) {
        unreachable;
    } else if (a == c) {
        return;
    } else {
        unreachable;
    }
}

test "else if expression" {
    expect(elseIfExpressionF(1) == 1);
}
fn elseIfExpressionF(c: u8) u8 {
    if (c == 0) {
        return 0;
    } else if (c == 1) {
        return 1;
    } else {
        return @as(u8, 2);
    }
}

// #2297
var global_with_val: anyerror!u32 = 0;
var global_with_err: anyerror!u32 = error.SomeError;

test "unwrap mutable global var" {
    if (global_with_val) |v| {
        expect(v == 0);
    } else |e| {
        unreachable;
    }
    if (global_with_err) |_| {
        unreachable;
    } else |e| {
        expect(e == error.SomeError);
    }
}

test "labeled break inside comptime if inside runtime if" {
    var answer: i32 = 0;
    var c = true;
    if (c) {
        answer = if (true) blk: {
            break :blk @as(i32, 42);
        };
    }
    expect(answer == 42);
}

test "const result loc, runtime if cond, else unreachable" {
    const Num = enum {
        One,
        Two,
    };

    var t = true;
    const x = if (t) Num.Two else unreachable;
    expect(x == .Two);
}

test "if prongs cast to expected type instead of peer type resolution" {
    const S = struct {
        fn doTheTest(f: bool) void {
            var x: i32 = 0;
            x = if (f) 1 else 2;
            expect(x == 2);

            var b = true;
            const y: i32 = if (b) 1 else 2;
            expect(y == 1);
        }
    };
    S.doTheTest(false);
    comptime S.doTheTest(false);
}

test "while copies its payload" {
    const S = struct {
        fn doTheTest() void {
            var tmp: ?i32 = 10;
            if (tmp) |value| {
                // Modify the original variable
                tmp = null;
                expectEqual(@as(i32, 10), value);
            } else unreachable;
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (INTEGER)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (INTEGER))
            (SuffixExpr
              (INTEGER)))))))
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
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr))))
      (LabeledStatement
        (Block
          (AssignExpr)))))
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
            (BuildinTypeExpr))))
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (IfStatement
      (IfPrefix
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (CompareOp)
          (SuffixExpr
            (IDENTIFIER))))
      (BlockExpr
        (Block
          (AssignExpr
            (SuffixExpr))))
      (IfStatement
        (IfPrefix
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER))))
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr))))
        (IfStatement
          (IfPrefix
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (IDENTIFIER))))
          (BlockExpr
            (Block
              (AssignExpr)))
          (LabeledStatement
            (Block
              (AssignExpr
                (SuffixExpr))))))))
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
                    (INTEGER))))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
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
              (INTEGER)))))
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
                (INTEGER)))))
        (LabeledStatement
          (Block
            (AssignExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (INTEGER))))))))))
  (line_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (IDENTIFIER)))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
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
                (FnCallArguments
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))))))
        (Payload
          (IDENTIFIER))
        (LabeledStatement
          (Block
            (AssignExpr
              (SuffixExpr)))))
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER))
          (PtrPayload
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr))))
        (Payload
          (IDENTIFIER))
        (LabeledStatement
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
                      (IDENTIFIER)))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr))
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER)))
        (BlockExpr
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (IfTypeExpr
                  (IfPrefix
                    (SuffixExpr))
                  (SuffixExpr
                    (LabeledTypeExpr
                      (BlockLabel
                        (IDENTIFIER))
                      (Block
                        (AssignExpr
                          (BreakLabel
                            (IDENTIFIER))
                          (SuffixExpr
                            (BUILTINIDENTIFIER)
                            (FnCallArguments
                              (SuffixExpr
                                (BuildinTypeExpr))
                              (SuffixExpr
                                (INTEGER))))))))))))))
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
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (ContainerField
              (IDENTIFIER))
            (ContainerField
              (IDENTIFIER)))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (SuffixExpr
                (IDENTIFIER)))
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixOp
            (IDENTIFIER)))
        (ERROR))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (IDENTIFIER))))))))
  (TestDecl
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
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (IfTypeExpr
                    (IfPrefix
                      (SuffixExpr
                        (IDENTIFIER)))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER)))))
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
                (SuffixExpr))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (IfTypeExpr
                    (IfPrefix
                      (SuffixExpr
                        (IDENTIFIER)))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER)))))
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
          (FnCallArguments
            (SuffixExpr))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr))))))
  (TestDecl
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
            (Block
              (VarDecl
                (IDENTIFIER)
                (PrefixTypeOp)
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))
              (AssignExpr
                (IfExpr
                  (IfPrefix
                    (SuffixExpr
                      (IDENTIFIER))
                    (PtrPayload
                      (IDENTIFIER)))
                  (Block
                    (line_comment)
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (AssignOp)
                      (SuffixExpr))
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
                            (IDENTIFIER))))))
                  (SuffixExpr)))))))
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
          (FnCallArguments))))))
