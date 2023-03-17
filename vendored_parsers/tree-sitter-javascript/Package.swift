// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJS",
    products: [
        .library(name: "TreeSitterJS", targets: ["TreeSitterJS"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterJS",
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
                    "*.wasm",
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