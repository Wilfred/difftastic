#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

enum TagType : char {
  // Void tags
  AREA,
  BASE,
  BASEFONT,
  BGSOUND,
  BR,
  COL,
  COMMAND,
  EMBED,
  FRAME,
  HR,
  IMAGE,
  IMG,
  INPUT,
  ISINDEX,
  KEYGEN,
  LINK,
  MENUITEM,
  META,
  NEXTID,
  PARAM,
  SOURCE,
  TRACK,
  WBR,
  END_OF_VOID_TAGS,

  A,
  ABBR,
  ADDRESS,
  ARTICLE,
  ASIDE,
  AUDIO,
  B,
  BDI,
  BDO,
  BLOCKQUOTE,
  BODY,
  BUTTON,
  CANVAS,
  CAPTION,
  CITE,
  CODE,
  COLGROUP,
  DATA,
  DATALIST,
  DD,
  DEL,
  DETAILS,
  DFN,
  DIALOG,
  DIV,
  DL,
  DT,
  EM,
  FIELDSET,
  FIGCAPTION,
  FIGURE,
  FOOTER,
  FORM,
  H1,
  H2,
  H3,
  H4,
  H5,
  H6,
  HEAD,
  HEADER,
  HGROUP,
  HTML,
  I,
  IFRAME,
  INS,
  KBD,
  LABEL,
  LEGEND,
  LI,
  MAIN,
  MAP,
  MARK,
  MATH,
  MENU,
  METER,
  NAV,
  NOSCRIPT,
  OBJECT,
  OL,
  OPTGROUP,
  OPTION,
  OUTPUT,
  P,
  PICTURE,
  PRE,
  PROGRESS,
  Q,
  RB,
  RP,
  RT,
  RTC,
  RUBY,
  S,
  SAMP,
  SCRIPT,
  SECTION,
  SELECT,
  SLOT,
  SMALL,
  SPAN,
  STRONG,
  STYLE,
  SUB,
  SUMMARY,
  SUP,
  SVG,
  TABLE,
  TBODY,
  TD,
  TEMPLATE,
  TEXTAREA,
  TFOOT,
  TH,
  THEAD,
  TIME,
  TITLE,
  TR,
  U,
  UL,
  VAR,
  VIDEO,

  CUSTOM,
};

