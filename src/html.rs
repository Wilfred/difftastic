use askama::Template;

#[derive(Template)] // this will generate the code...
#[template(path = "hello.html")] // using the template in this path, relative
                                 // to the `templates` dir in the crate root
struct HelloTemplate<'a> {
    // the name of the struct can be anything
    name: &'a str, // the field name should match the variable name
                   // in your template
}

pub fn print() {
    //
    let hello = HelloTemplate { name: "world" }; // instantiate your struct
    println!("{}", hello.render().unwrap()); // then render it.


}
