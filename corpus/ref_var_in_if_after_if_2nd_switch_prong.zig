================================================================================
ref_var_in_if_after_if_2nd_switch_prong
================================================================================

    const expect = @import("std").testing.expect;
const mem = @import("std").mem;

var ok: bool = false;
test "reference a variable in an if after an if in the 2nd switch prong" {
    foo(true, Num.Two, false, "aoeu");
    expect(!ok);
    foo(false, Num.One, false, "aoeu");
    expect(!ok);
    foo(true, Num.One, false, "aoeu");
    expect(ok);
}

const Num = enum {
    One,
    Two,
};

fn foo(c: bool, k: Num, c2: bool, b: []const u8) void {
    switch (k) {
        Num.Two => {},
        Num.One => {
            if (c) {
                const output_path = b;

                if (c2) {}

                a(output_path);
            }
        },
    }
}

fn a(x: []const u8) void {
    expect(mem.eql(u8, x, "aoeu"));
    ok = true;
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
            (STRINGLITERALSINGLE))))
      (SuffixOp
        (IDENTIFIER))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER)))
            (SuffixExpr)
            (SuffixExpr
              (STRINGLITERAL
                (STRINGLITERALSINGLE))))))
      (AssignExpr
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (IDENTIFIER))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr)
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))
          (SuffixExpr)
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (IDENTIFIER))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (SuffixExpr)
        (SuffixExpr
          (STRINGLITERAL
            (STRINGLITERALSINGLE))))))
  (AssignExpr
    (SuffixExpr
      (IDENTIFIER)
      (FnCallArguments
        (SuffixExpr
          (IDENTIFIER)))))))(VarDecl(IDENTIFIER)(SuffixExpr
  (ContainerDecl
    (ContainerDeclType)
    (ContainerField
      (IDENTIFIER))
    (ContainerField
      (IDENTIFIER)))))(FnProto(IDENTIFIER)(ParamDeclList
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
        (BuildinTypeExpr))))
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(SwitchExpr
  (SuffixExpr
    (IDENTIFIER))
  (SwitchProngList
    (SwitchProng
      (SwitchCase
        (SwitchItem
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))))
      (AssignExpr
        (Block)))
    (SwitchProng
      (SwitchCase
        (SwitchItem
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
              (IDENTIFIER)))))
      (AssignExpr
        (Block
          (IfStatement
            (IfPrefix
              (SuffixExpr
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (IDENTIFIER)))
                (IfStatement
                  (IfPrefix
                    (SuffixExpr
                      (IDENTIFIER)))
                  (BlockExpr
                    (Block)))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER))))))))))))))(FnProto(IDENTIFIER)(ParamDeclList
  (ParamDecl
    (IDENTIFIER)
    (ParamType
      (PrefixTypeOp
        (SliceTypeStart))
      (SuffixExpr
        (BuildinTypeExpr)))))(SuffixExpr
  (BuildinTypeExpr)))(Block(AssignExpr
  (SuffixExpr
    (IDENTIFIER)
    (FnCallArguments
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE))))))))(AssignExpr
  (SuffixExpr
    (IDENTIFIER))
  (AssignOp)
  (SuffixExpr))))
