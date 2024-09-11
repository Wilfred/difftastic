/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

const specialEnvironment = ({ rule, name, content, options }) => {
  const beginRule = `_${rule}_begin`;
  const endRule = `_${rule}_end`;
  const groupRule = `_${rule}_group`;
  const nameRule = `_${rule}_name`;
  return {
    [rule]: $ =>
      seq(
        field('begin', alias($[beginRule], $.begin)),
        content($),
        field('end', alias($[endRule], $.end)),
      ),

    [beginRule]: $ =>
      seq(
        field('command', '\\begin'),
        field('name', alias($[groupRule], $.curly_group_text)),
        options ? options($) : seq(),
      ),

    [endRule]: $ =>
      seq(
        field('command', '\\end'),
        field('name', alias($[groupRule], $.curly_group_text)),
      ),

    [groupRule]: $ => seq('{', field('text', alias($[nameRule], $.text)), '}'),

    [nameRule]: $ => seq(field('word', alias(name, $.word))),
  };
};

module.exports = grammar({
  name: 'latex',
  extras: $ => [$._whitespace, $.line_comment],
  externals: $ => [
    $._trivia_raw_fi,
    $._trivia_raw_env_comment,
    $._trivia_raw_env_verbatim,
    $._trivia_raw_env_listing,
    $._trivia_raw_env_minted,
    $._trivia_raw_env_asy,
    $._trivia_raw_env_asydef,
    $._trivia_raw_env_pycode,
    $._trivia_raw_env_luacode,
    $._trivia_raw_env_luacode_star,
    $._trivia_raw_env_sagesilent,
    $._trivia_raw_env_sageblock,
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
        field('end', optional('\\fi')),
      ),

    //--- Content

    _root_content: $ => choice($._section, $._paragraph, $._flat_content),

    _flat_content: $ => prec.right(choice($._text_with_env_content, '[', ']')),

    _text_with_env_content: $ =>
      choice(
        ',',
        '=',
        $.comment_environment,
        $.verbatim_environment,
        $.listing_environment,
        $.minted_environment,
        $.asy_environment,
        $.asydef_environment,
        $.pycode_environment,
        $.luacode_environment,
        $.sagesilent_environment,
        $.sageblock_environment,
        $.generic_environment,
        $.math_environment,
        $._text_content,
      ),

    _text_content: $ =>
      prec.right(
        1,
        choice(
          $.curly_group,
          $.block_comment,
          $._command,
          $.text,
          $._math_content,
          '(',
          ')',
        ),
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
        ),
      ),

    _paragraph: $ =>
      prec.right(
        choice(
          repeat1($.paragraph),
          repeat1($.subparagraph),
          repeat1($.enum_item),
        ),
      ),

    _section_part: $ =>
      seq(field('toc', optional($.brack_group)), field('text', $.curly_group)),

    _part_declaration: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\part', '\\part*', '\\addpart', '\\addpart*'),
          ),
          optional($._section_part),
        ),
      ),

    part: $ =>
      prec.right(
        -1,
        seq(
          $._part_declaration,
          repeat($._flat_content),
          optional(prec.right(-1, $._paragraph)),
          optional(
            prec.right(
              choice(
                repeat1($.chapter),
                repeat1($.section),
                repeat1($.subsection),
                repeat1($.subsubsection),
              ),
            ),
          ),
        ),
      ),

    _chapter_declaration: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\chapter', '\\chapter*', '\\addchap', '\\addchap*'),
          ),
          optional($._section_part),
        ),
      ),

    chapter: $ =>
      prec.right(
        -1,
        seq(
          $._chapter_declaration,
          repeat($._flat_content),
          optional(prec.right(-1, $._paragraph)),
          optional(
            prec.right(
              choice(
                repeat1($.section),
                repeat1($.subsection),
                repeat1($.subsubsection),
              ),
            ),
          ),
        ),
      ),

    _section_declaration: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\section', '\\section*', '\\addsec', '\\addsec*'),
          ),
          optional($._section_part),
        ),
      ),

    section: $ =>
      prec.right(
        -1,
        seq(
          $._section_declaration,
          repeat($._flat_content),
          optional(prec.right(-1, $._paragraph)),
          optional(
            prec.right(choice(repeat1($.subsection), repeat1($.subsubsection))),
          ),
        ),
      ),

    _subsection_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\subsection', '\\subsection*')),
          optional($._section_part),
        ),
      ),

    subsection: $ =>
      prec.right(
        -1,
        seq(
          $._subsection_declaration,
          repeat($._flat_content),
          optional(prec.right(-1, $._paragraph)),
          optional(prec.right(repeat1($.subsubsection))),
        ),
      ),

    _subsubsection_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\subsubsection', '\\subsubsection*')),
          optional($._section_part),
        ),
      ),

    subsubsection: $ =>
      prec.right(
        -1,
        seq(
          $._subsubsection_declaration,
          repeat($._flat_content),
          optional(prec.right(-1, $._paragraph)),
        ),
      ),

    _paragraph_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\paragraph', '\\paragraph*')),
          optional($._section_part),
        ),
      ),

    paragraph: $ =>
      prec.right(
        -1,
        seq(
          $._paragraph_declaration,
          repeat($._flat_content),
          optional(
            prec.right(choice(repeat1($.subparagraph), repeat1($.enum_item))),
          ),
        ),
      ),

    _subparagraph_declaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\subparagraph', '\\subparagraph*')),
          optional($._section_part),
        ),
      ),

    subparagraph: $ =>
      prec.right(
        -1,
        seq(
          $._subparagraph_declaration,
          repeat($._flat_content),
          optional(prec.right(choice(repeat1($.enum_item)))),
        ),
      ),

    _enum_itemdeclaration: $ =>
      prec.right(
        seq(
          field('command', choice('\\item', '\\item*')),
          field('label', optional($.brack_group_text)),
        ),
      ),

    enum_item: $ =>
      prec.right(
        -1,
        seq(
          $._enum_itemdeclaration,
          repeat($._flat_content),
        ),
      ),

    //--- Group

    curly_group: $ => seq('{', repeat($._root_content), '}'),

    curly_group_text: $ => seq('{', field('text', $.text), '}'),

    curly_group_spec: $ =>
      seq('{', repeat(choice($._text_content, '=')), '}'),

    curly_group_text_list: $ =>
      seq('{', sepBy(field('text', $.text), ','), '}'),

    curly_group_path: $ => seq('{', field('path', $.path), '}'),

    curly_group_path_list: $ =>
      seq('{', sepBy(field('path', $.path), ','), '}'),

    curly_group_uri: $ => seq('{', field('uri', $.uri), '}'),

    curly_group_command_name: $ =>
      seq('{', field('command', $.command_name), '}'),

    curly_group_key_value: $ =>
      seq('{', sepBy(field('pair', $.key_value_pair), ','), '}'),

    curly_group_glob_pattern: $ =>
      seq('{', field('pattern', $.glob_pattern), '}'),

    curly_group_impl: $ =>
      seq('{', repeat(choice($._text_content, '[', ']', ',', '=')), '}'),

    curly_group_author_list: $ =>
      seq(
        '{',
        sepBy(
          alias(repeat1($._text_content), $.author),
          alias('\\and', $.command_name),
        ),
        '}',
      ),

    brack_group: $ =>
      seq('[', repeat(choice($._text_with_env_content, $.brack_group)), ']'),

    brack_group_text: $ => seq('[', field('text', $.text), ']'),

    brack_group_argc: $ => seq('[', field('value', $.argc), ']'),

    brack_group_key_value: $ =>
      seq('[', sepBy(field('pair', $.key_value_pair), ','), ']'),

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
              $.delimiter,
              $.block_comment,
              $._command,
              $.superscript,
              $.subscript,
            ),
          ),
        ),
      ),

    word: $ => /[^\s\\%\{\},\$\[\]\(\)=\#&_\^\-\+\/\*]+/,

    placeholder: $ => /#+\d/,

    delimiter: $ => /&/,

    path: $ => /[^\*\"\[\]:;,\|\{\}<>]+/,

    uri: $ => /[^\[\]\{\}]+/,

    argc: $ => /\d/,

    glob_pattern: $ => repeat1($._glob_pattern_fragment),

    _glob_pattern_fragment: $ =>
      choice(
        seq('{', repeat($._glob_pattern_fragment), '}'),
        /[^\"\[\]:;\|\{\}<>]+/,
      ),

    operator: $ => choice('+', '-', '*', '/', '<', '>', '!', '|', ':', "'"),

    letter: $ => /[^\\%\{\}\$\#_\^]/,

    subscript: $ =>
      seq(
        '_',
        field('subscript', choice($.curly_group, $.letter, $.command_name)),
      ),

    superscript: $ =>
      seq(
        '^',
        field('superscript', choice($.curly_group, $.letter, $.command_name)),
      ),

    //--- Key / Value

    key_value_pair: $ =>
      seq(field('key', $.text), optional(seq('=', field('value', $.value)))),

    value: $ => repeat1(choice($._text_content, $.brack_group)),

    //--- Math

    _math_content: $ =>
      choice(
        $.displayed_equation,
        $.inline_formula,
        $.math_delimiter,
        $.text_mode,
      ),

    displayed_equation: $ =>
      prec.left(
        seq(choice('$$', '\\['), repeat($._root_content), choice('$$', '\\]')),
      ),

    inline_formula: $ =>
      prec.left(
        seq(choice('$', '\\('), repeat($._root_content), choice('$', '\\)')),
      ),

    _math_delimiter_part: $ =>
      choice($.word, $.command_name, '[', ']', '(', ')', '|'),

    math_delimiter: $ =>
      prec.left(
        seq(
          field(
            'left_command',
            choice('\\left', '\\bigl', '\\Bigl', '\\biggl', '\\Biggl'),
          ),
          field('left_delimiter', $._math_delimiter_part),
          repeat($._root_content),
          field(
            'right_command',
            choice('\\right', '\\bigr', '\\Bigr', '\\biggr', '\\Biggr'),
          ),
          field('right_delimiter', $._math_delimiter_part),
        ),
      ),

    text_mode: $ =>
      seq(
        field('command', choice('\\text', '\\intertext', '\\shortintertext')),
        field('content', $.curly_group),
      ),

    //--- Environments

    begin: $ =>
      prec.right(
        seq(
          field('command', '\\begin'),
          field('name', $.curly_group_text),
          field('options', optional($.brack_group)),
        ),
      ),

    end: $ =>
      prec.right(
        seq(field('command', '\\end'), field('name', $.curly_group_text)),
      ),

    generic_environment: $ =>
      seq(
        field('begin', $.begin),
        repeat($._root_content),
        field('end', $.end),
      ),

    //--- Trivia environments

    ...specialEnvironment({
      rule: 'comment_environment',
      name: 'comment',
      content: $ =>
        field('comment', alias($._trivia_raw_env_comment, $.comment)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'verbatim_environment',
      name: 'verbatim',
      content: $ =>
        field('verbatim', alias($._trivia_raw_env_verbatim, $.comment)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'listing_environment',
      name: 'lstlisting',
      content: $ =>
        field('code', alias($._trivia_raw_env_listing, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'minted_environment',
      name: 'minted',
      content: $ =>
        field('code', alias($._trivia_raw_env_minted, $.source_code)),
      options: $ =>
        seq(
          field('options', optional($.brack_group_key_value)),
          field('language', $.curly_group_text),
        ),
    }),

    ...specialEnvironment({
      rule: 'asy_environment',
      name: 'asy',
      content: $ => field('code', alias($._trivia_raw_env_asy, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'asydef_environment',
      name: 'asydef',
      content: $ =>
        field('code', alias($._trivia_raw_env_asydef, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'pycode_environment',
      name: 'pycode',
      content: $ =>
        field('code', alias($._trivia_raw_env_pycode, $.source_code)),
      options: undefined,
    }),

    luacode_environment: $ =>
      choice($._luacode_environment, $._luacode_environment_star),

    ...specialEnvironment({
      rule: '_luacode_environment',
      name: 'luacode',
      content: $ =>
        field('code', alias($._trivia_raw_env_luacode, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: '_luacode_environment_star',
      name: 'luacode*',
      content: $ =>
        field('code', alias($._trivia_raw_env_luacode_star, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'sagesilent_environment',
      name: 'sagesilent',
      content: $ =>
        field('code', alias($._trivia_raw_env_sagesilent, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'sageblock_environment',
      name: 'sageblock',
      content: $ =>
        field('code', alias($._trivia_raw_env_sageblock, $.source_code)),
      options: undefined,
    }),

    ...specialEnvironment({
      rule: 'math_environment',
      name: choice(
        'math',
        'displaymath',
        'displaymath*',
        'equation',
        'equation*',
        'multline',
        'multline*',
        'eqnarray',
        'eqnarray*',
        'align',
        'align*',
        'aligned',
        'aligned*',
        'array',
        'array*',
        'split',
        'split*',
        'alignat',
        'alignat*',
        'alignedat',
        'alignedat*',
        'gather',
        'gather*',
        'gathered',
        'gathered*',
        'flalign',
        'flalign*',
      ),
      content: $ => repeat($._flat_content),
      options: undefined,
    }),

    //--- Command

    _command: $ =>
      choice(
        $.title_declaration,
        $.author_declaration,
        $.package_include,
        $.class_include,
        $.latex_include,
        $.biblatex_include,
        $.bibstyle_include,
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
        $.paired_delimiter_definition,
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
        $.hyperlink,
        $.generic_command,
      ),

    generic_command: $ =>
      prec.right(
        seq(
          field('command', $.command_name),
          repeat(field('arg', $.curly_group)),
        ),
      ),

    command_name: $ => /\\([^\r\n]|[@a-zA-Z]+\*?)?/,

    title_declaration: $ =>
      seq(
        field('command', '\\title'),
        field('options', optional($.brack_group)),
        field('text', $.curly_group),
      ),

    author_declaration: $ =>
      seq(
        field('command', '\\author'),
        field('options', optional($.brack_group)),
        field('authors', $.curly_group_author_list),
      ),

    package_include: $ =>
      seq(
        field('command', choice('\\usepackage', '\\RequirePackage')),
        field('options', optional($.brack_group_key_value)),
        field('paths', $.curly_group_path_list),
      ),

    class_include: $ =>
      seq(
        field('command', '\\documentclass'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path),
      ),

    latex_include: $ =>
      seq(
        field(
          'command',
          choice('\\include', '\\subfileinclude', '\\input', '\\subfile'),
        ),
        field('path', $.curly_group_path),
      ),

    biblatex_include: $ =>
      seq(
        '\\addbibresource',
        field('options', optional($.brack_group_key_value)),
        field('glob', $.curly_group_glob_pattern),
      ),

    bibstyle_include: $ =>
      seq(
        field('command', '\\bibliographystyle'),
        field('path', $.curly_group_path),
      ),

    bibtex_include: $ =>
      seq(
        field('command', '\\bibliography'),
        field('paths', $.curly_group_path_list),
      ),

    graphics_include: $ =>
      seq(
        field('command', '\\includegraphics'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path),
      ),

    svg_include: $ =>
      seq(
        field('command', '\\includesvg'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path),
      ),

    inkscape_include: $ =>
      seq(
        field('command', '\\includeinkscape'),
        field('options', optional($.brack_group_key_value)),
        field('path', $.curly_group_path),
      ),

    verbatim_include: $ =>
      seq(
        field('command', choice('\\verbatiminput', '\\VerbatimInput')),
        field('path', $.curly_group_path),
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
            '\\subincludefrom',
          ),
        ),
        field('directory', $.curly_group_path),
        field('file', $.curly_group_path),
      ),

    caption: $ =>
      seq(
        field('command', '\\caption'),
        field('short', optional($.brack_group)),
        field('long', $.curly_group),
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
            '\\citeA',
            '\\citeR',
            '\\citeS',
            '\\citeyearR',
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
            '\\fnotecite',
          ),
        ),
        optional(
          seq(
            field('prenote', $.brack_group),
            field('postnote', optional($.brack_group)),
          ),
        ),
        field('keys', $.curly_group_text_list),
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
            '\\autoref*',
            '\\pageref',
            '\\pageref*',
            '\\autopageref',
            '\\autopageref*',
            '\\cref',
            '\\cref*',
            '\\Cref',
            '\\Cref*',
            '\\cpageref',
            '\\Cpageref',
            '\\namecref',
            '\\nameCref',
            '\\lcnamecref',
            '\\namecrefs',
            '\\nameCrefs',
            '\\lcnamecrefs',
            '\\labelcref',
            '\\labelcref*',
            '\\labelcpageref',
            '\\labelcpageref*',
          ),
        ),
        field('names', $.curly_group_text_list),
      ),

    label_reference_range: $ =>
      seq(
        field(
          'command',
          choice(
            '\\crefrange',
            '\\crefrange*',
            '\\Crefrange',
            '\\Crefrange*',
            '\\cpagerefrange',
            '\\Cpagerefrange',
          ),
        ),
        field('from', $.curly_group_text),
        field('to', $.curly_group_text),
      ),

    label_number: $ =>
      seq(
        field('command', '\\newlabel'),
        field('name', $.curly_group_text),
        field('number', $.curly_group),
      ),

    new_command_definition: $ =>
      choice($._new_command_definition, $._newer_command_definition, $._new_command_copy),

    _new_command_definition: $ =>
      seq(
        field(
          'command',
          choice(
            '\\newcommand',
            '\\newcommand*',
            '\\renewcommand',
            '\\renewcommand*',
            '\\providecommand',
            '\\providecommand*',
            '\\DeclareRobustCommand',
            '\\DeclareRobustCommand*',
            '\\DeclareMathOperator',
            '\\DeclareMathOperator*',
          ),
        ),
        field('declaration', choice($.curly_group_command_name, $.command_name)),
        optional(
          seq(
            field('argc', $.brack_group_argc),
            field('default', optional($.brack_group)),
          ),
        ),
        field('implementation', $.curly_group),
      ),

    _newer_command_definition: $ =>
      seq(
        field(
          'command',
          choice(
            '\\NewDocumentCommand',
            '\\RenewDocumentCommand',
            '\\ProvideDocumentCommand',
            '\\DeclareDocumentCommand',
            '\\NewExpandableDocumentCommand',
            '\\RenewExpandableDocumentCommand',
            '\\ProvideExpandableDocumentCommand',
            '\\DeclareExpandableDocumentCommand',
          ),
        ),
        field('declaration', choice($.curly_group_command_name, $.command_name)),
        field('spec', $.curly_group_spec),
        field('implementation', $.curly_group),
      ),

    _new_command_copy: $ =>
      seq(
        field(
          'command',
          choice(
            '\\NewCommandCopy',
            '\\RenewCommandCopy',
            '\\DeclareCommandCopy',
          ),
        ),
        field('declaration', choice($.curly_group_command_name, $.command_name)),
        field('implementation', $.curly_group_command_name),
      ),

    old_command_definition: $ =>
      seq(
        field('command', choice('\\def', '\\gdef', '\\edef', '\\xdef')),
        field('declaration', $.command_name)
      ),

    let_command_definition: $ =>
      seq(
        field('command', choice('\\let', '\\glet')),
        field('declaration', $.command_name),
        optional('='),
        field('implementation', $.command_name),
      ),

    paired_delimiter_definition: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\DeclarePairedDelimiter', '\\DeclarePairedDelimiterX'),
          ),
          field('declaration', $.curly_group_command_name),
          field('argc', optional($.brack_group_argc)),
          field('left', choice($.curly_group_impl, $.command_name)),
          field('right', choice($.curly_group_impl, $.command_name)),
          field('body', optional($.curly_group)),
        ),
      ),

    environment_definition: $ =>
      choice($._environment_definition, $._newer_environment_definition, $._new_environment_copy),

    _environment_definition: $ =>
      seq(
        field(
          'command',
          choice(
            '\\newenvironment',
            '\\renewenvironment',
          ),
        ),
        field('name', $.curly_group_text),
        field('argc', optional($.brack_group_argc)),
        field('begin', $.curly_group_impl),
        field('end', $.curly_group_impl),
      ),

    _newer_environment_definition: $ =>
      seq(
        field(
          'command',
          choice(
            '\\NewDocumentEnvironment',
            '\\RenewDocumentEnvironment',
            '\\ProvideDocumentEnvironment',
            '\\DeclareDocumentEnvironment',
          ),
        ),
        field('name', $.curly_group_text),
        field('spec', $.curly_group_spec),
        field('begin', $.curly_group_impl),
        field('end', $.curly_group_impl),
      ),

    _new_environment_copy: $ =>
      seq(
        field(
          'command',
          choice(
            '\\NewEnvironmentCopy',
            '\\RenewEnvironmentCopy',
            '\\DeclareEnvironmentCopy',
          ),
        ),
        field('name', $.curly_group_text),
        field('name', $.curly_group_text),
      ),

    glossary_entry_definition: $ =>
      seq(
        field('command', '\\newglossaryentry'),
        field('name', $.curly_group_text),
        field('options', $.curly_group_key_value),
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
            '\\GLSuservi',
          ),
        ),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_text),
      ),

    acronym_definition: $ =>
      seq(
        field('command', '\\newacronym'),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_text),
        field('short', $.curly_group),
        field('long', $.curly_group),
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
            '\\Glsentryfullpl',
          ),
        ),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_text),
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
              '\\declaretheorem*',
            ),
          ),
          optional(field('options', $.brack_group_key_value)),
          field('name', $.curly_group_text_list),
          optional(
            choice(
              seq(
                field('title', $.curly_group),
                field('counter', optional($.brack_group_text)),
              ),
              seq(
                field('counter', $.brack_group_text),
                field('title', $.curly_group),
              ),
            ),
          ),
        ),
      ),

    color_definition: $ =>
      seq(
        field('command', '\\definecolor'),
        optional($.brack_group_text),
        field('name', $.curly_group_text),
        field('model', $.curly_group_text),
        field('spec', $.curly_group),
      ),

    color_set_definition: $ =>
      seq(
        field('command', '\\definecolorset'),
        field('ty', optional($.brack_group_text)),
        field('model', $.curly_group_text_list),
        field('head', $.curly_group),
        field('tail', $.curly_group),
        field('spec', $.curly_group),
      ),

    color_reference: $ =>
      prec.right(
        seq(
          field(
            'command',
            choice('\\color', '\\pagecolor', '\\textcolor', '\\mathcolor', '\\colorbox'),
          ),
          choice(
            field('name', $.curly_group_text),
            seq(
              field('model', $.brack_group_text),
              field('spec', $.curly_group),
            ),
          ),
          optional(field('text', $.curly_group)),
        ),
      ),

    tikz_library_import: $ =>
      seq(
        field('command', choice('\\usepgflibrary', '\\usetikzlibrary')),
        field('paths', $.curly_group_path_list),
      ),

    hyperlink: $ =>
      prec.right(
        seq(
          field('command', choice('\\url', '\\href')),
          field('uri', $.curly_group_uri),
          field('label', optional($.curly_group)),
        ),
      ),
  },
});
