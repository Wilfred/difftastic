const commands = require('./commands.json');

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
  name: 'latex',
  extras: $ => [$.whitespace, $.comment],
  word: $ => $._generic_command_name,
  rules: {
    document: $ => repeat($._content),

    //--- Trivia ---//

    whitespace: $ => /\s+/,

    comment: $ => /%[^\r\n]+/,

    //--- Content ---//

    _simple_content: $ =>
      choice(
        $.brace_group,
        $.mixed_group,
        $.param,
        $.text,
        $.displayed_equation,
        $.inline_formula,
        $.environment,
        $.caption,
        $.citation,
        $.package_include,
        $.class_include,
        $.biblatex_include,
        $.graphics_include,
        $.import,
        $.label_definition,
        $.label_reference,
        $.label_reference_range,
        $.label_number,
        $.command_definition,
        $.math_operator,
        $.glossary_entry_definition,
        $.glossary_entry_reference,
        $.acronym_definition,
        $.theorem_definition,
        $.generic_command
      ),

    _content: $ =>
      choice(
        $.part,
        $.chapter,
        $.section,
        $.subsection,
        $.subsubsection,
        $.paragraph,
        $.subparagraph,
        $.enum_item,
        $._simple_content
      ),

    //--- Structure ---//

    part: $ =>
      prec.right(
        seq(
          /\\part\*?/,
          $.brace_group,
          repeat(
            choice(
              $.chapter,
              $.section,
              $.subsection,
              $.subsubsection,
              $.paragraph,
              $.subparagraph,
              $.enum_item,
              $._simple_content
            )
          )
        )
      ),

    chapter: $ =>
      prec.right(
        seq(
          /\\chapter\*?/,
          $.brace_group,
          repeat(
            choice(
              $.section,
              $.subsection,
              $.subsubsection,
              $.paragraph,
              $.subparagraph,
              $.enum_item,
              $._simple_content
            )
          )
        )
      ),

    section: $ =>
      prec.right(
        seq(
          /\\section\*?/,
          $.brace_group,
          repeat(
            choice(
              $.subsection,
              $.subsubsection,
              $.paragraph,
              $.subparagraph,
              $.enum_item,
              $._simple_content
            )
          )
        )
      ),

    subsection: $ =>
      prec.right(
        seq(
          /\\subsection\*?/,
          $.brace_group,
          repeat(
            choice(
              $.subsubsection,
              $.paragraph,
              $.subparagraph,
              $.enum_item,
              $._simple_content
            )
          )
        )
      ),

    subsubsection: $ =>
      prec.right(
        seq(
          /\\subsubsection\*?/,
          $.brace_group,
          repeat(
            choice($.paragraph, $.subparagraph, $.enum_item, $._simple_content)
          )
        )
      ),

    paragraph: $ =>
      prec.right(
        seq(
          /\\paragraph\*?/,
          $.brace_group,
          repeat(choice($.subparagraph, $.enum_item, $._simple_content))
        )
      ),

    subparagraph: $ =>
      prec.right(
        seq(
          /\\subparagraph\*?/,
          $.brace_group,
          repeat(choice($.enum_item, $._simple_content))
        )
      ),

    enum_item: $ =>
      prec.right(
        seq(
          '\\item',
          optional(seq('[', $.word, ']')),
          repeat(choice($._simple_content))
        )
      ),

    //--- Groups ---//

    brace_group: $ => seq('{', repeat($._content), '}'),

    bracket_group: $ => seq('[', repeat($._content), ']'),

    paren_group: $ => seq('(', repeat($._content), ')'),

    mixed_group: $ =>
      seq(choice('(', '['), repeat($._content), choice(')', ']')),

    key_val_options: $ => seq('[', sepBy($.key_val_pair, ','), ']'),

    key_val_pair: $ => seq($.key, optional(seq('=', $._content))),

    key: $ => repeat1($.word),

    _word_group: $ => seq('{', $.word, '}'),

    _comma_sep_word_group: $ => seq('{', sepBy($.word, ','), '}'),

    //--- Text ---//

    // Performance optimization: store text as a binary tree instead of a list
    text: $ => prec.right(seq($._text_fragment, optional($.text))),

    _text_fragment: $ => prec.right(choice($.word, ',', '=')),

    word: $ => /[^\s\\%\{\},\$\[\]\(\)=\#]+/,

    param: $ => /#\d/,

    //--- Math ---//

    displayed_equation: $ =>
      prec.left(
        seq(choice('$$', '\\['), repeat($._content), choice('$$', '\\]'))
      ),

    inline_formula: $ =>
      prec.left(
        seq(choice('$', '\\('), repeat($._content), choice('$', '\\)'))
      ),

    //--- Environment ---//

    begin: $ =>
      prec.right(seq('\\begin', '{', $.word, '}', repeat($.bracket_group))),

    end: $ => seq('\\end', '{', $.word, '}'),

    environment: $ => prec.right(seq($.begin, repeat($._content), $.end)),

    //--- Special Commands ---//

    caption: $ => seq('\\caption', optional($.bracket_group), $.brace_group),

    citation: $ =>
      seq(
        token(choice(...commands.citation)),
        optional($.bracket_group),
        optional($.bracket_group),
        $._comma_sep_word_group
      ),

    package_include: $ =>
      seq(
        token(choice('\\usepackage', '\\RequirePackage')),
        optional($.key_val_options),
        $._comma_sep_word_group
      ),

    class_include: $ =>
      seq(
        '\\documentclass',
        optional($.key_val_options),
        $._comma_sep_word_group
      ),

    biblatex_include: $ =>
      seq(
        '\\addbibresource',
        optional($.key_val_options),
        $._comma_sep_word_group
      ),

    graphics_include: $ =>
      seq(
        token(choice('\\includegraphics', '\\includesvg', '\\includeinkscape')),
        optional($.key_val_options),
        $._comma_sep_word_group
      ),

    generic_include: $ =>
      seq(token(choice(...commands.include)), $._comma_sep_word_group),

    import: $ =>
      seq(
        token(
          choice(
            '\\import',
            '\\subimport',
            '\\inputfrom',
            '\\subimportfrom',
            '\\includefrom',
            '\\subincludefrom'
          )
        ),
        $._word_group,
        $._word_group
      ),

    label_definition: $ => seq('\\label', $._word_group),

    label_reference: $ =>
      seq(token(choice(...commands.labelReference)), $._comma_sep_word_group),

    label_reference_range: $ =>
      seq(
        token(choice(...commands.labelRangeReference)),
        $._word_group,
        $._word_group
      ),

    label_number: $ => seq('\\newlabel', $._word_group, $.brace_group),

    command_definition: $ =>
      seq(
        token(
          choice('\\newcommand', '\\renewcommand', '\\DeclareRobustCommand')
        ),
        optional(seq('[', /\d/, ']')),
        '{',
        $._generic_command_name,
        '}',
        $.brace_group
      ),

    math_operator: $ =>
      seq(
        token(choice('\\DeclareMathOperator', '\\DeclareMathOperator*')),
        '{',
        $._generic_command_name,
        '}',
        $.brace_group
      ),

    glossary_entry_definition: $ =>
      seq(
        '\\newglossaryentry',
        $._word_group,
        '{',
        sepBy($.key_val_pair, ','),
        '}'
      ),

    glossary_entry_reference: $ =>
      seq(
        token(choice(...commands.glossaryEntryReference)),
        optional($.key_val_options),
        $._word_group
      ),

    acronym_definition: $ =>
      seq(
        '\\newacronym',
        optional($.key_val_options),
        $._word_group,
        $.brace_group,
        $.brace_group
      ),

    theorem_definition: $ =>
      prec.right(
        seq(
          token(choice('\\newtheorem', '\\declaretheorem')),
          $._word_group,
          choice(
            seq($.brace_group, optional(seq('[', $.word, ']'))),
            seq('[', $.word, ']', $.brace_group)
          )
        )
      ),

    //--- Generic commands ---//

    generic_command: $ =>
      prec.right(
        seq(
          $._generic_command_name,
          repeat(choice($.brace_group, $.bracket_group, $.paren_group))
        )
      ),

    _generic_command_name: $ => /\\([^\r\n]|[@a-zA-Z]+\*?)?/,
  },
});
