================================================================================
bit_shifting
================================================================================

    const std = @import("std");
const expect = std.testing.expect;

fn ShardedTable(comptime Key: type, comptime mask_bit_count: comptime_int, comptime V: type) type {
    const key_bits = @typeInfo(Key).Int.bits;
    expect(Key == std.meta.Int(.unsigned, key_bits));
    expect(key_bits >= mask_bit_count);
    const shard_key_bits = mask_bit_count;
    const ShardKey = std.meta.Int(.unsigned, mask_bit_count);
    const shift_amount = key_bits - shard_key_bits;
    return struct {
        const Self = @This();
        shards: [1 << shard_key_bits]?*Node,

        pub fn create() Self {
            return Self{ .shards = [_]?*Node{null} ** (1 << shard_key_bits) };
        }

        fn getShardKey(key: Key) ShardKey {
            // https://github.com/ziglang/zig/issues/1544
            // this special case is needed because you can't u32 >> 32.
            if (ShardKey == u0) return 0;

            // this can be u1 >> u0
            const shard_key = key >> shift_amount;

            // TODO: https://github.com/ziglang/zig/issues/1544
            // This cast could be implicit if we teach the compiler that
            // u32 >> 30 -> u2
            return @intCast(ShardKey, shard_key);
        }

        pub fn put(self: *Self, node: *Node) void {
            const shard_key = Self.getShardKey(node.key);
            node.next = self.shards[shard_key];
            self.shards[shard_key] = node;
        }

        pub fn get(self: *Self, key: Key) ?*Node {
            const shard_key = Self.getShardKey(key);
            var maybe_node = self.shards[shard_key];
            while (maybe_node) |node| : (maybe_node = node.next) {
                if (node.key == key) return node;
            }
            return null;
        }

        pub const Node = struct {
            key: Key,
            value: V,
            next: ?*Node,

            pub fn init(self: *Node, key: Key, value: V) void {
                self.key = key;
                self.value = value;
                self.next = null;
            }
        };
    };
}

test "sharded table" {
    // realistic 16-way sharding
    testShardedTable(u32, 4, 8);

    testShardedTable(u5, 0, 32); // ShardKey == u0
    testShardedTable(u5, 2, 32);
    testShardedTable(u5, 5, 32);

    testShardedTable(u1, 0, 2);
    testShardedTable(u1, 1, 2); // this does u1 >> u0

    testShardedTable(u0, 0, 1);
}
fn testShardedTable(comptime Key: type, comptime mask_bit_count: comptime_int, comptime node_count: comptime_int) void {
    const Table = ShardedTable(Key, mask_bit_count, void);

    var table = Table.create();
    var node_buffer: [node_count]Table.Node = undefined;
    for (node_buffer) |*node, i| {
        const key = @intCast(Key, i);
        expect(table.get(key) == null);
        node.init(key, {});
        table.put(node);
    }

    for (node_buffer) |*node, i| {
        expect(table.get(@intCast(Key, i)) == node);
    }
}

// #2225
test "comptime shr of BigInt" {
    comptime {
        var n0 = 0xdeadbeef0000000000000000;
        std.debug.assert(n0 >> 64 == 0xdeadbeef);
        var n1 = 17908056155735594659;
        std.debug.assert(n1 >> 64 == 0);
    }
}

