use crate::constants::Side;
use owo_colors::{Style, XtermColors};
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

        if let Some(side_less_style) = self.styles.get(&format!(
            "{}{}",
            name,
            match novel {
                true => "_novel",
                false => "",
            },
        )) {
            return side_less_style;
        }

        if let Some(bare_style) = self.styles.get(name) {
            return bare_style;
        }

        self.default_style(novel, side)
    }
}

fn insert_style_combos(styles: &mut StyleMap, name: &str, style: Style) {
    styles.insert(
        format!("{}_novel_left", name),
        style.on_color(XtermColors::from(224)),
    );
    styles.insert(
        format!("{}_novel_right", name),
        style.on_color(XtermColors::from(194)),
    );
    styles.insert(name.to_owned(), style);
}

impl Default for Theme {
    fn default() -> Self {
        let novel_style_left = Style::new().on_color(XtermColors::from(224));
        let novel_style_right = Style::new().on_color(XtermColors::from(194));

        let mut styles = HashMap::new();
        insert_style_combos(&mut styles, "normal", Style::new());
        insert_style_combos(&mut styles, "string_literal", Style::new().bright_blue());
        insert_style_combos(&mut styles, "text", Style::new().bright_blue());
        insert_style_combos(&mut styles, "comment", Style::new().dimmed().italic());
        insert_style_combos(&mut styles, "keyword", Style::new().magenta());
        insert_style_combos(&mut styles, "type", Style::new().blue());
        insert_style_combos(&mut styles, "delimiter", Style::new().magenta());

        styles.insert("tree_sitter_error".to_string(), Style::new().purple());

        Theme {
            base_style: Style::new(),
            novel_style_left,
            novel_style_right,
            // For unchanged lines, dim the line numbers so it's
            // clearly separate from the content.
            lineno_style_base: Style::new().dimmed(),
            // For changed lines, show the line number as red/green
            // and bold. This works well for syntactic diffs, where
            // most content is not bold.
            lineno_style_left: Style::new().red().bold(),
            lineno_style_right: Style::new().green().bold(),
            styles,
        }
    }
}
