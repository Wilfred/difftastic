import "@stdlib/deploy";
contract Counter with Deployable {
    val: Int as uint32;
    init() { self.val = 0 }
    receive("inc") { self.val += 1 }
    get fun val(): Int { return self.val }
}
