#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum Side {
    /// The left-hand side, or the 'before' file. Often abbreviated to
    /// LHS.
    Left,
    /// The right-hand side, or the 'after' file. Often abbreviated to
    /// RHS.
    Right,
}
