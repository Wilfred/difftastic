// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "TreeSitterJSON",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterJSON", targets: ["TreeSitterJSON"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterJSON",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "corpus",
                    "grammar.js",
                    "LICENSE",
                    "package.json",
                    "README.md",
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
