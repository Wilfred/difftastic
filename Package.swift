// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPurescript",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterPurescript", targets: ["TreeSitterPurescript"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterPurescript",
                path: ".",
                sources: [
                    "src/parser.c",
                    // NOTE: if your language has an external scanner, add it here.
                    "src/scanner.c"
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
