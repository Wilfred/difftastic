/* Built-in types */

primitive Address;
//        ^ type.builtin

primitive Bool;
//        ^ type.builtin

primitive Builder;
//        ^ type.builtin

primitive Cell;
//        ^ type.builtin

primitive Int;
//        ^ type.builtin

primitive Slice;
//        ^ type.builtin

primitive String;
//        ^ type.builtin

primitive StringBuilder;
//        ^ type.builtin

/* TL-B serialization types */

primitive map<Int as int8, Int as int16>;
//                   ^ type.builtin
//                                ^ type.builtin

primitive map<Int as int32, Int as int64>;
//                   ^ type.builtin
//                                 ^ type.builtin

primitive map<Int as int128, Int as int256>;
//                   ^ type.builtin
//                                  ^ type.builtin

primitive map<Int as int257, Int as int257>;
//                   ^ type.builtin
//                                  ^ type.builtin

primitive map<Int as uint8, Int as uint16>;
//                   ^ type.builtin
//                                 ^ type.builtin

primitive map<Int as uint32, Int as uint64>;
//                   ^ type.builtin
//                                  ^ type.builtin

primitive map<Int as uint128, Int as uint256>;
//                   ^ type.builtin
//                                   ^ type.builtin

primitive map<Int as coins, Int as remaining>;
//                   ^ type.builtin
//                                 ^ type.builtin

primitive map<Int as bytes32, Int as bytes64>;
//                   ^ type.builtin
//                                   ^ type.builtin
