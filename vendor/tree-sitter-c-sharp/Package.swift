// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCSharp",
    products: [
        .library(name: "TreeSitterCSharp", targets: ["TreeSitterCSharp"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterCSharp",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "corpus",
                    "grammar.js",
                    "index.js",
                    "LICENSE",
                    "Makefile",
                    "package.json",
                    "README.md",
                    "script",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)