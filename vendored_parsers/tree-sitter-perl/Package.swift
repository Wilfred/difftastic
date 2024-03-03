// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "TreeSitterPerl",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterPerl", targets: ["TreeSitterPerl"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterPerl",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "examples",
                    "grammar.js",
                    "LICENSE",
                    "package-lock.json",
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
