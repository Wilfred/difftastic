// swift-tools-version: 5.6
import PackageDescription

let package = Package(
    name: "TreeSitterTypeScript",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [.library(name: "TreeSitterTypeScript", targets: ["TreeSitterTypeScript"])],
    targets: [
        .target(
            name: "TreeSitterTypeScript",
            path: ".",
            exclude: [
            ],
            sources: [
                "typescript/src/parser.c",
                "typescript/src/scanner.c",
                "tsx/src/parser.c",
                "tsx/src/scanner.c",
            ],
            resources: [
                .copy("queries"),
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("typescript/src")]
        ),
    ]
)
