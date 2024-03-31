// swift-tools-version: 5.6
import PackageDescription

let package = Package(
    name: "TreeSitterGDScript",
    platforms: [
        .macOS(.v10_13),
        .iOS(.v11)
    ],
    products: [.library(name: "TreeSitterGDScript", targets: ["TreeSitterGDScript"])],
    targets: [
        .target(
            name: "TreeSitterGDScript",
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
