================================================================================
slice_sentinel_comptime
================================================================================

    test "comptime slice-sentinel in bounds (unterminated)" {
    // array
    comptime {
        var target = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        const slice = target[0..3 :'d'];
    }

    // ptr_array
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target = &buf;
        const slice = target[0..3 :'d'];
    }

    // vector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*]u8 = &buf;
        const slice = target[0..3 :'d'];
    }

    // vector_ConstPtrSpecialRef
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*]u8 = @ptrCast([*]u8, &buf);
        const slice = target[0..3 :'d'];
    }

    // cvector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*c]u8 = &buf;
        const slice = target[0..3 :'d'];
    }

    // cvector_ConstPtrSpecialRef
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*c]u8 = @ptrCast([*c]u8, &buf);
        const slice = target[0..3 :'d'];
    }

    // slice
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: []u8 = &buf;
        const slice = target[0..3 :'d'];
    }
}

test "comptime slice-sentinel in bounds (end,unterminated)" {
    // array
    comptime {
        var target = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        const slice = target[0..13 :0xff];
    }

    // ptr_array
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        var target = &buf;
        const slice = target[0..13 :0xff];
    }

    // vector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        var target: [*]u8 = &buf;
        const slice = target[0..13 :0xff];
    }

    // vector_ConstPtrSpecialRef
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        var target: [*]u8 = @ptrCast([*]u8, &buf);
        const slice = target[0..13 :0xff];
    }

    // cvector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        var target: [*c]u8 = &buf;
        const slice = target[0..13 :0xff];
    }

    // cvector_ConstPtrSpecialRef
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        var target: [*c]u8 = @ptrCast([*c]u8, &buf);
        const slice = target[0..13 :0xff];
    }

    // slice
    comptime {
        var buf = [_]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{0xff} ** 10;
        var target: []u8 = &buf;
        const slice = target[0..13 :0xff];
    }
}

test "comptime slice-sentinel in bounds (terminated)" {
    // array
    comptime {
        var target = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        const slice = target[0..3 :'d'];
    }

    // ptr_array
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target = &buf;
        const slice = target[0..3 :'d'];
    }

    // vector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*]u8 = &buf;
        const slice = target[0..3 :'d'];
    }

    // vector_ConstPtrSpecialRef
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*]u8 = @ptrCast([*]u8, &buf);
        const slice = target[0..3 :'d'];
    }

    // cvector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*c]u8 = &buf;
        const slice = target[0..3 :'d'];
    }

    // cvector_ConstPtrSpecialRef
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*c]u8 = @ptrCast([*c]u8, &buf);
        const slice = target[0..3 :'d'];
    }

    // slice
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: []u8 = &buf;
        const slice = target[0..3 :'d'];
    }
}

test "comptime slice-sentinel in bounds (on target sentinel)" {
    // array
    comptime {
        var target = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        const slice = target[0..14 :0];
    }

    // ptr_array
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target = &buf;
        const slice = target[0..14 :0];
    }

    // vector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*]u8 = &buf;
        const slice = target[0..14 :0];
    }

    // vector_ConstPtrSpecialRef
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*]u8 = @ptrCast([*]u8, &buf);
        const slice = target[0..14 :0];
    }

    // cvector_ConstPtrSpecialBaseArray
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*c]u8 = &buf;
        const slice = target[0..14 :0];
    }

    // cvector_ConstPtrSpecialRef
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: [*c]u8 = @ptrCast([*c]u8, &buf);
        const slice = target[0..14 :0];
    }

    // slice
    comptime {
        var buf = [_:0]u8{ 'a', 'b', 'c', 'd' } ++ [_]u8{undefined} ** 10;
        var target: []u8 = &buf;
        const slice = target[0..14 :0];
    }
}

--------------------------------------------------------------------------------

