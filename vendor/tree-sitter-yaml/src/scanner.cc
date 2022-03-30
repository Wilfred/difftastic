#include <tree_sitter/parser.h>
#include <vector>

// tree-sitter does not support multiple files for external scanner
#include "./schema.generated.cc"

namespace {

using std::vector;
using namespace tree_sitter_yaml;

enum TokenType {
  END_OF_FILE,

  S_DIR_YML_BGN,  R_DIR_YML_VER,
  S_DIR_TAG_BGN,  R_DIR_TAG_HDL,  R_DIR_TAG_PFX,
  S_DIR_RSV_BGN,  R_DIR_RSV_PRM,
  S_DRS_END,
  S_DOC_END,
  R_BLK_SEQ_BGN,  BR_BLK_SEQ_BGN, B_BLK_SEQ_BGN,
  R_BLK_KEY_BGN,  BR_BLK_KEY_BGN, B_BLK_KEY_BGN,
  R_BLK_VAL_BGN,  BR_BLK_VAL_BGN, B_BLK_VAL_BGN,
  R_BLK_IMP_BGN,
  R_BLK_LIT_BGN,  BR_BLK_LIT_BGN,
  R_BLK_FLD_BGN,  BR_BLK_FLD_BGN,
                  BR_BLK_STR_CTN,
  R_FLW_SEQ_BGN,  BR_FLW_SEQ_BGN, B_FLW_SEQ_BGN,
  R_FLW_SEQ_END,  BR_FLW_SEQ_END,
  R_FLW_MAP_BGN,  BR_FLW_MAP_BGN, B_FLW_MAP_BGN,
  R_FLW_MAP_END,  BR_FLW_MAP_END,
  R_FLW_SEP_BGN,  BR_FLW_SEP_BGN,
  R_FLW_KEY_BGN,  BR_FLW_KEY_BGN,
  R_FLW_JSV_BGN,  BR_FLW_JSV_BGN,
  R_FLW_NJV_BGN,  BR_FLW_NJV_BGN,
  R_DQT_STR_BGN,  BR_DQT_STR_BGN, B_DQT_STR_BGN,
  R_DQT_STR_CTN,  BR_DQT_STR_CTN,
  R_DQT_ESC_NWL,  BR_DQT_ESC_NWL,
  R_DQT_ESC_SEQ,  BR_DQT_ESC_SEQ,
  R_DQT_STR_END,  BR_DQT_STR_END,
  R_SQT_STR_BGN,  BR_SQT_STR_BGN, B_SQT_STR_BGN,
  R_SQT_STR_CTN,  BR_SQT_STR_CTN,
  R_SQT_ESC_SQT,  BR_SQT_ESC_SQT,
  R_SQT_STR_END,  BR_SQT_STR_END,

  R_SGL_PLN_NUL_BLK, BR_SGL_PLN_NUL_BLK, B_SGL_PLN_NUL_BLK, R_SGL_PLN_NUL_FLW, BR_SGL_PLN_NUL_FLW,
  R_SGL_PLN_BOL_BLK, BR_SGL_PLN_BOL_BLK, B_SGL_PLN_BOL_BLK, R_SGL_PLN_BOL_FLW, BR_SGL_PLN_BOL_FLW,
  R_SGL_PLN_INT_BLK, BR_SGL_PLN_INT_BLK, B_SGL_PLN_INT_BLK, R_SGL_PLN_INT_FLW, BR_SGL_PLN_INT_FLW,
  R_SGL_PLN_FLT_BLK, BR_SGL_PLN_FLT_BLK, B_SGL_PLN_FLT_BLK, R_SGL_PLN_FLT_FLW, BR_SGL_PLN_FLT_FLW,
  R_SGL_PLN_STR_BLK, BR_SGL_PLN_STR_BLK, B_SGL_PLN_STR_BLK, R_SGL_PLN_STR_FLW, BR_SGL_PLN_STR_FLW,

  R_MTL_PLN_STR_BLK,  BR_MTL_PLN_STR_BLK,
  R_MTL_PLN_STR_FLW,  BR_MTL_PLN_STR_FLW,

  R_TAG,     BR_TAG,     B_TAG,
  R_ACR_BGN, BR_ACR_BGN, B_ACR_BGN, R_ACR_CTN,
  R_ALS_BGN, BR_ALS_BGN, B_ALS_BGN, R_ALS_CTN,

  BL,
  COMMENT,
};

#define ADV() adv(lexer)
#define ADV_NWL() adv_nwl(lexer)
#define SKP() skp(lexer)
#define SKP_NWL() skp_nwl(lexer)
#define MRK_END() mrk_end(lexer)
#define LKA lexer->lookahead
#define VLD valid_symbols

#define SCN_SUCC 1
#define SCN_STOP 0
#define SCN_FAIL -1

#define IND_ROT 'r'
#define IND_MAP 'm'
#define IND_SEQ 'q'
#define IND_STR 's'

#define RET_SYM(RESULT_SYMBOL) {        \
  flush();                              \
  lexer->result_symbol = RESULT_SYMBOL; \
  return true;                          \
}

