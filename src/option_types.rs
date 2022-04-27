use crate::guess_language;
use crate::style::BackgroundColor;

#[derive(Debug)]
pub enum ColorOutput {
    Always,
    Auto,
    Never,
}

#[derive(Debug, Copy, Clone)]
pub enum DisplayMode {
    Inline,
    SideBySide,
    SideBySideShowBoth,
}

pub enum Mode {
    Diff {
        node_limit: u32,
        byte_limit: usize,
        print_unchanged: bool,
        missing_as_empty: bool,
        display_mode: DisplayMode,
        background_color: BackgroundColor,
        color_output: ColorOutput,
        display_width: usize,
        display_path: String,
        language_override: Option<guess_language::Language>,
        lhs_path: String,
        rhs_path: String,
    },
    DumpTreeSitter {
        path: String,
        language_override: Option<guess_language::Language>,
    },
    DumpSyntax {
        path: String,
        language_override: Option<guess_language::Language>,
    },
}
