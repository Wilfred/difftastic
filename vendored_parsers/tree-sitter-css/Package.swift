// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCSS",
    products: [
        .library(name: "TreeSitterCSS", targets: ["TreeSitterCSS"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterCSS",
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
