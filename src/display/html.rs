//! Self-contained HTML output with a side-by-side diff view.
//!
//! The generated document embeds all of its styling, so it can be
//! opened directly in a browser or saved and shared without any
//! external assets. The layout mirrors the two-column "split" view
//! used by web-based code review tools: the old file on the left, the
//! new file on the right, with changed regions highlighted inline.

use line_numbers::LineNumber;

use crate::display::context::all_matched_lines_filled;
use crate::display::hunks::matched_lines_indexes_for_hunk;
use crate::display::side_by_side::lines_with_novel;
use crate::hash::{DftHashMap, DftHashSet};
use crate::lines::split_on_newlines;
use crate::options::DisplayOptions;
use crate::parse::syntax::{AtomKind, MatchKind, MatchedPos, StringKind, TokenKind};
use crate::summary::{DiffResult, FileContent, FileFormat};

/// Print a single diff result as a complete, self-contained HTML
/// document.
pub(crate) fn print(diff: &DiffResult, display_options: &DisplayOptions) {
    print!("{}", render_document(&[diff], display_options));
}

/// Print several diff results (e.g. from diffing two directories) as a
/// single, self-contained HTML document.
pub(crate) fn print_directory(diffs: Vec<DiffResult>, display_options: &DisplayOptions) {
    let refs: Vec<&DiffResult> = diffs.iter().collect();
    print!("{}", render_document(&refs, display_options));
}

fn render_document(diffs: &[&DiffResult], display_options: &DisplayOptions) -> String {
    let mut out = String::new();
    out.push_str("<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n");
    out.push_str("<meta charset=\"utf-8\">\n");
    out.push_str("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n");
    out.push_str("<title>Difftastic diff</title>\n");
    out.push_str("<style>\n");
    out.push_str(&stylesheet(display_options));
    out.push_str("</style>\n</head>\n<body>\n<main>\n");

    let mut shown = 0;
    for diff in diffs {
        if !display_options.print_unchanged && !diff.has_reportable_change() {
            continue;
        }
        render_file(diff, display_options, &mut out);
        shown += 1;
    }

    if shown == 0 {
        out.push_str("<p class=\"dft-message\">No changes.</p>\n");
    }

    out.push_str("</main>\n</body>\n</html>\n");
    out
}

/// A short status describing how a file changed, used for the header
/// badge.
fn status_label(diff: &DiffResult) -> &'static str {
    match (&diff.lhs_src, &diff.rhs_src) {
        (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
            if !diff.has_syntactic_changes {
                "unchanged"
            } else if lhs_src.is_empty() {
                "created"
            } else if rhs_src.is_empty() {
                "deleted"
            } else {
                "changed"
            }
        }
        (FileContent::Binary, FileContent::Binary) => {
            if diff.has_byte_changes.is_some() {
                "changed"
            } else {
                "unchanged"
            }
        }
        _ => "changed",
    }
}

fn render_file(diff: &DiffResult, display_options: &DisplayOptions, out: &mut String) {
    let status = status_label(diff);

    out.push_str("<section class=\"dft-file\">\n");
    out.push_str("<div class=\"dft-file-header\">");
    out.push_str(&format!(
        "<span class=\"dft-status dft-status-{}\">{}</span>",
        status, status
    ));
    out.push_str(&format!(
        "<span class=\"dft-path\">{}</span>",
        escape_html(&diff.display_path)
    ));
    out.push_str(&format!(
        "<span class=\"dft-meta\">{}</span>",
        escape_html(&format!("{}", diff.file_format))
    ));
    if let Some(extra_info) = &diff.extra_info {
        out.push_str(&format!(
            "<span class=\"dft-extra\">{}</span>",
            escape_html(extra_info)
        ));
    }
    out.push_str("</div>\n");

    match (&diff.lhs_src, &diff.rhs_src) {
        (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
            render_text_body(diff, lhs_src, rhs_src, display_options, out);
        }
        (FileContent::Binary, FileContent::Binary) => {
            let msg = match diff.has_byte_changes {
                Some(_) => "Binary file changed.",
                None => "No changes.",
            };
            out.push_str(&format!("<p class=\"dft-message\">{}</p>\n", msg));
        }
        _ => {
            out.push_str("<p class=\"dft-message\">Binary contents changed.</p>\n");
        }
    }

    out.push_str("</section>\n");
}