test "comptime shift safety check" {
    const x = @as(usize, 42) << @sizeOf(usize);
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
      (SuffixExpr
        (BUILTINIDENTIFIER)
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER)))
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))))
    (AssignExpr
      (SuffixExpr
        (IDENTIFIER)
        (FnCallArguments
          (BinaryExpr
            (SuffixExpr
              (IDENTIFIER))
            (CompareOp)
            (SuffixExpr
              (IDENTIFIER)
              (SuffixOp
                (IDENTIFIER))
              (SuffixOp
                (IDENTIFIER))
              (FnCallArguments
                (SuffixExpr
                  (IDENTIFIER))
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
              (IDENTIFIER))))))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)))
    (VarDecl
      (IDENTIFIER)
      (SuffixExpr
        (IDENTIFIER)
        (SuffixOp
          (IDENTIFIER))
        (SuffixOp
          (IDENTIFIER))
        (FnCallArguments
          (SuffixExpr
            (IDENTIFIER))
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
        (ContainerDecl
          (ContainerDeclType)
          (VarDecl
            (IDENTIFIER)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments)))
          (ContainerField
            (IDENTIFIER)
            (PrefixTypeOp
              (ArrayTypeStart
                (BinaryExpr
                  (SuffixExpr
                    (INTEGER))
                  (BitShiftOp)
                  (SuffixExpr
                    (IDENTIFIER)))))
            (PrefixTypeOp)
            (PrefixTypeOp
              (PtrTypeStart))
            (SuffixExpr
              (IDENTIFIER)))
          (FnProto
            (IDENTIFIER)
            (ParamDeclList)
            (SuffixExpr
              (IDENTIFIER)))
          (Block
            (AssignExpr
              (SuffixExpr
                (IDENTIFIER))
              (InitList
                (FieldInit
                  (IDENTIFIER)
                  (BinaryExpr
                    (PrefixTypeOp
                      (ArrayTypeStart
                        (SuffixExpr
                          (IDENTIFIER))))
                    (PrefixTypeOp)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (IDENTIFIER))
                    (InitList
                      (SuffixExpr))
                    (MultiplyOp 
                      (SuffixExpr
                        (GroupedExpr
                          (BinaryExpr
                            (SuffixExpr
                              (INTEGER))
                            (BitShiftOp)
                            (SuffixExpr
                              (IDENTIFIER))))))))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (SuffixExpr
                      (IDENTIFIER)))))
              (SuffixExpr
                (IDENTIFIER)))
            (Block
              (line_comment)
              (line_comment)
              (AssignExpr
                (IfExpr
                  (IfPrefix
                    (BinaryExpr
                      (SuffixExpr
                        (IDENTIFIER))
                      (CompareOp)
                      (SuffixExpr
                        (BuildinTypeExpr))))
                  (SuffixExpr
                    (INTEGER))))
              (line_comment)
              (VarDecl
                (IDENTIFIER)
                (BinaryExpr
                  (SuffixExpr
                    (IDENTIFIER))
                  (BitShiftOp)
                  (SuffixExpr
                    (IDENTIFIER))))
              (line_comment)
              (line_comment)
              (line_comment)
              (AssignExpr
                (SuffixExpr
                  (BUILTINIDENTIFIER)
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER))
                    (SuffixExpr
                      (IDENTIFIER))))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (IDENTIFIER))))
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (IDENTIFIER)))))
              (SuffixExpr
                (BuildinTypeExpr)))
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)
                      (SuffixOp
                        (IDENTIFIER))))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER)))
                (AssignOp)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (SuffixExpr
                      (IDENTIFIER)))))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (SuffixExpr
                      (IDENTIFIER))))
                (AssignOp)
                (SuffixExpr
                  (IDENTIFIER))))
            (FnProto
              (IDENTIFIER)
              (ParamDeclList
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (IDENTIFIER))))
                (ParamDecl
                  (IDENTIFIER)
                  (ParamType
                    (SuffixExpr
                      (IDENTIFIER)))))
              (PrefixTypeOp)
              (PrefixTypeOp
                (PtrTypeStart))
              (SuffixExpr
                (IDENTIFIER)))
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (FnCallArguments
                    (SuffixExpr
                      (IDENTIFIER)))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (SuffixExpr
                      (IDENTIFIER)))))
              (LabeledStatement
                (LoopStatement
                  (WhileStatement
                    (WhilePrefix
                      (SuffixExpr
                        (IDENTIFIER))
                      (PtrPayload
                        (IDENTIFIER))
                      (WhileContinueExpr
                        (AssignExpr
                          (SuffixExpr
                            (IDENTIFIER))
                          (AssignOp)
                          (SuffixExpr
                            (IDENTIFIER)
                            (SuffixOp
                              (IDENTIFIER))))))
                    (BlockExpr
                      (Block
                        (AssignExpr
                          (IfExpr
                            (IfPrefix
                              (BinaryExpr
                                (SuffixExpr
                                  (IDENTIFIER)
                                  (SuffixOp
                                    (IDENTIFIER)))
                                (CompareOp)
                                (SuffixExpr
                                  (IDENTIFIER))))
                            (SuffixExpr
                              (IDENTIFIER)))))))))
              (AssignExpr
                (SuffixExpr)))
            (VarDecl
              (IDENTIFIER)
              (SuffixExpr
                (ContainerDecl
                  (ContainerDeclType)
                  (ContainerField
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)))
                  (ContainerField
                    (IDENTIFIER)
                    (SuffixExpr
                      (IDENTIFIER)))
                  (ContainerField
                    (IDENTIFIER)
                    (PrefixTypeOp)
                    (PrefixTypeOp
                      (PtrTypeStart))
                    (SuffixExpr
                      (IDENTIFIER)))
                  (FnProto
                    (IDENTIFIER)
                    (ParamDeclList
                      (ParamDecl
                        (IDENTIFIER)
                        (ParamType
                          (PrefixTypeOp
                            (PtrTypeStart))
                          (SuffixExpr
                            (IDENTIFIER))))
                      (ParamDecl
                        (IDENTIFIER)
                        (ParamType
                          (SuffixExpr
                            (IDENTIFIER))))
                      (ParamDecl
                        (IDENTIFIER)
                        (ParamType
                          (SuffixExpr
                            (IDENTIFIER)))))
                    (SuffixExpr
                      (BuildinTypeExpr)))
                  (Block
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (IDENTIFIER)))
                      (AssignOp)
                      (SuffixExpr
                        (IDENTIFIER)))
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (IDENTIFIER)))
                      (AssignOp)
                      (SuffixExpr
                        (IDENTIFIER)))
                    (AssignExpr
                      (SuffixExpr
                        (IDENTIFIER)
                        (SuffixOp
                          (IDENTIFIER)))
                      (AssignOp)
                      (SuffixExpr))))))))))
    (TestDecl
      (STRINGLITERALSINGLE)
      (Block
        (line_comment)
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))
        (line_comment)
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))
        (line_comment)
        (AssignExpr
          (SuffixExpr
            (IDENTIFIER)
            (FnCallArguments
              (SuffixExpr
                (BuildinTypeExpr))
              (SuffixExpr
                (INTEGER))
              (SuffixExpr
                (INTEGER)))))))
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
        (SuffixExpr
          (IDENTIFIER)
          (FnCallArguments
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (IDENTIFIER))
            (SuffixExpr
              (BuildinTypeExpr)))))
      (VarDecl
        (IDENTIFIER)
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER))
          (FnCallArguments)))
      (VarDecl
        (IDENTIFIER)
        (PrefixTypeOp
          (ArrayTypeStart
            (SuffixExpr
              (IDENTIFIER))))
        (SuffixExpr
          (IDENTIFIER)
          (SuffixOp
            (IDENTIFIER)))
        (SuffixExpr))
      (LabeledStatement
        (LoopStatement
          (ForStatement
            (ForPrefix
              (SuffixExpr
                (IDENTIFIER))
              (PtrIndexPayload
                (IDENTIFIER)
                (IDENTIFIER)))
            (BlockExpr
              (Block
                (VarDecl
                  (IDENTIFIER)
                  (SuffixExpr
                    (BUILTINIDENTIFIER)
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER))
                      (SuffixExpr
                        (IDENTIFIER)))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (FnCallArguments
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER)
                          (SuffixOp
                            (IDENTIFIER))
                          (FnCallArguments
                            (SuffixExpr
                              (IDENTIFIER))))
                        (CompareOp)
                        (SuffixExpr)))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER))
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER))
                      (Block))))
                (AssignExpr
                  (SuffixExpr
                    (IDENTIFIER)
                    (SuffixOp
                      (IDENTIFIER))
                    (FnCallArguments
                      (SuffixExpr
                        (IDENTIFIER))))))))))
      (LabeledStatement
        (LoopStatement
          (ForStatement
            (ForPrefix
              (SuffixExpr
                (IDENTIFIER))
              (PtrIndexPayload
                (IDENTIFIER)
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
                          (SuffixOp
                            (IDENTIFIER))
                          (FnCallArguments
                            (SuffixExpr
                              (BUILTINIDENTIFIER)
                              (FnCallArguments
                                (SuffixExpr
                                  (IDENTIFIER))
                                (SuffixExpr
                                  (IDENTIFIER))))))
                        (CompareOp)
                        (SuffixExpr
                          (IDENTIFIER))))))))))))
    (line_comment)
    (TestDecl
      (STRINGLITERALSINGLE)
      (Block
        (BlockExprStatement
          (BlockExpr
            (Block
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER))
                  (FnCallArguments
                    (BinaryExpr
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER))
                        (BitShiftOp)
                        (SuffixExpr
                          (INTEGER)))
                      (CompareOp)
                      (SuffixExpr
                        (INTEGER))))))
              (VarDecl
                (IDENTIFIER)
                (SuffixExpr
                  (INTEGER)))
              (AssignExpr
                (SuffixExpr
                  (IDENTIFIER)
                  (SuffixOp
                    (IDENTIFIER))
                  (SuffixOp
                    (IDENTIFIER))
                  (FnCallArguments
                    (BinaryExpr
                      (BinaryExpr
                        (SuffixExpr
                          (IDENTIFIER))
                        (BitShiftOp)
                        (SuffixExpr
                          (INTEGER)))
                      (CompareOp)
                      (SuffixExpr
                        (INTEGER)))))))))))
    (TestDecl
      (STRINGLITERALSINGLE)
      (Block
        (VarDecl
          (IDENTIFIER)
          (BinaryExpr
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr))
                (SuffixExpr
                  (INTEGER))))
            (BitShiftOp)
            (SuffixExpr
              (BUILTINIDENTIFIER)
              (FnCallArguments
                (SuffixExpr
                  (BuildinTypeExpr)))))))))