#define POP_IND() {               \
  /* incorrect status caused by error recovering */ \
  if (ind_typ_stk.size() == 1) {  \
    return false;                 \
  }                               \
  pop_ind();                      \
}
#define PUSH_IND(TYP, LEN) push_ind(TYP, LEN)
#define PUSH_BGN_IND(TYP) {       \
  if (has_tab_ind) return false;  \
  push_ind(TYP, bgn_col);         \
}
#define MAY_PUSH_IMP_IND(TYP) {     \
  if (cur_ind != blk_imp_col) {     \
    if (blk_imp_tab) return false;  \
    push_ind(IND_MAP, blk_imp_col); \
  }                                 \
}
#define MAY_PUSH_SPC_SEQ_IND() { \
  if (cur_ind_typ == IND_MAP) {  \
    push_ind(IND_SEQ, bgn_col);  \
  }                              \
}
#define MAY_UPD_IMP_COL() {     \
  if (blk_imp_row != bgn_row) { \
    blk_imp_row = bgn_row;      \
    blk_imp_col = bgn_col;      \
    blk_imp_tab = has_tab_ind;  \
  }                             \
}
#define UPD_SCH_STT() {                              \
  sch_stt = adv_sch_stt(sch_stt, cur_chr, &rlt_sch); \
}
#define SGL_PLN_SYM(POS, CTX) (                 \
  rlt_sch == RS_NUL ? POS##_SGL_PLN_NUL_##CTX : \
  rlt_sch == RS_BOL ? POS##_SGL_PLN_BOL_##CTX : \
  rlt_sch == RS_INT ? POS##_SGL_PLN_INT_##CTX : \
  rlt_sch == RS_FLT ? POS##_SGL_PLN_FLT_##CTX : \
  POS##_SGL_PLN_STR_##CTX                       \
)

struct Scanner {
  int16_t row;
  int16_t col;
  int16_t blk_imp_row;
  int16_t blk_imp_col;
  int16_t blk_imp_tab;
  vector<int16_t> ind_typ_stk;
  vector<int16_t> ind_len_stk;

  // temp
  int16_t end_row;
  int16_t end_col;
  int16_t cur_row;
  int16_t cur_col;
  int32_t cur_chr;
  int8_t sch_stt;
  ResultSchema rlt_sch;

