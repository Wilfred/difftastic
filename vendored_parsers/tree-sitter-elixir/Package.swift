// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "TreeSitterElixir",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterElixir", targets: ["TreeSitterElixir"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterElixir",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "docs",
                    "grammar.js",
                    "LICENSE",
                    "Makefile",
                    "NOTICE",
                    "package.json",
                    "README.md",
                    "scripts",
                    "src/grammar.json",
                    "src/node-types.json",
                    "test",
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
