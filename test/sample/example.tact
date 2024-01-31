import "@stdlib/ownable";

struct SampleStruct {
    message: Int?;
}
const GLOBAL_CONSTANT: map<Int, SampleStruct> = 5;

@name(store_uint)
native storeUint(s: Builder, value: Int, bits: Int): Builder;

message(0x1234) MyMessage {
    data: SampleStruct;
}

fun globalFun(arg: String) {
    let x: Int = 123;
}

trait MyTrait {
    const CONST_VAL: Int = 42;
    get fun traitState(): Int {
        return self.CONST_VAL;
    }
}

contract MyContract with MyTrait, Ownable? {
    owner: Address; // comment
    value: Int as uint32 = 1230;
    counters: map<Int, Address> /* Address, "Address" */ ;
    map: map<Int as int16, Int as uint32>;
    b: bounced<MyMessage>;
    c: map<Bool, Cell>;
    a: map<Slice, String>;
    d: StringBuilder;

    init(owner: Address) {
        self.owner = owner;
    }
    bounced(msg: MyMessage) {}
    external() {}
    receive(self: Int) { self.toString(); }
    virtual fun overrideMe() {}
}