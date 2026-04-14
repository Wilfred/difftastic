
import XCTest
import SwiftTreeSitter
import TreeSitterCommonlisp

final class TreeSitterCommonLispTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_commonlisp())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading CommonLisp grammar")
    }
}
