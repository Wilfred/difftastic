use crate::parse::syntax::MatchedPos;

pub fn fix_text_line_sliders(mps: &[MatchedPos]) {
    // GOAL: Join contiguous novel regions where possible.
    //
    // Iterate through novel regions pairwise, and if there's a gap
    // between them that also occurs after the second novel region,
    // slide.
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
