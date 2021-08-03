================================================================================
hasfield
================================================================================

    const expect = @import("std").testing.expect;
const builtin = @import("builtin");

test "@hasField" {
    const struc = struct {
        a: i32,
        b: []u8,

        pub const nope = 1;
    };
    expect(@hasField(struc, "a") == true);
    expect(@hasField(struc, "b") == true);
    expect(@hasField(struc, "non-existant") == false);
    expect(@hasField(struc, "nope") == false);

    const unin = union {
        a: u64,
        b: []u16,

        pub const nope = 1;
    };
    expect(@hasField(unin, "a") == true);
    expect(@hasField(unin, "b") == true);
    expect(@hasField(unin, "non-existant") == false);
    expect(@hasField(unin, "nope") == false);

    const enm = enum {
        a,
        b,

        pub const nope = 1;
    };
    expect(@hasField(enm, "a") == true);
    expect(@hasField(enm, "b") == true);
    expect(@hasField(enm, "non-existant") == false);
    expect(@hasField(enm, "nope") == false);
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
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BUILTINIDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
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
              (PrefixTypeOp
                (SliceTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))
            (VarDecl
              (IDENTIFIER)
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
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
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
              (PrefixTypeOp
                (SliceTypeStart))
              (SuffixExpr
                (BuildinTypeExpr)))
            (VarDecl
              (IDENTIFIER)
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
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (ContainerDecl
            (ContainerDeclType)
            (ContainerField
              (IDENTIFIER))
            (ContainerField
              (IDENTIFIER))
            (VarDecl
              (IDENTIFIER)
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
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr)))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (BinaryExpr
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (IDENTIFIER))
                  (SuffixExpr
                    (STRINGLITERAL
                      (STRINGLITERALSINGLE)))))
              (CompareOp)
              (SuffixExpr))))))))
