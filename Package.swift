// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPHP",
    products: [
        .library(name: "TreeSitterPHP", targets: ["TreeSitterPHP"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterPHP",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "corpus",
                    "grammar.js",
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
                    "src/scanner.cc",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)