fn render_text_body(
    diff: &DiffResult,
    lhs_src: &str,
    rhs_src: &str,
    display_options: &DisplayOptions,
    out: &mut String,
) {
    if !diff.has_syntactic_changes {
        let msg = match diff.file_format {
            _ if lhs_src == rhs_src => "No changes.",
            FileFormat::SupportedLanguage(_) => "No syntactic changes.",
            _ => "No changes.",
        };
        out.push_str(&format!("<p class=\"dft-message\">{}</p>\n", msg));
        return;
    }

    if diff.hunks.is_empty() {
        out.push_str("<p class=\"dft-message\">Has changes.</p>\n");
        return;
    }

    let syntax_highlight = display_options.syntax_highlight;
    let lhs_by_line = group_by_line(&diff.lhs_positions);
    let rhs_by_line = group_by_line(&diff.rhs_positions);

    let mut lhs_lines: Vec<&str> = split_on_newlines(lhs_src).collect();
    let mut rhs_lines: Vec<&str> = split_on_newlines(rhs_src).collect();
    if lhs_lines.last() == Some(&"") && lhs_lines.len() > 1 {
        lhs_lines.pop();
    }
    if rhs_lines.last() == Some(&"") && rhs_lines.len() > 1 {
        rhs_lines.pop();
    }

    out.push_str("<table class=\"dft-diff\">\n");

    // For wholly created or deleted files, there is no meaningful
    // alignment to compute: show every line on the relevant side.
    if lhs_src.is_empty() {
        for (i, _) in rhs_lines.iter().enumerate() {
            let rhs_line = LineNumber::from(i as u32);
            render_row(
                None,
                Some(rhs_line),
                &lhs_lines,
                &rhs_lines,
                &lhs_by_line,
                &rhs_by_line,
                true,
                true,
                syntax_highlight,
                out,
            );
        }
        out.push_str("</table>\n");
        return;
    }
    if rhs_src.is_empty() {
        for (i, _) in lhs_lines.iter().enumerate() {
            let lhs_line = LineNumber::from(i as u32);
            render_row(
                Some(lhs_line),
                None,
                &lhs_lines,
                &rhs_lines,
                &lhs_by_line,
                &rhs_by_line,
                true,
                true,
                syntax_highlight,
                out,
            );
        }
        out.push_str("</table>\n");
        return;
    }

    let (lhs_novel, rhs_novel) = lines_with_novel(&diff.lhs_positions, &diff.rhs_positions);

    let matched_lines =
        all_matched_lines_filled(&diff.lhs_positions, &diff.rhs_positions, &lhs_lines, &rhs_lines);
    let mut matched_lines = &matched_lines[..];

    for (i, hunk) in diff.hunks.iter().enumerate() {
        if i > 0 {
            out.push_str("<tr class=\"dft-sep\"><td colspan=\"4\"></td></tr>\n");
        }

        let (start_i, end_i) = matched_lines_indexes_for_hunk(
            matched_lines,
            hunk,
            display_options.num_context_lines as usize,
        );
        let aligned_lines = &matched_lines[start_i..end_i];
        matched_lines = &matched_lines[start_i..];

        for (lhs_line_num, rhs_line_num) in aligned_lines {
            let lhs_is_novel =
                line_is_novel(*lhs_line_num, *rhs_line_num, &lhs_lines, &lhs_novel);
            let rhs_is_novel =
                line_is_novel(*rhs_line_num, *lhs_line_num, &rhs_lines, &rhs_novel);

            render_row(
                *lhs_line_num,
                *rhs_line_num,
                &lhs_lines,
                &rhs_lines,
                &lhs_by_line,
                &rhs_by_line,
                lhs_is_novel,
                rhs_is_novel,
                syntax_highlight,
                out,
            );
        }
    }

    out.push_str("</table>\n");
}

