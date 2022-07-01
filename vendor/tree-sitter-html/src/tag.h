#include <string>
#include <map>

using std::string;
using std::map;

enum TagType {
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


static const map<string, TagType> get_tag_map() {
  map<string, TagType> result;
#define TAG(name) result[#name] = name
  TAG(AREA);
  TAG(BASE);
  TAG(BASEFONT);
  TAG(BGSOUND);
  TAG(BR);
  TAG(COL);
  TAG(COMMAND);
  TAG(EMBED);
  TAG(FRAME);
  TAG(HR);
  TAG(IMAGE);
  TAG(IMG);
  TAG(INPUT);
  TAG(ISINDEX);
  TAG(KEYGEN);
  TAG(LINK);
  TAG(MENUITEM);
  TAG(META);
  TAG(NEXTID);
  TAG(PARAM);
  TAG(SOURCE);
  TAG(TRACK);
  TAG(WBR);
  TAG(A);
  TAG(ABBR);
  TAG(ADDRESS);
  TAG(ARTICLE);
  TAG(ASIDE);
  TAG(AUDIO);
  TAG(B);
  TAG(BDI);
  TAG(BDO);
  TAG(BLOCKQUOTE);
  TAG(BODY);
  TAG(BUTTON);
  TAG(CANVAS);
  TAG(CAPTION);
  TAG(CITE);
  TAG(CODE);
  TAG(COLGROUP);
  TAG(DATA);
  TAG(DATALIST);
  TAG(DD);
  TAG(DEL);
  TAG(DETAILS);
  TAG(DFN);
  TAG(DIALOG);
  TAG(DIV);
  TAG(DL);
  TAG(DT);
  TAG(EM);
  TAG(FIELDSET);
  TAG(FIGCAPTION);
  TAG(FIGURE);
  TAG(FOOTER);
  TAG(FORM);
  TAG(H1);
  TAG(H2);
  TAG(H3);
  TAG(H4);
  TAG(H5);
  TAG(H6);
  TAG(HEAD);
  TAG(HEADER);
  TAG(HGROUP);
  TAG(HTML);
  TAG(I);
  TAG(IFRAME);
  TAG(INS);
  TAG(KBD);
  TAG(LABEL);
  TAG(LEGEND);
  TAG(LI);
  TAG(MAIN);
  TAG(MAP);
  TAG(MARK);
  TAG(MATH);
  TAG(MENU);
  TAG(METER);
  TAG(NAV);
  TAG(NOSCRIPT);
  TAG(OBJECT);
  TAG(OL);
  TAG(OPTGROUP);
  TAG(OPTION);
  TAG(OUTPUT);
  TAG(P);
  TAG(PICTURE);
  TAG(PRE);
  TAG(PROGRESS);
  TAG(Q);
  TAG(RB);
  TAG(RP);
  TAG(RT);
  TAG(RTC);
  TAG(RUBY);
  TAG(S);
  TAG(SAMP);
  TAG(SCRIPT);
  TAG(SECTION);
  TAG(SELECT);
  TAG(SLOT);
  TAG(SMALL);
  TAG(SPAN);
  TAG(STRONG);
  TAG(STYLE);
  TAG(SUB);
  TAG(SUMMARY);
  TAG(SUP);
  TAG(SVG);
  TAG(TABLE);
  TAG(TBODY);
  TAG(TD);
  TAG(TEMPLATE);
  TAG(TEXTAREA);
  TAG(TFOOT);
  TAG(TH);
  TAG(THEAD);
  TAG(TIME);
  TAG(TITLE);
  TAG(TR);
  TAG(U);
  TAG(UL);
  TAG(VAR);
  TAG(VIDEO);
#undef TAG
  return result;
}

static const map<string, TagType> TAG_TYPES_BY_TAG_NAME = get_tag_map();

static const TagType TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS[] = {
  ADDRESS,
  ARTICLE,
  ASIDE,
  BLOCKQUOTE,
  DETAILS,
  DIV,
  DL,
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
  HEADER,
  HR,
  MAIN,
  NAV,
  OL,
  P,
  PRE,
  SECTION,
};

static const TagType *TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS_END = (
  TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS +
  sizeof(TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS) /
  sizeof(TagType)
);

struct Tag {
  TagType type;
  string custom_tag_name;

  // This default constructor is used in the case where there is not enough space
  // in the serialization buffer to store all of the tags. In that case, tags
  // that cannot be serialized will be treated as having an unknown type. These
  // tags will be closed via implicit end tags regardless of the next closing
  // tag is encountered.
  Tag() : type(END_OF_VOID_TAGS) {}

  Tag(TagType type, const string &name) : type(type), custom_tag_name(name) {}

  bool operator==(const Tag &other) const {
    if (type != other.type) return false;
    if (type == CUSTOM && custom_tag_name != other.custom_tag_name) return false;
    return true;
  }

  inline bool is_void() const {
    return type < END_OF_VOID_TAGS;
  }

  inline bool can_contain(const Tag &tag) {
    TagType child = tag.type;

    switch (type) {
      case LI: return child != LI;

      case DT:
      case DD:
        return child != DT && child != DD;

      case P:
        return std::find(
          TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS,
          TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS_END,
          tag.type
        ) == TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS_END;

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

  static inline Tag for_name(const string &name) {
    map<string, TagType>::const_iterator type = TAG_TYPES_BY_TAG_NAME.find(name);
    if (type != TAG_TYPES_BY_TAG_NAME.end()) {
      return Tag(type->second, string());
    } else {
      return Tag(CUSTOM, name);
    }
  }
};
