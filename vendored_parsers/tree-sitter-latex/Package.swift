// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterLatex",
    products: [
        .library(name: "TreeSitterLatex", targets: ["TreeSitterLatex"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterLatex",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "benches",
                    ".github",
                    "examples",
                    "Cargo.toml",
                    "test",
                    "grammar.js",
                    "LICENSE",
                    "Makefile",
                    "package.json",
                    "README.md",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)