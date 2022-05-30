// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRust",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterRust", targets: ["TreeSitterRust"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterRust",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "corpus",
                    "examples",
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
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)