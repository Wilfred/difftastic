use std::rc::Rc;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct Node<T> {
    val: T,
    next: Option<Rc<Node<T>>>,
}

/// A persistent stack.
///
/// This is similar to `Stack` from the rpds crate, but it's faster
/// and uses less memory.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub(crate) struct Stack<T> {
    head: Option<Rc<Node<T>>>,
}

impl<T> Stack<T> {
    pub(crate) fn new() -> Self {
        Self { head: None }
    }

    pub(crate) fn peek(&self) -> Option<&T> {
        self.head.as_deref().map(|n| &n.val)
    }

    pub(crate) fn pop(&self) -> Option<Stack<T>> {
        self.head.as_deref().map(|n| Self {
            head: n.next.clone(),
        })
    }

    pub(crate) fn push(&self, v: T) -> Stack<T> {
        Self {
            head: Some(Rc::new(Node {
                val: v,
                next: self.head.clone(),
            })),
        }
    }

    // O(n)
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
