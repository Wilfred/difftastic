================================================================================
defer
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const expectEqual = std.testing.expectEqual;
const expectError = std.testing.expectError;

var result: [3]u8 = undefined;
var index: usize = undefined;

fn runSomeErrorDefers(x: bool) !bool {
    index = 0;
    defer {
        result[index] = 'a';
        index += 1;
    }
    errdefer {
        result[index] = 'b';
        index += 1;
    }
    defer {
        result[index] = 'c';
        index += 1;
    }
    return if (x) x else error.FalseNotAllowed;
}

test "mixing normal and error defers" {
    expect(runSomeErrorDefers(true) catch unreachable);
    expect(result[0] == 'c');
    expect(result[1] == 'a');

    const ok = runSomeErrorDefers(false) catch |err| x: {
        expect(err == error.FalseNotAllowed);
        break :x true;
    };
    expect(ok);
    expect(result[0] == 'c');
    expect(result[1] == 'b');
    expect(result[2] == 'a');
}

test "break and continue inside loop inside defer expression" {
    testBreakContInDefer(10);
    comptime testBreakContInDefer(10);
}

fn testBreakContInDefer(x: usize) void {
    defer {
        var i: usize = 0;
        while (i < x) : (i += 1) {
            if (i < 5) continue;
            if (i == 5) break;
        }
        expect(i == 5);
    }
}

test "defer and labeled break" {
    var i = @as(usize, 0);

    blk: {
        defer i += 1;
        break :blk;
    }

    expect(i == 1);
}

test "errdefer does not apply to fn inside fn" {
    if (testNestedFnErrDefer()) |_| @panic("expected error") else |e| expect(e == error.Bad);
}

fn testNestedFnErrDefer() anyerror!void {
    var a: i32 = 0;
    errdefer a += 1;
    const S = struct {
        fn baz() anyerror {
            return error.Bad;
        }
    };
    return S.baz();
}

test "return variable while defer expression in scope to modify it" {
    const S = struct {
        fn doTheTest() void {
            expect(notNull().? == 1);
        }

        fn notNull() ?u8 {
            var res: ?u8 = 1;
            defer res = null;
            return res;
        }
    };

    S.doTheTest();
    comptime S.doTheTest();
}

test "errdefer with payload" {
    const S = struct {
        fn foo() !i32 {
            errdefer |a| {
                expectEqual(error.One, a);
            }
            return error.One;
        }
        fn doTheTest() void {
            expectError(error.One, foo());
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
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
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
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (INTEGER)))
    (BlockExprStatement
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
              (CHAR_LITERAL)))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER))
            (AssignOp)
            (SuffixExpr
              (INTEGER))))))
    (BlockExprStatement
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
              (CHAR_LITERAL)))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER))
            (AssignOp)
            (SuffixExpr
              (INTEGER))))))
    (BlockExprStatement
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
              (CHAR_LITERAL)))
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER))
            (AssignOp)
            (SuffixExpr
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER)))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))))))
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
                  (SuffixExpr)))
              (BitwiseOp)
              (SuffixExpr)))))
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
                (CHAR_LITERAL))))))
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
                (CHAR_LITERAL))))))
      (VarDecl
        (IDENTIFIER)
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr)))
          (BitwiseOp
            (Payload
              (IDENTIFIER)))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
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
                          (IDENTIFIER))))))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr)))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
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
                  (SuffixExpr
                    (INTEGER))))
              (CompareOp)
              (SuffixExpr
                (CHAR_LITERAL))))))
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
                (CHAR_LITERAL))))))
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
                (CHAR_LITERAL))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (INTEGER)))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr
              (INTEGER)))))))
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
    (BlockExprStatement
      (BlockExpr
        (Block
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))
          (LabeledStatement
            (LoopStatement
              (WhileStatement
                (WhilePrefix
                  (BinaryExpr
                    (SuffixExpr
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (IDENTIFIER)))
                  (WhileContinueExpr
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (AssignOp)
                      (SuffixExpr
                        (INTEGER)))))
                (BlockExpr
                  (Block
                    (AssignExpr
                      (IfExpr
                        (IfPrefix
                          (BinaryExpr
                            (SuffixExpr
                              (IDENTIFIER))
                            (CompareOp)
                            (SuffixExpr
                              (INTEGER))))))
                    (AssignExpr
                      (IfExpr
                        (IfPrefix
                          (BinaryExpr
                            (SuffixExpr
                              (IDENTIFIER))
                            (CompareOp)
                            (SuffixExpr
                              (INTEGER)))))))))))
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BUILTINIDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (BuildinTypeExpr))
            (SuffixExpr
              (INTEGER)))))
      (LabeledStatement
        (BlockLabel
          (IDENTIFIER))
        (Block
          (BlockExprStatement
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (AssignOp)
              (SuffixExpr
                (INTEGER))))
          (AssignExpr
            (BreakLabel
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
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IfTypeExpr
            (IfPrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE)))))
            (Payload
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER)))
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (IDENTIFIER))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (BlockExprStatement
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (INTEGER))))
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
                (IDENTIFIER)))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments))))
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
              (AssignExpr
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
                        (INTEGER)))))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList)
              (PrefixTypeOp)
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
              (BlockExprStatement
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)))))))
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
          (FnCallArguments)))))
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
              (Payload
                (IDENTIFIER))
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (IDENTIFIER))))))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))))
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
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments)))))))))
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
