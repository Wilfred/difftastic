//! A vendored copy of the wu-diff crate, with the route bookkeeping
//! arrays made growable.
//!
//! Vendored from wu-diff 0.1.2 by bokuweb <bokuweb12@gmail.com>
//! (<https://github.com/bokuweb/wu-diff-rs>, MIT licence).
//!
//! The upstream crate preallocates `routes` and `diff_types` arrays
//! of `M * N` elements, where M and N are the number of novel items
//! on each side. That quadratic allocation makes memory usage explode
//! on large inputs: diffing two files whose changed regions are
//! ~50,000 lines each would try to allocate tens of gigabytes, even
//! though the algorithm only ever writes to these arrays
//! sequentially and typically touches a tiny fraction of that upper
//! bound.
//!
//! This copy pushes onto growable vectors instead, which preserves
//! the exact same values at the exact same indexes (the write index
//! increases by exactly one per write), so the diff results are
//! identical to upstream.

#![allow(non_snake_case)]

use std::cmp;

const NONE: u8 = 0;
const REMOVED: u8 = 1;
const COMMON: u8 = 2;
const ADDED: u8 = 3;

#[derive(Debug)]
struct Ctx<'a, T: 'a> {
    k: isize,
    base: isize,
    A: &'a [T],
    B: &'a [T],
    routes: &'a mut Vec<usize>,
    diff_types: &'a mut Vec<u8>,
}

#[derive(Debug, PartialEq)]
pub(crate) enum DiffResult {
    Removed(DiffElement),
    Common(DiffElement),
    Added(DiffElement),
}

#[derive(Debug, PartialEq)]
pub(crate) struct DiffElement {
    pub(crate) old_index: Option<usize>,
    pub(crate) new_index: Option<usize>,
}

#[derive(Clone)]
struct FarthestPoint {
    y: isize,
    id: usize,
}

fn back_trace<T: PartialEq>(
    A: &[T],
    B: &[T],
    current: &FarthestPoint,
    swapped: bool,
    routes: &[usize],
    diff_types: &[u8],
    prefix_size: usize,
) -> Vec<DiffResult> {
    let M = A.len();
    let N = B.len();
    let mut result: Vec<DiffResult> = vec![];
    let mut a = M - 1;
    let mut b = N - 1;
    let mut j = routes[current.id];
    let mut diff_type = diff_types[current.id];
    loop {
        if j == 0 && diff_type == NONE {
            break;
        }
        let prev = j;
        match diff_type {
            ADDED => {
                let old_index = if swapped {
                    None
                } else {
                    Some(a.wrapping_add(prefix_size))
                };
                let new_index = if swapped {
                    Some(a.wrapping_add(prefix_size))
                } else {
                    None
                };
                let result_type = if swapped {
                    DiffResult::Added
                } else {
                    DiffResult::Removed
                };
                result.push(result_type(DiffElement {
                    old_index,
                    new_index,
                }));
                a = a.wrapping_sub(1);
            }
            REMOVED => {
                let old_index = if swapped {
                    Some(b.wrapping_add(prefix_size))
                } else {
                    None
                };
                let new_index = if swapped {
                    None
                } else {
                    Some(b.wrapping_add(prefix_size))
                };
                let result_type = if swapped {
                    DiffResult::Removed
                } else {
                    DiffResult::Added
                };
                result.push(result_type(DiffElement {
                    old_index,
                    new_index,
                }));
                b = b.wrapping_sub(1);
            }
            _ => {
                let i = (
                    Some(a.wrapping_add(prefix_size)),
                    Some(b.wrapping_add(prefix_size)),
                );
                let (old_index, new_index) = if swapped { (i.1, i.0) } else { i };

                result.push(DiffResult::Common(DiffElement {
                    old_index,
                    new_index,
                }));
                a = a.wrapping_sub(1);
                b = b.wrapping_sub(1);
            }
        };
        j = routes[prev];
        diff_type = diff_types[prev];
    }
    result.into_iter().rev().collect()
}

