================================================================================
namespace_depends_on_compile_var
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

test "namespace depends on compile var" {
    if (some_namespace.a_bool) {
        expect(some_namespace.a_bool);
    } else {
        expect(!some_namespace.a_bool);
    }
}
const some_namespace = switch (std.builtin.os.tag) {
    .linux => @import("namespace_depends_on_compile_var/a.zig"),
    else => @import("namespace_depends_on_compile_var/b.zig"),
};

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
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER)
            (SuffixOp
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
                      (IDENTIFIER))))))))
        (LabeledStatement
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER))))))))))))(VarDecl
  (IDENTIFIER)
  (SuffixExpr
    (SwitchExpr
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER)))
      (SwitchProngList
        (SwitchProng
          (SwitchCase
            (SwitchItem
              (SuffixExpr
                (IDENTIFIER))))
          (AssignExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE)))))))
        (SwitchProng
          (SwitchCase)
          (AssignExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))))))
