================================================================================
tuple
================================================================================

    const std = @import("std");
const testing = std.testing;
const expect = testing.expect;
const expectEqual = testing.expectEqual;

test "tuple concatenation" {
    const S = struct {
        fn doTheTest() void {
            var a: i32 = 1;
            var b: i32 = 2;
            var x = .{a};
            var y = .{b};
            var c = x ++ y;
            expectEqual(@as(i32, 1), c[0]);
            expectEqual(@as(i32, 2), c[1]);
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "tuple multiplication" {
    const S = struct {
        fn doTheTest() void {
            {
                const t = .{} ** 4;
                expectEqual(0, @typeInfo(@TypeOf(t)).Struct.fields.len);
            }
            {
                const t = .{'a'} ** 4;
                expectEqual(4, @typeInfo(@TypeOf(t)).Struct.fields.len);
                inline for (t) |x| expectEqual('a', x);
            }
            {
                const t = .{ 1, 2, 3 } ** 4;
                expectEqual(12, @typeInfo(@TypeOf(t)).Struct.fields.len);
                inline for (t) |x, i| expectEqual(1 + i % 3, x);
            }
        }
    };
    S.doTheTest();
    comptime S.doTheTest();

    const T = struct {
        fn consume_tuple(tuple: anytype, len: usize) void {
            expect(tuple.len == len);
        }

        fn doTheTest() void {
            const t1 = .{};

            var rt_var: u8 = 42;
            const t2 = .{rt_var} ++ .{};

            expect(t2.len == 1);
            expect(t2.@"0" == rt_var);
            expect(t2.@"0" == 42);
            expect(&t2.@"0" != &rt_var);

            consume_tuple(t1 ++ t1, 0);
            consume_tuple(.{} ++ .{}, 0);
            consume_tuple(.{0} ++ .{}, 1);
            consume_tuple(.{0} ++ .{1}, 2);
            consume_tuple(.{ 0, 1, 2 } ++ .{ u8, 1, noreturn }, 6);
            consume_tuple(t2 ++ t1, 1);
            consume_tuple(t1 ++ t2, 1);
            consume_tuple(t2 ++ t2, 2);
            consume_tuple(.{rt_var} ++ .{}, 1);
            consume_tuple(.{rt_var} ++ t1, 1);
            consume_tuple(.{} ++ .{rt_var}, 1);
            consume_tuple(t2 ++ .{void}, 2);
            consume_tuple(t2 ++ .{0}, 2);
            consume_tuple(.{0} ++ t2, 2);
            consume_tuple(.{void} ++ t2, 2);
            consume_tuple(.{u8} ++ .{rt_var} ++ .{true}, 3);
        }
    };

    T.doTheTest();
    comptime T.doTheTest();
}

test "pass tuple to comptime var parameter" {
    const S = struct {
        fn Foo(comptime args: anytype) void {
            expect(args[0] == 1);
        }

        fn doTheTest() void {
            Foo(.{1});
        }
    };
    S.doTheTest();
    comptime S.doTheTest();
}

test "tuple initializer for var" {
    const S = struct {
        fn doTheTest() void {
            const Bytes = struct {
                id: usize,
            };

            var tmp = .{
                .id = @as(usize, 2),
                .name = Bytes{ .id = 20 },
            };
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
                  (InitList
                    (SuffixExpr
                      (IDENTIFIER)))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (InitList
                    (SuffixExpr
                      (IDENTIFIER)))))
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (AdditionOp)
                  (SuffixExpr
                    (IDENTIFIER))))
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
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER)))))))
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
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER)))))))))))
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
              (LabeledStatement
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (SuffixExpr
                        (InitList))
                      (MultiplyOp 
                        (SuffixExpr
                          (INTEGER))))
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (BUILTINIDENTIFIER)
                            (FnCallArguments
                              (SuffixExpr
                                (BUILTINIDENTIFIER)
                                (FnCallArguments
                                  (SuffixExpr
                                    (IDENTIFIER)))))
                            (SuffixOp
                              (IDENTIFIER))
                            (SuffixOp
                              (IDENTIFIER))
                            (SuffixOp
                              (IDENTIFIER))))))))
                (LabeledStatement
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (SuffixExpr
                          (InitList
                            (SuffixExpr
                              (CHAR_LITERAL))))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER))))
                      (AssignExpr
                        (SuffixExpr
                          (IDENTIFIER)
                          (FnCallArguments
                            (SuffixExpr
                              (INTEGER))
                            (SuffixExpr
                              (BUILTINIDENTIFIER)
                              (FnCallArguments
                                (SuffixExpr
                                  (BUILTINIDENTIFIER)
                                  (FnCallArguments
                                    (SuffixExpr
                                      (IDENTIFIER)))))
                              (SuffixOp
                                (IDENTIFIER))
                              (SuffixOp
                                (IDENTIFIER))
                              (SuffixOp
                                (IDENTIFIER))))))
                      (AssignExpr
                        (SuffixExpr
                          (LabeledTypeExpr
                            (LoopTypeExpr
                              (ForTypeExpr
                                (ForPrefix
                                  (SuffixExpr
                                    (IDENTIFIER))
                                  (PtrIndexPayload
                                    (IDENTIFIER)))
                                (SuffixExpr
                                  (IDENTIFIER)))))
                          (FnCallArguments
                            (SuffixExpr
                              (CHAR_LITERAL))
                            (SuffixExpr
                              (IDENTIFIER)))))))
                  (LabeledStatement
                    (Block
                      (VarDecl
                        (IDENTIFIER)
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER))
                              (SuffixExpr
                                (INTEGER))
                              (SuffixExpr
                                (INTEGER))))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER))))
                        (AssignExpr
                          (SuffixExpr
                            (IDENTIFIER)
                            (FnCallArguments
                              (SuffixExpr
                                (INTEGER))
                              (SuffixExpr
                                (BUILTINIDENTIFIER)
                                (FnCallArguments
                                  (SuffixExpr
                                    (BUILTINIDENTIFIER)
                                    (FnCallArguments
                                      (SuffixExpr
                                        (IDENTIFIER)))))
                                (SuffixOp
                                  (IDENTIFIER))
                                (SuffixOp
                                  (IDENTIFIER))
                                (SuffixOp
                                  (IDENTIFIER))))))
                        (AssignExpr
                          (SuffixExpr
                            (LabeledTypeExpr
                              (LoopTypeExpr
                                (ForTypeExpr
                                  (ForPrefix
                                    (SuffixExpr
                                      (IDENTIFIER))
                                    (PtrIndexPayload
                                      (IDENTIFIER)
                                      (IDENTIFIER)))
                                  (SuffixExpr
                                    (IDENTIFIER)))))
                            (FnCallArguments
                              (BinaryExpr
                                (SuffixExpr
                                  (INTEGER))
                                (AdditionOp)
                                (BinaryExpr
                                  (SuffixExpr
                                    (IDENTIFIER))
                                  (MultiplyOp 
                                    (SuffixExpr
                                      (INTEGER))))
                                (SuffixExpr
                                  (IDENTIFIER)))))))))))
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
                  (FnCallArguments)))
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
                          (ParamType))
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
                          (IDENTIFIER)
                          (FnCallArguments
                            (BinaryExpr
                              (SuffixExpr
                                (IDENTIFIER)
                                (SuffixOp
                                  (IDENTIFIER)))
                              (CompareOp)
                              (SuffixExpr
                                (IDENTIFIER)))))))
                    (FnProto
                      (IDENTIFIER)
                      (ParamDeclList)
                      (SuffixExpr
                        (BuildinTypeExpr)))
                    (Block
                      (VarDecl
                        (IDENTIFIER)
                        (SuffixExpr
                          (InitList)))
                      (VarDecl
                        (IDENTIFIER)
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (SuffixExpr
                          (INTEGER)))
                      (VarDecl
                        (IDENTIFIER)
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (IDENTIFIER))))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList))))
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
                              (SuffixExpr
                                (INTEGER))))))
                      (AssignExpr
                        (SuffixExpr
                          (IDENTIFIER)
                          (FnCallArguments
                            (BinaryExpr
                              (UnaryExpr (PrefixOp)
                              (SuffixExpr
                                (IDENTIFIER)
                                (SuffixOp
                                  (IDENTIFIER))))
                            (CompareOp)
                            (UnaryExpr (PrefixOp)
                            (SuffixExpr
                              (IDENTIFIER)))))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER))))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER))))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER)))))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER))
                              (SuffixExpr
                                (INTEGER))
                              (SuffixExpr
                                (INTEGER))))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (BuildinTypeExpr))
                              (SuffixExpr
                                (INTEGER))
                              (SuffixExpr
                                (BuildinTypeExpr)))))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (IDENTIFIER))))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (IDENTIFIER))))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (IDENTIFIER)))))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (BuildinTypeExpr)))))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER)))))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (INTEGER))))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (SuffixExpr
                            (InitList
                              (SuffixExpr
                                (BuildinTypeExpr))))
                          (AdditionOp)
                          (SuffixExpr
                            (IDENTIFIER)))
                        (SuffixExpr
                          (INTEGER)))))
                  (AssignExpr
                    (SuffixExpr
                      (IDENTIFIER)
                      (FnCallArguments
                        (BinaryExpr
                          (BinaryExpr
                            (SuffixExpr
                              (InitList
                                (SuffixExpr
                                  (BuildinTypeExpr))))
                            (AdditionOp)
                            (SuffixExpr
                              (InitList
                                (SuffixExpr
                                  (IDENTIFIER)))))
                          (AdditionOp)
                          (SuffixExpr
                            (InitList
                              (SuffixExpr))))
                        (SuffixExpr
                          (INTEGER)))))))))
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
                  (ParamDeclList
                    (ParamDecl
                      (IDENTIFIER)
                      (ParamType)))
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
                            (SuffixOp
                              (SuffixExpr
                                (INTEGER))))
                          (CompareOp)
                          (SuffixExpr
                            (INTEGER)))))))
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
                          (InitList
                            (SuffixExpr
                              (INTEGER)))))))))))
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
                    (SuffixExpr
                      (InitList
                        (FieldInit
                          (IDENTIFIER)
                          (SuffixExpr
                            (BUILTINIDENTIFIER)
                            (FnCallArguments
                              (SuffixExpr
                                (BuildinTypeExpr))
                              (SuffixExpr
                                (INTEGER)))))
                        (FieldInit
                          (IDENTIFIER)
                          (SuffixExpr
                            (IDENTIFIER))
                          (InitList
                            (FieldInit
                              (IDENTIFIER)
                              (SuffixExpr
                                (INTEGER))))))))))))
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
