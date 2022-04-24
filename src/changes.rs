use rustc_hash::FxHashMap;

use crate::syntax::Syntax;



#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(&'a Syntax<'a>),
    ReplacedComment(&'a Syntax<'a>, &'a Syntax<'a>),
    Novel,
}

pub type ChangeMap<'a> = FxHashMap<&'a Syntax<'a>, ChangeKind<'a>>;

pub fn new_change_map<'a>() -> ChangeMap<'a> {
    FxHashMap::default()
}
