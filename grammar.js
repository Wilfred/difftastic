/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const commands = require('./commands.json');

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
  name: 'latex',
  extras: $ => [$._whitespace, $.comment],
  word: $ => $.generic_command_name,
  rules: {
    document: $ => repeat($._content),

    //--- Trivia ---//

    _whitespace: $ => /\s+/,

    comment: $ => /%[^\r\n]*/,

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
        $.latex_include,
        $.latex_input,
        $.biblatex_include,
        $.bibtex_include,
        $.graphics_include,
        $.svg_include,
        $.inkscape_include,
        $.verbatim_include,
        $.import,
        $.label_definition,
        $.label_reference,
        $.equation_label_reference,
        $.label_reference_range,
        $.label_number,
        $.command_definition,
        $.math_operator,
        $.glossary_entry_definition,
        $.glossary_entry_reference,
        $.acronym_definition,
        $.acronym_reference,
        $.theorem_definition,
        $.color_reference,
        $.color_definition,
        $.color_set_definition,
        $.pgf_library_import,
        $.tikz_library_import,
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
          field('command', choice('\\part', '\\part*')),
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
          field('command', choice('\\chapter', '\\chapter*')),
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
          field('command', choice('\\section', '\\section*')),
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
          field('command', choice('\\subsection', '\\subsection*')),
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
          field('command', choice('\\subsubsection', '\\subsubsection*')),
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
          field('command', choice('\\paragraph', '\\paragraph*')),
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
          field('command', choice('\\subparagraph', '\\subparagraph*')),
          field('text', $.brace_group),
          field('child', repeat(choice($.enum_item, $._simple_content)))
        )
      ),

    enum_item: $ =>
      prec.right(
        seq(
          field('command', '\\item'),
          optional(seq('[', field('label', $.word), ']')),
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
        sepBy(field('property', $.key_val_pair), ','),
        field('right', ']')
      ),

    key_val_pair: $ =>
      seq(
        field('key', repeat1($.word)),
        optional(seq(field('equals', '='), field('value', $._content)))
      ),

    //--- Text ---//

    // Performance optimization: store text as a binary tree instead of a list
    // text: $ =>
    //   prec.right(
    //     seq(field('left', $._text_fragment), field('right', optional($.text)))
    //   ),
    text: $ => prec.right(repeat1($._text_fragment)),

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
        field('command', choice(...commands.citation)),
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
        field('command', choice('\\usepackage', '\\RequirePackage')),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    class_include: $ =>
      seq(
        field('command', '\\documentclass'),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    latex_include: $ =>
      seq(
        field('command', choice('\\include', '\\subfileinclude')),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    latex_input: $ =>
      seq(
        field('command', choice('\\input', '\\subfile')),
        '{',
        sepBy(field('path', $.word), ','),
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

    bibtex_include: $ =>
      seq(
        field('command', '\\bibliography'),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    graphics_include: $ =>
      seq(
        field('command', '\\includegraphics'),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    svg_include: $ =>
      seq(
        field('command', '\\includesvg'),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    inkscape_include: $ =>
      seq(
        field('command', '\\includeinkscape'),
        field('option', optional($.key_val_options)),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    verbatim_include: $ =>
      seq(
        field('command', choice('\\verbatiminput', '\\VerbatimInput')),
        '{',
        sepBy(field('path', $.word), ','),
        '}'
      ),

    import: $ =>
      seq(
        field(
          'command',
          choice(
            '\\import',
            '\\subimport',
            '\\inputfrom',
            '\\subimportfrom',
            '\\includefrom',
            '\\subincludefrom'
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
        field('command', choice(...commands.labelReference)),
        '{',
        sepBy(field('label', $.word), ','),
        '}'
      ),

    equation_label_reference: $ =>
      seq(
        field('command', '\\eqref'),
        '{',
        sepBy1(field('label', $.word), ','),
        '}'
      ),

    label_reference_range: $ =>
      prec.right(
        seq(
          field('command', choice(...commands.labelRangeReference)),
          '{',
          field('label1', $.word),
          '}',
          // optional to improve error handling
          optional(seq('{', field('label2', $.word), '}'))
        )
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
          choice('\\newcommand', '\\renewcommand', '\\DeclareRobustCommand')
        ),
        field('argc', optional(seq('[', /\d/, ']'))),
        '{',
        field('name', $.generic_command_name),
        '}',
        field('implementation', $.brace_group)
      ),

    math_operator: $ =>
      seq(
        field(
          'command',
          choice('\\DeclareMathOperator', '\\DeclareMathOperator*')
        ),
        '{',
        field('name', $.generic_command_name),
        '}',
        field('implementation', $.brace_group)
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
        field('command', choice(...commands.glossaryEntryReference)),
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

    acronym_reference: $ =>
      seq(
        field('command', choice(...commands.acronymReference)),
        field('option', optional($.key_val_options)),
        '{',
        field('name', $.word),
        '}'
      ),
    theorem_definition: $ =>
      prec.right(
        seq(
          field('command', choice('\\newtheorem', '\\declaretheorem')),
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

    color_reference: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\color', '\\colorbox', '\\textcolor', '\\pagecolor')
          ),
          '{',
          field('name', $.word),
          '}'
        )
      ),

    color_definition: $ =>
      prec.right(
        seq(
          field('command', '\\definecolor'),
          '{',
          field('name', $.word),
          '}',
          '{',
          field('model', $.word),
          '}',
          // optional to improve error handling
          optional(seq('{', field('spec', $.text), '}'))
        )
      ),

    color_set_definition: $ =>
      prec.right(
        seq(
          field('command', '\\definecolorset'),
          optional(seq('[', field('ty', $.word), ']')),
          '{',
          sepBy(field('model', $.word), ','),
          '}',
          optional(
            // optional to improve error handling
            seq(
              field('head', $.brace_group),
              field('tail', $.brace_group),
              field('spec', $.brace_group)
            )
          )
        )
      ),

    pgf_library_import: $ =>
      seq(
        field('command', '\\usepgflibrary'),
        '{',
        sepBy(field('name', $.word), ','),
        '}'
      ),

    tikz_library_import: $ =>
      seq(
        field('command', '\\usetikzlibrary'),
        '{',
        sepBy(field('name', $.word), ','),
        '}'
      ),

    //--- Generic commands ---//

    generic_command: $ =>
      prec.right(
        seq(
          field('name', $.generic_command_name),
          field(
            'arg',
            repeat(choice($.brace_group, $.mixed_group))
          )
        )
      ),

    generic_command_name: $ => /\\([^\r\n]|[@a-zA-Z]+\*?)?/,
  },
});
