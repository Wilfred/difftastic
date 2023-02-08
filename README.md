# tree-sitter-fsharp
tree-sitter grammar for F# (still WIP)

## Status
The grammar currently has support for most language features, but might have rough edges.
Some parts, like the type annotations are still very bare-bones.

The grammar supports indentation-based scoping but does not fully support offside indentation and opening new indentation levels on record/list construction.

The precedens rules for the different grammar nodes (and particularly expressions) are not set properly yet, which means that the parser size is much larger than needed.

### Missing
- [ ] Computational expressions
- [ ] Type annotations
- [ ] Offside tokens inside indentation scope
- [ ] Testing
- [ ] Set propery precedens rules
