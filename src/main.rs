mod tree_diff;

use crate::tree_diff::ChangeKind::*;
use crate::tree_diff::Syntax::*;
use crate::tree_diff::set_changed;

fn main() {
    let mut lhs = vec![Items {
        change: Unchanged,
        start_content: "(".into(),
        end_content: ")".into(),
        children: vec![
            Atom {
                change: Unchanged,
                content: "foo".into()
            }
        ],
    }];
    let mut rhs = vec![Items {
        change: Unchanged,
        start_content: "(".into(),
        end_content: ")".into(),
        children: vec![
            Atom {
                change: Unchanged,
                content: "foo".into()
            },
            Atom {
                change: Unchanged,
                content: "bar".into()
            }
        ],
    }];

    set_changed(&mut lhs, &mut rhs);

    print!("{:#?}", lhs);
    print!("{:#?}", rhs);
}
