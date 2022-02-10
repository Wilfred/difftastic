use askama::Template;

#[derive(Template)]
#[template(path = "summary.html")]
struct SummaryTemplate<'a> {
    display_path: &'a str,
}

pub fn print(display_path: &str) {
    let template = SummaryTemplate { display_path };
    println!("{}", template.render().unwrap());
}
