const commands = require('./commands.json');

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
  name: 'latex',
  extras: $ => [$._whitespace, $._comment],
  word: $ => $._generic_command_name,
  rules: {
    document: $ => repeat($._content),

    //--- Trivia ---//

    _whitespace: $ => /\s+/,

    _comment: $ => /%[^\r\n]+/,

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
          field('command', /\\part\*?/),
          field('text', $.brace_group),
          field(
            'child',
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
        )
      ),

    chapter: $ =>
      prec.right(
        seq(
          field('command', /\\chapter\*?/),
          field('text', $.brace_group),
          field(
            'child',
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
        )
      ),

    section: $ =>
      prec.right(
        seq(
          field('command', /\\section\*?/),
          field('text', $.brace_group),
          field(
            'child',
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
        )
      ),

    subsection: $ =>
      prec.right(
        seq(
          field('command', /\\subsection\*?/),
          field('text', $.brace_group),
          field(
            'child',
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
        )
      ),

    subsubsection: $ =>
      prec.right(
        seq(
          field('command', /\\subsubsection\*?/),
          field('text', $.brace_group),
          field(
            'child',
            repeat(
              choice(
                $.paragraph,
                $.subparagraph,
                $.enum_item,
                $._simple_content
              )
            )
          )
        )
      ),

    paragraph: $ =>
      prec.right(
        seq(
          field('command', /\\paragraph\*?/),
          field('text', $.brace_group),
          field(
            'child',
            repeat(choice($.subparagraph, $.enum_item, $._simple_content))
          )
        )
      ),

    subparagraph: $ =>
      prec.right(
        seq(
          field('command', /\\subparagraph\*?/),
          field('text', $.brace_group),
          field('child', repeat(choice($.enum_item, $._simple_content)))
        )
      ),

    enum_item: $ =>
      prec.right(
        seq(
          field('command', '\\item'),
          field('label', optional(seq('[', $.word, ']'))),
          field('child', repeat(choice($._simple_content)))
        )
      ),

    //--- Groups ---//

    brace_group: $ =>
      seq(
        field('left', '{'),
        field('child', repeat($._content)),
        field('right', '}')
      ),

    bracket_group: $ =>
      seq(
        field('left', '['),
        field('child', repeat($._content)),
        field('right', ']')
      ),

    paren_group: $ =>
      seq(
        field('left', '('),
        field('child', repeat($._content)),
        field('right', ')')
      ),

    mixed_group: $ =>
      seq(
        field('left', choice('(', '[')),
        field('child', repeat($._content)),
        field('right', choice(')', ']'))
      ),

    key_val_options: $ =>
      seq(
        field('left', '['),
        field('property', sepBy($.key_val_pair, ',')),
        field('right', ']')
      ),

    key_val_pair: $ =>
      seq(
        field('key', repeat1($.word)),
        optional(seq(field('equals', '='), field('value', $._content)))
      ),

    //--- Text ---//

    // Performance optimization: store text as a binary tree instead of a list
    text: $ =>
      prec.right(
        seq(field('left', $._text_fragment), field('right', optional($.text)))
      ),

    _text_fragment: $ => prec.right(choice($.word, ',', '=')),

    word: $ => /[^\s\\%\{\},\$\[\]\(\)=\#]+/,

    param: $ => /#\d/,

    //--- Math ---//

    displayed_equation: $ =>
      prec.left(
        seq(
          field('left', choice('$$', '\\[')),
          field('child', repeat($._content)),
          field('right', choice('$$', '\\]'))
        )
      ),

    inline_formula: $ =>
      prec.left(
        seq(
          field('left', choice('$', '\\(')),
          field('child', repeat($._content)),
          field('right', choice('$', '\\)'))
        )
      ),

    //--- Environment ---//

    begin: $ =>
      prec.right(
        seq(
          field('command', '\\begin'),
          '{',
          field('name', $.word),
          '}',
          field('option', repeat($.bracket_group))
        )
      ),

    end: $ => seq(field('command', '\\end'), '{', field('name', $.word), '}'),

    environment: $ =>
      prec.right(
        seq(
          field('begin', $.begin),
          field('child', repeat($._content)),
          field('end', $.end)
        )
      ),

    //--- Special Commands ---//

    caption: $ =>
      seq(
        field('command', '\\caption'),
        field('short', optional($.bracket_group)),
        field('long', $.brace_group)
      ),

    citation: $ =>
      seq(
        field('command', token(choice(...commands.citation))),
        optional(
          seq(
            field('prenote', $.bracket_group),
            field('postnote', optional($.bracket_group))
          )
        ),
        '{',
        sepBy(field('key', $.word), ','),
        '}'
      ),

    package_include: $ =>
      seq(
        field('command', token(choice('\\usepackage', '\\RequirePackage'))),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('name', $.word), ','),
        '}'
      ),

    class_include: $ =>
      seq(
        field('command', '\\documentclass'),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('name', $.word), ','),
        '}'
      ),

    biblatex_include: $ =>
      seq(
        field('command', '\\addbibresource'),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    graphics_include: $ =>
      seq(
        field(
          'command',
          token(
            choice('\\includegraphics', '\\includesvg', '\\includeinkscape')
          )
        ),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    generic_include: $ =>
      seq(
        field('command', token(choice(...commands.include))),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    import: $ =>
      seq(
        field(
          'command',
          token(
            choice(
              '\\import',
              '\\subimport',
              '\\inputfrom',
              '\\subimportfrom',
              '\\includefrom',
              '\\subincludefrom'
            )
          )
        ),
        '{',
        field('directory', $.word),
        '}',
        '{',
        field('file', $.word),
        '}'
      ),

    label_definition: $ =>
      seq(field('command', '\\label'), '{', field('name', $.word), '}'),

    label_reference: $ =>
      seq(
        field('command', token(choice(...commands.labelReference))),
        '{',
        sepBy(field('label', $.word), ','),
        '}'
      ),

    label_reference_range: $ =>
      seq(
        field('command', token(choice(...commands.labelRangeReference))),
        '{',
        field('label1', $.word),
        '}',
        '{',
        field('label2', $.word),
        '}'
      ),

    label_number: $ =>
      seq(
        field('command', '\\newlabel'),
        '{',
        field('label', $.word),
        '}',
        field('number', $.brace_group)
      ),

    command_definition: $ =>
      seq(
        field(
          'command',
          token(
            choice('\\newcommand', '\\renewcommand', '\\DeclareRobustCommand')
          )
        ),
        field('argc', optional(seq('[', /\d/, ']'))),
        '{',
        field('name', $._generic_command_name),
        '}',
        field('impl', $.brace_group)
      ),

    math_operator: $ =>
      seq(
        field(
          'command',
          token(choice('\\DeclareMathOperator', '\\DeclareMathOperator*'))
        ),
        '{',
        field('name', $._generic_command_name),
        '}',
        field('impl', $.brace_group)
      ),

    glossary_entry_definition: $ =>
      seq(
        field('command', '\\newglossaryentry'),
        '{',
        field('name', $.word),
        '}',
        '{',
        sepBy(field('property', $.key_val_pair), ','),
        '}'
      ),

    glossary_entry_reference: $ =>
      seq(
        field('command', token(choice(...commands.glossaryEntryReference))),
        field('option', optional($.key_val_options)),
        '{',
        field('name', $.word),
        '}'
      ),

    acronym_definition: $ =>
      seq(
        '\\newacronym',
        field('option', optional($.key_val_options)),
        '{',
        field('name', $.word),
        '}',
        field('short', $.brace_group),
        field('long', $.brace_group)
      ),

    theorem_definition: $ =>
      prec.right(
        seq(
          field('command', token(choice('\\newtheorem', '\\declaretheorem'))),
          '{',
          field('name', $.word),
          '}',
          choice(
            seq(
              field('title', $.brace_group),
              optional(seq('[', field('counter', $.word), ']'))
            ),
            seq(
              '[',
              field('counter', $.word),
              ']',
              field('title', $.brace_group)
            )
          )
        )
      ),

    //--- Generic commands ---//

    generic_command: $ =>
      prec.right(
        seq(
          field('name', $._generic_command_name),
          field(
            'arg',
            repeat(choice($.brace_group, $.bracket_group, $.paren_group))
          )
        )
      ),

    _generic_command_name: $ => /\\([^\r\n]|[@a-zA-Z]+\*?)?/,
  },
});
