================================================================================
while
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

test "while loop" {
    var i: i32 = 0;
    while (i < 4) {
        i += 1;
    }
    expect(i == 4);
    expect(whileLoop1() == 1);
}
fn whileLoop1() i32 {
    return whileLoop2();
}
fn whileLoop2() i32 {
    while (true) {
        return 1;
    }
}

test "static eval while" {
    expect(static_eval_while_number == 1);
}
const static_eval_while_number = staticWhileLoop1();
fn staticWhileLoop1() i32 {
    return whileLoop2();
}
fn staticWhileLoop2() i32 {
    while (true) {
        return 1;
    }
}

test "continue and break" {
    runContinueAndBreakTest();
    expect(continue_and_break_counter == 8);
}
var continue_and_break_counter: i32 = 0;
fn runContinueAndBreakTest() void {
    var i: i32 = 0;
    while (true) {
        continue_and_break_counter += 2;
        i += 1;
        if (i < 4) {
            continue;
        }
        break;
    }
    expect(i == 4);
}

test "return with implicit cast from while loop" {
    returnWithImplicitCastFromWhileLoopTest() catch unreachable;
}
fn returnWithImplicitCastFromWhileLoopTest() anyerror!void {
    while (true) {
        return;
    }
}

test "while with continue expression" {
    var sum: i32 = 0;
    {
        var i: i32 = 0;
        while (i < 10) : (i += 1) {
            if (i == 5) continue;
            sum += i;
        }
    }
    expect(sum == 40);
}

test "while with else" {
    var sum: i32 = 0;
    var i: i32 = 0;
    var got_else: i32 = 0;
    while (i < 10) : (i += 1) {
        sum += 1;
    } else {
        got_else += 1;
    }
    expect(sum == 10);
    expect(got_else == 1);
}

test "while with optional as condition" {
    numbers_left = 10;
    var sum: i32 = 0;
    while (getNumberOrNull()) |value| {
        sum += value;
    }
    expect(sum == 45);
}

test "while with optional as condition with else" {
    numbers_left = 10;
    var sum: i32 = 0;
    var got_else: i32 = 0;
    while (getNumberOrNull()) |value| {
        sum += value;
        expect(got_else == 0);
    } else {
        got_else += 1;
    }
    expect(sum == 45);
    expect(got_else == 1);
}

test "while with error union condition" {
    numbers_left = 10;
    var sum: i32 = 0;
    var got_else: i32 = 0;
    while (getNumberOrErr()) |value| {
        sum += value;
    } else |err| {
        expect(err == error.OutOfNumbers);
        got_else += 1;
    }
    expect(sum == 45);
    expect(got_else == 1);
}

var numbers_left: i32 = undefined;
fn getNumberOrErr() anyerror!i32 {
    return if (numbers_left == 0) error.OutOfNumbers else x: {
        numbers_left -= 1;
        break :x numbers_left;
    };
}
fn getNumberOrNull() ?i32 {
    return if (numbers_left == 0) null else x: {
        numbers_left -= 1;
        break :x numbers_left;
    };
}

test "while on optional with else result follow else prong" {
    const result = while (returnNull()) |value| {
        break value;
    } else
        @as(i32, 2);
    expect(result == 2);
}

test "while on optional with else result follow break prong" {
    const result = while (returnOptional(10)) |value| {
        break value;
    } else
        @as(i32, 2);
    expect(result == 10);
}

test "while on error union with else result follow else prong" {
    const result = while (returnError()) |value| {
        break value;
    } else |err|
        @as(i32, 2);
    expect(result == 2);
}

test "while on error union with else result follow break prong" {
    const result = while (returnSuccess(10)) |value| {
        break value;
    } else |err|
        @as(i32, 2);
    expect(result == 10);
}

test "while on bool with else result follow else prong" {
    const result = while (returnFalse()) {
        break @as(i32, 10);
    } else
        @as(i32, 2);
    expect(result == 2);
}

test "while on bool with else result follow break prong" {
    const result = while (returnTrue()) {
        break @as(i32, 10);
    } else
        @as(i32, 2);
    expect(result == 10);
}

test "break from outer while loop" {
    testBreakOuter();
    comptime testBreakOuter();
}