/// Should the line `line_num` be highlighted as added/removed?
///
/// A line is novel if it contains changed tokens, or if it's a blank
/// line that has no counterpart on the opposite side.
fn line_is_novel(
    line_num: Option<LineNumber>,
    opposite_line_num: Option<LineNumber>,
    lines: &[&str],
    lines_with_novel: &DftHashSet<LineNumber>,
) -> bool {
    let Some(line_num) = line_num else {
        return false;
    };

    if lines_with_novel.contains(&line_num) {
        return true;
    }

    if opposite_line_num.is_none() {
        if let Some(content) = lines.get(line_num.as_usize()) {
            if content.trim().is_empty() {
                return true;
            }
        }
    }

    false
}

fn render_row(
    lhs_line_num: Option<LineNumber>,
    rhs_line_num: Option<LineNumber>,
    lhs_lines: &[&str],
    rhs_lines: &[&str],
    lhs_by_line: &DftHashMap<LineNumber, Vec<&MatchedPos>>,
    rhs_by_line: &DftHashMap<LineNumber, Vec<&MatchedPos>>,
    lhs_is_novel: bool,
    rhs_is_novel: bool,
    syntax_highlight: bool,
    out: &mut String,
) {
    out.push_str("<tr>");
    render_side(
        lhs_line_num,
        lhs_lines,
        lhs_by_line,
        lhs_is_novel,
        "dft-removed",
        syntax_highlight,
        out,
    );
    render_side(
        rhs_line_num,
        rhs_lines,
        rhs_by_line,
        rhs_is_novel,
        "dft-added",
        syntax_highlight,
        out,
    );
    out.push_str("</tr>\n");
}

fn render_side(
    line_num: Option<LineNumber>,
    src_lines: &[&str],
    by_line: &DftHashMap<LineNumber, Vec<&MatchedPos>>,
    is_novel: bool,
    novel_class: &str,
    syntax_highlight: bool,
    out: &mut String,
) {
    match line_num {
        Some(line_num) => {
            let state = if is_novel { novel_class } else { "dft-context" };
            out.push_str(&format!(
                "<td class=\"dft-num {}\">{}</td>",
                state,
                line_num.as_usize() + 1
            ));
            out.push_str(&format!(
                "<td class=\"dft-code {}\">{}</td>",
                state,
                render_code(line_num, src_lines, by_line, syntax_highlight)
            ));
        }
        None => {
            out.push_str("<td class=\"dft-num dft-empty\"></td>");
            out.push_str("<td class=\"dft-code dft-empty\"></td>");
        }
    }
}

/// Render the content of a single source line as HTML, applying
/// syntax-highlight classes and marking changed tokens.
fn render_code(
    line_num: LineNumber,
    src_lines: &[&str],
    by_line: &DftHashMap<LineNumber, Vec<&MatchedPos>>,
    syntax_highlight: bool,
) -> String {
    let line = src_lines.get(line_num.as_usize()).copied().unwrap_or("");
    let line_bytes = line.len();

    let empty = Vec::new();
    let mps = by_line.get(&line_num).unwrap_or(&empty);

    let mut html = String::new();
    let mut pos = 0;
    for mp in mps {
        let start = mp.pos.start_col as usize;
        let mut end = mp.pos.end_col as usize;

        // Defend against positions that fall outside this line, or
        // that overlap a span we've already emitted.
        if start >= line_bytes || start < pos {
            continue;
        }
        if end > line_bytes {
            end = line_bytes;
        }

        if pos < start {
            html.push_str(&escape_html(&line[pos..start]));
        }

        let classes = span_classes(&mp.kind, syntax_highlight);
        let text = escape_html(&line[start..end]);
        if classes.is_empty() {
            html.push_str(&text);
        } else {
            html.push_str(&format!("<span class=\"{}\">{}</span>", classes, text));
        }

        pos = end;
    }

    if pos < line_bytes {
        html.push_str(&escape_html(&line[pos..]));
    }

    html
}

