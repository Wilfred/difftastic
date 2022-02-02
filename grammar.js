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
        alias('\\iffalse', $.command_name),
        optional(alias($._trivia_raw_fi, $.comment)),
        optional(alias('\\fi', $.command_name))
      ),

    //--- Content

    _root_content: $ => choice($._section, $._flat_content),

    _flat_content: $ =>
      prec.right(choice($._text_with_env_content, '(', ')', '[', ']')),

    _text_with_env_content: $ =>
      choice(
        ',',
        '=',
        alias($._trivia_environment_comment, $.environment),
        alias($._trivia_environment_verbatim, $.environment),
        alias($._trivia_environment_listing, $.environment),
        alias($._trivia_environment_minted, $.environment),
        alias($._trivia_environment_pycode, $.environment),
        $.environment,
        $._text_content
      ),

    _text_content: $ =>
      choice(
        $.curly_group,
        $.text,
        $.displayed_equation,
        $.inline_formula,
        $.math_set,
        $.block_comment,
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
        $.command
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

    part: $ =>
      prec.right(
        1,
        seq(
          alias(
            choice('\\part', '\\part*', '\\addpart', '\\addpart*'),
            $.command_name
          ),
          optional($.curly_group),
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

    chapter: $ =>
      prec.right(
        1,
        seq(
          alias(
            choice('\\chapter', '\\chapter*', '\\addchap', '\\addchap*'),
            $.command_name
          ),
          optional($.curly_group),
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

    section: $ =>
      prec.right(
        1,
        seq(
          alias(
            choice('\\section', '\\section*', '\\addsec', '\\addsec*'),
            $.command_name
          ),
          optional($.curly_group),
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

    subsection: $ =>
      prec.right(
        1,
        seq(
          alias(choice('\\subsection', '\\subsection*'), $.command_name),
          optional($.curly_group),
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

    subsubsection: $ =>
      prec.right(
        1,
        seq(
          alias(choice('\\subsubsection', '\\subsubsection*'), $.command_name),
          optional($.curly_group),
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

    paragraph: $ =>
      prec.right(
        1,
        seq(
          alias(choice('\\paragraph', '\\paragraph*'), $.command_name),
          optional($.curly_group),
          repeat($._flat_content),
          optional(
            prec.right(choice(repeat1($.subparagraph), repeat1($.enum_item)))
          )
        )
      ),

    subparagraph: $ =>
      prec.right(
        1,
        seq(
          alias(choice('\\subparagraph', '\\subparagraph*'), $.command_name),
          optional($.curly_group),
          repeat($._flat_content),
          optional(prec.right(choice(repeat1($.enum_item))))
        )
      ),

    enum_item: $ =>
      prec.right(
        1,
        seq(
          alias(choice('\\item', '\\item*'), $.command_name),
          optional($.brack_group_text),
          repeat($._flat_content),
          optional(prec.right(choice()))
        )
      ),

    //--- Group

    curly_group: $ => seq('{', repeat($._root_content), '}'),

    curly_group_text: $ => seq('{', $.text, '}'),

    curly_group_text_list: $ => seq('{', sepBy($.text, ','), '}'),

    curly_group_path: $ => seq('{', $.path, '}'),

    curly_group_path_list: $ => seq('{', sepBy($.path, ','), '}'),

    curly_group_command_name: $ => seq('{', $.command_name, '}'),

    curly_group_key_value: $ => seq('{', sepBy($.key_value_pair, ','), '}'),

    curly_group_glob_pattern: $ => seq('{', $.glob_pattern, '}'),

    curly_group_impl: $ => seq('{', repeat($._text_content), '}'),

    brack_group: $ =>
      seq(
        '[',
        repeat(choice($._text_with_env_content, $.brack_group, '(', ')')),
        ']'
      ),

    brack_group_text: $ => seq('[', $.text, ']'),

    brack_group_argc: $ => seq('[', $.argc, ']'),

    brack_group_key_value: $ => seq('[', sepBy($.key_value_pair, ','), ']'),

    mixed_group: $ =>
      seq(
        choice('[', '('),
        repeat(choice($._text_with_env_content, $.mixed_group)),
        choice(']', ')')
      ),

    //--- Text

    text: $ => prec.right(repeat1(choice($.word, $.placeholder))),

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

    //--- Key / Value

    key_value_pair: $ => seq(alias($.text, $.key), optional(seq('=', $.value))),

    value: $ => repeat1(choice($._text_content, $.brack_group, '(', ')')),

    //--- Math

    displayed_equation: $ =>
      prec.left(
        seq(
          choice('$$', alias('\\[', $.command_name)),
          repeat($._root_content),
          choice('$$', alias('\\]', $.command_name))
        )
      ),

    inline_formula: $ =>
      prec.left(
        seq(
          choice('$', alias('\\(', $.command_name)),
          repeat($._root_content),
          choice('$', alias('\\)', $.command_name))
        )
      ),

    math_set: $ =>
      seq(
        alias('\\{', $.command_name),
        repeat($._root_content),
        alias('\\}', $.command_name)
      ),

    //--- Environments

    begin: $ =>
      prec.right(
        seq(
          alias('\\begin', $.command_name),
          $.curly_group_text,
          optional($.brack_group)
        )
      ),

    end: $ =>
      prec.right(seq(alias('\\end', $.command_name), $.curly_group_text)),

    environment: $ => seq($.begin, repeat($._root_content), $.end),

    //--- Comment environment

    _trivia_environment_comment: $ =>
      seq(
        alias($._trivia_begin_comment, $.begin),
        alias($._trivia_raw_env_comment, $.comment),
        alias($._trivia_end_comment, $.end)
      ),

    _trivia_begin_comment: $ =>
      seq(
        alias('\\begin', $.command_name),
        alias($._trivia_curly_group_comment, $.curly_group_text)
      ),

    _trivia_end_comment: $ =>
      seq(
        alias('\\end', $.command_name),
        alias($._trivia_curly_group_comment, $.curly_group_text)
      ),

    _trivia_curly_group_comment: $ =>
      seq('{', alias($._trivia_text_comment, $.text), '}'),

    _trivia_text_comment: $ => seq(alias('comment', $.word)),

    //--- Verbatim environment

    _trivia_environment_verbatim: $ =>
      seq(
        alias($._trivia_begin_verbatim, $.begin),
        alias($._trivia_raw_env_verbatim, $.comment),
        alias($._trivia_end_verbatim, $.end)
      ),

    _trivia_begin_verbatim: $ =>
      seq(
        alias('\\begin', $.command_name),
        alias($._trivia_curly_group_verbatim, $.curly_group_text)
      ),

    _trivia_end_verbatim: $ =>
      seq(
        alias('\\end', $.command_name),
        alias($._trivia_curly_group_verbatim, $.curly_group_text)
      ),

    _trivia_curly_group_verbatim: $ =>
      seq('{', alias($._trivia_text_verbatim, $.text), '}'),

    _trivia_text_verbatim: $ => seq(alias('verbatim', $.word)),

    //--- Listing environment

    _trivia_environment_listing: $ =>
      seq(
        alias($._trivia_begin_listing, $.begin),
        alias($._trivia_raw_env_listing, $.source_code),
        alias($._trivia_end_listing, $.end)
      ),

    _trivia_begin_listing: $ =>
      seq(
        alias('\\begin', $.command_name),
        alias($._trivia_curly_group_listing, $.curly_group_text)
      ),

    _trivia_end_listing: $ =>
      seq(
        alias('\\end', $.command_name),
        alias($._trivia_curly_group_listing, $.curly_group_text)
      ),

    _trivia_curly_group_listing: $ =>
      seq('{', alias($._trivia_text_listing, $.text), '}'),

    _trivia_text_listing: $ => seq(alias('lstlisting', $.word)),

    //--- Minted environment

    _trivia_environment_minted: $ =>
      seq(
        alias($._trivia_begin_minted, $.begin),
        alias($._trivia_raw_env_minted, $.source_code),
        alias($._trivia_end_minted, $.end)
      ),

    _trivia_begin_minted: $ =>
      seq(
        alias('\\begin', $.command_name),
        alias($._trivia_curly_group_minted, $.curly_group_text)
      ),

    _trivia_end_minted: $ =>
      seq(
        alias('\\end', $.command_name),
        alias($._trivia_curly_group_minted, $.curly_group_text)
      ),

    _trivia_curly_group_minted: $ =>
      seq('{', alias($._trivia_text_minted, $.text), '}'),

    _trivia_text_minted: $ => seq(alias('minted', $.word)),

    //--- Pycode environment

    _trivia_environment_pycode: $ =>
      seq(
        alias($._trivia_begin_pycode, $.begin),
        alias($._trivia_raw_env_pycode, $.source_code),
        alias($._trivia_end_pycode, $.end)
      ),

    _trivia_begin_pycode: $ =>
      seq(
        alias('\\begin', $.command_name),
        alias($._trivia_curly_group_pycode, $.curly_group_text)
      ),

    _trivia_end_pycode: $ =>
      seq(
        alias('\\end', $.command_name),
        alias($._trivia_curly_group_pycode, $.curly_group_text)
      ),

    _trivia_curly_group_pycode: $ =>
      seq('{', alias($._trivia_text_pycode, $.text), '}'),

    _trivia_text_pycode: $ => seq(alias('pycode', $.word)),

    //--- Command

    command: $ =>
      prec.right(
        seq($.command_name, repeat(choice($.curly_group, $.mixed_group)))
      ),

    command_name: $ => /\\([^\r\n]|[@a-zA-Z:_]+\*?)?/,

    package_include: $ =>
      seq(
        alias(choice('\\usepackage', '\\RequirePackage'), $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_path_list
      ),

    class_include: $ =>
      seq(
        alias('\\documentclass', $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_path
      ),

    latex_include: $ =>
      seq(
        alias(
          choice('\\include', '\\subfileinclude', '\\input', '\\subfile'),
          $.command_name
        ),
        $.curly_group_path
      ),

    biblatex_include: $ =>
      seq(
        alias('\\addbibresource', $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_glob_pattern
      ),

    bibtex_include: $ =>
      seq(alias('\\bibliography', $.command_name), $.curly_group_path),

    graphics_include: $ =>
      seq(
        alias('\\includegraphics', $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_path
      ),

    svg_include: $ =>
      seq(
        alias('\\includesvg', $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_path
      ),

    inkscape_include: $ =>
      seq(
        alias('\\includeinkscape', $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_path
      ),

    verbatim_include: $ =>
      seq(
        alias(choice('\\verbatiminput', '\\VerbatimInput'), $.command_name),
        $.curly_group_path
      ),

    import_include: $ =>
      seq(
        alias(
          choice(
            '\\import',
            '\\subimport',
            '\\inputfrom',
            '\\subimportfrom',
            '\\includefrom',
            '\\subincludefrom'
          ),
          $.command_name
        ),
        $.curly_group_path,
        $.curly_group_path
      ),

    caption: $ =>
      seq(
        alias('\\caption', $.command_name),
        optional($.brack_group),
        $.curly_group
      ),

    citation: $ =>
      seq(
        alias(
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
          ),
          $.command_name
        ),
        optional(seq($.brack_group, optional($.brack_group))),
        $.curly_group_text_list
      ),

    label_definition: $ =>
      seq(alias('\\label', $.command_name), $.curly_group_text),

    label_reference: $ =>
      seq(
        alias(
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
          ),
          $.command_name
        ),
        $.curly_group_text_list
      ),

    label_reference_range: $ =>
      seq(
        alias(
          choice('\\crefrange', '\\crefrange*', '\\Crefrange', '\\Crefrange*'),
          $.command_name
        ),
        $.curly_group_text,
        $.curly_group_text
      ),

    label_number: $ =>
      seq(
        alias('\\newlabel', $.command_name),
        $.curly_group_text,
        $.curly_group
      ),

    new_command_definition: $ =>
      seq(
        alias(
          choice(
            '\\newcommand',
            '\\newcommand*',
            '\\renewcommand',
            '\\renewcommand*',
            '\\DeclareRobustCommand',
            '\\DeclareRobustCommand*',
            '\\DeclareMathOperator',
            '\\DeclareMathOperator*'
          ),
          $.command_name
        ),
        $.curly_group_command_name,
        optional($.brack_group_argc),
        $.curly_group
      ),

    old_command_definition: $ =>
      seq(alias('\\def', $.command_name), $.command_name),

    let_command_definition: $ =>
      seq(
        seq(
          alias('\\let', $.command_name),
          $.command_name,
          optional('='),
          $.command_name
        )
      ),

    environment_definition: $ =>
      seq(
        alias('\\newenvironment', $.command_name),
        $.curly_group_text,
        optional($.brack_group_argc),
        $.curly_group_impl,
        $.curly_group_impl
      ),

    glossary_entry_definition: $ =>
      seq(
        alias('\\newglossaryentry', $.command_name),
        $.curly_group_text,
        $.curly_group_key_value
      ),

    glossary_entry_reference: $ =>
      seq(
        alias(
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
          ),
          $.command_name
        ),
        optional($.brack_group_key_value),
        $.curly_group_text
      ),

    acronym_definition: $ =>
      seq(
        alias('\\newacronym', $.command_name),
        optional($.brack_group_key_value),
        $.curly_group_text,
        $.curly_group,
        $.curly_group
      ),

    acronym_reference: $ =>
      seq(
        alias(
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
          ),
          $.command_name
        ),
        optional($.brack_group_key_value),
        $.curly_group_text
      ),

    theorem_definition: $ =>
      prec.right(
        seq(
          alias(choice('\\newtheorem', '\\declaretheorem'), $.command_name),
          $.brack_group_key_value,
          $.curly_group_text,
          optional(
            choice(
              seq($.curly_group, optional($.brack_group_text)),
              seq($.brack_group_text, $.curly_group)
            )
          )
        )
      ),

    color_definition: $ =>
      seq(
        alias('\\definecolor', $.command_name),
        optional($.brack_group_text),
        $.curly_group_text,
        $.curly_group_text,
        $.curly_group_text
      ),

    color_set_definition: $ =>
      seq(
        alias('\\definecolorset', $.command_name),
        optional($.brack_group_text),
        $.curly_group_text_list,
        $.curly_group,
        $.curly_group,
        $.curly_group
      ),

    color_reference: $ =>
      seq(
        alias(
          choice('\\color', '\\colorbox', '\\textcolor', '\\pagecolor'),
          $.command_name
        ),
        $.curly_group_text
      ),

    tikz_library_import: $ =>
      seq(
        alias(choice('\\usepgflibrary', '\\usetikzlibrary'), $.command_name),
        $.curly_group_text
      ),
  },
});