fn testBreakOuter() void {
    outer: while (true) {
        while (true) {
            break :outer;
        }
    }
}

test "continue outer while loop" {
    testContinueOuter();
    comptime testContinueOuter();
}

fn testContinueOuter() void {
    var i: usize = 0;
    outer: while (i < 10) : (i += 1) {
        while (true) {
            continue :outer;
        }
    }
}

fn returnNull() ?i32 {
    return null;
}
fn returnOptional(x: i32) ?i32 {
    return x;
}
fn returnError() anyerror!i32 {
    return error.YouWantedAnError;
}
fn returnSuccess(x: i32) anyerror!i32 {
    return x;
}
fn returnFalse() bool {
    return false;
}
fn returnTrue() bool {
    return true;
}

test "while bool 2 break statements and an else" {
    const S = struct {
        fn entry(t: bool, f: bool) void {
            var ok = false;
            ok = while (t) {
                if (f) break false;
                if (t) break true;
            } else false;
            expect(ok);
        }
    };
    S.entry(true, false);
    comptime S.entry(true, false);
}

test "while optional 2 break statements and an else" {
    const S = struct {
        fn entry(opt_t: ?bool, f: bool) void {
            var ok = false;
            ok = while (opt_t) |t| {
                if (f) break false;
                if (t) break true;
            } else false;
            expect(ok);
        }
    };
    S.entry(true, false);
    comptime S.entry(true, false);
}

test "while error 2 break statements and an else" {
    const S = struct {
        fn entry(opt_t: anyerror!bool, f: bool) void {
            var ok = false;
            ok = while (opt_t) |t| {
                if (f) break false;
                if (t) break true;
            } else |_| false;
            expect(ok);
        }
    };
    S.entry(true, false);
    comptime S.entry(true, false);
}