static const unordered_map<string, TagType> TAG_TYPES_BY_TAG_NAME = {
  {"AREA", AREA},
  {"BASE", BASE},
  {"BASEFONT", BASEFONT},
  {"BGSOUND", BGSOUND},
  {"BR", BR},
  {"COL", COL},
  {"COMMAND", COMMAND},
  {"EMBED", EMBED},
  {"FRAME", FRAME},
  {"HR", HR},
  {"IMAGE", IMAGE},
  {"IMG", IMG},
  {"INPUT", INPUT},
  {"ISINDEX", ISINDEX},
  {"KEYGEN", KEYGEN},
  {"LINK", LINK},
  {"MENUITEM", MENUITEM},
  {"META", META},
  {"NEXTID", NEXTID},
  {"PARAM", PARAM},
  {"SOURCE", SOURCE},
  {"TRACK", TRACK},
  {"WBR", WBR},
  {"A", A},
  {"ABBR", ABBR},
  {"ADDRESS", ADDRESS},
  {"ARTICLE", ARTICLE},
  {"ASIDE", ASIDE},
  {"AUDIO", AUDIO},
  {"B", B},
  {"BDI", BDI},
  {"BDO", BDO},
  {"BLOCKQUOTE", BLOCKQUOTE},
  {"BODY", BODY},
  {"BUTTON", BUTTON},
  {"CANVAS", CANVAS},
  {"CAPTION", CAPTION},
  {"CITE", CITE},
  {"CODE", CODE},
  {"COLGROUP", COLGROUP},
  {"DATA", DATA},
  {"DATALIST", DATALIST},
  {"DD", DD},
  {"DEL", DEL},
  {"DETAILS", DETAILS},
  {"DFN", DFN},
  {"DIALOG", DIALOG},
  {"DIV", DIV},
  {"DL", DL},
  {"DT", DT},
  {"EM", EM},
  {"FIELDSET", FIELDSET},
  {"FIGCAPTION", FIGCAPTION},
  {"FIGURE", FIGURE},
  {"FOOTER", FOOTER},
  {"FORM", FORM},
  {"H1", H1},
  {"H2", H2},
  {"H3", H3},
  {"H4", H4},
  {"H5", H5},
  {"H6", H6},
  {"HEAD", HEAD},
  {"HEADER", HEADER},
  {"HGROUP", HGROUP},
  {"HTML", HTML},
  {"I", I},
  {"IFRAME", IFRAME},
  {"INS", INS},
  {"KBD", KBD},
  {"LABEL", LABEL},
  {"LEGEND", LEGEND},
  {"LI", LI},
  {"MAIN", MAIN},
  {"MAP", MAP},
  {"MARK", MARK},
  {"MATH", MATH},
  {"MENU", MENU},
  {"METER", METER},
  {"NAV", NAV},
  {"NOSCRIPT", NOSCRIPT},
  {"OBJECT", OBJECT},
  {"OL", OL},
  {"OPTGROUP", OPTGROUP},
  {"OPTION", OPTION},
  {"OUTPUT", OUTPUT},
  {"P", P},
  {"PICTURE", PICTURE},
  {"PRE", PRE},
  {"PROGRESS", PROGRESS},
  {"Q", Q},
  {"RB", RB},
  {"RP", RP},
  {"RT", RT},
  {"RTC", RTC},
  {"RUBY", RUBY},
  {"S", S},
  {"SAMP", SAMP},
  {"SCRIPT", SCRIPT},
  {"SECTION", SECTION},
  {"SELECT", SELECT},
  {"SLOT", SLOT},
  {"SMALL", SMALL},
  {"SPAN", SPAN},
  {"STRONG", STRONG},
  {"STYLE", STYLE},
  {"SUB", SUB},
  {"SUMMARY", SUMMARY},
  {"SUP", SUP},
  {"SVG", SVG},
  {"TABLE", TABLE},
  {"TBODY", TBODY},
  {"TD", TD},
  {"TEMPLATE", TEMPLATE},
  {"TEXTAREA", TEXTAREA},
  {"TFOOT", TFOOT},
  {"TH", TH},
  {"THEAD", THEAD},
  {"TIME", TIME},
  {"TITLE", TITLE},
  {"TR", TR},
  {"U", U},
  {"UL", UL},
  {"VAR", VAR},
  {"VIDEO", VIDEO},
};

static const bool PARAGRAPH_CANNOT_CONTAIN[CUSTOM + 1] = {
  [ADDRESS] = true,
  [ARTICLE] = true,
  [ASIDE] = true,
  [BLOCKQUOTE] = true,
  [DETAILS] = true,
  [DIV] = true,
  [DL] = true,
  [FIELDSET] = true,
  [FIGCAPTION] = true,
  [FIGURE] = true,
  [FOOTER] = true,
  [FORM] = true,
  [H1] = true,
  [H2] = true,
  [H3] = true,
  [H4] = true,
  [H5] = true,
  [H6] = true,
  [HEADER] = true,
  [HR] = true,
  [MAIN] = true,
  [NAV] = true,
  [OL] = true,
  [P] = true,
  [PRE] = true,
  [SECTION] = true,
};

struct Tag {
  TagType type;
  string custom_tag_name;

  bool operator==(const Tag &other) const {
    if (type != other.type) return false;
    if (type == TagType::CUSTOM && custom_tag_name != other.custom_tag_name) return false;
    return true;
  }

  inline bool is_void() const {
    return type < END_OF_VOID_TAGS;
  }

  inline bool is_raw() const {
    return type == SCRIPT || type == STYLE;
  }

  inline bool can_contain(const Tag &tag) {
    TagType child = tag.type;

    switch (type) {
      case LI: return child != LI;

      case DT:
      case DD:
        return child != DT && child != DD;

      case P:
        return !PARAGRAPH_CANNOT_CONTAIN[child];

      case COLGROUP:
        return child == COL;

      case RB:
      case RT:
      case RP:
        return child != RB && child != RT && child != RP;

      case OPTGROUP:
        return child != OPTGROUP;

      case TR:
        return child != TR;

      case TD:
      case TH:
        return child != TD && child != TH && child != TR;

      default:
        return true;
    }
  }

  static Tag for_name(const string &name) {
    auto type = TAG_TYPES_BY_TAG_NAME.find(name);
    if (type != TAG_TYPES_BY_TAG_NAME.end()) {
      return Tag { type->second, "" };
    }

    return Tag { CUSTOM, name };
  }
};