fn create_fp<T: PartialEq>(fp: &[FarthestPoint], ctx: &mut Ctx<T>) -> FarthestPoint {
    if ctx.base < 1_isize {
        let base = (ctx.base + 1) as usize;
        let prev = fp[base].id;
        let y = fp[base].y + 1;
        ctx.routes.push(prev);
        ctx.diff_types.push(REMOVED);
        return FarthestPoint {
            y,
            id: ctx.routes.len() - 1,
        };
    } else if ctx.base + 1 >= fp.len() as isize {
        let base = (ctx.base - 1) as usize;
        let prev = fp[base].id;
        let y = fp[base].y;
        ctx.routes.push(prev);
        ctx.diff_types.push(ADDED);
        return FarthestPoint {
            y,
            id: ctx.routes.len() - 1,
        };
    }

    let slide = &fp[(ctx.base - 1) as usize];
    let down = &fp[(ctx.base + 1) as usize];

    if slide.y == -1 && down.y == -1 {
        return FarthestPoint { y: 0, id: 0 };
    }
    if down.y == -1 || ctx.k == ctx.A.len() as isize || slide.y > down.y + 1 {
        let prev = slide.id;
        let y = slide.y;
        ctx.routes.push(prev);
        ctx.diff_types.push(ADDED);
        return FarthestPoint {
            y,
            id: ctx.routes.len() - 1,
        };
    }
    let prev = down.id;
    let y = down.y + 1;
    ctx.routes.push(prev);
    ctx.diff_types.push(REMOVED);
    FarthestPoint {
        y,
        id: ctx.routes.len() - 1,
    }
}

fn snake<T: PartialEq>(fps: &[FarthestPoint], ctx: &mut Ctx<T>) -> FarthestPoint {
    let M = ctx.A.len() as isize;
    let N = ctx.B.len() as isize;
    if ctx.k + N < 0 || M - ctx.k < 0 {
        return FarthestPoint { y: -1, id: 0 };
    }
    let mut fp = create_fp(fps, ctx);
    while fp.y + ctx.k < M && fp.y < N && ctx.A[(fp.y + ctx.k) as usize] == ctx.B[fp.y as usize] {
        let prev = fp.id;
        ctx.routes.push(prev);
        ctx.diff_types.push(COMMON);
        fp.id = ctx.routes.len() - 1;
        fp.y += 1;
    }
    fp
}

