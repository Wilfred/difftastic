mod json;
mod tree_diff;
mod lines;

use crate::json::parse_json;
use crate::tree_diff::set_changed;

fn main() {
    let lhs = parse_json("[\"a\"]");
    let rhs = parse_json("[\"a\" \"b\"]");

    set_changed(&lhs, &rhs);

    print!("LHS:\n{:#?}\n\n", lhs);
    print!("RHS:\n{:#?}\n", rhs);
}
