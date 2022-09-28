use std::rc::Rc;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct Node<T> {
    val: T,
    next: Option<Rc<Node<T>>>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Stack<T> {
    head: Option<Rc<Node<T>>>,
}

impl<T> Stack<T> {
    pub fn new() -> Self {
        Self { head: None }
    }

    pub fn peek(&self) -> Option<&T> {
        self.head.as_deref().map(|n| &n.val)
    }

    pub fn pop(&self) -> Option<Stack<T>> {
        self.head.as_deref().map(|n| Self {
            head: n.next.clone(),
        })
    }

    pub fn push(&self, v: T) -> Stack<T> {
        Self {
            head: Some(Rc::new(Node {
                val: v,
                next: self.head.clone(),
            })),
        }
    }

    // O(n)
    pub fn size(&self) -> usize {
        let mut res = 0;
        let mut node = &self.head;
        while let Some(next) = node {
            res += 1;
            node = &next.next;
        }
        res
    }

    pub fn is_empty(&self) -> bool {
        self.head.is_none()
    }
}
