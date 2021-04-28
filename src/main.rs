mod json;
mod tree_diff;

use crate::json::parse_json;
use crate::tree_diff::set_changed;

fn main() {
    let mut lhs = parse_json("[\"a\"]");
    let mut rhs = parse_json("[\"a\" \"b\"]");

    set_changed(&mut lhs, &mut rhs);

    print!("{:#?}\n", lhs);
    print!("{:#?}\n", rhs);
}
