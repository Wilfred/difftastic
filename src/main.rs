mod tree_diff;

use crate::tree_diff::set_changed;
use crate::tree_diff::ChangeKind::*;
use crate::tree_diff::Syntax::*;

fn main() {
    let mut lhs = vec![
        Items {
            change: Unchanged,
            start_content: "(".into(),
            end_content: ")".into(),
            children: vec![Atom {
                change: Unchanged,
                content: "foo".into(),
            }],
        },
        Atom {
            change: Unchanged,
            content: "a".into(),
        },
    ];
    let mut rhs = vec![
        Items {
            change: Unchanged,
            start_content: "(".into(),
            end_content: ")".into(),
            children: vec![
                Atom {
                    change: Unchanged,
                    content: "foo".into(),
                },
                Atom {
                    change: Unchanged,
                    content: "bar".into(),
                },
            ],
        },
        Atom {
            change: Unchanged,
            content: "a".into(),
        },
        Atom {
            change: Unchanged,
            content: "b".into(),
        },
    ];

    set_changed(&mut lhs, &mut rhs);

    print!("{:#?}\n", lhs);
    print!("{:#?}\n", rhs);
}
