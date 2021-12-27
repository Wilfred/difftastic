#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>

#define ALPHABET_SIZE 128

typedef struct trie {
  struct trie *children[ALPHABET_SIZE];
  int value;
} trie;

static trie *trie_new() {
  trie *root = (trie *)malloc(sizeof(trie));
  root->value = 0;
  memset(root->children, 0, sizeof(trie *) * ALPHABET_SIZE);
  return root;
}

static void trie_insert(trie *root, char *key, int value) {
  trie *node = root;
  for (int i = 0; key[i]; i++) {
    int c = (int)key[i];
    if (!node->children[c]) {
      node->children[c] = trie_new();
    }

    node = node->children[c];
  }

  node->value = value;
}

static void trie_insert_group(trie *root, char **keys, int value) {
  for (int i = 0; keys[i]; i++) {
    trie_insert(root, keys[i], value);
  }
}

static trie *trie_lookup(trie *root, int32_t c) {
  return root && (c < ALPHABET_SIZE) ? root->children[c] : NULL;
}

static void trie_free(trie *root) {
  for (int i = 0; i < ALPHABET_SIZE; i++) {
    if (root->children[i]) {
      trie_free(root->children[i]);
    }
  }

  free(root);
}

static char *citation_commands[] = {
    "cite",        "cite*",       "Cite",      "nocite",       "citet",
    "citep",       "citet*",      "citep*",    "citeauthor",   "citeauthor*",
    "Citeauthor",  "Citeauthor*", "citetitle", "citetitle*",   "citeyear",
    "citeyear*",   "citedate",    "citedate*", "citeurl",      "fullcite",
    "citeyearpar", "citealt",     "citealp",   "citetext",     "parencite",
    "parencite*",  "Parencite",   "footcite",  "footfullcite", "footcitetext",
    "textcite",    "Textcite",    "smartcite", "Smartcite",    "supercite",
    "autocite",    "Autocite",    "autocite*", "Autocite*",    "volcite",
    "Volcite",     "pvolcite",    "Pvolcite",  "fvolcite",     "ftvolcite",
    "svolcite",    "Svolcite",    "tvolcite",  "Tvolcite",     "avolcite",
    "Avolcite",    "notecite",    "notecite",  "pnotecite",    "Pnotecite",
    "fnotecite",   NULL};

static char *label_reference_commands[] = {
    "ref",         "eqref",     "vref",          "Vref",      "autoref",
    "pageref",     "cref",      "Cref",          "cref*",     "Cref*",
    "namecref",    "nameCref",  "lcnamecref",    "namecrefs", "nameCrefs",
    "lcnamecrefs", "labelcref", "labelcpageref", NULL};

static char *label_reference_range_commands[] = {
    "crefrange",  "crefrange",  "Crefrange",  "Crefrange", "crefrange*",
    "crefrange*", "Crefrange*", "Crefrange*", NULL};

static char *new_command_definition_commands[] = {
    "newcommand",          "newcommand*",          "renewcommand",
    "renewcommand*",       "DeclareRobustCommand", "DeclareRobustCommand*",
    "DeclareMathOperator", "DeclareMathOperator*", NULL};

static char *glossary_entry_reference_commands[] = {"gls",
                                                    "Gls",
                                                    "GLS",
                                                    "glspl",
                                                    "Glspl",
                                                    "GLSpl",
                                                    "glsdisp",
                                                    "glslink",
                                                    "glstext",
                                                    "Glstext",
                                                    "GLStext",
                                                    "glsfirst",
                                                    "Glsfirst",
                                                    "GLSfirst",
                                                    "glsplural",
                                                    "Glsplural",
                                                    "GLSplural",
                                                    "glsfirstplural",
                                                    "Glsfirstplural",
                                                    "GLSfirstplural",
                                                    "glsname",
                                                    "Glsname",
                                                    "GLSname",
                                                    "glssymbol",
                                                    "Glssymbol",
                                                    "glsdesc",
                                                    "Glsdesc",
                                                    "GLSdesc",
                                                    "glsuseri",
                                                    "Glsuseri",
                                                    "GLSuseri",
                                                    "glsuserii",
                                                    "Glsuserii",
                                                    "GLSuserii",
                                                    "glsuseriii",
                                                    "Glsuseriii",
                                                    "GLSuseriii",
                                                    "glsuseriv",
                                                    "Glsuseriv",
                                                    "GLSuseriv",
                                                    "glsuserv",
                                                    "Glsuserv",
                                                    "GLSuserv",
                                                    "glsuservi",
                                                    "Glsuservi",
                                                    "GLSuservi",
                                                    NULL};

