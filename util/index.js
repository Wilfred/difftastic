/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

const commandName = ($, rule) =>
  field('command_name', alias($[`_${rule}_command_name`], $.command_name));

module.exports = {
  sepBy1,
  sepBy,
  commandName,
};
