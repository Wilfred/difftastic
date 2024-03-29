use yansi::{Color, Style};

use crate::{
    constants::Side,
    parse::syntax::{AtomKind, MatchKind, StringKind, TokenKind},
};
use std::collections::HashMap;

type StyleMap = HashMap<String, Style>;

/// Theme objects to allow customization of colors and styles
///
/// Themes represent a dark or light theme individually. We decide whether to
/// use light or dark at theme load time.
#[derive(Debug, Clone)]
pub(crate) struct Theme {
    pub(crate) base_style: Style,
    pub(crate) novel_style_left: Style,
    pub(crate) novel_style_right: Style,
    pub(crate) lineno_style_base: Style,
    pub(crate) lineno_style_left: Style,
    pub(crate) lineno_style_right: Style,
    pub(crate) styles: StyleMap,
}

impl Theme {
    pub(crate) fn default_style(&self, novel: bool, side: Side) -> &Style {
        match novel {
            true => match side {
                Side::Left => &self.novel_style_left,
                Side::Right => &self.novel_style_right,
            },
            false => &self.base_style,
        }
    }

    pub(crate) fn lineno_style(&self, novel: bool, side: Side) -> &Style {
        match novel {
            true => match side {
                Side::Left => &self.lineno_style_left,
                Side::Right => &self.lineno_style_right,
            },
            false => &self.lineno_style_base,
        }
    }

    /// try to match <name>_<novel>_<side>
    /// try to match <name>_<novel>
    /// try to match <name>
    /// if none of these match, fallback to defaults
    pub(crate) fn style(&self, name: &str, novel: bool, side: Side) -> &Style {
        if let Some(full_style) = self.styles.get(&format!(
            "{}{}_{}",
            name,
            match novel {
                true => "_novel",
                false => "",
            },
            match side {
                Side::Left => "left",
                Side::Right => "right",
            }
        )) {
            return full_style;
        }

        // if let Some(side_less_style) = self.styles.get(&format!(
        //     "{}{}",
        //     name,
        //     match novel {
        //         true => "_novel",
        //         false => "",
        //     },
        // )) {
        //     return side_less_style;
        // }

        if let Some(bare_style) = self.styles.get(name) {
            return bare_style;
        } else {
            &self.base_style
        }

        // self.default_style(novel, side)
    }

    pub(crate) fn style_by_type(&self, kind: &MatchKind, side: Side) -> &Style {
        // TODO: take syntax coloring preference into account as well as file type
        //  // Underline novel words inside comments in code, but
        //  // don't apply it to every single line in plaintext.
        //  if matches!(file_format, FileFormat::SupportedLanguage(_)) {
        //      style = style.underline();
        //  }

        // translate the status to strings
        let (status, token) = match kind {
            MatchKind::UnchangedToken { highlight, .. } => ("unchanged", highlight),
            MatchKind::Ignored { highlight } => ("ignored", highlight),
            MatchKind::Novel { highlight } => ("novel", highlight),
            MatchKind::NovelLinePart { highlight, .. } => ("novel_line_part", highlight),
            MatchKind::NovelWord { highlight } => ("novel_word", highlight),
        };

        // translate the token kinds to strings
        let token_kind = match token {
            TokenKind::Delimiter => "delimiter",
            TokenKind::Atom(AtomKind::Normal) => "normal",
            TokenKind::Atom(AtomKind::String(StringKind::StringLiteral)) => "string_literal",
            TokenKind::Atom(AtomKind::String(StringKind::Text)) => "text",
            TokenKind::Atom(AtomKind::Type) => "type",
            TokenKind::Atom(AtomKind::Comment) => "comment",
            TokenKind::Atom(AtomKind::Keyword) => "keyword",
            TokenKind::Atom(AtomKind::TreeSitterError) => "tree_sitter_error",
        };

        // translate the side to its corresponding name
        let side_name = match side {
            Side::Left => "left",
            Side::Right => "right",
        };

        // attempt to return the most specific style first
        if let Some(full_style) = self
            .styles
            .get(&format!("{}_{}_{}", token_kind, status, side_name))
        {
            return full_style;
        }

        // fallback to novel if no more specific status is available
        if matches!(
            kind,
            MatchKind::Novel { .. } | MatchKind::NovelLinePart { .. } | MatchKind::NovelWord { .. }
        ) {
            if let Some(full_style) = self
                .styles
                .get(&format!("{}_novel_{}", token_kind, side_name))
            {
                return full_style;
            }
        }

        // fallback to non-novel with side name
        if matches!(
            kind,
            MatchKind::UnchangedToken { .. } | MatchKind::Ignored { .. }
        ) {
            if let Some(full_style) = self.styles.get(&format!("{}_{}", token_kind, side_name)) {
                return full_style;
            }
        }

        // fallback to side-less style
        if let Some(side_less_style) = self.styles.get(&format!("{}_{}", token_kind, status,)) {
            return side_less_style;
        }

        // fallback to the bare style for that token kind or return the base style
        if let Some(bare_style) = self.styles.get(token_kind) {
            return bare_style;
        } else {
            &self.base_style
        }

        // TODO: do we want to return the default style or is the base above enough?
        // self.default_style(novel, side)
    }
}