/// The CSS classes to apply to a single matched token.
fn span_classes(kind: &MatchKind, syntax_highlight: bool) -> String {
    let mut classes: Vec<&str> = Vec::new();

    if syntax_highlight {
        let class = syntax_class(token_kind(kind));
        if !class.is_empty() {
            classes.push(class);
        }
    }

    if kind.is_novel() {
        classes.push("dft-novel");
        if matches!(kind, MatchKind::NovelWord { .. }) {
            classes.push("dft-novel-word");
        }
    }

    classes.join(" ")
}

fn token_kind(kind: &MatchKind) -> TokenKind {
    match kind {
        MatchKind::UnchangedToken { highlight, .. }
        | MatchKind::Novel { highlight }
        | MatchKind::NovelWord { highlight }
        | MatchKind::UnchangedPartOfNovelItem { highlight, .. }
        | MatchKind::Ignored { highlight } => *highlight,
    }
}

fn syntax_class(highlight: TokenKind) -> &'static str {
    match highlight {
        TokenKind::Delimiter => "",
        TokenKind::Atom(atom) => match atom {
            AtomKind::String(StringKind::StringLiteral) => "dft-string",
            AtomKind::String(StringKind::Text) => "",
            AtomKind::Keyword => "dft-keyword",
            AtomKind::Comment => "dft-comment",
            AtomKind::Type => "dft-type",
            AtomKind::TreeSitterError => "dft-tree-sitter-error",
            AtomKind::Normal | AtomKind::CanIgnore => "",
        },
    }
}

/// Group matched positions by line number, sorting each line's spans
/// by their starting column.
fn group_by_line(mps: &[MatchedPos]) -> DftHashMap<LineNumber, Vec<&MatchedPos>> {
    let mut by_line: DftHashMap<LineNumber, Vec<&MatchedPos>> = DftHashMap::default();
    for mp in mps {
        by_line.entry(mp.pos.line).or_insert_with(Vec::new).push(mp);
    }
    for spans in by_line.values_mut() {
        spans.sort_by_key(|mp| (mp.pos.start_col, mp.pos.end_col));
    }
    by_line
}

fn escape_html(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for c in s.chars() {
        match c {
            '&' => out.push_str("&amp;"),
            '<' => out.push_str("&lt;"),
            '>' => out.push_str("&gt;"),
            '"' => out.push_str("&quot;"),
            '\'' => out.push_str("&#39;"),
            _ => out.push(c),
        }
    }
    out
}

/// Build the embedded stylesheet. The colour palette is chosen to
/// match the configured background brightness.
fn stylesheet(display_options: &DisplayOptions) -> String {
    let theme = if display_options.background_color.is_dark() {
        DARK_THEME
    } else {
        LIGHT_THEME
    };

    format!(
        "{theme}\n{base}",
        theme = theme,
        base = base_css(display_options.tab_width)
    )
}

const LIGHT_THEME: &str = ":root {
  --dft-bg: #ffffff;
  --dft-fg: #1f2328;
  --dft-border: #d0d7de;
  --dft-header-bg: #f6f8fa;
  --dft-num-fg: #6e7781;
  --dft-empty-bg: #f6f8fa;
  --dft-added-bg: #e6ffec;
  --dft-added-num-bg: #ccffd8;
  --dft-added-hl-bg: #abf2bc;
  --dft-removed-bg: #ffebe9;
  --dft-removed-num-bg: #ffd7d5;
  --dft-removed-hl-bg: #ff9a96;
  --dft-keyword: #cf222e;
  --dft-string: #0a3069;
  --dft-comment: #57606a;
  --dft-type: #953800;
  --dft-error: #82071e;
  --dft-badge-fg: #ffffff;
  --dft-badge-changed: #9a6700;
  --dft-badge-created: #1a7f37;
  --dft-badge-deleted: #cf222e;
  --dft-badge-unchanged: #6e7781;
}";