static char *acronym_reference_commands[] = {"acrshort",
                                             "Acrshort",
                                             "ACRshort",
                                             "acrshortpl",
                                             "Acrshortpl",
                                             "ACRshortpl",
                                             "acrlong",
                                             "Acrlong",
                                             "ACRlong",
                                             "acrlongpl",
                                             "Acrlongpl",
                                             "ACRlongpl",
                                             "acrfull",
                                             "Acrfull",
                                             "ACRfull",
                                             "acrfullpl",
                                             "Acrfullpl",
                                             "ACRfullpl",
                                             "acs",
                                             "Acs",
                                             "acsp",
                                             "Acsp",
                                             "acl",
                                             "Acl",
                                             "aclp",
                                             "Aclp",
                                             "acf",
                                             "Acf",
                                             "acfp",
                                             "Acfp",
                                             "ac",
                                             "Ac",
                                             "acp",
                                             "glsentrylong",
                                             "Glsentrylong",
                                             "glsentrylongpl",
                                             "Glsentrylongpl",
                                             "glsentryshort",
                                             "Glsentryshort",
                                             "glsentryshortpl",
                                             "Glsentryshortpl",
                                             "glsentryfullpl",
                                             "Glsentryfullpl",
                                             NULL};

static char *theorem_definition_commands[] = {"newtheorem", "declaretheorem",
                                              NULL};

static char *color_reference_commands[] = {"color", "colorbox", "textcolor",
                                           "pagecolor", NULL};

static char *tikz_library_import_commands[] = {"usepgflibrary",
                                               "usetikzlibrary", NULL};

static char *package_include_commands[] = {"usepackage", "RequirePackage",
                                           NULL};

static char *latex_include_commands[] = {"include", "subfileinclude", "input",
                                         "subfile", NULL};

static char *verbatim_include_commmands[] = {"verbatiminput", "VerbatimInput",
                                             NULL};

static char *import_commands[] = {
    "import",      "subimport",      "inputfrom", "subimportfrom",
    "includefrom", "subincludefrom", NULL};

static char *part_commands[] = {"part", "part*", NULL};

static char *chapter_commands[] = {"chapter", "chapter*", NULL};

static char *section_commands[] = {"section", "section*", NULL};

static char *subsection_commands[] = {"subsection", "subsection*", NULL};

static char *subsubsection_commands[] = {"subsubsection", "subsubsection*",
                                         NULL};

static char *paragraph_commands[] = {"paragraph", "paragraph*", NULL};

static char *subparagraph_commands[] = {"subparagraph", "subparagraph*", NULL};

static char *enum_item_commands[] = {"item", NULL};

enum TokenType {
  CMD_GENERIC,
  CMD_BEGIN,
  CMD_END,
  CMD_IFFALSE,
  CMD_FI,
  CMD_CAPTION,
  CMD_CITATION,
  CMD_LABEL_DEFINITION,
  CMD_LABEL_REFERENCE,
  CMD_LABEL_REFERENCE_RANGE,
  CMD_LABEL_NUMBER,
  CMD_NEW_CMD_DEFINITION,
  CMD_OLD_CMD_DEFINITION,
  CMD_LET_CMD_DEFINITION,
  CMD_ENV_DEFINITION,
  CMD_GLOSSARY_ENTRY_DEFINITION,
  CMD_GLOSSARY_ENTRY_REFERENCE,
  CMD_ACRONYM_DEFINITION,
  CMD_ACRONYM_REFERENCE,
  CMD_THEOREM_DEFINITION,
  CMD_COLOR_DEFINITION,
  CMD_COLOR_SET_DEFINITION,
  CMD_COLOR_REFERENCE,
  CMD_TIKZ_LIBRARY_IMPORT,
  CMD_PACKAGE_INCLUDE,
  CMD_CLASS_INCLUDE,
  CMD_LATEX_INCLUDE,
  CMD_BIBLATEX_INCLUDE,
  CMD_BIBTEX_INCLUDE,
  CMD_GRAPHICS_INCLUDE,
  CMD_SVG_INCLUDE,
  CMD_INKSCAPE_INCLUDE,
  CMD_VERBATIM_INCLUDE,
  CMD_IMPORT,
  CMD_ESCAPED_LPAREN,
  CMD_ESCAPED_RPAREN,
  CMD_ESCAPED_LBRACK,
  CMD_ESCAPED_RBRACK,
  CMD_ESCAPED_LCURLY,
  CMD_ESCAPED_RCURLY,
  CMD_PART,
  CMD_CHAPTER,
  CMD_SECTION,
  CMD_SUBSECTION,
  CMD_SUBSUBSECTION,
  CMD_PARAGRAPH,
  CMD_SUBPARAGRAPH,
  CMD_ENUM_ITEM,
  VERBATIM_CMD_FI,
  VERBATIM_ENV_COMMENT,
  VERBATIM_ENV_VERBATIM,
  VERBATIM_ENV_LISTING,
  VERBATIM_ENV_MINTED,
};

