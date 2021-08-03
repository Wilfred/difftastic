================================================================================
asm
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

const is_x86_64_linux = std.Target.current.cpu.arch == .x86_64 and std.Target.current.os.tag == .linux;

comptime {
    if (is_x86_64_linux) {
        asm (
            \\.globl this_is_my_alias;
            \\.type this_is_my_alias, @function;
            \\.set this_is_my_alias, derp;
        );
    }
}

test "module level assembly" {
    if (is_x86_64_linux) {
        expect(this_is_my_alias() == 1234);
    }
}

test "output constraint modifiers" {
    // This is only testing compilation.
    var a: u32 = 3;
    asm volatile (""
        : [_] "=m,r" (a)
        :
        : ""
    );
    asm volatile (""
        : [_] "=r,m" (a)
        :
        : ""
    );
}

test "alternative constraints" {
    // Make sure we allow commas as a separator for alternative constraints.
    var a: u32 = 3;
    asm volatile (""
        : [_] "=r,m" (a)
        : [_] "r,m" (a)
        : ""
    );
}

test "sized integer/float in asm input" {
    asm volatile (""
        :
        : [_] "m" (@as(usize, 3))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(i15, -3))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(u3, 3))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(i3, 3))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(u121, 3))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(i121, 3))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(f32, 3.17))
        : ""
    );
    asm volatile (""
        :
        : [_] "m" (@as(f64, 3.17))
        : ""
    );
}

extern fn this_is_my_alias() i32;

export fn derp() i32 {
    return 1234;
}

test "template expr" {
    asm (if (true) "nop" else "");
    asm (if (true) "nop" else "" :::);
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
    (BinaryExpr
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER)))
      (BinaryExpr
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER))
          (SuffixOp
            (IDENTIFIER)))
        (CompareOp)
        (SuffixExpr
          (IDENTIFIER)))))
  (TopLevelComptime
    (BlockExpr
      (Block
        (IfStatement
          (IfPrefix
            (SuffixExpr
              (IDENTIFIER)))
          (BlockExpr
            (Block
              (AssignExpr
                (AsmExpr
                  (SuffixExpr
                    (STRINGLITERAL))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (IfStatement
        (IfPrefix
          (SuffixExpr
            (IDENTIFIER)))
        (BlockExpr
          (Block
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
                      (INTEGER)))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (line_comment)
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (IDENTIFIER))))
          (ERROR)))
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (IDENTIFIER))))
          (ERROR)))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (line_comment)
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (BuildinTypeExpr))
        (SuffixExpr
          (INTEGER)))
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (IDENTIFIER)))
            (AsmInput
              (AsmInputList
                (AsmInputItem
                  (IDENTIFIER)
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))
                  (SuffixExpr
                    (IDENTIFIER))))
              (AsmClobbers
                (StringList
                  (STRINGLITERAL
                    (STRINGLITERALSINGLE))))))))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (STRINGLITERAL
              (STRINGLITERALSINGLE)))
          (ERROR)
          (AsmOutput
            (AsmOutputList
              (AsmOutputItem
                (IDENTIFIER)
                (STRINGLITERAL
                  (STRINGLITERALSINGLE))
                (ERROR
                  (IDENTIFIER))
                (IDENTIFIER)
                (ERROR))))))
      (ERROR)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
        (INTEGER))))
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (IfTypeExpr
              (IfPrefix
                (SuffixExpr))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))))))
      (AssignExpr
        (AsmExpr
          (SuffixExpr
            (IfTypeExpr
              (IfPrefix
                (SuffixExpr))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))))
          (ERROR))))))
