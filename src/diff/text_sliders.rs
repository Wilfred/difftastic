use std::collections::HashMap;

use itertools::Itertools;

use crate::{
    lines::LineNumber,
    parse::syntax::{MatchKind, MatchedPos},
};

pub fn fix_sliders(
    lhs_lines: &[String],
    rhs_lines: &[String],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) {
    // GOAL: Join contiguous novel regions where possible.
    //
    // Iterate through novel regions pairwise, and if there's a gap
    // between them that also occurs after the second novel region,
    // slide.
    let lhs_novel_regions = novel_regions(lhs_mps);

    // Slider: (lhs_old, (lhs_new, rhs_line)).
    let mut lhs_sliders: HashMap<usize, (usize, LineNumber)> = HashMap::new();

    for (prev_region, next_region) in lhs_novel_regions.iter().tuple_windows() {
        if can_slide(
            lhs_lines,
            lhs_mps,
            prev_region.1,
            next_region.0,
            next_region.1,
        ) {
            let unchanged_mp = &lhs_mps[prev_region.1 + 1];
            if let MatchKind::UnchangedToken { opposite_pos, .. } = &unchanged_mp.kind {
                lhs_sliders.insert(prev_region.1 + 1, (next_region.1 + 1, opposite_pos[0].line));
            }
        }
    }
}

/// Given the position of two novel regions, see if the unchanged line
/// inbetween is the same as the line immediately after.
fn can_slide(
    lines: &[String],
    mps: &[MatchedPos],
    prev_region_end: usize,
    next_region_start: usize,
    next_region_end: usize,
) -> bool {
    // For now, only handle the case where there's only one unchanged
    // line between novel regions.
    if prev_region_end + 2 != next_region_start {
        return false;
    }

    // We can't slide if the last region has no trailing unchanged
    // lines.
    let unchanged_mp_after = match mps.get(next_region_end + 1) {
        Some(mp) => mp,
        None => return false,
    };

    let unchanged_mp_between = &mps[prev_region_end + 1];
    let line_between = unchanged_mp_between.pos.line.0;
    let line_after = unchanged_mp_after.pos.line.0;

    lines[line_between as usize] == lines[line_after as usize]
}

/// Return a vec of tuples representing the start and end index
/// (inclusive) of each novel region in `mps`.
fn novel_regions(mps: &[MatchedPos]) -> Vec<(usize, usize)> {
    let mut res = vec![];

    let mut region_start = None;
    for (i, mp) in mps.iter().enumerate() {
        if mp.kind.is_novel() {
            match region_start {
                Some(_) => {
                    // We are continuing a novel region.
                }
                None => {
                    // Starting a new novel region.
                    region_start = Some(i);
                }
            }
        } else {
            if let Some(region_start_i) = region_start {
                // Reached the end of a novel region.
                res.push((region_start_i, i - 1));
                region_start = None;
            }
        }
    }

    if let Some(region_start) = region_start {
        res.push((region_start, mps.len() - 1));
    }

    res
}
