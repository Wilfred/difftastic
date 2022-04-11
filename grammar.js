/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
  name: 'latex',
  extras: $ => [$._whitespace, $.line_comment],
  externals: $ => [
    $._trivia_raw_fi,
    $._trivia_raw_env_comment,
    $._trivia_raw_env_verbatim,
    $._trivia_raw_env_listing,
    $._trivia_raw_env_minted,
    $._trivia_raw_env_pycode,
  ],
  word: $ => $.command_name,
  rules: {
    source_file: $ => repeat($._root_content),

    //--- Trivia

    _whitespace: $ => /\s+/,

    line_comment: $ => /%[^\r\n]*/,

    block_comment: $ =>
      seq(
        field('begin', '\\iffalse'),
        field('comment', optional(alias($._trivia_raw_fi, $.comment))),
        field('end', optional('\\fi'))
      ),

    //--- Content

    _root_content: $ => choice($._section, $._flat_content),

    _flat_content: $ =>
      prec.right(choice($._text_with_env_content, '(', ')', '[', ']')),

    _text_with_env_content: $ =>
      choice(
        ',',
        '=',
        $.comment_environment,
        $.verbatim_environment,
        $.listing_environment,
        $.minted_environment,
        $.pycode_environment,
        $.generic_environment,
        $._text_content
      ),

    _text_content: $ =>
      prec.right(
        1,
        choice(
          $.curly_group,
          $.block_comment,
          $._command,
          $.text,
          $.displayed_equation,
          $.inline_formula,
          $.math_set,
          $.text_mode
        )
      ),

    //--- Sections

    _section: $ =>
      prec.right(
        choice(
          repeat1($.part),
          repeat1($.chapter),
          repeat1($.section),
          repeat1($.subsection),
          repeat1($.subsubsection),
          repeat1($.paragraph),
          repeat1($.subparagraph),
          repeat1($.enum_item)
        )
      ),

    _part_declaration: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\part', '\\part*', '\\addpart', '\\addpart*')
          ),
          field('text', optional($.curly_group))
        )
      ),

    part: $ =>
      prec.right(
        -1,
        seq(
          $._part_declaration,
          repeat($._flat_content),
          optional(
            prec.right(
              choice(
                repeat1($.chapter),
                repeat1($.section),
                repeat1($.subsection),
                repeat1($.subsubsection),
                repeat1($.paragraph),
                repeat1($.subparagraph),
                repeat1($.enum_item)
              )
            )
          )
        )
      ),

    _chapter_declaration: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\chapter', '\\chapter*', '\\addchap', '\\addchap*')
          ),
          field('text', optional($.curly_group))
        )
      ),

    chapter: $ =>
      prec.right(
        -1,
        seq(
          $._chapter_declaration,
          repeat($._flat_content),
          optional(
            prec.right(
              choice(
                repeat1($.section),
                repeat1($.subsection),
                repeat1($.subsubsection),
                repeat1($.paragraph),
                repeat1($.subparagraph),
                repeat1($.enum_item)
              )
            )
          )
        )
      ),

    _section_declaration: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\section', '\\section*', '\\addsec', '\\addsec*')
          ),
          field('text', optional($.curly_group))
        )
      ),

    section: $ =>
      prec.right(
        -1,
        seq(
          $._section_declaration,
          repeat($._flat_content),
          optional(
            prec.right(
              choice(
                repeat1($.subsection),
                repeat1($.subsubsection),
                repeat1($.paragraph),
                repeat1($.subparagraph),
                repeat1($.enum_item)
              )
            )
          )
        )
      ),

    _subsection_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\subsection', '\\subsection*')),
          field('text', optional($.curly_group))
        )
      ),

    subsection: $ =>
      prec.right(
        -1,
        seq(
          $._subsection_declaration,
          repeat($._flat_content),
          optional(
            prec.right(
              choice(
                repeat1($.subsubsection),
                repeat1($.paragraph),
                repeat1($.subparagraph),
                repeat1($.enum_item)
              )
            )
          )
        )
      ),

    _subsubsection_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\subsubsection', '\\subsubsection*')),
          field('text', optional($.curly_group))
        )
      ),

    subsubsection: $ =>
      prec.right(
        -1,
        seq(
          $._subsubsection_declaration,
          repeat($._flat_content),
          optional(
            prec.right(
              choice(
                repeat1($.paragraph),
                repeat1($.subparagraph),
                repeat1($.enum_item)
              )
            )
          )
        )
      ),

    _paragraph_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\paragraph', '\\paragraph*')),
          field('text', optional($.curly_group))
        )
      ),

    paragraph: $ =>
      prec.right(
        -1,
        seq(
          $._paragraph_declaration,
          repeat($._flat_content),
          optional(
            prec.right(choice(repeat1($.subparagraph), repeat1($.enum_item)))
          )
        )
      ),

    _subparagraph_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\subparagraph', '\\subparagraph*')),
          field('text', optional($.curly_group))
        )
      ),

    subparagraph: $ =>
      prec.right(
        -1,
        seq(
          $._subparagraph_declaration,
          repeat($._flat_content),
          optional(prec.right(choice(repeat1($.enum_item))))
        )
      ),

    _enum_itemdeclaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\item', '\\item*')),
          field('label', optional($.brack_group_text))
        )
      ),

    enum_item: $ =>
      prec.right(
        -1,
        seq(
          $._enum_itemdeclaration,
          repeat($._flat_content),
          optional(prec.right(choice()))
        )
      ),

    //--- Group

    curly_group: $ => seq('{', repeat($._root_content), '}'),

    curly_group_text: $ => seq('{', field('text', $.text), '}'),

    curly_group_text_list: $ =>
      seq('{', sepBy(field('text', $.text), ','), '}'),

    curly_group_path: $ => seq('{', field('path', $.path), '}'),

    curly_group_path_list: $ =>
      seq('{', sepBy(field('path', $.path), ','), '}'),

    curly_group_command_name: $ =>
      seq('{', field('command', $.command_name), '}'),

    curly_group_key_value: $ =>
      seq('{', sepBy(field('pair', $.key_value_pair), ','), '}'),

    curly_group_glob_pattern: $ =>
      seq('{', field('pattern', $.glob_pattern), '}'),

    curly_group_impl: $ => seq('{', repeat($._text_content), '}'),

    brack_group: $ =>
      seq(
        '[',
        repeat(choice($._text_with_env_content, $.brack_group, '(', ')')),
        ']'
      ),

    brack_group_text: $ => seq('[', field('text', $.text), ']'),

    brack_group_argc: $ => seq('[', field('value', $.argc), ']'),

    brack_group_key_value: $ =>
      seq('[', sepBy(field('pair', $.key_value_pair), ','), ']'),

    mixed_group: $ =>
      seq(
        choice('[', '('),
        repeat(choice($._text_with_env_content, $.mixed_group)),
        choice(']', ')')
      ),

    //--- Text

    text: $ =>
      prec.right(
        repeat1(
          field(
            'word',
            choice(
              $.operator,
              $.word,
              $.placeholder,
              $.block_comment,
              $._command
            )
          )
        )
      ),

    word: $ => /[^\s\\%\{\},\$\[\]\(\)=\#]+/,

    placeholder: $ => /#\d/,

    path: $ => /[^\*\"\[\]:;,\|\{\}<>]+/,

    argc: $ => /\d/,

    glob_pattern: $ => repeat1($._glob_pattern_fragment),

    _glob_pattern_fragment: $ =>
      choice(
        seq('{', repeat($._glob_pattern_fragment), '}'),
        /[^\"\[\]:;\|\{\}<>]+/
      ),

    operator: $ =>
      choice('+', '-', '*', '/', '^', '_', '<', '>', '!', '|', ':', "'"),

    //--- Key / Value

    key_value_pair: $ =>
      seq(field('key', $.text), optional(seq('=', field('value', $.value)))),

    value: $ => repeat1(choice($._text_content, $.brack_group, '(', ')')),

    //--- Math

    displayed_equation: $ =>
      prec.left(
        seq(choice('$$', '\\['), repeat($._root_content), choice('$$', '\\]'))
      ),

    inline_formula: $ =>
      prec.left(
        seq(choice('$', '\\('), repeat($._root_content), choice('$', '\\)'))
      ),

    math_set: $ => seq('\\{', repeat($._root_content), '\\}'),

    //--- Environments

    begin: $ =>
      prec.right(
        seq(
          field('command', '\\begin'),
          field('name', $.curly_group_text),
          field('options', optional($.brack_group))
        )
      ),

    end: $ =>
      prec.right(
        seq(field('command', '\\end'), field('name', $.curly_group_text))
      ),

    generic_environment: $ =>
      seq(
        field('begin', $.begin),
        repeat($._root_content),
        field('end', $.end)
      ),

    //--- Comment environment

    comment_environment: $ =>
      seq(
        field('begin', alias($._trivia_begin_comment, $.begin)),
        field('comment', alias($._trivia_raw_env_comment, $.comment)),
        field('end', alias($._trivia_end_comment, $.end))
      ),

    _trivia_begin_comment: $ =>
      seq(
        field('command', '\\begin'),
        field('name', alias($._trivia_curly_group_comment, $.curly_group_text))
      ),

    _trivia_end_comment: $ =>
      seq(
        field('command', '\\end'),
        field('name', alias($._trivia_curly_group_comment, $.curly_group_text))
      ),

    _trivia_curly_group_comment: $ =>
      seq('{', field('text', alias($._trivia_text_comment, $.text)), '}'),

    _trivia_text_comment: $ => seq(field('word', alias('comment', $.word))),

    //--- Verbatim environment

    verbatim_environment: $ =>
      seq(
        field('begin', alias($._trivia_begin_verbatim, $.begin)),
        field('verbatim', alias($._trivia_raw_env_verbatim, $.comment)),
        field('end', alias($._trivia_end_verbatim, $.end))
      ),

    _trivia_begin_verbatim: $ =>
      seq(
        field('command', '\\begin'),
        field('name', alias($._trivia_curly_group_verbatim, $.curly_group_text))
      ),

    _trivia_end_verbatim: $ =>
      seq(
        field('command', '\\end'),
        field('name', alias($._trivia_curly_group_verbatim, $.curly_group_text))
      ),

    _trivia_curly_group_verbatim: $ =>
      seq('{', field('text', alias($._trivia_text_verbatim, $.text)), '}'),

    _trivia_text_verbatim: $ => seq(field('word', alias('verbatim', $.word))),

    //--- Listing environment

    listing_environment: $ =>
      seq(
        field('begin', alias($._trivia_begin_listing, $.begin)),
        field('code', alias($._trivia_raw_env_listing, $.source_code)),
        field('end', alias($._trivia_end_listing, $.end))
      ),

    _trivia_begin_listing: $ =>
      seq(
        field('command', '\\begin'),
        field('name', alias($._trivia_curly_group_listing, $.curly_group_text))
      ),

    _trivia_end_listing: $ =>
      seq(
        field('command', '\\end'),
        field('name', alias($._trivia_curly_group_listing, $.curly_group_text))
      ),

    _trivia_curly_group_listing: $ =>
      seq('{', field('text', alias($._trivia_text_listing, $.text)), '}'),

    _trivia_text_listing: $ => seq(field('word', alias('lstlisting', $.word))),

    //--- Minted environment

    minted_environment: $ =>
      seq(
        field('begin', alias($._trivia_begin_minted, $.begin)),
        field('code', alias($._trivia_raw_env_minted, $.source_code)),
        field('end', alias($._trivia_end_minted, $.end))
      ),

    _trivia_begin_minted: $ =>
      seq(
        field('command', '\\begin'),
        field('name', alias($._trivia_curly_group_minted, $.curly_group_text)),
        field('language', $.curly_group_text)
      ),

    _trivia_end_minted: $ =>
      seq(
        field('command', '\\end'),
        field('name', alias($._trivia_curly_group_minted, $.curly_group_text))
      ),

    _trivia_curly_group_minted: $ =>
      seq('{', field('text', alias($._trivia_text_minted, $.text)), '}'),

    _trivia_text_minted: $ => seq(field('word', alias('minted', $.word))),

    //--- Pycode environment

    pycode_environment: $ =>
      seq(
        field('begin', alias($._trivia_begin_pycode, $.begin)),
        field('code', alias($._trivia_raw_env_pycode, $.source_code)),
        field('end', alias($._trivia_end_pycode, $.end))
      ),

    _trivia_begin_pycode: $ =>
      seq('\\begin', alias($._trivia_curly_group_pycode, $.curly_group_text)),

    _trivia_end_pycode: $ =>
      seq('\\end', alias($._trivia_curly_group_pycode, $.curly_group_text)),

    _trivia_curly_group_pycode: $ =>
      seq('{', alias($._trivia_text_pycode, $.text), '}'),

    _trivia_text_pycode: $ => seq(alias('pycode', $.word)),

    //--- Command

    _command: $ =>
      choice(
        $.package_include,
        $.class_include,
        $.latex_include,
        $.biblatex_include,
        $.bibtex_include,
        $.graphics_include,
        $.svg_include,
        $.inkscape_include,
        $.verbatim_include,
        $.import_include,
        $.caption,
        $.citation,
        $.label_definition,
        $.label_reference,
        $.label_reference_range,
        $.label_number,
        $.new_command_definition,
        $.old_command_definition,
        $.let_command_definition,
        $.environment_definition,
        $.glossary_entry_definition,
        $.glossary_entry_reference,
        $.acronym_definition,
        $.acronym_reference,
        $.theorem_definition,
        $.color_definition,
        $.color_set_definition,
        $.color_reference,
        $.tikz_library_import,
        $.generic_command
      ),

    generic_command: $ =>
      prec.right(
        seq(
          field('command', $.command_name),
          repeat(field('arg', choice($.curly_group, $.mixed_group)))
        )
      ),

    command_name: $ => /\\([^\r\n]|[@a-zA-Z:_]+\*?)?/,

    package_include: $ =>
      seq(
        field('command', choice('\\usepackage', '\\RequirePackage')),
        field('options', optional($.brack_group_key_value)),
        field('paths', $.curly_group_path_list)
      ),

    class_include: $ =>
      seq(
        field('command', '\\documentclass'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path)
      ),

    latex_include: $ =>
      seq(
        field(
          'command',
          choice('\\include', '\\subfileinclude', '\\input', '\\subfile')
        ),
        field('path', $.curly_group_path)
      ),

    biblatex_include: $ =>
      seq(
        '\\addbibresource',
        field('options', optional($.brack_group_key_value)),
        field('glob', $.curly_group_glob_pattern)
      ),

    bibtex_include: $ =>
      seq(
        field('command', '\\bibliography'),
        field('path', $.curly_group_path)
      ),

    graphics_include: $ =>
      seq(
        field('command', '\\includegraphics'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path)
      ),

    svg_include: $ =>
      seq(
        field('command', '\\includesvg'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path)
      ),

    inkscape_include: $ =>
      seq(
        field('command', '\\includeinkscape'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path)
      ),

    verbatim_include: $ =>
      seq(
        field('command', choice('\\verbatiminput', '\\VerbatimInput')),
        field('path', $.curly_group_path)
      ),

    import_include: $ =>
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
        field('directory', $.curly_group_path),
        field('file', $.curly_group_path)
      ),

    caption: $ =>
      seq(
        field('command', '\\caption'),
        field('short', optional($.brack_group)),
        field('long', $.curly_group)
      ),

    citation: $ =>
      seq(
        field(
          'command',
          choice(
            '\\cite',
            '\\cite*',
            '\\Cite',
            '\\nocite',
            '\\citet',
            '\\citep',
            '\\citet*',
            '\\citep*',
            '\\citeauthor',
            '\\citeauthor*',
            '\\Citeauthor',
            '\\Citeauthor*',
            '\\citetitle',
            '\\citetitle*',
            '\\citeyear',
            '\\citeyear*',
            '\\citedate',
            '\\citedate*',
            '\\citeurl',
            '\\fullcite',
            '\\citeyearpar',
            '\\citealt',
            '\\citealp',
            '\\citetext',
            '\\parencite',
            '\\parencite*',
            '\\Parencite',
            '\\footcite',
            '\\footfullcite',
            '\\footcitetext',
            '\\textcite',
            '\\Textcite',
            '\\smartcite',
            '\\Smartcite',
            '\\supercite',
            '\\autocite',
            '\\Autocite',
            '\\autocite*',
            '\\Autocite*',
            '\\volcite',
            '\\Volcite',
            '\\pvolcite',
            '\\Pvolcite',
            '\\fvolcite',
            '\\ftvolcite',
            '\\svolcite',
            '\\Svolcite',
            '\\tvolcite',
            '\\Tvolcite',
            '\\avolcite',
            '\\Avolcite',
            '\\notecite',
            '\\Notecite',
            '\\pnotecite',
            '\\Pnotecite',
            '\\fnotecite'
          )
        ),
        optional(
          seq(
            field('prenote', $.brack_group),
            field('postnote', optional($.brack_group))
          )
        ),
        field('keys', $.curly_group_text_list)
      ),

    label_definition: $ =>
      seq(field('command', '\\label'), field('name', $.curly_group_text)),

    label_reference: $ =>
      seq(
        field(
          'command',
          choice(
            '\\ref',
            '\\eqref',
            '\\vref',
            '\\Vref',
            '\\autoref',
            '\\pageref',
            '\\cref',
            '\\Cref',
            '\\cref*',
            '\\Cref*',
            '\\namecref',
            '\\nameCref',
            '\\lcnamecref',
            '\\namecrefs',
            '\\nameCrefs',
            '\\lcnamecrefs',
            '\\labelcref',
            '\\labelcpageref'
          )
        ),
        field('names', $.curly_group_text_list)
      ),

    label_reference_range: $ =>
      seq(
        field(
          'command',
          choice('\\crefrange', '\\crefrange*', '\\Crefrange', '\\Crefrange*')
        ),
        field('from', $.curly_group_text),
        field('to', $.curly_group_text)
      ),

    label_number: $ =>
      seq(
        field('command', '\\newlabel'),
        field('name', $.curly_group_text),
        field('number', $.curly_group)
      ),

    new_command_definition: $ =>
      seq(
        field(
          'command',
          choice(
            '\\newcommand',
            '\\newcommand*',
            '\\renewcommand',
            '\\renewcommand*',
            '\\DeclareRobustCommand',
            '\\DeclareRobustCommand*',
            '\\DeclareMathOperator',
            '\\DeclareMathOperator*'
          )
        ),
        field('declaration', $.curly_group_command_name),
        optional(
          seq(
            field('argc', $.brack_group_argc),
            field('default', optional($.brack_group))
          )
        ),
        field('implementation', $.curly_group)
      ),

    old_command_definition: $ =>
      seq(field('command', '\\def'), field('declaration', $.command_name)),

    let_command_definition: $ =>
      seq(
        field('command', '\\let'),
        field('declaration', $.command_name),
        optional('='),
        field('implementation', $.command_name)
      ),

    environment_definition: $ =>
      seq(
        '\\newenvironment',
        field('name', $.curly_group_text),
        field('argc', optional($.brack_group_argc)),
        field('begin', $.curly_group_impl),
        field('end', $.curly_group_impl)
      ),

    glossary_entry_definition: $ =>
      seq(
        field('command', '\\newglossaryentry'),
        field('name', $.curly_group_text),
        field('options', $.curly_group_key_value)
      ),

    glossary_entry_reference: $ =>
      seq(
        field(
          'command',
          choice(
            '\\gls',
            '\\Gls',
            '\\GLS',
            '\\glspl',
            '\\Glspl',
            '\\GLSpl',
            '\\glsdisp',
            '\\glslink',
            '\\glstext',
            '\\Glstext',
            '\\GLStext',
            '\\glsfirst',
            '\\Glsfirst',
            '\\GLSfirst',
            '\\glsplural',
            '\\Glsplural',
            '\\GLSplural',
            '\\glsfirstplural',
            '\\Glsfirstplural',
            '\\GLSfirstplural',
            '\\glsname',
            '\\Glsname',
            '\\GLSname',
            '\\glssymbol',
            '\\Glssymbol',
            '\\glsdesc',
            '\\Glsdesc',
            '\\GLSdesc',
            '\\glsuseri',
            '\\Glsuseri',
            '\\GLSuseri',
            '\\glsuserii',
            '\\Glsuserii',
            '\\GLSuserii',
            '\\glsuseriii',
            '\\Glsuseriii',
            '\\GLSuseriii',
            '\\glsuseriv',
            '\\Glsuseriv',
            '\\GLSuseriv',
            '\\glsuserv',
            '\\Glsuserv',
            '\\GLSuserv',
            '\\glsuservi',
            '\\Glsuservi',
            '\\GLSuservi'
          )
        ),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_text)
      ),

    acronym_definition: $ =>
      seq(
        field('command', '\\newacronym'),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_text),
        field('short', $.curly_group),
        field('long', $.curly_group)
      ),

    acronym_reference: $ =>
      seq(
        field(
          'command',
          choice(
            '\\acrshort',
            '\\Acrshort',
            '\\ACRshort',
            '\\acrshortpl',
            '\\Acrshortpl',
            '\\ACRshortpl',
            '\\acrlong',
            '\\Acrlong',
            '\\ACRlong',
            '\\acrlongpl',
            '\\Acrlongpl',
            '\\ACRlongpl',
            '\\acrfull',
            '\\Acrfull',
            '\\ACRfull',
            '\\acrfullpl',
            '\\Acrfullpl',
            '\\ACRfullpl',
            '\\acs',
            '\\Acs',
            '\\acsp',
            '\\Acsp',
            '\\acl',
            '\\Acl',
            '\\aclp',
            '\\Aclp',
            '\\acf',
            '\\Acf',
            '\\acfp',
            '\\Acfp',
            '\\ac',
            '\\Ac',
            '\\acp',
            '\\glsentrylong',
            '\\Glsentrylong',
            '\\glsentrylongpl',
            '\\Glsentrylongpl',
            '\\glsentryshort',
            '\\Glsentryshort',
            '\\glsentryshortpl',
            '\\Glsentryshortpl',
            '\\glsentryfullpl',
            '\\Glsentryfullpl'
          )
        ),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_text)
      ),

    theorem_definition: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice(
              '\\newtheorem',
              '\\newtheorem*',
              '\\declaretheorem',
              '\\declaretheorem*'
            )
          ),
          optional(field('options', $.brack_group_key_value)),
          field('name', $.curly_group_text),
          optional(
            choice(
              seq(
                field('title', $.curly_group),
                field('counter', optional($.brack_group_text))
              ),
              seq(
                field('counter', $.brack_group_text),
                field('title', $.curly_group)
              )
            )
          )
        )
      ),

    color_definition: $ =>
      seq(
        field('command', '\\definecolor'),
        optional($.brack_group_text),
        field('name', $.curly_group_text),
        field('model', $.curly_group_text),
        field('spec', $.curly_group_text)
      ),

    color_set_definition: $ =>
      seq(
        field('command', '\\definecolorset'),
        field('ty', optional($.brack_group_text)),
        field('model', $.curly_group_text_list),
        field('head', $.curly_group),
        field('tail', $.curly_group),
        field('spec', $.curly_group)
      ),

    color_reference: $ =>
      seq(
        field(
          'command',
          choice('\\color', '\\colorbox', '\\textcolor', '\\pagecolor')
        ),
        field('name', $.curly_group_text)
      ),

    tikz_library_import: $ =>
      seq(
        field('command', choice('\\usepgflibrary', '\\usetikzlibrary')),
        field('paths', $.curly_group_path_list)
      ),

    text_mode: $ =>
      seq(
        field('command', choice('\\text', '\\intertext', 'shortintertext')),
        field('content', $.curly_group)
      ),
  },
});
