use bumpalo::Bump;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct Node<'b, T> {
    val: T,
    next: Option<&'b Node<'b, T>>,
}

/// A persistent stack.
///
/// This is similar to `Stack` from the rpds crate, but it's faster
/// and uses less memory.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub(crate) struct Stack<'b, T> {
    head: Option<&'b Node<'b, T>>,
}

impl<'b, T> Stack<'b, T> {
    pub(crate) fn new() -> Self {
        Self { head: None }
    }

    pub(crate) fn peek(&self) -> Option<&T> {
        self.head.map(|n| &n.val)
    }

    pub(crate) fn pop(&self) -> Option<Stack<'b, T>> {
        self.head.map(|n| Self { head: n.next })
    }

    pub(crate) fn push(&self, v: T, alloc: &'b Bump) -> Stack<'b, T> {
        Self {
            head: Some(alloc.alloc(Node {
                val: v,
                next: self.head,
            })),
        }
    }

    // O(n)
    pub(crate) fn size(&self) -> usize {
        let mut count = 0;
        let mut node = &self.head;
        while let Some(next) = node {
            count += 1;
            node = &next.next;
        }
        count
    }

    pub(crate) fn is_empty(&self) -> bool {
        self.head.is_none()
    }
}
