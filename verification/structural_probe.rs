// Test-only observations of the production pipeline for Structural.lean.
use crate::diff::changes::{ChangeKind, ChangeMap};
use crate::diff::graph::{Edge, Vertex};
use crate::diff::{shortest_path, sliders, unchanged};
use crate::display::hunks::{extract_lines, matched_pos_to_hunks};
use crate::parse::guess_language::Language;
use crate::parse::syntax::{self, Syntax};
use crate::parse::tree_sitter_parser::{from_language, parse};
use serde_json::{Value, json};
use std::cell::{Cell, RefCell};
use typed_arena::Arena;

thread_local! {
    static TRACE: RefCell<Option<Vec<Value>>> = const { RefCell::new(None) };
    static CAP: Cell<usize> = const { Cell::new(0) };
}

pub(crate) fn cap_hit() {
    CAP.set(CAP.get() + 1);
}

pub(crate) fn record_route(route: &[(Edge, &Vertex)]) {
    TRACE.with_borrow_mut(|out| {
        if let Some(out) = out {
            for (edge, v) in route {
                let kind = match edge {
                    Edge::UnchangedNode { .. } => "equal",
                    Edge::EnterUnchangedDelimiter { .. } => "pair",
                    Edge::NovelAtomLHS {} | Edge::EnterNovelDelimiterLHS {} => "left",
                    Edge::NovelAtomRHS {} | Edge::EnterNovelDelimiterRHS {} => "right",
                    _ => "replacement",
                };
                out.push(json!([
                    kind,
                    v.lhs_syntax.map(|n| n.id().get()).unwrap_or(0),
                    v.rhs_syntax.map(|n| n.id().get()).unwrap_or(0),
                    edge.cost()
                ]));
            }
        }
    });
}

fn events<'a>(nodes: &[&Syntax<'a>], map: &ChangeMap<'a>) -> Vec<Value> {
    let mut result = Vec::new();
    for n in nodes {
        let mate = match map.get(n) {
            None => -1,
            Some(ChangeKind::Unchanged(m)) => i64::from(m.id().get()),
            Some(_) => 0,
        };
        let (kind, open, close) = match n {
            Syntax::Atom { content, .. } => ("atom", content.as_str(), ""),
            Syntax::List {
                open_content,
                close_content,
                ..
            } => ("open", open_content.as_str(), close_content.as_str()),
        };
        let mut event = json!({"id": n.id().get(), "kind":kind, "content":n.content_id(),
            "depth": n.num_ancestors(), "open":open, "close":close, "mate":mate});
        result.push(event.clone());
        if let Syntax::List { children, .. } = n {
            result.extend(events(children, map));
            event["kind"] = json!("close");
            result.push(event);
        }
    }
    result
}

fn sample(a: &str, b: &str, split: bool, lang: Language) -> Value {
    let arena = Arena::new();
    let cfg = from_language(lang);
    let lhs = parse(&arena, a, cfg, false);
    let rhs = parse(&arena, b, cfg, false);
    syntax::init_all_info(&lhs, &rhs);
    let mut map = ChangeMap::default();
    let sections = if split {
        unchanged::mark_unchanged(&lhs, &rhs, &mut map)
    } else {
        vec![(lhs.clone(), rhs.clone())]
    };
    let pre = [events(&lhs, &map), events(&rhs, &map)];
    let mut paths = vec![];
    for (l, r) in sections {
        let input = [events(&l, &map), events(&r, &map)];
        syntax::init_next_prev(&l);
        syntax::init_next_prev(&r);
        TRACE.replace(Some(vec![]));
        CAP.set(0);
        shortest_path::mark_syntax(l.first().copied(), r.first().copied(), &mut map, 1_000_000)
            .unwrap();
        paths.push(json!({"input":input,"route":TRACE.take().unwrap(),"cap":CAP.get()}));
    }
    let before = [events(&lhs, &map), events(&rhs, &map)];
    sliders::fix_all_sliders(lang, &lhs, &mut map);
    sliders::fix_all_sliders(lang, &rhs, &mut map);
    let after = [events(&lhs, &map), events(&rhs, &map)];
    let hunks: Vec<_> = matched_pos_to_hunks(
        &syntax::change_positions(&lhs, &map),
        &syntax::change_positions(&rhs, &map),
    )
    .iter()
    .map(|h| {
        let rows: Vec<_> = extract_lines(h)
            .into_iter()
            .map(|(l, r)| (l.map(|x| x.0), r.map(|x| x.0)))
            .collect();
        json!({"rows":rows, "novel":[h.novel_lhs.iter().map(|x|x.0).collect::<Vec<_>>(),
            h.novel_rhs.iter().map(|x|x.0).collect::<Vec<_>>() ]})
    })
    .collect();
    json!({"a":a,"b":b,"split":split,"pre":pre,"paths":paths,"before":before,"after":after,"hunks":hunks})
}

#[test]
#[ignore = "writes the corpus for the Lean structural checks"]
fn export_structural_cases() {
    let forms = [
        "a",
        "b",
        "(a)",
        "[a]",
        "(a a)",
        "(a b)",
        "((a))",
        "((a) a)",
        "(a (a))",
        "((a) (b))",
        "(((a)) b)",
        "a\nb\na",
        "a\na\nb",
        "(a\n b)\nc",
    ];
    let mut data = vec![];
    for a in forms {
        for b in forms {
            for split in [false, true] {
                data.push(sample(a, b, split, Language::EmacsLisp));
            }
        }
    }
    for (a, b) in [("[1,2,]", "[1,2]"), ("[1,2,]", "[1,]")] {
        for split in [false, true] {
            data.push(sample(a, b, split, Language::Json));
        }
    }
    std::fs::write(
        std::env::var("DFT_STRUCTURAL_TRACE").unwrap(),
        serde_json::to_vec(&data).unwrap(),
    )
    .unwrap();
}
