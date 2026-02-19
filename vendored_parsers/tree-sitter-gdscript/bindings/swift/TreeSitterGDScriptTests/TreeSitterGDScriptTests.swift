import XCTest
import SwiftTreeSitter
import TreeSitterGDScript

final class TreeSitterGDScriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gdscript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GDScript grammar")
    }
}
