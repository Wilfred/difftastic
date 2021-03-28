# tree-sitter-vhdl

Tree-sitter-vhdl is a VHDL parser for syntax highlighting.

## Missing features

- [x] VHDL-2008
  - [ ] Protected tool directives
  - [x] PSL-02
    - [ ] LTL PSL Operators (not intended to be supported)
    - [ ] OBE PSL Operators (not intended to be supported)
- [ ] VHDL-2019

Not listed features are implemented already.

## Notes

The parser accepts some illegal constructions to be able to provide precise
error highlight.

See `./tests/highlight/` and `./queries/highlights.scm` for a list of errors.

## References
* IEEE Std 1076-2008
* IEEE Std 1850-2005
* IEEE Std 1076-2019
