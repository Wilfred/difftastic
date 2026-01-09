// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGodotResource",
    products: [
        .library(name: "TreeSitterGodotResource", targets: ["TreeSitterGodotResource"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGodotResource",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGodotResourceTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGodotResource",
            ],
            path: "bindings/swift/TreeSitterGodotResourceTests"
        )
    ],
    cLanguageStandard: .c11
)
