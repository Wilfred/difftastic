/* Class definitions         @definition.class */

contract EmptyContract {}
//       ^ definition.class

message EmptyMessage {}
//      ^ definition.class

struct EmptyStruct {}
//     ^ definition.class


/* Function definitions      @definition.function */

@name(load_int)
extends mutates native loadInt(self: Slice, l: Int): Int;
//                     ^ definition.function

fun staticFun() {}
//  ^ definition.function


/* Interface definitions     @definition.interface */

trait EmptyTrait {}
//    ^ definition.interface


/* Method definitions        @definition.method */

contract Counter {
    val: Int as uint32;

    init() {
    // <- definition.method
        self.val = 0;
    }

    receive("increment") {
    // <- definition.method
        self.val = self.val + 1;
    }

    external("something") {}
    // <- definition.method

    bounced(msg: EmptyMessage) {}
    // <- definition.method

    get fun value(): Int {
    //      ^ definition.method
        return self.val;
    }

}


/* Constant definitions      @definition.constant */

const theAnswer: Int = 42;
//    ^ definition.constant