  Scanner() {
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    buffer[i++] = row;
    buffer[i++] = col;
    buffer[i++] = blk_imp_row;
    buffer[i++] = blk_imp_col;
    buffer[i++] = blk_imp_tab;
    vector<int16_t>::iterator
      typ_itr = ind_typ_stk.begin() + 1,
      typ_end = ind_typ_stk.end(),
      len_itr = ind_len_stk.begin() + 1;
    for (; typ_itr != typ_end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++typ_itr, ++len_itr) {
      buffer[i++] = *typ_itr;
      buffer[i++] = *len_itr;
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    row = 0;
    col = 0;
    blk_imp_row = -1;
    blk_imp_col = -1;
    blk_imp_tab = 0;
    ind_typ_stk.clear();
    ind_typ_stk.push_back(IND_ROT);
    ind_len_stk.clear();
    ind_len_stk.push_back(-1);
    if (length > 0) {
      size_t i = 0;
      row = buffer[i++];
      col = buffer[i++];
      blk_imp_row = buffer[i++];
      blk_imp_col = buffer[i++];
      blk_imp_tab = buffer[i++];
      while (i < length) {
        ind_typ_stk.push_back(buffer[i++]);
        ind_len_stk.push_back(buffer[i++]);
      }
    }
  }

  void adv(TSLexer *lexer) {
    cur_col++;
    cur_chr = lexer->lookahead;
    lexer->advance(lexer, false);
  }

  void adv_nwl(TSLexer *lexer) {
    cur_row++;
    cur_col = 0;
    cur_chr = lexer->lookahead;
    lexer->advance(lexer, false);
  }

  void skp(TSLexer *lexer) {
    cur_col++;
    cur_chr = lexer->lookahead;
    lexer->advance(lexer, true);
  }

  void skp_nwl(TSLexer *lexer) {
    cur_row++;
    cur_col = 0;
    cur_chr = lexer->lookahead;
    lexer->advance(lexer, true);
  }

  void mrk_end(TSLexer *lexer) {
    end_row = cur_row;
    end_col = cur_col;
    lexer->mark_end(lexer);
  }

  void init() {
    cur_row = row;
    cur_col = col;
    cur_chr = 0;
    sch_stt = 0;
    rlt_sch = RS_STR;
  }

  void flush() {
    row = end_row;
    col = end_col;
  }

  void pop_ind() {
    ind_len_stk.pop_back();
    ind_typ_stk.pop_back();
  }

  void push_ind(int16_t typ, int16_t len) {
    ind_len_stk.push_back(len);
    ind_typ_stk.push_back(typ);
  }

  bool is_wsp(int32_t c) {
    return c == ' ' || c == '\t';
  }

  bool is_nwl(int32_t c) {
    return c == '\r' || c == '\n';
  }

  bool is_wht(int32_t c) {
    return is_wsp(c) || is_nwl(c) || c == 0;
  }

  bool is_ns_dec_digit(int32_t c) {
    return c >= '0' && c <= '9';
  }

  bool is_ns_hex_digit(int32_t c) {
    return is_ns_dec_digit(c)
        || (c >= 'a' && c <= 'f')
        || (c >= 'A' && c <= 'F');
  }

  bool is_ns_word_char(int32_t c) {
    return c == '-'
        || (c >= '0' && c <= '9')
        || (c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z');
  }

  bool is_nb_json(int32_t c) {
    return c == 0x09 || (c >= 0x20 && c <= 0x10ffff);
  }

  bool is_nb_double_char(int32_t c) {
    return is_nb_json(c) && c != '\\' && c != '"';
  }

  bool is_nb_single_char(int32_t c) {
    return is_nb_json(c) && c != '\'';
  }

  bool is_ns_char(int32_t c) {
    return (c >= 0x21 && c <= 0x7e)
        || c == 0x85
        || (c >= 0xa0 && c <= 0xd7ff)
        || (c >= 0xe000 && c <= 0xfefe)
        || (c >= 0xff00 && c <= 0xfffd)
        || (c >= 0x10000 && c <= 0x10ffff);
  }

  bool is_c_indicator(int32_t c) {
    return c == '-' || c == '?' || c == ':' || c == ',' || c == '[' || c == ']' || c == '{'  || c == '}'
        || c == '#' || c == '&' || c == '*' || c == '!' || c == '|' || c == '>' || c == '\'' || c == '"'
        || c == '%' || c == '@' || c == '`';
  }

  bool is_c_flow_indicator(int32_t c) {
    return c == ',' || c == '[' || c == ']' || c == '{' || c == '}';
  }

  bool is_plain_safe_in_block(int32_t c) {
    return is_ns_char(c);
  }

  bool is_plain_safe_in_flow(int32_t c) {
    return is_ns_char(c) && !is_c_flow_indicator(c);
  }

  bool is_ns_uri_char(int32_t c) {
    return is_ns_word_char(c)
        || c == '#' || c == ';' || c == '/'  || c == '?' || c == ':' || c == '@' || c == '&'
        || c == '=' || c == '+' || c == '$'  || c == ',' || c == '_' || c == '.' || c == '!'
        || c == '~' || c == '*' || c == '\'' || c == '(' || c == ')' || c == '[' || c == ']';
  }

  bool is_ns_tag_char(int32_t c) {
    return is_ns_word_char(c)
        || c == '#' || c == ';' || c == '/'  || c == '?' || c == ':' || c == '@' || c == '&'
        || c == '=' || c == '+' || c == '$'  || c == '_' || c == '.'
        || c == '~' || c == '*' || c == '\'' || c == '(' || c == ')';
  }

  bool is_ns_anchor_char(int32_t c) {
    return is_ns_char(c) && !is_c_flow_indicator(c);
  }

  char scn_uri_esc(TSLexer *lexer) {
    if (LKA != '%') return SCN_STOP;
    MRK_END();
    ADV();
    if (!is_ns_hex_digit(LKA)) return SCN_FAIL;
    ADV();
    if (!is_ns_hex_digit(LKA)) return SCN_FAIL;
    ADV();
    return SCN_SUCC;
  }

  char scn_ns_uri_char(TSLexer *lexer) {
    if (is_ns_uri_char(LKA)) {ADV(); return SCN_SUCC;}
    return scn_uri_esc(lexer);
  }

  char scn_ns_tag_char(TSLexer *lexer) {
    if (is_ns_tag_char(LKA)) {ADV(); return SCN_SUCC;}
    return scn_uri_esc(lexer);
  }

  bool scn_dir_bgn(TSLexer *lexer) {
    ADV();
    if (LKA == 'Y') {
      ADV();
      if (LKA == 'A') {
        ADV();
        if (LKA == 'M') {
          ADV();
          if (LKA == 'L') {
            ADV();
            if (is_wht(LKA)) {
              MRK_END();
              RET_SYM(S_DIR_YML_BGN);
            }
          }
        }
      }
    } else if (LKA == 'T') {
      ADV();
      if (LKA == 'A') {
        ADV();
        if (LKA == 'G') {
          ADV();
          if (is_wht(LKA)) {
            MRK_END();
            RET_SYM(S_DIR_TAG_BGN);
          }
        }
      }
    }
    for (;;) {
      if (!is_ns_char(LKA)) break;
      ADV();
    }
    if (cur_col > 1 && is_wht(LKA)) {
      MRK_END();
      RET_SYM(S_DIR_RSV_BGN);
    }
    return false;
  }

  bool scn_dir_yml_ver(TSLexer *lexer, TSSymbol result_symbol) {
    uint16_t n1 = 0;
    uint16_t n2 = 0;
    while (is_ns_dec_digit(LKA)) {ADV();n1++;}
    if (LKA != '.') return false;
    ADV();
    while (is_ns_dec_digit(LKA)) {ADV();n2++;}
    if (n1 == 0 || n2 == 0) return false;
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_tag_hdl_tal(TSLexer *lexer) {
    if (LKA == '!') {ADV();return true;}
    uint16_t n = 0;
    while (is_ns_word_char(LKA)) {ADV();n++;}
    if (n == 0) return true;
    if (LKA == '!') {ADV();return true;}
    return false;
  }

  bool scn_dir_tag_hdl(TSLexer *lexer, TSSymbol result_symbol) {
    if (LKA == '!') {
      ADV();
      if (scn_tag_hdl_tal(lexer)) {MRK_END();RET_SYM(result_symbol);}
    }
    return false;
  }

  bool scn_dir_tag_pfx(TSLexer *lexer, TSSymbol result_symbol) {
    if (LKA == '!') ADV();
    else if (scn_ns_tag_char(lexer) == SCN_SUCC);
    else return false;
    for (;;) {
      switch (scn_ns_uri_char(lexer)) {
        case SCN_STOP:
          MRK_END();
        case SCN_FAIL:
          RET_SYM(result_symbol);
      }
    }
  }

  bool scn_dir_rsv_prm(TSLexer *lexer, TSSymbol result_symbol) {
    if (!is_ns_char(LKA)) return false;
    ADV();
    while (is_ns_char(LKA)) ADV();
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_tag(TSLexer *lexer, TSSymbol result_symbol) {
    if (LKA != '!') return false;
    ADV();
    if (is_wht(LKA)) {MRK_END();RET_SYM(result_symbol);}
    if (LKA == '<') {
      ADV();
      if (scn_ns_uri_char(lexer) != SCN_SUCC) return false;
      for (;;) {
        switch (scn_ns_uri_char(lexer)) {
          case SCN_STOP:
            if (LKA == '>') {
              ADV();
              MRK_END();
              RET_SYM(result_symbol);
            }
          case SCN_FAIL:
            return false;
        }
      }
    } else {
      if (scn_tag_hdl_tal(lexer) && scn_ns_tag_char(lexer) != SCN_SUCC) return false;
      for (;;) {
        switch (scn_ns_tag_char(lexer)) {
          case SCN_STOP:
            MRK_END();
          case SCN_FAIL:
            RET_SYM(result_symbol);
        }
      }
    }
    return false;
  }

  bool scn_acr_bgn(TSLexer *lexer, TSSymbol result_symbol) {
    if (LKA != '&') return false;
    ADV();
    if (!is_ns_anchor_char(LKA)) return false;
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_acr_ctn(TSLexer *lexer, TSSymbol result_symbol) {
    while (is_ns_anchor_char(LKA)) ADV();
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_als_bgn(TSLexer *lexer, TSSymbol result_symbol) {
    if (LKA != '*') return false;
    ADV();
    if (!is_ns_anchor_char(LKA)) return false;
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_als_ctn(TSLexer *lexer, TSSymbol result_symbol) {
    while (is_ns_anchor_char(LKA)) ADV();
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_dqt_esc_seq(TSLexer *lexer, TSSymbol result_symbol) {
    uint16_t i;
    switch (LKA) {
      case '0': case 'a': case 'b': case 't': case '\t': case 'n': case 'v':
      case 'r': case 'e': case ' ': case '"': case '/': case '\\': case 'N':
      case '_': case 'L': case 'P':
        ADV();
        break;
      case 'U':
        ADV();
        for (i = 0; i < 8; i++) if (is_ns_hex_digit(LKA)) ADV(); else return false;
        break;
      case 'u':
        ADV();
        for (i = 0; i < 4; i++) if (is_ns_hex_digit(LKA)) ADV(); else return false;
        break;
      case 'x':
        ADV();
        for (i = 0; i < 2; i++) if (is_ns_hex_digit(LKA)) ADV(); else return false;
        break;
      default:
        return false;
    }
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_dqt_str_cnt(TSLexer *lexer, TSSymbol result_symbol) {
    if (!is_nb_double_char(LKA)) return false;
    if (cur_col == 0 && scn_drs_doc_end(lexer)) {
      MRK_END();
      RET_SYM(cur_chr == '-' ? S_DRS_END : S_DOC_END);
    } else ADV();
    while (is_nb_double_char(LKA)) ADV();
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_sqt_str_cnt(TSLexer *lexer, TSSymbol result_symbol) {
    if (!is_nb_single_char(LKA)) return false;
    if (cur_col == 0 && scn_drs_doc_end(lexer)) {
      MRK_END();
      RET_SYM(cur_chr == '-' ? S_DRS_END : S_DOC_END);
    } else ADV();
    while (is_nb_single_char(LKA)) ADV();
    MRK_END();
    RET_SYM(result_symbol);
  }

  bool scn_blk_str_bgn(TSLexer *lexer, TSSymbol result_symbol) {
    if (LKA != '|' && LKA != '>') return false;
    ADV();
    int16_t cur_ind = ind_len_stk.back();
    int16_t ind = -1;
    if (LKA >= '1' && LKA <= '9') {
      ind = LKA - '1';
      ADV();
      if (LKA == '+' || LKA == '-') {
        ADV();
      }
    } else if (LKA == '+' || LKA == '-') {
      ADV();
      if (LKA >= '1' && LKA <= '9') {
        ind = LKA - '1';
        ADV();
      }
    }
    if (!is_wht(LKA)) return false;
    MRK_END();
    if (ind != -1) ind += cur_ind;
    else {
      ind = cur_ind;
      while (is_wsp(LKA)) ADV();
      if (LKA == '#') {
        ADV();
        while (!is_nwl(LKA) && LKA != 0) ADV();
      }
      if (is_nwl(LKA)) ADV_NWL();
      while (LKA != 0) {
        if (LKA == ' ') ADV();
        else if (is_nwl(LKA)) {
          if (cur_col - 1 < ind) break;
          ind = cur_col - 1;
          ADV_NWL();
        } else {
          if (cur_col - 1 > ind)  ind = cur_col - 1;
          break;
        }
      }
    }
    PUSH_IND(IND_STR, ind);
    RET_SYM(result_symbol);
  }

  bool scn_blk_str_cnt(TSLexer *lexer, TSSymbol result_symbol) {
    if (!is_ns_char(LKA)) return false;
    if (cur_col == 0 && scn_drs_doc_end(lexer)) {POP_IND();RET_SYM(BL);}
    else ADV();
    MRK_END();
    for (;;) {
      if (is_ns_char(LKA)) {
        ADV();
        while (is_ns_char(LKA)) ADV();
        MRK_END();
      }
      if (is_wsp(LKA)) {
        ADV();
        while (is_wsp(LKA)) ADV();
      } else break;
    }
    RET_SYM(result_symbol);
  }

  char scn_pln_cnt(TSLexer *lexer, bool (Scanner::*is_plain_safe)(int32_t)) {
    bool is_cur_saf = (this->*is_plain_safe)(cur_chr);
    bool is_lka_wsp = is_wsp(LKA);
    bool is_lka_saf = (this->*is_plain_safe)(LKA);
    if (is_lka_saf || is_lka_wsp) {
      for (;;) {
        if (is_lka_saf && LKA != '#' && LKA != ':') {ADV();MRK_END();UPD_SCH_STT();}
        else if (is_cur_saf && LKA == '#') {ADV();MRK_END();UPD_SCH_STT();}
        else if (is_lka_wsp) {ADV();UPD_SCH_STT();}
        else if (LKA == ':') ADV(); // check later
        else break;

        is_cur_saf = is_lka_saf;
        is_lka_wsp = is_wsp(LKA);
        is_lka_saf = (this->*is_plain_safe)(LKA);

        if (cur_chr == ':') {
          if (is_lka_saf) {MRK_END();UPD_SCH_STT();}
          else return SCN_FAIL;
        }
      }
    } else return SCN_STOP;
    return SCN_SUCC;
  }

  bool scn_drs_doc_end(TSLexer *lexer) {
    if (LKA != '-' && LKA != '.') return false;
    int32_t delimeter = LKA;
    ADV();
    if (LKA == delimeter) {
      ADV();
      if (LKA == delimeter) {
        ADV();
        if (is_wht(LKA)) return true;
      }
    }
    MRK_END();
    return false;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    init();
    MRK_END();

    bool allow_comment = !(VLD[R_DQT_STR_CTN] || VLD[BR_DQT_STR_CTN] || VLD[R_SQT_STR_CTN] || VLD[BR_SQT_STR_CTN]);

    vector<int16_t>::reverse_iterator ind_ptr = ind_len_stk.rbegin();
    vector<int16_t>::reverse_iterator ind_end = ind_len_stk.rend();
    int16_t cur_ind = *ind_ptr++;
    int16_t prt_ind = ind_ptr == ind_end ? -1 : *ind_ptr;
    int16_t cur_ind_typ = ind_typ_stk.back();

    bool has_tab_ind = false;
    int16_t leading_spaces = 0;

    for (;;) {
      if (LKA == ' ') {
        if (!has_tab_ind) leading_spaces++;
        SKP();
      } else if (LKA == '\t') {
        has_tab_ind = true;
        SKP();
      } else if (is_nwl(LKA)) {
        has_tab_ind = false;
        leading_spaces = 0;
        SKP_NWL();
      } else if (allow_comment && LKA == '#') {
        if (VLD[BR_BLK_STR_CTN] && VLD[BL] && cur_col <= cur_ind) {POP_IND();RET_SYM(BL);}
        if (
          VLD[BR_BLK_STR_CTN]
          ? cur_row == row
          : cur_col == 0 || cur_row != row || cur_col > col
        ) {
          ADV();
          while (!is_nwl(LKA) && LKA != 0) ADV();
          MRK_END();
          RET_SYM(COMMENT);
        } else break;
      } else break;
    }

    if (LKA == 0) {
      if (VLD[BL]) {MRK_END();POP_IND();RET_SYM(BL)}
      if (VLD[END_OF_FILE]) {MRK_END();RET_SYM(END_OF_FILE)}
      return false;
    }

    int16_t bgn_row = cur_row;
    int16_t bgn_col = cur_col;
    int32_t bgn_chr = LKA;

    if (VLD[BL] && bgn_col <= cur_ind && !has_tab_ind) {
      if (
        cur_ind == prt_ind && cur_ind_typ == IND_SEQ
        ? bgn_col < cur_ind || LKA != '-'
        : bgn_col <= prt_ind || cur_ind_typ == IND_STR
      ) {POP_IND();RET_SYM(BL);}
    }

    bool has_nwl = cur_row > row;
    bool is_r = !has_nwl;
    bool is_br = has_nwl && leading_spaces > cur_ind;
    bool is_b = has_nwl && leading_spaces == cur_ind && !has_tab_ind;
    bool is_s = bgn_col == 0;

    if (VLD[R_DIR_YML_VER] && is_r) return scn_dir_yml_ver(lexer, R_DIR_YML_VER);
    if (VLD[R_DIR_TAG_HDL] && is_r) return scn_dir_tag_hdl(lexer, R_DIR_TAG_HDL);
    if (VLD[R_DIR_TAG_PFX] && is_r) return scn_dir_tag_pfx(lexer, R_DIR_TAG_PFX);
    if (VLD[R_DIR_RSV_PRM] && is_r) return scn_dir_rsv_prm(lexer, R_DIR_RSV_PRM);
    if (VLD[BR_BLK_STR_CTN] && is_br && scn_blk_str_cnt(lexer, BR_BLK_STR_CTN)) return true;

    if (
      (VLD[R_DQT_STR_CTN] && is_r && scn_dqt_str_cnt(lexer, R_DQT_STR_CTN))
      || (VLD[BR_DQT_STR_CTN] && is_br && scn_dqt_str_cnt(lexer, BR_DQT_STR_CTN))
    ) return true;

    if (
      (VLD[R_SQT_STR_CTN] && is_r && scn_sqt_str_cnt(lexer, R_SQT_STR_CTN))
      || (VLD[BR_SQT_STR_CTN] && is_br && scn_sqt_str_cnt(lexer, BR_SQT_STR_CTN))
    ) return true;

    if (VLD[R_ACR_CTN] && is_r) return scn_acr_ctn(lexer, R_ACR_CTN);
    if (VLD[R_ALS_CTN] && is_r) return scn_als_ctn(lexer, R_ALS_CTN);

    if (LKA == '%') {
      if (VLD[S_DIR_YML_BGN] && is_s) return scn_dir_bgn(lexer);
    } else if (LKA == '*') {
      if (VLD[R_ALS_BGN] && is_r) {MAY_UPD_IMP_COL();return scn_als_bgn(lexer, R_ALS_BGN);}
      if (VLD[BR_ALS_BGN] && is_br) {MAY_UPD_IMP_COL();return scn_als_bgn(lexer, BR_ALS_BGN);}
      if (VLD[B_ALS_BGN] && is_b) {MAY_UPD_IMP_COL();return scn_als_bgn(lexer, B_ALS_BGN);}
    } else if (LKA == '&') {
      if (VLD[R_ACR_BGN] && is_r) {MAY_UPD_IMP_COL();return scn_acr_bgn(lexer, R_ACR_BGN);}
      if (VLD[BR_ACR_BGN] && is_br) {MAY_UPD_IMP_COL();return scn_acr_bgn(lexer, BR_ACR_BGN);}
      if (VLD[B_ACR_BGN] && is_b) {MAY_UPD_IMP_COL();return scn_acr_bgn(lexer, B_ACR_BGN);}
    } else if (LKA == '!') {
      if (VLD[R_TAG] && is_r) {MAY_UPD_IMP_COL();return scn_tag(lexer, R_TAG);}
      if (VLD[BR_TAG] && is_br) {MAY_UPD_IMP_COL();return scn_tag(lexer, BR_TAG);}
      if (VLD[B_TAG] && is_b) {MAY_UPD_IMP_COL();return scn_tag(lexer, B_TAG);}
    } else if (LKA == '[') {
      if (VLD[R_FLW_SEQ_BGN] && is_r) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(R_FLW_SEQ_BGN)}
      if (VLD[BR_FLW_SEQ_BGN] && is_br) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(BR_FLW_SEQ_BGN)}
      if (VLD[B_FLW_SEQ_BGN] && is_b) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(B_FLW_SEQ_BGN)}
    } else if (LKA == ']') {
      if (VLD[R_FLW_SEQ_END] && is_r) {ADV();MRK_END();RET_SYM(R_FLW_SEQ_END)}
      if (VLD[BR_FLW_SEQ_END] && is_br) {ADV();MRK_END();RET_SYM(BR_FLW_SEQ_END)}
    } else if (LKA == '{') {
      if (VLD[R_FLW_MAP_BGN] && is_r) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(R_FLW_MAP_BGN)}
      if (VLD[BR_FLW_MAP_BGN] && is_br) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(BR_FLW_MAP_BGN)}
      if (VLD[B_FLW_MAP_BGN] && is_b) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(B_FLW_MAP_BGN)}
    } else if (LKA == '}') {
      if (VLD[R_FLW_MAP_END] && is_r) {ADV();MRK_END();RET_SYM(R_FLW_MAP_END)}
      if (VLD[BR_FLW_MAP_END] && is_br) {ADV();MRK_END();RET_SYM(BR_FLW_MAP_END)}
    } else if (LKA == ',') {
      if (VLD[R_FLW_SEP_BGN] && is_r) {ADV();MRK_END();RET_SYM(R_FLW_SEP_BGN)}
      if (VLD[BR_FLW_SEP_BGN] && is_br) {ADV();MRK_END();RET_SYM(BR_FLW_SEP_BGN)}
    } else if (LKA == '"') {
      if (VLD[R_DQT_STR_BGN] && is_r) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(R_DQT_STR_BGN)}
      if (VLD[BR_DQT_STR_BGN] && is_br) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(BR_DQT_STR_BGN)}
      if (VLD[B_DQT_STR_BGN] && is_b) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(B_DQT_STR_BGN)}
      if (VLD[R_DQT_STR_END] && is_r) {ADV();MRK_END();RET_SYM(R_DQT_STR_END)}
      if (VLD[BR_DQT_STR_END] && is_br) {ADV();MRK_END();RET_SYM(BR_DQT_STR_END)}
    } else if (LKA == '\'') {
      if (VLD[R_SQT_STR_BGN] && is_r) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(R_SQT_STR_BGN)}
      if (VLD[BR_SQT_STR_BGN] && is_br) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(BR_SQT_STR_BGN)}
      if (VLD[B_SQT_STR_BGN] && is_b) {MAY_UPD_IMP_COL();ADV();MRK_END();RET_SYM(B_SQT_STR_BGN)}
      if (VLD[R_SQT_STR_END] && is_r) {
        ADV();
        if (LKA == '\'') {ADV();MRK_END();RET_SYM(R_SQT_ESC_SQT)}
        else {MRK_END();RET_SYM(R_SQT_STR_END)}
      }
      if (VLD[BR_SQT_STR_END] && is_br) {
        ADV();
        if (LKA == '\'') {ADV();MRK_END();RET_SYM(BR_SQT_ESC_SQT)}
        else {MRK_END();RET_SYM(BR_SQT_STR_END)}
      }
    } else if (LKA == '?') {
      bool is_r_blk_key_bgn = VLD[R_BLK_KEY_BGN] && is_r;
      bool is_br_blk_key_bgn = VLD[BR_BLK_KEY_BGN] && is_br;
      bool is_b_blk_key_bgn = VLD[B_BLK_KEY_BGN] && is_b;
      bool is_r_flw_key_bgn = VLD[R_FLW_KEY_BGN] && is_r;
      bool is_br_flw_key_bgn = VLD[BR_FLW_KEY_BGN] && is_br;
      if (is_r_blk_key_bgn || is_br_blk_key_bgn || is_b_blk_key_bgn || is_r_flw_key_bgn || is_br_flw_key_bgn) {
        ADV();
        if (is_wht(LKA)) {
          MRK_END();
          if (is_r_blk_key_bgn) {PUSH_BGN_IND(IND_MAP);RET_SYM(R_BLK_KEY_BGN);}
          if (is_br_blk_key_bgn) {PUSH_BGN_IND(IND_MAP);RET_SYM(BR_BLK_KEY_BGN);}
          if (is_b_blk_key_bgn) RET_SYM(B_BLK_KEY_BGN);
          if (is_r_flw_key_bgn) RET_SYM(R_FLW_KEY_BGN);
          if (is_br_flw_key_bgn) RET_SYM(BR_FLW_KEY_BGN);
        }
      }
    } else if (LKA == ':') {
      if (VLD[R_FLW_JSV_BGN] && is_r) {ADV();MRK_END();RET_SYM(R_FLW_JSV_BGN);}
      if (VLD[BR_FLW_JSV_BGN] && is_br) {ADV();MRK_END();RET_SYM(BR_FLW_JSV_BGN);}
      bool is_r_blk_val_bgn = VLD[R_BLK_VAL_BGN] && is_r;
      bool is_br_blk_val_bgn = VLD[BR_BLK_VAL_BGN] && is_br;
      bool is_b_blk_val_bgn = VLD[B_BLK_VAL_BGN] && is_b;
      bool is_r_blk_imp_bgn = VLD[R_BLK_IMP_BGN] && is_r;
      bool is_r_flw_njv_bgn = VLD[R_FLW_NJV_BGN] && is_r;
      bool is_br_flw_njv_bgn = VLD[BR_FLW_NJV_BGN] && is_br;
      if (is_r_blk_val_bgn || is_br_blk_val_bgn || is_b_blk_val_bgn || is_r_blk_imp_bgn || is_r_flw_njv_bgn || is_br_flw_njv_bgn) {
        ADV();
        bool is_lka_wht = is_wht(LKA);
        if (is_lka_wht) {
          if (is_r_blk_val_bgn) {PUSH_BGN_IND(IND_MAP);MRK_END();RET_SYM(R_BLK_VAL_BGN);}
          if (is_br_blk_val_bgn) {PUSH_BGN_IND(IND_MAP);MRK_END();RET_SYM(BR_BLK_VAL_BGN);}
          if (is_b_blk_val_bgn) {MRK_END();RET_SYM(B_BLK_VAL_BGN);}
          if (is_r_blk_imp_bgn) {MAY_PUSH_IMP_IND();MRK_END();RET_SYM(R_BLK_IMP_BGN);}
        }
        if (is_lka_wht || LKA == ',' || LKA == ']' || LKA == '}') {
          if (is_r_flw_njv_bgn) {MRK_END();RET_SYM(R_FLW_NJV_BGN);}
          if (is_br_flw_njv_bgn) {MRK_END();RET_SYM(BR_FLW_NJV_BGN);}
        }
      }
    } else if (LKA == '-') {
      bool is_r_blk_seq_bgn = VLD[R_BLK_SEQ_BGN] && is_r;
      bool is_br_blk_seq_bgn = VLD[BR_BLK_SEQ_BGN] && is_br;
      bool is_b_blk_seq_bgn = VLD[B_BLK_SEQ_BGN] && is_b;
      bool is_s_drs_end = is_s;
      if (is_r_blk_seq_bgn || is_br_blk_seq_bgn || is_b_blk_seq_bgn || is_s_drs_end) {
        ADV();
        if (is_wht(LKA)) {
          if (is_r_blk_seq_bgn) {PUSH_BGN_IND(IND_SEQ);MRK_END();RET_SYM(R_BLK_SEQ_BGN)}
          if (is_br_blk_seq_bgn) {PUSH_BGN_IND(IND_SEQ);MRK_END();RET_SYM(BR_BLK_SEQ_BGN)}
          if (is_b_blk_seq_bgn) {MAY_PUSH_SPC_SEQ_IND();MRK_END();RET_SYM(B_BLK_SEQ_BGN)}
        } else if (LKA == '-' && is_s_drs_end) {
          ADV();
          if (LKA == '-') {
            ADV();
            if (is_wht(LKA)) {
              if (VLD[BL]) {POP_IND();RET_SYM(BL);}
              MRK_END();
              RET_SYM(S_DRS_END);
            }
          }
        }
      }
    } else if (LKA == '.') {
      if (is_s) {
        ADV();
        if (LKA == '.') {
          ADV();
          if (LKA == '.') {
            ADV();
            if (is_wht(LKA)) {
              if (VLD[BL]) {POP_IND();RET_SYM(BL);}
              MRK_END();
              RET_SYM(S_DOC_END);
            }
          }
        }
      }
    } else if (LKA == '\\') {
      bool is_r_dqt_esc_nwl = VLD[R_DQT_ESC_NWL] && is_r;
      bool is_br_dqt_esc_nwl = VLD[BR_DQT_ESC_NWL] && is_br;
      bool is_r_dqt_esc_seq = VLD[R_DQT_ESC_SEQ] && is_r;
      bool is_br_dqt_esc_seq = VLD[BR_DQT_ESC_SEQ] && is_br;
      if (is_r_dqt_esc_nwl || is_br_dqt_esc_nwl || is_r_dqt_esc_seq || is_br_dqt_esc_seq) {
        ADV();
        if (is_nwl(LKA)) {
          if (is_r_dqt_esc_nwl) {MRK_END();RET_SYM(R_DQT_ESC_NWL)}
          if (is_br_dqt_esc_nwl) {MRK_END();RET_SYM(BR_DQT_ESC_NWL)}
        }
        if (is_r_dqt_esc_seq) return scn_dqt_esc_seq(lexer, R_DQT_ESC_SEQ);
        if (is_br_dqt_esc_seq) return scn_dqt_esc_seq(lexer, BR_DQT_ESC_SEQ);
        return false;
      }
    } else if (LKA == '|') {
      if (VLD[R_BLK_LIT_BGN] && is_r) return scn_blk_str_bgn(lexer, R_BLK_LIT_BGN);
      if (VLD[BR_BLK_LIT_BGN] && is_br) return scn_blk_str_bgn(lexer, BR_BLK_LIT_BGN);
    } else if (LKA == '>') {
      if (VLD[R_BLK_FLD_BGN] && is_r) return scn_blk_str_bgn(lexer, R_BLK_FLD_BGN);
      if (VLD[BR_BLK_FLD_BGN] && is_br) return scn_blk_str_bgn(lexer, BR_BLK_FLD_BGN);
    }

