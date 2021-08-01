use crate::lines::LineGroup;

pub fn display(groups: &[LineGroup]) -> String {
    let mut res = String::new();

    for group in groups {
        res.push_str(&format!("{:#?}\n", group))
    }

    res
}
