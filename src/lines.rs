use regex::Regex;

// TODO: Move to a separate file, this isn't line related.
/// A range in a string, relative to the string start.
#[derive(Debug, PartialEq, Clone, Copy)]
pub struct Range {
    pub start: usize,
    pub end: usize,
}



#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct LineNumber {
    pub number: usize,
}

impl LineNumber {
    pub fn from(number: usize) -> LineNumber {
        LineNumber { number: number }
    }
}

/// A position in a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
struct LinePosition {
    /// Both zero-indexed.
    line: LineNumber,
    column: usize,
}

/// A range within a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
struct LineRange {
    /// All zero-indexed.
    line: LineNumber,
    start: usize,
    end: usize,
}

fn line_position(offset: usize, newline_positions: &[usize]) -> LinePosition {
    for line_num in (0..newline_positions.len()).rev() {
        if offset > newline_positions[line_num as usize] {
            return LinePosition {
                line: LineNumber::from(line_num as usize + 1),
                column: offset - newline_positions[line_num as usize],
            };
        }
    }

    LinePosition {
        line: LineNumber::from(0),
        column: offset,
    }
}

// Given a range within a string, split it into ranges where each
// range is on a single line.
fn split_line_boundaries(
    start: LinePosition,
    end: LinePosition,
    line_start_positions: &[usize],
) -> Vec<LineRange> {
    let mut ranges = vec![];

    if start.line == end.line {
        ranges.push(LineRange {
            line: start.line,
            start: start.column,
            end: end.column,
        });
        return ranges;
    } else {
        let first_line_end_pos = line_start_positions[start.line.number + 1] - 1;
        let first_line_length = first_line_end_pos - line_start_positions[start.line.number];
        ranges.push(LineRange {
            line: start.line,
            start: start.column,
            end: first_line_length,
        });
    }

    for line_num in (start.line.number + 1)..end.line.number {
        let line_end_pos = line_start_positions[line_num + 1] - 1;
        let line_length = line_end_pos - line_start_positions[line_num];
        ranges.push(LineRange {
            line: LineNumber::from(line_num),
            start: 0,
            end: line_length,
        });
    }

    // Last line, up to end.
    ranges.push(LineRange {
        line: end.line,
        start: 0,
        end: end.column,
    });

    ranges
}

/// Convert absolute string ranges to line-relative ranges. If the
/// absolute range crosses a newline, split it into multiple
/// line-relative ranges.
fn line_relative_ranges(ranges: &[Range], s: &str) -> Vec<LineRange> {
    let newline_re = Regex::new("\n").unwrap();
    let newlines: Vec<_> = newline_re.find_iter(s).map(|mat| mat.end()).collect();
    let mut line_start_positions = vec![0];
    line_start_positions.extend(&newlines);

    let mut rel_positions = vec![];
    for range in ranges {
        let start_pos = line_position(range.start, &newlines);
        let end_pos = line_position(range.end, &newlines);

        rel_positions.extend(split_line_boundaries(
            start_pos,
            end_pos,
            &line_start_positions,
        ));
    }

    rel_positions
}

#[test]
fn line_relative_first_line() {
    let relative_positions = line_relative_ranges(&vec![Range { start: 1, end: 3 }], "foo");
    assert_eq!(
        relative_positions,
        vec![LineRange {
            line: LineNumber::from(0),
            start: 1,
            end: 3
        }]
    );
}

#[test]
fn line_relative_split_over_multiple() {
    let relative_positions = line_relative_ranges(
        &vec![Range { start: 5, end: 10 }],
        "foo\nbar\nbaz\naaaaaaaaaaa",
    );
    assert_eq!(
        relative_positions,
        vec![
            (LineRange {
                line: LineNumber::from(1),
                start: 1,
                end: 3
            }),
            (LineRange {
                line: LineNumber::from(2),
                start: 0,
                end: 2
            })
        ]
    );
}

/// Given a slice of absolute positioned ranges, return the lines that
/// they land on.
pub fn relevant_lines(ranges: &[Range], s: &str) -> Vec<LineNumber> {
    line_relative_ranges(ranges, s)
        .iter()
        .map(|r| r.line)
        .collect()
}