const DARK_THEME: &str = ":root {
  --dft-bg: #0d1117;
  --dft-fg: #e6edf3;
  --dft-border: #30363d;
  --dft-header-bg: #161b22;
  --dft-num-fg: #6e7681;
  --dft-empty-bg: #161b22;
  --dft-added-bg: rgba(46, 160, 67, 0.15);
  --dft-added-num-bg: rgba(46, 160, 67, 0.30);
  --dft-added-hl-bg: rgba(46, 160, 67, 0.40);
  --dft-removed-bg: rgba(248, 81, 73, 0.15);
  --dft-removed-num-bg: rgba(248, 81, 73, 0.30);
  --dft-removed-hl-bg: rgba(248, 81, 73, 0.40);
  --dft-keyword: #ff7b72;
  --dft-string: #a5d6ff;
  --dft-comment: #8b949e;
  --dft-type: #ffa657;
  --dft-error: #ffa198;
  --dft-badge-fg: #ffffff;
  --dft-badge-changed: #9e6a03;
  --dft-badge-created: #238636;
  --dft-badge-deleted: #da3633;
  --dft-badge-unchanged: #6e7681;
}";

fn base_css(tab_width: usize) -> String {
    format!(
        "* {{ box-sizing: border-box; }}
body {{
  margin: 0;
  background: var(--dft-bg);
  color: var(--dft-fg);
  font-family: -apple-system, BlinkMacSystemFont, \"Segoe UI\", Helvetica, Arial, sans-serif;
}}
main {{ max-width: 1600px; margin: 0 auto; padding: 16px; }}
.dft-file {{
  border: 1px solid var(--dft-border);
  border-radius: 6px;
  margin-bottom: 24px;
  overflow: hidden;
}}
.dft-file-header {{
  display: flex;
  flex-wrap: wrap;
  align-items: center;
  gap: 8px;
  padding: 8px 12px;
  background: var(--dft-header-bg);
  border-bottom: 1px solid var(--dft-border);
  font-size: 13px;
}}
.dft-path {{
  font-family: ui-monospace, SFMono-Regular, \"SF Mono\", Menlo, Consolas, monospace;
  font-weight: 600;
}}
.dft-meta {{ color: var(--dft-num-fg); }}
.dft-extra {{ flex-basis: 100%; color: var(--dft-num-fg); }}
.dft-status {{
  text-transform: uppercase;
  font-size: 11px;
  font-weight: 600;
  letter-spacing: 0.03em;
  padding: 1px 8px;
  border-radius: 999px;
  color: var(--dft-badge-fg);
}}
.dft-status-changed {{ background: var(--dft-badge-changed); }}
.dft-status-created {{ background: var(--dft-badge-created); }}
.dft-status-deleted {{ background: var(--dft-badge-deleted); }}
.dft-status-unchanged {{ background: var(--dft-badge-unchanged); }}
.dft-message {{
  padding: 12px;
  margin: 0;
  color: var(--dft-num-fg);
  font-family: ui-monospace, SFMono-Regular, \"SF Mono\", Menlo, Consolas, monospace;
  font-size: 12px;
}}
table.dft-diff {{
  width: 100%;
  border-collapse: collapse;
  table-layout: fixed;
  font-family: ui-monospace, SFMono-Regular, \"SF Mono\", Menlo, Consolas, monospace;
  font-size: 12px;
  line-height: 20px;
  tab-size: {tab_width};
  -moz-tab-size: {tab_width};
}}
table.dft-diff td {{ padding: 0; vertical-align: top; }}
td.dft-num {{
  width: 1%;
  min-width: 1%;
  padding: 0 10px;
  text-align: right;
  white-space: nowrap;
  color: var(--dft-num-fg);
  border-right: 1px solid var(--dft-border);
  user-select: none;
  -webkit-user-select: none;
}}
td.dft-code {{
  width: 49%;
  padding: 0 10px;
  white-space: pre-wrap;
  overflow-wrap: anywhere;
  word-break: break-word;
}}
td.dft-removed {{ background: var(--dft-removed-bg); }}
td.dft-num.dft-removed {{ background: var(--dft-removed-num-bg); }}
td.dft-added {{ background: var(--dft-added-bg); }}
td.dft-num.dft-added {{ background: var(--dft-added-num-bg); }}
td.dft-empty {{ background: var(--dft-empty-bg); }}
td.dft-code.dft-removed .dft-novel {{ background: var(--dft-removed-hl-bg); border-radius: 2px; }}
td.dft-code.dft-added .dft-novel {{ background: var(--dft-added-hl-bg); border-radius: 2px; }}
.dft-novel-word {{ font-weight: 600; }}
.dft-sep td {{
  height: 10px;
  background: var(--dft-header-bg);
  border-top: 1px solid var(--dft-border);
  border-bottom: 1px solid var(--dft-border);
}}
.dft-keyword {{ color: var(--dft-keyword); font-weight: 600; }}
.dft-string {{ color: var(--dft-string); }}
.dft-comment {{ color: var(--dft-comment); font-style: italic; }}
.dft-type {{ color: var(--dft-type); }}
.dft-tree-sitter-error {{ color: var(--dft-error); }}
",
        tab_width = tab_width
    )
}

