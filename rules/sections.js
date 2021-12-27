/// <reference types="tree-sitter-cli/dsl" />

const { commandName } = require('../util');

// @ts-check

const SECTIONS = [
  {
    rule: 'part',
    group: 'curly_group',
  },
  {
    rule: 'chapter',
    group: 'curly_group',
  },
  {
    rule: 'section',
    group: 'curly_group',
  },
  {
    rule: 'subsection',
    group: 'curly_group',
  },
  {
    rule: 'subsubsection',
    group: 'curly_group',
  },
  {
    rule: 'paragraph',
    group: 'curly_group',
  },
  {
    rule: 'subparagraph',
    group: 'curly_group',
  },
  {
    rule: 'enum_item',
    group: 'brack_group_key',
  },
];

const rules = {};

(() => {
  for (let i = 0; i < SECTIONS.length; i++) {
    const { rule, group } = SECTIONS[i];

    let start = i + 1;
    const layer = `_${rule}_layer`;

    rules[layer] = $ => {
      return prec.right(
        choice(
          ...SECTIONS.slice(start).map(section => repeat1($[section.rule])),
        ),
      );
    };

    rules[rule] = $ => {
      return prec.right(
        1,
        seq(
          commandName($, rule),
          field('heading', optional($[group])),
          repeat(choice($._basic_content, $._contextual_delimiter, '[', ']')),
          optional($[layer]),
        ),
      );
    };
  }

  rules._section = $ =>
    prec.right(choice(...SECTIONS.map(({ rule }) => repeat1($[rule]))));
})();

module.exports = { ...rules };
