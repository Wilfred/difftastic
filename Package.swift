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
                    "package.json",
                    "README.md",
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