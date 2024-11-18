import XCTest
import SwiftTreeSitter
import TreeSitterElixir

final class TreeSitterElixirTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_elixir())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Elixir grammar")
    }
}
