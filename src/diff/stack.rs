use std::rc::Rc;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct Node<T> {
    val: T,
    next: Option<Rc<Node<T>>>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Stack<T> {
    head: Option<Rc<Node<T>>>,
    len: usize,
}

impl<T> Stack<T> {
    pub fn new() -> Self {
        Self { head: None, len: 0 }
    }

    pub fn peek(&self) -> Option<&T> {
        self.head.as_deref().map(|n| &n.val)
    }

    pub fn pop(&self) -> Option<Stack<T>> {
        self.head.as_deref().map(|n| Self {
            head: n.next.clone(),
            len: self.len - 1,
        })
    }

    pub fn push(&self, v: T) -> Stack<T> {
        Self {
            head: Some(Rc::new(Node {
                val: v,
                next: self.head.clone(),
            })),
            len: self.len + 1,
        }
    }

    pub fn size(&self) -> usize {
        self.len
    }

    pub fn is_empty(&self) -> bool {
        self.len == 0
    }
}
