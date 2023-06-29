// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBash",
    products: [
        .library(name: "TreeSitterBash", targets: ["TreeSitterBash"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterBash",
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
                    ".travis.yml",
                    "appveyor.yaml",
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
