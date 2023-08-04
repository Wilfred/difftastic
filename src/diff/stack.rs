use std::rc::Rc;

use bumpalo::Bump;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct BumpStack<'b, T> {
    head: Option<&'b BumpStackNode<'b, T>>,
}

// TODO: equality checks on this are super hot (11% runtime for
// slow_before.rs), see if storing length helps.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct BumpStackNode<'b, T> {
    value: T,
    next: Option<&'b BumpStackNode<'b, T>>,
}

impl<'b, T> BumpStack<'b, T> {
    pub(crate) fn new() -> Self {
        Self { head: None }
    }

    pub(crate) fn peek(&self) -> Option<&T> {
        self.head.as_ref().map(|n| &n.value)
    }

    pub(crate) fn pop(&self) -> Option<BumpStack<'b, T>> {
        self.head.as_ref().map(|n| Self { head: n.next })
    }

    pub(crate) fn push(&self, alloc: &'b Bump, v: T) -> BumpStack<'b, T> {
        Self {
            head: Some(alloc.alloc(BumpStackNode {
                value: v,
                next: self.head,
            })),
        }
    }

    pub(crate) fn size(&self) -> usize {
        let mut res = 0;
        let mut node = &self.head;
        while let Some(next) = node {
            res += 1;
            node = &next.next;
        }
        res
    }

    pub(crate) fn is_empty(&self) -> bool {
        self.head.is_none()
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct Node<T> {
    val: T,
    next: Option<Rc<Node<T>>>,
}

