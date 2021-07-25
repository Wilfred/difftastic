/// An interval that is inclusive of `from` but exclusive of `to`.
///
/// This is a an alternative to `Range`, which has some API warts:
/// https://ridiculousfish.com/blog/posts/least-favorite-rust-type.html
#[derive(Debug, PartialEq, Eq, Clone)]
pub struct Interval<T: Copy + PartialOrd> {
    pub start: T,
    pub end: T,
}

impl<T: Copy + PartialOrd> Interval<T> {
    pub fn is_empty(&self) -> bool {
        self.start >= self.end
    }
}