(source_file
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (line_comment)
      (BlockExprStatement
        (BlockExpr
          (Block
            (VarDecl
              (IDENTIFIER)
              (BinaryExpr
                (PrefixTypeOp
                  (ArrayTypeStart
                    (SuffixExpr
                      (IDENTIFIER))))
                (SuffixExpr
                  (BuildinTypeExpr))
                (InitList
                  (SuffixExpr
                    (CHAR_LITERAL))
                  (SuffixExpr
                    (CHAR_LITERAL))
                  (SuffixExpr
                    (CHAR_LITERAL))
                  (SuffixExpr
                    (CHAR_LITERAL)))
                (AdditionOp)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr))
                  (MultiplyOp 
                    (SuffixExpr
                      (INTEGER)))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (PrefixTypeOp
                    (PtrTypeStart))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (PrefixTypeOp
                    (PtrTypeStart))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (PrefixTypeOp
                    (PtrTypeStart))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (PrefixTypeOp
                    (PtrTypeStart))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (PrefixTypeOp
                    (SliceTypeStart))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (CHAR_LITERAL))))))))))
    (TestDecl
      (STRINGLITERALSINGLE)
      (Block
        (line_comment)
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (PrefixTypeOp
                    (ArrayTypeStart
                      (SuffixExpr
                        (IDENTIFIER))))
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (InitList
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL))
                    (SuffixExpr
                      (CHAR_LITERAL)))
                  (AdditionOp)
                  (BinaryExpr
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
                        (INTEGER)))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
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
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
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
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
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
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (BUILTINIDENTIFIER)
                      (FnCallArguments
                        (PrefixTypeOp
                          (PtrTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (UnaryExpr (PrefixOp)
                        (SuffixExpr
                          (IDENTIFIER))))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
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
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
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
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (BUILTINIDENTIFIER)
                      (FnCallArguments
                        (PrefixTypeOp
                          (PtrTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (UnaryExpr (PrefixOp)
                        (SuffixExpr
                          (IDENTIFIER))))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
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
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (PrefixTypeOp
                      (SliceTypeStart))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (UnaryExpr (PrefixOp)
                    (SuffixExpr
                      (IDENTIFIER))))
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))
                      (SuffixExpr
                        (INTEGER))))))))))
      (TestDecl
        (STRINGLITERALSINGLE)
        (Block
          (line_comment)
          (BlockExprStatement
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))
                        (SuffixExpr
                          (INTEGER))))
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (InitList
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL))
                      (SuffixExpr
                        (CHAR_LITERAL)))
                    (AdditionOp)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr))
                      (MultiplyOp 
                        (SuffixExpr
                          (INTEGER)))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (PrefixTypeOp
                            (PtrTypeStart))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (UnaryExpr (PrefixOp)
                          (SuffixExpr
                            (IDENTIFIER))))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (PrefixTypeOp
                        (PtrTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (PrefixTypeOp
                            (PtrTypeStart))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (UnaryExpr (PrefixOp)
                          (SuffixExpr
                            (IDENTIFIER))))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (PrefixTypeOp
                        (SliceTypeStart))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (UnaryExpr (PrefixOp)
                      (SuffixExpr
                        (IDENTIFIER))))
                  (VarDecl
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (INTEGER))
                        (SuffixExpr
                          (CHAR_LITERAL))))))))))
        (TestDecl
          (STRINGLITERALSINGLE)
          (Block
            (line_comment)
            (BlockExprStatement
              (BlockExpr
                (Block
                  (VarDecl
                    (IDENTIFIER)
                    (BinaryExpr
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (IDENTIFIER))
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (InitList
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL))
                        (SuffixExpr
                          (CHAR_LITERAL)))
                      (AdditionOp)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr))
                        (MultiplyOp 
                          (SuffixExpr
                            (INTEGER)))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))))))))
              (line_comment)
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL)))
                        (AdditionOp)
                        (BinaryExpr
                          (PrefixTypeOp
                            (ArrayTypeStart
                              (SuffixExpr
                                (IDENTIFIER))))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (InitList
                            (SuffixExpr))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER)))))
                      (VarDecl
                        (IDENTIFIER)
                        (UnaryExpr (PrefixOp)
                        (SuffixExpr
                          (IDENTIFIER))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))))))))
              (line_comment)
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL)))
                        (AdditionOp)
                        (BinaryExpr
                          (PrefixTypeOp
                            (ArrayTypeStart
                              (SuffixExpr
                                (IDENTIFIER))))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (InitList
                            (SuffixExpr))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER)))))
                      (VarDecl
                        (IDENTIFIER)
                        (PrefixTypeOp
                          (PtrTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (UnaryExpr (PrefixOp)
                        (SuffixExpr
                          (IDENTIFIER))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))))))))
              (line_comment)
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL)))
                        (AdditionOp)
                        (BinaryExpr
                          (PrefixTypeOp
                            (ArrayTypeStart
                              (SuffixExpr
                                (IDENTIFIER))))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (InitList
                            (SuffixExpr))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER)))))
                      (VarDecl
                        (IDENTIFIER)
                        (PrefixTypeOp
                          (PtrTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (SuffixExpr
                          (BUILTINIDENTIFIER)
                          (FnCallArguments
                            (PrefixTypeOp
                              (PtrTypeStart))
                            (SuffixExpr
                              (BuildinTypeExpr))
                            (UnaryExpr (PrefixOp)
                            (SuffixExpr
                              (IDENTIFIER))))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))))))))
              (line_comment)
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL)))
                        (AdditionOp)
                        (BinaryExpr
                          (PrefixTypeOp
                            (ArrayTypeStart
                              (SuffixExpr
                                (IDENTIFIER))))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (InitList
                            (SuffixExpr))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER)))))
                      (VarDecl
                        (IDENTIFIER)
                        (PrefixTypeOp
                          (PtrTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (UnaryExpr (PrefixOp)
                        (SuffixExpr
                          (IDENTIFIER))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))))))))
              (line_comment)
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL)))
                        (AdditionOp)
                        (BinaryExpr
                          (PrefixTypeOp
                            (ArrayTypeStart
                              (SuffixExpr
                                (IDENTIFIER))))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (InitList
                            (SuffixExpr))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER)))))
                      (VarDecl
                        (IDENTIFIER)
                        (PrefixTypeOp
                          (PtrTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (SuffixExpr
                          (BUILTINIDENTIFIER)
                          (FnCallArguments
                            (PrefixTypeOp
                              (PtrTypeStart))
                            (SuffixExpr
                              (BuildinTypeExpr))
                            (UnaryExpr (PrefixOp)
                            (SuffixExpr
                              (IDENTIFIER))))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))))))))
              (line_comment)
              (BlockExprStatement
                (BlockExpr
                  (Block
                    (VarDecl
                      (IDENTIFIER)
                      (BinaryExpr
                        (PrefixTypeOp
                          (ArrayTypeStart
                            (SuffixExpr
                              (IDENTIFIER))
                            (SuffixExpr
                              (INTEGER))))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (InitList
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL))
                          (SuffixExpr
                            (CHAR_LITERAL)))
                        (AdditionOp)
                        (BinaryExpr
                          (PrefixTypeOp
                            (ArrayTypeStart
                              (SuffixExpr
                                (IDENTIFIER))))
                          (SuffixExpr
                            (BuildinTypeExpr))
                          (InitList
                            (SuffixExpr))
                          (MultiplyOp 
                            (SuffixExpr
                              (INTEGER)))))
                      (VarDecl
                        (IDENTIFIER)
                        (PrefixTypeOp
                          (SliceTypeStart))
                        (SuffixExpr
                          (BuildinTypeExpr))
                        (UnaryExpr (PrefixOp)
                        (SuffixExpr
                          (IDENTIFIER))))
                    (VarDecl
                      (IDENTIFIER)
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER))
                          (SuffixExpr
                            (INTEGER)))))))))))