fn insert_style_combos(
    styles: &mut StyleMap,
    name: &str,
    style: Style,
    lhs_novel_color: yansi::Color,
    rhs_novel_color: yansi::Color,
) {
    styles.insert(
        format!("{}_novel_left", name),
        style.clone().bg(lhs_novel_color),
    );
    styles.insert(
        format!("{}_novel_right", name),
        style.clone().bg(rhs_novel_color),
    );
    styles.insert(name.to_owned(), style);
}

impl Default for Theme {
    /// Setup the base color theme
    ///
    /// We'll allow setting up user provided, custom color themes later.
    fn default() -> Self {
        let lhs_novel_color = Color::BrightRed;
        let rhs_novel_color = Color::BrightGreen;
        // let novel_style_left = Style::new().on_color(XtermColors::from(224));
        // let novel_style_right = Style::new().on_color(XtermColors::from(194));
        let mut styles = HashMap::new();
        insert_style_combos(
            &mut styles,
            "normal",
            yansi::Style::default(),
            lhs_novel_color,
            rhs_novel_color,
        );
        insert_style_combos(
            &mut styles,
            "string_literal",
            Style::new().bright_blue(),
            lhs_novel_color,
            rhs_novel_color,
        );
        insert_style_combos(
            &mut styles,
            "text",
            Style::new().bright_blue(),
            lhs_novel_color,
            rhs_novel_color,
        );
        insert_style_combos(
            &mut styles,
            "comment",
            Style::new().italic(),
            lhs_novel_color,
            rhs_novel_color,
        );
        insert_style_combos(
            &mut styles,
            "keyword",
            Style::new().magenta(),
            lhs_novel_color,
            rhs_novel_color,
        );
        insert_style_combos(
            &mut styles,
            "type",
            Style::new().blue(),
            lhs_novel_color,
            rhs_novel_color,
        );
        insert_style_combos(
            &mut styles,
            "delimiter",
            Style::new().magenta(),
            lhs_novel_color,
            rhs_novel_color,
        );

        styles.insert("tree_sitter_error".to_string(), Style::new().magenta());

        Theme {
            base_style: yansi::Style::default(),
            novel_style_left: Style::new().bg(lhs_novel_color),
            novel_style_right: Style::new().bg(rhs_novel_color),
            // For unchanged lines, dim the line numbers so it's
            // clearly separate from the content.
            lineno_style_base: Style::new().dim(),
            // For changed lines, show the line number as red/green
            // and bold. This works well for syntactic diffs, where
            // most content is not bold.
            lineno_style_left: Style::new().red().bold(),
            lineno_style_right: Style::new().green().bold(),
            styles,
        }
    }
}
