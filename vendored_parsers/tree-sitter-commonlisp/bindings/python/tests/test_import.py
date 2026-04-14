from unittest import TestCase

import tree_sitter
import tree_sitter_commonlisp


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_commonlisp.language())
        except Exception:
            self.fail("Error loading C++ grammar")

    def test_parse(self):
        lang = tree_sitter.Language(tree_sitter_commonlisp.language())
        parser = tree_sitter.Parser(lang)
        tree = parser.parse(
            bytes(
                """
        (+ 1 1)
        """,
                "utf8"
            )
        )
        assert tree
