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

const m1: map<Int as int8, Int as int16> = emptyMap();
//                   ^ type.builtin
//                                ^ type.builtin

const m2: map<Int as int32, Int as int64> = emptyMap();
//                   ^ type.builtin
//                                 ^ type.builtin

const m3: map<Int as int128, Int as int256> = emptyMap();
//                   ^ type.builtin
//                                  ^ type.builtin

const m4: map<Int as int257, Int as int257> = emptyMap();
//                   ^ type.builtin
//                                  ^ type.builtin

const m5: map<Int as uint8, Int as uint16> = emptyMap();
//                   ^ type.builtin
//                                 ^ type.builtin

const m6: map<Int as uint32, Int as uint64> = emptyMap();
//                   ^ type.builtin
//                                  ^ type.builtin

const m7: map<Int as uint128, Int as uint256> = emptyMap();
//                   ^ type.builtin
//                                   ^ type.builtin

const m8: map<Int as coins, Slice as remaining> = emptyMap();
//                   ^ type.builtin
//                                   ^ type.builtin

const m9: map<Int, Slice as bytes32> = emptyMap();
//                          ^ type.builtin

const m10: map<Int, Slice as bytes64> = emptyMap();
//                           ^ type.builtin
