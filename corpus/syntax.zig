================================================================================
syntax
================================================================================

    // Test trailing comma syntax
// zig fmt: off

extern var a: c_int;
extern "c" var b: c_int;
export var c: c_int = 0;
threadlocal var d: c_int;
extern threadlocal var e: c_int;
extern "c" threadlocal var f: c_int;
export threadlocal var g: c_int = 0;

const struct_trailing_comma = struct { x: i32, y: i32, };
const struct_no_comma = struct { x: i32, y: i32 };
const struct_fn_no_comma = struct { fn m() void {} y: i32 };

const enum_no_comma = enum { A, B };

fn container_init() void {
    const S = struct { x: i32, y: i32 };
    _ = S { .x = 1, .y = 2 };
    _ = S { .x = 1, .y = 2, };
}

fn type_expr_return1() if (true) A {}
fn type_expr_return2() for (true) |_| A {}
fn type_expr_return3() while (true) A {}
fn type_expr_return4() comptime A {}

fn switch_cases(x: i32) void {
    switch (x) {
        1,2,3 => {},
        4,5, => {},
        6...8, => {},
        else => {},
    }
}

fn switch_prongs(x: i32) void {
    switch (x) {
        0 => {},
        else => {},
    }
    switch (x) {
        0 => {},
        else => {}
    }
}

const fn_no_comma = fn(i32, i32)void;
const fn_trailing_comma = fn(i32, i32,)void;

fn fn_calls() void {
    fn add(x: i32, y: i32,) i32 { x + y };
    _ = add(1, 2);
    _ = add(1, 2,);
}

fn asm_lists() void {
    if (false) { // Build AST but don't analyze
        asm ("not real assembly"
            :[a] "x" (x),);
        asm ("not real assembly"
            :[a] "x" (->i32),:[a] "x" (1),);
        asm ("still not real assembly"
            :::"a","b",);
    }
}


--------------------------------------------------------------------------------

(source_file
  (line_comment)
  (line_comment)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))
  (STRINGLITERALSINGLE)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))
  (STRINGLITERALSINGLE)
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr)))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (BuildinTypeExpr))
    (SuffixExpr
      (INTEGER)))
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
            (BuildinTypeExpr))))))
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
            (BuildinTypeExpr))))))
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
        (Block)
        (ContainerField
          (IDENTIFIER)
          (SuffixExpr
            (BuildinTypeExpr))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (ContainerDecl
        (ContainerDeclType)
        (ContainerField
          (IDENTIFIER))
        (ContainerField
          (IDENTIFIER)))))
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
              (BuildinTypeExpr)))
          (ContainerField
            (IDENTIFIER)
            (SuffixExpr
              (BuildinTypeExpr))))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (IDENTIFIER))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (IDENTIFIER))
      (InitList
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER)))
        (FieldInit
          (IDENTIFIER)
          (SuffixExpr
            (INTEGER))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (IfTypeExpr
        (IfPrefix
          (SuffixExpr))
        (SuffixExpr
          (IDENTIFIER)))))
  (Block)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (LabeledTypeExpr
        (LoopTypeExpr
          (ForTypeExpr
            (ForPrefix
              (SuffixExpr)
              (PtrIndexPayload
                (IDENTIFIER)))
            (SuffixExpr
              (IDENTIFIER)))))))
  (Block)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (LabeledTypeExpr
        (LoopTypeExpr
          (WhileTypeExpr
            (WhilePrefix
              (SuffixExpr))
            (SuffixExpr
              (IDENTIFIER)))))))
  (Block)
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (SuffixExpr
        (IDENTIFIER))))
  (Block)
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
    (SwitchExpr
      (SuffixExpr
        (IDENTIFIER))
      (SwitchProngList
        (SwitchProng
          (SwitchCase
            (SwitchItem
              (SuffixExpr
                (INTEGER)))
            (SwitchItem
              (SuffixExpr
                (INTEGER)))
            (SwitchItem
              (SuffixExpr
                (INTEGER))))
          (AssignExpr
            (Block)))
        (SwitchProng
          (SwitchCase
            (SwitchItem
              (SuffixExpr
                (INTEGER)))
            (SwitchItem
              (SuffixExpr
                (INTEGER))))
          (AssignExpr
            (Block)))
        (SwitchProng
          (SwitchCase
            (SwitchItem
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER))))
          (AssignExpr
            (Block)))
        (SwitchProng
          (SwitchCase)
          (AssignExpr
            (Block))))))
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
    (SwitchExpr
      (SuffixExpr
        (IDENTIFIER))
      (SwitchProngList
        (SwitchProng
          (SwitchCase
            (SwitchItem
              (SuffixExpr
                (INTEGER))))
          (AssignExpr
            (Block)))
        (SwitchProng
          (SwitchCase)
          (AssignExpr
            (Block)))))
    (SwitchExpr
      (SuffixExpr
        (IDENTIFIER))
      (SwitchProngList
        (SwitchProng
          (SwitchCase
            (SwitchItem
              (SuffixExpr
                (INTEGER))))
          (AssignExpr
            (Block)))
        (SwitchProng
          (SwitchCase)
          (AssignExpr
            (Block))))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (FnProto
        (ParamDeclList
          (ParamDecl
            (ParamType
              (SuffixExpr
                (BuildinTypeExpr))))
          (ParamDecl
            (ParamType
              (SuffixExpr
                (BuildinTypeExpr)))))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (VarDecl
    (IDENTIFIER)
    (SuffixExpr
      (FnProto
        (ParamDeclList
          (ParamDecl
            (ParamType
              (SuffixExpr
                (BuildinTypeExpr))))
          (ParamDecl
            (ParamType
              (SuffixExpr
                (BuildinTypeExpr)))))
        (SuffixExpr
          (BuildinTypeExpr)))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (AssignExpr
      (SuffixExpr
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
            (BuildinTypeExpr))))
      (InitList
        (BinaryExpr
          (SuffixExpr
            (IDENTIFIER))
          (AdditionOp)
          (SuffixExpr
            (IDENTIFIER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER)))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))))))
  (FnProto
    (IDENTIFIER)
    (ParamDeclList)
    (SuffixExpr
      (BuildinTypeExpr)))
  (Block
    (IfStatement
      (IfPrefix
        (SuffixExpr))
      (BlockExpr
        (Block
          (line_comment)
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
                    (IDENTIFIER))))))
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
                    (SuffixExpr
                      (BuildinTypeExpr))))
                (AsmInput
                  (AsmInputList
                    (AsmInputItem
                      (IDENTIFIER)
                      (STRINGLITERAL
                        (STRINGLITERALSINGLE))
                      (SuffixExpr
                        (INTEGER))))))))
          (AssignExpr
            (AsmExpr
              (SuffixExpr
                (STRINGLITERAL
                  (STRINGLITERALSINGLE)))
              (ERROR))))))))