pub(crate) fn diff<T: PartialEq>(old: &[T], new: &[T]) -> Vec<DiffResult> {
    let new_len = new.len();
    let old_len = old.len();
    let common_prefix = old.iter().zip(new).take_while(|p| p.0 == p.1);
    let prefix_size = common_prefix.count();
    let common_suffix = old
        .iter()
        .rev()
        .zip(new.iter().rev())
        .take(cmp::min(old_len, new_len) - prefix_size)
        .take_while(|p| p.0 == p.1);
    let suffix_size = common_suffix.count();
    let swapped = old_len < new_len;
    let sliced_old = &old[prefix_size..(old_len - suffix_size)];
    let sliced_new = &new[prefix_size..(new_len - suffix_size)];

    let (A, B) = if swapped {
        (sliced_new, sliced_old)
    } else {
        (sliced_old, sliced_new)
    };

    let mut result: Vec<DiffResult> = Vec::new();
    let M = A.len();
    let N = B.len();

    if M == 0 && N == 0 && prefix_size == 0 && suffix_size == 0 {
        return result;
    }

    if N == 0 {
        let mut p = 0;
        while p < prefix_size {
            result.push(DiffResult::Common(DiffElement {
                old_index: Some(p),
                new_index: Some(p),
            }));
            p += 1;
        }

        let mut o = prefix_size;
        while o < M + prefix_size {
            if swapped {
                result.push(DiffResult::Added(DiffElement {
                    old_index: None,
                    new_index: Some(o),
                }));
            } else {
                result.push(DiffResult::Removed(DiffElement {
                    old_index: Some(o),
                    new_index: None,
                }));
            }
            o += 1;
        }

        let mut s = 0;
        let old_offset = sliced_old.len() + prefix_size;
        let new_offset = sliced_new.len() + prefix_size;
        while s < suffix_size {
            let old_index = s + old_offset;
            result.push(DiffResult::Common(DiffElement {
                old_index: Some(old_index),
                new_index: Some(s + new_offset),
            }));
            s += 1;
        }
        return result;
    }

    let offset = N as isize;
    let D = (M - N) as isize;
    let size = M + N + 1;
    let mut fp: Vec<FarthestPoint> = vec![FarthestPoint { y: -1, id: 0 }; size];
    let mut P = 0;

    // Upstream preallocates `M * N + size + 1` elements here. These
    // vectors are only ever written by pushing one element at a
    // time, so growable vectors give identical results.
    let mut routes: Vec<usize> = vec![0];
    let mut diff_types: Vec<u8> = vec![NONE];

    let mut ctx = Ctx {
        k: 0,
        base: 0,
        A,
        B,
        routes: &mut routes,
        diff_types: &mut diff_types,
    };

    while fp[(D + offset) as usize].y < N as isize {
        let mut k = -(P as isize);
        while k < D {
            let base = k + offset;
            ctx.k = k;
            ctx.base = base;
            fp[base as usize] = snake(&fp, &mut ctx);
            k += 1;
        }
        let mut k = (D + P) as isize;
        while k > D {
            let base = k + offset;
            ctx.k = k;
            ctx.base = base;
            fp[base as usize] = snake(&fp, &mut ctx);
            k -= 1;
        }
        let base = D + offset;
        ctx.k = D;
        ctx.base = base;
        fp[base as usize] = snake(&fp, &mut ctx);
        P += 1;
    }

    let mut result: Vec<DiffResult> = vec![];
    let mut p = 0;
    while p < prefix_size {
        result.push(DiffResult::Common(DiffElement {
            old_index: Some(p),
            new_index: Some(p),
        }));
        p += 1;
    }
    let base = (D + offset) as usize;
    let back_trace_result = back_trace(
        A,
        B,
        &fp[base],
        swapped,
        &routes,
        &diff_types,
        prefix_size,
    );
    result.extend(back_trace_result);
    let mut s = 0;
    let old_offset = sliced_old.len() + prefix_size;
    let new_offset = sliced_new.len() + prefix_size;
    while s < suffix_size {
        let old_index = s + old_offset;
        result.push(DiffResult::Common(DiffElement {
            old_index: Some(old_index),
            new_index: Some(s + new_offset),
        }));
        s += 1;
    }
    result
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn should_return_one_changed() {
        let result = diff(&["a"], &["b"]);
        let expected = vec![
            DiffResult::Removed(DiffElement {
                old_index: Some(0),
                new_index: None,
            }),
            DiffResult::Added(DiffElement {
                old_index: None,
                new_index: Some(0),
            }),
        ];

        assert_eq!(result, expected);
    }

    #[test]
    fn should_return_empty() {
        let a: Vec<String> = vec![];
        let b: Vec<String> = vec![];
        let result = diff(&a, &b);
        let expected = vec![];
        assert_eq!(result, expected);
    }

    #[test]
    fn should_return_one_common() {
        let result = diff(&["a"], &["a"]);
        let expected = vec![DiffResult::Common(DiffElement {
            old_index: Some(0),
            new_index: Some(0),
        })];
        assert_eq!(result, expected);
    }

    #[test]
    fn should_return_one_removed() {
        let result = diff(&["a"], &[]);
        let expected = vec![DiffResult::Removed(DiffElement {
            old_index: Some(0),
            new_index: None,
        })];
        assert_eq!(result, expected);
    }

    #[test]
    fn should_return_one_added() {
        let result = diff(&[], &["a"]);
        let expected = vec![DiffResult::Added(DiffElement {
            old_index: None,
            new_index: Some(0),
        })];
        assert_eq!(result, expected);
    }

    #[test]
    fn should_return_two_changed() {
        let result = diff(&["a", "a"], &["b", "b"]);
        let expected = vec![
            DiffResult::Removed(DiffElement {
                old_index: Some(0),
                new_index: None,
            }),
            DiffResult::Removed(DiffElement {
                old_index: Some(1),
                new_index: None,
            }),
            DiffResult::Added(DiffElement {
                old_index: None,
                new_index: Some(0),
            }),
            DiffResult::Added(DiffElement {
                old_index: None,
                new_index: Some(1),
            }),
        ];
        assert_eq!(result, expected);
    }
}
