================================================================================
shuffle
================================================================================

    const std = @import("std");
const builtin = @import("builtin");
const mem = std.mem;
const expect = std.testing.expect;
const Vector = std.meta.Vector;

test "@shuffle" {
    // TODO investigate why this fails when cross-compiling to wasm.
    if (builtin.os.tag == .wasi) return error.SkipZigTest;

    const S = struct {
        fn doTheTest() void {
            var v: Vector(4, i32) = [4]i32{ 2147483647, -2, 30, 40 };
            var x: Vector(4, i32) = [4]i32{ 1, 2147483647, 3, 4 };
            const mask: Vector(4, i32) = [4]i32{ 0, ~@as(i32, 2), 3, ~@as(i32, 3) };
            var res = @shuffle(i32, v, x, mask);
            expect(mem.eql(i32, &@as([4]i32, res), &[4]i32{ 2147483647, 3, 40, 4 }));

            // Implicit cast from array (of mask)
            res = @shuffle(i32, v, x, [4]i32{ 0, ~@as(i32, 2), 3, ~@as(i32, 3) });
            expect(mem.eql(i32, &@as([4]i32, res), &[4]i32{ 2147483647, 3, 40, 4 }));

            // Undefined
            const mask2: Vector(4, i32) = [4]i32{ 3, 1, 2, 0 };
            res = @shuffle(i32, v, undefined, mask2);
            expect(mem.eql(i32, &@as([4]i32, res), &[4]i32{ 40, -2, 30, 2147483647 }));

            // Upcasting of b
            var v2: Vector(2, i32) = [2]i32{ 2147483647, undefined };
            const mask3: Vector(4, i32) = [4]i32{ ~@as(i32, 0), 2, ~@as(i32, 0), 3 };
            res = @shuffle(i32, x, v2, mask3);
            expect(mem.eql(i32, &@as([4]i32, res), &[4]i32{ 2147483647, 3, 2147483647, 4 }));

            // Upcasting of a
            var v3: Vector(2, i32) = [2]i32{ 2147483647, -2 };
            const mask4: Vector(4, i32) = [4]i32{ 0, ~@as(i32, 2), 1, ~@as(i32, 3) };
            res = @shuffle(i32, v3, x, mask4);
            expect(mem.eql(i32, &@as([4]i32, res), &[4]i32{ 2147483647, 3, -2, 4 }));

            // bool
            // Disabled because of #3317
            if (@import("builtin").arch != .mipsel and std.Target.current.cpu.arch != .mips) {
                var x2: Vector(4, bool) = [4]bool{ false, true, false, true };
                var v4: Vector(2, bool) = [2]bool{ true, false };
                const mask5: Vector(4, i32) = [4]i32{ 0, ~@as(i32, 1), 1, 2 };
                var res2 = @shuffle(bool, x2, v4, mask5);
                expect(mem.eql(bool, &@as([4]bool, res2), &[4]bool{ false, false, true, false }));
            }

            // TODO re-enable when LLVM codegen is fixed
            // https://github.com/ziglang/zig/issues/3246
            if (false) {
                var x2: Vector(3, bool) = [3]bool{ false, true, false };
                var v4: Vector(2, bool) = [2]bool{ true, false };
                const mask5: Vector(4, i32) = [4]i32{ 0, ~@as(i32, 1), 1, 2 };
                var res2 = @shuffle(bool, x2, v4, mask5);
                expect(mem.eql(bool, &@as([4]bool, res2), &[4]bool{ false, false, true, false }));
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
  (TestDecl
    (STRINGLITERALSINGLE)
    (Block
      (line_comment)
      (AssignExpr
        (IfExpr
          (IfPrefix
            (BinaryExpr
              (SuffixExpr
                (IDENTIFIER)
                (SuffixOp
                  (IDENTIFIER))
                (SuffixOp
                  (IDENTIFIER)))
              (CompareOp)
              (SuffixExpr
                (IDENTIFIER))))
          (SuffixExpr
            (IDENTIFIER))))
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
                  (IDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (INTEGER))
                    (SuffixExpr
                      (BuildinTypeExpr))))
                (PrefixTypeOp
                  (ArrayTypeStart
                    (SuffixExpr
                      (INTEGER))))
                (SuffixExpr
                  (BuildinTypeExpr))
                (InitList
                  (SuffixExpr
                    (INTEGER))
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (INTEGER)))
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (BuildinTypeExpr))))
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (BuildinTypeExpr))
              (InitList
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))
                (SuffixExpr
                  (INTEGER))))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (IDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (BuildinTypeExpr))))
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (BuildinTypeExpr))
              (InitList
                (SuffixExpr
                  (INTEGER))
                (UnaryExpr (PrefixOp)
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (BuildinTypeExpr))
                    (SuffixExpr
                      (INTEGER)))))
              (SuffixExpr
                (INTEGER))
              (UnaryExpr (PrefixOp)
              (SuffixExpr
                (BUILTINIDENTIFIER)
                (FnCallArguments
                  (SuffixExpr
                    (BuildinTypeExpr))
                  (SuffixExpr
                    (INTEGER)))))))
        (VarDecl
          (IDENTIFIER)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (IDENTIFIER))
              (SuffixExpr
                (IDENTIFIER))
              (SuffixExpr
                (IDENTIFIER)))))
        (AssignExpr
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
                  (UnaryExpr (PrefixOp)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (PrefixTypeOp
                        (ArrayTypeStart
                          (SuffixExpr
                            (INTEGER))))
                      (SuffixExpr
                        (BuildinTypeExpr))
                      (SuffixExpr
                        (IDENTIFIER)))))
                (UnaryExpr (PrefixOp)
                (PrefixTypeOp
                  (ArrayTypeStart
                    (SuffixExpr
                      (INTEGER))))
                (SuffixExpr
                  (BuildinTypeExpr))
                (InitList
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER))
                  (SuffixExpr
                    (INTEGER)))))))))
    (line_comment)
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER))
      (AssignOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER))
          (SuffixExpr
            (IDENTIFIER))
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (InitList
            (SuffixExpr
              (INTEGER))
            (UnaryExpr (PrefixOp)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER)))))
          (SuffixExpr
            (INTEGER))
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER)))))))))(AssignExpr
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
          (UnaryExpr (PrefixOp)
          (SuffixExpr
            (BUILTINIDENTIFIER)
            (FnCallArguments
              (PrefixTypeOp
                (ArrayTypeStart
                  (SuffixExpr
                    (INTEGER))))
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (IDENTIFIER)))))
        (UnaryExpr (PrefixOp)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (INTEGER))))
        (SuffixExpr
          (BuildinTypeExpr))
        (InitList
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER))
          (SuffixExpr
            (INTEGER)))))))))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (INTEGER))
  (SuffixExpr
    (BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart
  (SuffixExpr
    (INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))(SuffixExpr
  (INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments
  (SuffixExpr
    (BuildinTypeExpr))
  (SuffixExpr
    (IDENTIFIER))
  (SuffixExpr)
  (SuffixExpr
    (IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments
  (SuffixExpr
    (IDENTIFIER)
    (SuffixOp
      (IDENTIFIER))
    (FnCallArguments
      (SuffixExpr
        (BuildinTypeExpr))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (PrefixTypeOp
            (ArrayTypeStart
              (SuffixExpr
                (INTEGER))))
          (SuffixExpr
            (BuildinTypeExpr))
          (SuffixExpr
            (IDENTIFIER)))))
    (UnaryExpr (PrefixOp)
    (PrefixTypeOp
      (ArrayTypeStart
        (SuffixExpr
          (INTEGER))))
    (SuffixExpr
      (BuildinTypeExpr))
    (InitList
      (SuffixExpr
        (INTEGER))
      (UnaryExpr (PrefixOp)
      (SuffixExpr
        (INTEGER)))
    (SuffixExpr
      (INTEGER))
    (SuffixExpr
      (INTEGER)))))))))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(SuffixExpr(INTEGER))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp
  (ArrayTypeStart
    (SuffixExpr
      (INTEGER))))(SuffixExpr
  (BuildinTypeExpr))(SuffixExpr
  (IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER)))))))))(line_comment)(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))))(AssignExpr(SuffixExpr(IDENTIFIER))(AssignOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(INTEGER)))(SuffixExpr(INTEGER)))))))))(line_comment)(line_comment)(IfStatement(IfPrefix(BinaryExpr(BinaryExpr(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(STRINGLITERAL(STRINGLITERALSINGLE))))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))(BinaryExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER))(SuffixOp(IDENTIFIER)))(CompareOp)(SuffixExpr(IDENTIFIER)))))(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr)(SuffixExpr)(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr)(SuffixExpr)(SuffixExpr)))))))))))(line_comment)(line_comment)(IfStatement(IfPrefix(SuffixExpr))(BlockExpr(Block(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr)(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr)))(VarDecl(IDENTIFIER)(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(INTEGER))(SuffixExpr(BuildinTypeExpr))))(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr(INTEGER))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(INTEGER)))))(SuffixExpr(INTEGER))(SuffixExpr(INTEGER))))(VarDecl(IDENTIFIER)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER))(SuffixExpr(IDENTIFIER)))))(AssignExpr(SuffixExpr(IDENTIFIER)(FnCallArguments(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments(SuffixExpr(BuildinTypeExpr))(UnaryExpr (PrefixOp)(SuffixExpr(BUILTINIDENTIFIER)(FnCallArguments(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(SuffixExpr(IDENTIFIER)))))(UnaryExpr (PrefixOp)(PrefixTypeOp(ArrayTypeStart(SuffixExpr(INTEGER))))(SuffixExpr(BuildinTypeExpr))(InitList(SuffixExpr)(SuffixExpr)(SuffixExpr)(SuffixExpr)))))))))))))))(AssignExpr(SuffixExpr(IDENTIFIER)(SuffixOp(IDENTIFIER))(FnCallArguments)))(AssignExpr(SuffixExpr(SuffixExpr(IDENTIFIER))(SuffixOp(IDENTIFIER))(FnCallArguments))))))
