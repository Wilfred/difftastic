# tree-sitter-objc

This crate provides an Objective-C grammar for the [tree-sitter][] parsing library. To
use this crate, add it to the `[dependencies]` section of your `Cargo.toml`
file. (Note that you will probably also need to depend on the
[`tree-sitter`][tree-sitter crate] crate to use the parsed result in any useful
way.)

```toml
[dependencies]
tree-sitter = "~0.20.10"
tree-sitter-objc = "2.0.0"
```

Typically, you will use the [language][language func] function to add this
grammar to a tree-sitter [Parser][], and then use the parser to parse some code:

```rust
let code = r#"
#import <Foundation/Foundation.h>

// Defining a class interface
@interface Person : NSObject

// Declaring properties
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) NSInteger age;

// Declaring methods
- (instancetype)initWithName:(NSString *)name age:(NSInteger)age;
- (void)greet;

@end

@implementation Person

// Implementing the initializer
- (instancetype)initWithName:(NSString *)name age:(NSInteger)age {
    self = [super init];
    if (self) {
        _name = name;
        _age = age;
    }
    return self;
}

// Implementing the greet method
- (void)greet {
    NSLog(@"Hello, my name is %@ and I'm %ld years old.", self.name, (long)self.age);
}

@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Creating an instance of Person
        Person *person = [[Person alloc] initWithName:@"John" age:25];

        // Accessing properties
        NSString *name = person.name;
        NSInteger age = person.age;

        // Calling a method
        [person greet];
    }
    return 0;
}
"#;
let mut parser = Parser::new();
parser.set_language(tree_sitter_objc::language()).expect("Error loading Objective-C grammar");
let parsed = parser.parse(code, None);
```

If you have any questions, please reach out to us in the [tree-sitter
discussions] page.

[language func]: https://docs.rs/tree-sitter-objc/*/tree_sitter_objc/fn.language.html
[parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
[tree-sitter]: https://tree-sitter.github.io/
[tree-sitter crate]: https://crates.io/crates/tree-sitter
[tree-sitter discussions]: https://github.com/tree-sitter/tree-sitter/discussions
