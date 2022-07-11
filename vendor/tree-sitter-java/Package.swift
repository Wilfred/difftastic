// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJava",
    products: [
        .library(name: "TreeSitterJava", targets: ["TreeSitterJava"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterJava",
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
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)