    bool maybe_sgl_pln_blk = (VLD[R_SGL_PLN_STR_BLK] && is_r) || (VLD[BR_SGL_PLN_STR_BLK] && is_br) || (VLD[B_SGL_PLN_STR_BLK] && is_b);
    bool maybe_sgl_pln_flw = (VLD[R_SGL_PLN_STR_FLW] && is_r) || (VLD[BR_SGL_PLN_STR_FLW] && is_br);
    bool maybe_mtl_pln_blk = (VLD[R_MTL_PLN_STR_BLK] && is_r) || (VLD[BR_MTL_PLN_STR_BLK] && is_br);
    bool maybe_mtl_pln_flw = (VLD[R_MTL_PLN_STR_FLW] && is_r) || (VLD[BR_MTL_PLN_STR_FLW] && is_br);

    if (maybe_sgl_pln_blk || maybe_sgl_pln_flw || maybe_mtl_pln_blk || maybe_mtl_pln_flw) {
      bool is_in_blk = maybe_sgl_pln_blk || maybe_mtl_pln_blk;
      bool (Scanner::*is_plain_safe)(int32_t) = is_in_blk ? &Scanner::is_plain_safe_in_block : &Scanner::is_plain_safe_in_flow;
      if (cur_col - bgn_col == 0) ADV();
      if (cur_col - bgn_col == 1) {
        bool is_plain_first =
          (is_ns_char(bgn_chr) && !is_c_indicator(bgn_chr))
          || ((bgn_chr == '-' || bgn_chr == '?' || bgn_chr == ':')
            && (this->*is_plain_safe)(LKA));
        if (!is_plain_first) return false;
        UPD_SCH_STT();
      } else {
        // no need to check the following cases:
        // ..X
        // ...X
        // --X
        // ---X
        // X: lookahead
        sch_stt = SCH_STT_FRZ; // must be RS_STR
      }

      MRK_END();

      for (;;) {
        if (!is_nwl(LKA)) {
          if (scn_pln_cnt(lexer, is_plain_safe) != SCN_SUCC) break;
        }
        if (LKA == 0 || !is_nwl(LKA)) break;
        for (;;) {
          if (is_nwl(LKA)) ADV_NWL();
          else if (is_wsp(LKA)) ADV();
          else break;
        }
        if (LKA == 0 || cur_col <= cur_ind) break;
        if (cur_col == 0 && scn_drs_doc_end(lexer)) break;
      }

      if (end_row == bgn_row) {
        if (maybe_sgl_pln_blk) {MAY_UPD_IMP_COL();RET_SYM(is_r ? SGL_PLN_SYM(R, BLK) : is_br ? SGL_PLN_SYM(BR, BLK) : SGL_PLN_SYM(B, BLK));}
        if (maybe_sgl_pln_flw) RET_SYM(is_r ? SGL_PLN_SYM(R, FLW) : SGL_PLN_SYM(BR, FLW));
      } else {
        if (maybe_mtl_pln_blk) {MAY_UPD_IMP_COL();RET_SYM(is_r ? R_MTL_PLN_STR_BLK : BR_MTL_PLN_STR_BLK);}
        if (maybe_mtl_pln_flw) RET_SYM(is_r ? R_MTL_PLN_STR_FLW : BR_MTL_PLN_STR_FLW);
      }

      return false;
    }

    return false;
  }
};

}

extern "C" {

void *tree_sitter_yaml_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_yaml_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_yaml_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_yaml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_yaml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

}
