// this trait has to be imported
import "@stdlib/deploy";

// the Deployable trait adds a default receiver for the "Deploy" message
contract Counter with Deployable {
    val: Int as uint32;

    init() {
        self.val = 0;
    }

    receive("increment") {
        self.val = self.val + 1;
    }

    get fun value(): Int {
        return self.val;
    }
}
