# tree-sitter-vhdl

Tree-sitter-vhdl is a highligting parser for VHDL.

## Missing features

- [x] VHDL-2008
  - [ ] Protected tool directives
  - [x] PSL-02
    - [ ] LTL PSL Operators (not intended to be supported)
    - [ ] OBE PSL Operators (not intended to be supported)
- [ ] VHDL-2019

## Notes

Some illegal construction are accept by the parser and highlighted as error using the highlight query. Use the nvim-tree-sitter vhdl queries as reference.

## Used by

- nvim-tree-sitter (WIP)

## References
* IEEE Std 1076-2008
* IEEE Std 1850-2005
* IEEE Std 1076-2019