#[cfg(test)]
mod tests {
    use line_numbers::SingleLineSpan;

    use super::*;
    use crate::display::hunks::Hunk;
    use crate::parse::guess_language::Language;

    fn novel_mp(line: u32, start_col: u32, end_col: u32) -> MatchedPos {
        MatchedPos {
            kind: MatchKind::Novel {
                highlight: TokenKind::Atom(AtomKind::Normal),
            },
            pos: SingleLineSpan {
                line: line.into(),
                start_col,
                end_col,
            },
        }
    }

    #[test]
    fn test_escape_html() {
        assert_eq!(
            escape_html("<a href=\"x\">&'</a>"),
            "&lt;a href=&quot;x&quot;&gt;&amp;&#39;&lt;/a&gt;"
        );
    }

    #[test]
    fn test_render_code_marks_novel_tokens() {
        let lines = vec!["foo bar"];
        let mps = vec![novel_mp(0, 4, 7)];
        let by_line = group_by_line(&mps);

        let html = render_code(0.into(), &lines, &by_line, true);
        assert_eq!(html, "foo <span class=\"dft-novel\">bar</span>");
    }

    #[test]
    fn test_render_code_escapes_content() {
        let lines = vec!["a < b"];
        let by_line = group_by_line(&[]);

        let html = render_code(0.into(), &lines, &by_line, true);
        assert_eq!(html, "a &lt; b");
    }

    #[test]
    fn test_render_code_out_of_range_span() {
        // A span that extends beyond the line should be clamped rather
        // than panicking.
        let lines = vec!["hi"];
        let mps = vec![novel_mp(0, 0, 99)];
        let by_line = group_by_line(&mps);

        let html = render_code(0.into(), &lines, &by_line, true);
        assert_eq!(html, "<span class=\"dft-novel\">hi</span>");
    }

    #[test]
    fn test_syntax_class_disabled() {
        let kind = MatchKind::UnchangedToken {
            highlight: TokenKind::Atom(AtomKind::Keyword),
            self_pos: vec![],
            opposite_pos: vec![],
        };
        assert_eq!(span_classes(&kind, false), "");
        assert_eq!(span_classes(&kind, true), "dft-keyword");
    }

    #[test]
    fn test_print_produces_self_contained_document() {
        use crate::summary::DiffResult;

        let diff = DiffResult {
            display_path: "example.py".to_owned(),
            extra_info: None,
            file_format: FileFormat::SupportedLanguage(Language::Python),
            lhs_src: FileContent::Text("x = 1\n".to_owned()),
            rhs_src: FileContent::Text("x = 2\n".to_owned()),
            lhs_positions: vec![novel_mp(0, 4, 5)],
            rhs_positions: vec![novel_mp(0, 4, 5)],
            hunks: vec![Hunk {
                novel_lhs: [LineNumber::from(0u32)].into_iter().collect(),
                novel_rhs: [LineNumber::from(0u32)].into_iter().collect(),
                lines: vec![(Some(0.into()), Some(0.into()))],
            }],
            has_byte_changes: Some((6, 6)),
            has_syntactic_changes: true,
        };

        let html = render_document(&[&diff], &DisplayOptions::default());

        assert!(html.starts_with("<!DOCTYPE html>"));
        assert!(html.contains("<style>"));
        assert!(html.contains("example.py"));
        assert!(html.contains("table class=\"dft-diff\""));
        // No external resources should be referenced.
        assert!(!html.contains("http://"));
        assert!(!html.contains("https://"));
        assert!(!html.contains("src="));
    }
}
