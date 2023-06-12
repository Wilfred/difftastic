// swift-tools-version: 5.6
import PackageDescription

let package = Package(
    name: "TreeSitterScala",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [.library(name: "TreeSitterScala", targets: ["TreeSitterScala"])],
    targets: [
        .target(
            name: "TreeSitterScala",
            path: ".",
            exclude: [
            ],
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries"),
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
    ]
)
