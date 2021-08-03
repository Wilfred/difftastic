================================================================================
alignof
================================================================================

    const std = @import("std");
const expect = std.testing.expect;
const builtin = @import("builtin");
const maxInt = std.math.maxInt;

const Foo = struct {
    x: u32,
    y: u32,
    z: u32,
};

test "@alignOf(T) before referencing T" {
    comptime expect(@alignOf(Foo) != maxInt(usize));
    if (builtin.arch == builtin.Arch.x86_64) {
        comptime expect(@alignOf(Foo) == 4);
    }
}

test "comparison of @alignOf(T) against zero" {
    {
        const T = struct { x: u32 };
        expect(!(@alignOf(T) == 0));
        expect(@alignOf(T) != 0);
        expect(!(@alignOf(T) < 0));
        expect(!(@alignOf(T) <= 0));
        expect(@alignOf(T) > 0);
        expect(@alignOf(T) >= 0);
    }
    {
        const T = struct {};
        expect(@alignOf(T) == 0);
        expect(!(@alignOf(T) != 0));
        expect(!(@alignOf(T) < 0));
        expect(@alignOf(T) <= 0);
        expect(!(@alignOf(T) > 0));
        expect(@alignOf(T) >= 0);
    }
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
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr)))
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
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
                    (IDENTIFIER))))
              (CompareOp)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))))))))
      (IfStatement
        (IfPrefix
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
              (SuffixOp
                (IDENTIFIER)))))
        (BlockExpr
          (Block
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
                          (IDENTIFIER))))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (LabeledStatement
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
          (AssignExpr
            (SuffixExpr
              (IDENTIFIER)
              (FnCallArguments
                (UnaryExpr (PrefixOp)
                (SuffixExpr
                  (GroupedExpr
                    (BinaryExpr
                      (SuffixExpr
                        (BUILTINIDENTIFIER)
                        (FnCallArguments
                          (SuffixExpr
                            (IDENTIFIER))))
                      (CompareOp)
                      (SuffixExpr
                        (INTEGER)))))))))
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
                  (INTEGER))))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (GroupedExpr
                  (BinaryExpr
                    (SuffixExpr
                      (BUILTINIDENTIFIER)
                      (FnCallArguments
                        (SuffixExpr
                          (IDENTIFIER))))
                    (CompareOp)
                    (SuffixExpr
                      (INTEGER)))))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (GroupedExpr
                (BinaryExpr
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER))))
                  (CompareOp)
                  (SuffixExpr
                    (INTEGER)))))))))
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
              (INTEGER))))))
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
              (INTEGER))))))))(LabeledStatement
  (Block
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (ContainerDecl
          (ContainerDeclType))))
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
              (INTEGER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (GroupedExpr
              (BinaryExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER))))
                (CompareOp)
                (SuffixExpr
                  (INTEGER)))))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (UnaryExpr (PrefixOp)
        (SuffixExpr
          (GroupedExpr
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))))
              (CompareOp)
              (SuffixExpr
                (INTEGER)))))))))(AssignExpr
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
          (INTEGER))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (GroupedExpr
          (BinaryExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))))
            (CompareOp)
            (SuffixExpr
              (INTEGER)))))))))(AssignExpr(SuffixExpr
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
        (INTEGER)))))))))))
