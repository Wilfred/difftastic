use crate::tree_diff::{MatchKind, MatchedPos};
use colored::*;
use std::cmp::min;

pub fn apply_colors(s: &str, is_lhs: bool, positions: &[MatchedPos]) -> String {
    let mut res = String::with_capacity(s.len());
    let mut i = 0;
    for mp in positions {
        if mp.pos.start >= s.len() {
            break;
        }

        // Dim text that doesn't have any matching positions.
        if i < mp.pos.start {
            res.push_str(&s[i..mp.pos.start].dimmed());
        }

        let color = match mp.kind {
            MatchKind::Unchanged => Color::White,
            _ if is_lhs => Color::BrightRed,
            _ => Color::BrightGreen,
        };
        let colored = &s[mp.pos.start..min(s.len(), mp.pos.end)]
            .color(color)
            .bold();
        if let MatchKind::Novel = mp.kind {
            if is_lhs {
                res.push_str(&colored.clone().on_red().black().to_string());
            } else {
                res.push_str(&colored.clone().on_green().black().to_string());
            }
        } else {
            res.push_str(&colored.to_string());
        }

        i = mp.pos.end;
    }
    if i < s.len() {
        res.push_str(&s[i..s.len()]);
    }
    res
}
