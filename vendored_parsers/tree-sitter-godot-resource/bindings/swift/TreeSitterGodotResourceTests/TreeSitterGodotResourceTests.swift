import XCTest
import SwiftTreeSitter
import TreeSitterGodotResource

final class TreeSitterGodotResourceTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_godot_resource())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GodotResource grammar")
    }
}
