// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGDScript",
    products: [
        .library(name: "TreeSitterGDScript", targets: ["TreeSitterGDScript"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGDScript",
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
            name: "TreeSitterGDScriptTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGDScript",
            ],
            path: "bindings/swift/TreeSitterGDScriptTests"
        )
    ],
    cLanguageStandard: .c11
)