static bool is_part_of_command_name(int32_t c) {
  switch (c) {
  case '_':
  case ':':
  case '*':
    return true;
  default:
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
  }
}

static int scan_command_name(TSLexer *lexer, trie *commands) {
  trie *node = commands;
  bool escape = true;

  lexer->advance(lexer, false);
  while (!lexer->eof(lexer)) {
    int c = lexer->lookahead;
    if (!is_part_of_command_name(c)) {
      break;
    }

    node = trie_lookup(node, c);
    lexer->advance(lexer, false);
    escape = false;
  }

  if (!lexer->eof(lexer)) {
    int c = lexer->lookahead;
    if (c != '\r' && c != '\n' && (escape || c == '*')) {
      node = trie_lookup(node, c);
      lexer->advance(lexer, false);
    }
  }

  return node ? node->value : CMD_GENERIC;
}

static bool scan_keyword(TSLexer *lexer, const char *keyword) {
  if (keyword) {
    for (int i = 0; keyword[i]; i++) {
      if (lexer->eof(lexer) || lexer->lookahead != keyword[i]) {
        return false;
      }

      lexer->advance(lexer, false);
    }
  }

  return true;
}

static void scan_verbatim(TSLexer *lexer, trie *commands, int end_command_type,
                          const char *end_keyword) {
  while (!lexer->eof(lexer)) {
    while (!lexer->eof(lexer) && lexer->lookahead != '\\') {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);
    if (lexer->eof(lexer)) {
      break;
    }

    int command_type = scan_command_name(lexer, commands);
    if (command_type == end_command_type && scan_keyword(lexer, end_keyword)) {
      break;
    }
  }
}

