// Standalone adapter. The build script supplies the production source paths.
#[allow(dead_code)]
mod conflicts { include!(env!("CONFLICT_BODY")); }
mod words { include!(env!("WORD_SOURCE")); }
type LineNumber = usize;
include!(env!("GAP_SOURCE"));

fn rows_text(rows: &[(Option<usize>, Option<usize>)]) -> String {
    rows.iter().map(|(a,b)| {
        let field = |v: &Option<usize>| v.map(|n| n.to_string()).unwrap_or_default();
        format!("{},{}", field(a), field(b))
    }).collect::<Vec<_>>().join(";")
}

fn main() {
    let args: Vec<_> = std::env::args().collect();
    let input = &args[2];
    match args[1].as_str() {
        "conflict" => match conflicts::apply_conflict_markers(input) {
            Ok(c) => print!("{}|{}|{}", c.num_conflicts, c.lhs_content, c.rhs_content),
            Err(_) => print!("error"),
        },
        "words" => {
            let limit = args[3].parse().unwrap();
            let coarse = words::split_words_up_to(input, limit);
            print!("{}|{}", coarse.map(|w| w.join("~")).unwrap_or_else(|| "!".into()),
                   words::split_words_and_numbers(input).join("~"));
        }
        "gap" => {
            let rows: Vec<_> = input.bytes().enumerate().map(|(i,c)|
                ((c != b'R').then_some(i), (c != b'L').then_some(i))).collect();
            let out = compact_gaps(&rows);
            print!("{}|{}", rows_text(&out), rows_text(&compact_gaps(&out)));
        }
        _ => panic!("unknown probe"),
    }
}
