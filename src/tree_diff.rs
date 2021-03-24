use ChangeKind::*;

pub enum ChangeKind {
    Unchanged,
    Added,
    Removed
}

pub enum Tree {
    Node {
        change: ChangeKind,
        start: usize,
        end: usize,
        children: Vec<Tree>,
    },
    Leaf {
        change: ChangeKind,
        start: usize,
        end: usize,
        content: String,
    },
}