void *tree_sitter_latex_external_scanner_create() {
  trie *commands = trie_new();
  trie_insert(commands, "begin", CMD_BEGIN);
  trie_insert(commands, "end", CMD_END);
  trie_insert(commands, "iffalse", CMD_IFFALSE);
  trie_insert(commands, "fi", CMD_FI);
  trie_insert(commands, "caption", CMD_CAPTION);
  trie_insert_group(commands, citation_commands, CMD_CITATION);
  trie_insert(commands, "label", CMD_LABEL_DEFINITION);
  trie_insert_group(commands, label_reference_commands, CMD_LABEL_REFERENCE);
  trie_insert_group(commands, label_reference_range_commands,
                    CMD_LABEL_REFERENCE_RANGE);
  trie_insert(commands, "newlabel", CMD_LABEL_NUMBER);
  trie_insert_group(commands, new_command_definition_commands,
                    CMD_NEW_CMD_DEFINITION);
  trie_insert(commands, "def", CMD_OLD_CMD_DEFINITION);
  trie_insert(commands, "let", CMD_LET_CMD_DEFINITION);
  trie_insert(commands, "newenvironment", CMD_ENV_DEFINITION);
  trie_insert(commands, "newglossaryentry", CMD_GLOSSARY_ENTRY_DEFINITION);
  trie_insert_group(commands, glossary_entry_reference_commands,
                    CMD_GLOSSARY_ENTRY_REFERENCE);
  trie_insert(commands, "newacronym", CMD_ACRONYM_DEFINITION);
  trie_insert_group(commands, acronym_reference_commands,
                    CMD_ACRONYM_REFERENCE);
  trie_insert_group(commands, theorem_definition_commands,
                    CMD_THEOREM_DEFINITION);
  trie_insert(commands, "definecolor", CMD_COLOR_DEFINITION);
  trie_insert(commands, "definecolorset", CMD_COLOR_SET_DEFINITION);
  trie_insert_group(commands, color_reference_commands, CMD_COLOR_REFERENCE);
  trie_insert_group(commands, tikz_library_import_commands,
                    CMD_TIKZ_LIBRARY_IMPORT);
  trie_insert_group(commands, package_include_commands, CMD_PACKAGE_INCLUDE);
  trie_insert(commands, "documentclass", CMD_CLASS_INCLUDE);
  trie_insert_group(commands, latex_include_commands, CMD_LATEX_INCLUDE);
  trie_insert(commands, "addbibresource", CMD_BIBLATEX_INCLUDE);
  trie_insert(commands, "bibliography", CMD_BIBTEX_INCLUDE);
  trie_insert(commands, "includegraphics", CMD_GRAPHICS_INCLUDE);
  trie_insert(commands, "includesvg", CMD_SVG_INCLUDE);
  trie_insert(commands, "includeinkscape", CMD_INKSCAPE_INCLUDE);
  trie_insert_group(commands, verbatim_include_commmands, CMD_VERBATIM_INCLUDE);
  trie_insert_group(commands, import_commands, CMD_IMPORT);
  trie_insert(commands, "(", CMD_ESCAPED_LPAREN);
  trie_insert(commands, ")", CMD_ESCAPED_RPAREN);
  trie_insert(commands, "[", CMD_ESCAPED_LBRACK);
  trie_insert(commands, "]", CMD_ESCAPED_RBRACK);
  trie_insert(commands, "{", CMD_ESCAPED_LCURLY);
  trie_insert(commands, "}", CMD_ESCAPED_RCURLY);
  trie_insert_group(commands, part_commands, CMD_PART);
  trie_insert_group(commands, chapter_commands, CMD_CHAPTER);
  trie_insert_group(commands, section_commands, CMD_SECTION);
  trie_insert_group(commands, subsection_commands, CMD_SUBSECTION);
  trie_insert_group(commands, subsubsection_commands, CMD_SUBSUBSECTION);
  trie_insert_group(commands, paragraph_commands, CMD_PARAGRAPH);
  trie_insert_group(commands, subparagraph_commands, CMD_SUBPARAGRAPH);
  trie_insert_group(commands, enum_item_commands, CMD_ENUM_ITEM);
  return commands;
}

void tree_sitter_latex_external_scanner_destroy(void *payload) {
  trie_free((trie *)payload);
}

unsigned tree_sitter_latex_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  return 0;
}

void tree_sitter_latex_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {}

bool tree_sitter_latex_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  trie *commands = (trie *)payload;
  for (int i = VERBATIM_CMD_FI; i <= VERBATIM_ENV_MINTED; i++) {
    if (valid_symbols[i]) {
      for (int j = i + 1; j <= VERBATIM_ENV_MINTED; j++) {
        if (valid_symbols[j]) {
          return false;
        }
      }

      lexer->result_symbol = i;
      switch (i) {
      case VERBATIM_CMD_FI:
        scan_verbatim(lexer, commands, CMD_FI, NULL);
        break;
      case VERBATIM_ENV_COMMENT:
        scan_verbatim(lexer, commands, CMD_END, "{comment}");
        break;
      case VERBATIM_ENV_VERBATIM:
        scan_verbatim(lexer, commands, CMD_END, "{verbatim}");
        break;
      case VERBATIM_ENV_LISTING:
        scan_verbatim(lexer, commands, CMD_END, "{lstlisting}");
        break;
      case VERBATIM_ENV_MINTED:
        scan_verbatim(lexer, commands, CMD_END, "{comment}");
        break;
      }

      return true;
    }
  }

  if (lexer->lookahead != '\\') {
    return false;
  }

  int command_type = scan_command_name(lexer, commands);
  lexer->mark_end(lexer);
  lexer->result_symbol =
      valid_symbols[command_type] ? command_type : CMD_GENERIC;

  return true;
}