test "while copies its payload" {
    const S = struct {
        fn doTheTest() void {
            var tmp: ?i32 = 10;
            while (tmp) |value| {
                // Modify the original variable
                tmp = null;
                expect(value == 10);
            }
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
  (TestDecl
    (STRINGLITERALSINGLE)
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
                  (INTEGER))))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
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
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (LabeledStatement
      (LoopStatement
        (WhileStatement
          (WhilePrefix
            (SuffixExpr))
          (BlockExpr
            (Block
              (AssignExpr
                (SuffixExpr
                  (INTEGER)))))))))
  (TestDecl
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
                (INTEGER))))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (LabeledStatement
      (LoopStatement
        (WhileStatement
          (WhilePrefix
            (SuffixExpr))
          (BlockExpr
            (Block
              (AssignExpr
                (SuffixExpr
                  (INTEGER)))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments)))
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
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
            (SuffixExpr))
          (BlockExpr
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (INTEGER)))
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
                      (IDENTIFIER))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER))))
                (BlockExpr
                  (Block
                    (AssignExpr))))
              (AssignExpr))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments))
          (BitwiseOp)
          (SuffixExpr)))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (LabeledStatement
      (LoopStatement
        (WhileStatement
          (WhilePrefix
            (SuffixExpr))
          (BlockExpr
            (Block
              (AssignExpr)))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (LabeledStatement
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
                      (INTEGER)))
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
                      (SuffixExpr
                        (IDENTIFIER))
                      (AssignOp)
                      (SuffixExpr
                        (IDENTIFIER))))))))))
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
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
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
                  (INTEGER)))
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
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER)))))
            (LabeledStatement
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
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
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (INTEGER)))
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
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
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
                (INTEGER))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
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
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (IDENTIFIER)))
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
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
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
          (IDENTIFIER))
        (AssignOp)
        (SuffixExpr
          (INTEGER)))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
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
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (IDENTIFIER)))))
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
                          (IDENTIFIER))))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER))))))))
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
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
            (IDENTIFIER))
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER)))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IfTypeExpr
          (IfPrefix
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr)
          (SuffixExpr
            (LabeledTypeExpr
              (BlockLabel
                (IDENTIFIER))
              (Block
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AssignOp)
                  (SuffixExpr
                    (INTEGER)))
                (AssignExpr
                  (BreakLabel
                    (IDENTIFIER))
                  (SuffixExpr
                    (IDENTIFIER))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (VarDecl
        (IDENTIFIER)
        (LoopExpr
          (WhileExpr
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
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
        (LoopExpr
          (WhileExpr
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))))
              (PtrPayload
                (IDENTIFIER)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
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
        (LoopExpr
          (WhileExpr
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments))
              (PtrPayload
                (IDENTIFIER)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))))
            (Payload
              (IDENTIFIER))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
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
        (LoopExpr
          (WhileExpr
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))))
              (PtrPayload
                (IDENTIFIER)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))))
            (Payload
              (IDENTIFIER))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
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
        (LoopExpr
          (WhileExpr
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (INTEGER))))))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
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
        (LoopExpr
          (WhileExpr
            (WhilePrefix
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments)))
            (Block
              (AssignExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (INTEGER))))))
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))))
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
    (LabeledStatement
      (BlockLabel
        (IDENTIFIER))
      (LoopStatement
        (WhileStatement
          (WhilePrefix
            (SuffixExpr))
          (BlockExpr
            (Block
              (LabeledStatement
                (LoopStatement
                  (WhileStatement
                    (WhilePrefix
                      (SuffixExpr))
                    (BlockExpr
                      (Block
                        (AssignExpr
                          (BreakLabel
                            (IDENTIFIER))))))))))))))
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
        (BuildinTypeExpr))
      (SuffixExpr
        (INTEGER)))
    (LabeledStatement
      (BlockLabel
        (IDENTIFIER))
      (LoopStatement
        (WhileStatement
          (WhilePrefix
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER))
              (CompareOp)
              (SuffixExpr
                (INTEGER)))
            (WhileContinueExpr
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (SuffixExpr
                  (INTEGER)))))
          (BlockExpr
            (Block
              (LabeledStatement
                (LoopStatement
                  (WhileStatement
                    (WhilePrefix
                      (SuffixExpr))
                    (BlockExpr
                      (Block
                        (AssignExpr
                          (BreakLabel
                            (IDENTIFIER))))))))))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList
      (ParamDecl
        (IDENTIFIER)
        (ParamType
          (SuffixExpr
            (BuildinTypeExpr)))))
    (PrefixTypeOp)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))))
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
        (IDENTIFIER))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr)))
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
                      (BuildinTypeExpr))))
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
                (SuffixExpr))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (LoopExpr
                  (WhileExpr
                    (WhilePrefix
                      (SuffixExpr
                        (IDENTIFIER)))
                    (Block
                      (AssignExpr
                        (IfExpr
                          (IfPrefix
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr)))
                      (AssignExpr
                        (IfExpr
                          (IfPrefix
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr))))
                    (SuffixExpr))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
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
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (PrefixTypeOp)
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
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (LoopExpr
                  (WhileExpr
                    (WhilePrefix
                      (SuffixExpr
                        (IDENTIFIER))
                      (PtrPayload
                        (IDENTIFIER)))
                    (Block
                      (AssignExpr
                        (IfExpr
                          (IfPrefix
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr)))
                      (AssignExpr
                        (IfExpr
                          (IfPrefix
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr))))
                    (SuffixExpr))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
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
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (SuffixExpr
                      (BuildinTypeExpr))
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
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER))
                (AssignOp)
                (LoopExpr
                  (WhileExpr
                    (WhilePrefix
                      (SuffixExpr
                        (IDENTIFIER))
                      (PtrPayload
                        (IDENTIFIER)))
                    (Block
                      (AssignExpr
                        (IfExpr
                          (IfPrefix
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr)))
                      (AssignExpr
                        (IfExpr
                          (IfPrefix
                            (SuffixExpr
                              (IDENTIFIER)))
                          (SuffixExpr))))
                    (Payload
                      (IDENTIFIER))
                    (SuffixExpr))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr))))
      (AssignExpr
        (SuffixExpr
          (SuffixExpr
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments
            (SuffixExpr)
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
              (LabeledStatement
                (LoopStatement
                  (WhileStatement
                    (WhilePrefix
                      (SuffixExpr
                        (IDENTIFIER))
                      (PtrPayload
                        (IDENTIFIER)))
                    (BlockExpr
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
                              (BinaryExpr
                                (SuffixExpr
                                  (IDENTIFIER))
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
          (FnCallArguments))))))
