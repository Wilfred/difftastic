// Unicode character blocks. See Blocks.txt in the UCD.
export type blk = enum {
	ADLAM,
	AEGEAN_NUMBERS,
	AHOM,
	ALCHEMICAL,
	ALPHABETIC_PF,
	ANATOLIAN_HIEROGLYPHS,
	ANCIENT_GREEK_MUSIC,
	ANCIENT_GREEK_NUMBERS,
	ANCIENT_SYMBOLS,
	ARABIC,
	ARABIC_EXT_A,
	ARABIC_MATH,
	ARABIC_PF_A,
	ARABIC_PF_B,
	ARABIC_SUP,
	ARMENIAN,
	ARROWS,
	ASCII,
	AVESTAN,
	BALINESE,
	BAMUM,
	BAMUM_SUP,
	BASSA_VAH,
	BATAK,
	BENGALI,
	BHAIKSUKI,
	BLOCK_ELEMENTS,
	BOPOMOFO,
	BOPOMOFO_EXT,
	BOX_DRAWING,
	BRAHMI,
	BRAILLE,
	BUGINESE,
	BUHID,
	BYZANTINE_MUSIC,
	CARIAN,
	CAUCASIAN_ALBANIAN,
	CHAKMA,
	CHAM,
	CHEROKEE,
	CHEROKEE_SUP,
	CHESS_SYMBOLS,
	CHORASMIAN,
	CJK,
	CJK_COMPAT,
	CJK_COMPAT_FORMS,
	CJK_COMPAT_IDEOGRAPHS,
	CJK_COMPAT_IDEOGRAPHS_SUP,
	CJK_EXT_A,
	CJK_EXT_B,
	CJK_EXT_C,
	CJK_EXT_D,
	CJK_EXT_E,
	CJK_EXT_F,
	CJK_EXT_G,
	CJK_RADICALS_SUP,
	CJK_STROKES,
	CJK_SYMBOLS,
	COMPAT_JAMO,
	CONTROL_PICTURES,
	COPTIC,
	COPTIC_EPACT_NUMBERS,
	COUNTING_ROD,
	CUNEIFORM,
	CUNEIFORM_NUMBERS,
	CURRENCY_SYMBOLS,
	CYPRIOT_SYLLABARY,
	CYRILLIC,
	CYRILLIC_EXT_A,
	CYRILLIC_EXT_B,
	CYRILLIC_EXT_C,
	CYRILLIC_SUP,
	DESERET,
	DEVANAGARI,
	DEVANAGARI_EXT,
	DIACRITICALS,
	DIACRITICALS_FOR_SYMBOLS,
	DIACRITICALS_SUP,
	DIACRITICALS_EXT,
	DINGBATS,
	DIVES_AKURU,
	DOGRA,
	DOMINO,
	DUPLOYAN,
	EARLY_DYNASTIC_CUNEIFORM,
	EGYPTIAN_HIEROGLYPHS,
	EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS,
	ELBASAN,
	ELYMAIC,
	EMOTICONS,
	ENCLOSED_ALPHANUM,
	ENCLOSED_ALPHANUM_SUP,
	ENCLOSED_CJK,
	ENCLOSED_IDEOGRAPHIC_SUP,
	ETHIOPIC,
	ETHIOPIC_EXT,
	ETHIOPIC_EXT_A,
	ETHIOPIC_SUP,
	GEOMETRIC_SHAPES,
	GEOMETRIC_SHAPES_EXT,
	GEORGIAN,
	GEORGIAN_EXT,
	GEORGIAN_SUP,
	GLAGOLITIC,
	GLAGOLITIC_SUP,
	GOTHIC,
	GRANTHA,
	GREEK,
	GREEK_EXT,
	GUJARATI,
	GUNJALA_GONDI,
	GURMUKHI,
	HALF_AND_FULL_FORMS,
	HALF_MARKS,
	HANGUL,
	HANIFI_ROHINGYA,
	HANUNOO,
	HATRAN,
	HEBREW,
	HIGH_PU_SURROGATES,
	HIGH_SURROGATES,
	HIRAGANA,
	IDC,
	IDEOGRAPHIC_SYMBOLS,
	IMPERIAL_ARAMAIC,
	INDIC_NUMBER_FORMS,
	INDIC_SIYAQ_NUMBERS,
	INSCRIPTIONAL_PAHLAVI,
	INSCRIPTIONAL_PARTHIAN,
	IPA_EXT,
	JAMO,
	JAMO_EXT_A,
	JAMO_EXT_B,
	JAVANESE,
	KAITHI,
	KANA_EXT_A,
	KANA_SUP,
	KANBUN,
	KANGXI,
	KANNADA,
	KATAKANA,
	KATAKANA_EXT,
	KAYAH_LI,
	KHAROSHTHI,
	KHITAN_SMALL_SCRIPT,
	KHMER,
	KHMER_SYMBOLS,
	KHOJKI,
	KHUDAWADI,
	LAO,
	LATIN_1_SUP,
	LATIN_EXT_A,
	LATIN_EXT_ADDITIONAL,
	LATIN_EXT_B,
	LATIN_EXT_C,
	LATIN_EXT_D,
	LATIN_EXT_E,
	LEPCHA,
	LETTERLIKE_SYMBOLS,
	LIMBU,
	LINEAR_A,
	LINEAR_B_IDEOGRAMS,
	LINEAR_B_SYLLABARY,
	LISU,
	LISU_SUP,
	LOW_SURROGATES,
	LYCIAN,
	LYDIAN,
	MAHAJANI,
	MAHJONG,
	MAKASAR,
	MALAYALAM,
	MANDAIC,
	MANICHAEAN,
	MARCHEN,
	MASARAM_GONDI,
	MATH_ALPHANUM,
	MATH_OPERATORS,
	MAYAN_NUMERALS,
	MEDEFAIDRIN,
	MEETEI_MAYEK,
	MEETEI_MAYEK_EXT,
	MENDE_KIKAKUI,
	MEROITIC_CURSIVE,
	MEROITIC_HIEROGLYPHS,
	MIAO,
	MISC_ARROWS,
	MISC_MATH_SYMBOLS_A,
	MISC_MATH_SYMBOLS_B,
	MISC_PICTOGRAPHS,
	MISC_SYMBOLS,
	MISC_TECHNICAL,
	MODI,
	MODIFIER_LETTERS,
	MODIFIER_TONE_LETTERS,
	MONGOLIAN,
	MONGOLIAN_SUP,
	MRO,
	MUSIC,
	MULTANI,
	MYANMAR,
	MYANMAR_EXT_A,
	MYANMAR_EXT_B,
	NABATAEAN,
	NANDINAGARI,
	NB,
	NEW_TAI_LUE,
	NEWA,
	NKO,
	NUMBER_FORMS,
	NUSHU,
	NYIAKENG_PUACHUE_HMONG,
	OCR,
	OGHAM,
	OL_CHIKI,
	OLD_HUNGARIAN,
	OLD_ITALIC,
	OLD_NORTH_ARABIAN,
	OLD_PERMIC,
	OLD_PERSIAN,
	OLD_SOGDIAN,
	OLD_SOUTH_ARABIAN,
	OLD_TURKIC,
	ORIYA,
	ORNAMENTAL_DINGBATS,
	OSAGE,
	OSMANYA,
	OTTOMAN_SIYAQ_NUMBERS,
	PAHAWH_HMONG,
	PALMYRENE,
	PAU_CIN_HAU,
	PHAGS_PA,
	PHAISTOS,
	PHOENICIAN,
	PHONETIC_EXT,
	PHONETIC_EXT_SUP,
	PLAYING_CARDS,
	PSALTER_PAHLAVI,
	PUA,
	PUNCTUATION,
	REJANG,
	RUMI,
	RUNIC,
	SAMARITAN,
	SAURASHTRA,
	SHARADA,
	SHAVIAN,
	SHORTHAND_FORMAT_CONTROLS,
	SIDDHAM,
	SINHALA,
	SINHALA_ARCHAIC_NUMBERS,
	SMALL_FORMS,
	SMALL_KANA_EXT,
	SOGDIAN,
	SORA_SOMPENG,
	SOYOMBO,
	SPECIALS,
	SUNDANESE,
	SUNDANESE_SUP,
	SUP_ARROWS_A,
	SUP_ARROWS_B,
	SUP_ARROWS_C,
	SUP_MATH_OPERATORS,
	SUP_PUA_A,
	SUP_PUA_B,
	SUP_PUNCTUATION,
	SUP_SYMBOLS_AND_PICTOGRAPHS,
	SUPER_AND_SUB,
	SUTTON_SIGNWRITING,
	SYLOTI_NAGRI,
	SYMBOLS_AND_PICTOGRAPHS_EXT_A,
	SYMBOLS_FOR_LEGACY_COMPUTING,
	SYRIAC,
	SYRIAC_SUP,
	TAGALOG,
	TAGBANWA,
	TAGS,
	TAI_LE,
	TAI_THAM,
	TAI_VIET,
	TAI_XUAN_JING,
	TAKRI,
	TAMIL,
	TAMIL_SUP,
	TANGUT,
	TANGUT_COMPONENTS,
	TANGUT_SUP,
	TELUGU,
	THAANA,
	THAI,
	TIBETAN,
	TIFINAGH,
	TIRHUTA,
	TRANSPORT_AND_MAP,
	UCAS,
	UCAS_EXT,
	UGARITIC,
	VAI,
	VEDIC_EXT,
	VERTICAL_FORMS,
	VS,
	VS_SUP,
	WANCHO,
	WARANG_CITI,
	YEZIDI,
	YI_RADICALS,
	YI_SYLLABLES,
	YIJING,
	ZANABAZAR_SQUARE,
};

// Unicode general character categories. See Unicode section 4.5.
export type gc = enum {
	// Letter, uppercase
	LU,
	// Letter, lowercase
	LL,
	// Letter, titlecase
	LT,
	// Letter, modifier
	LM,
	// Letter, other
	LO,
	// Mark, nonspacing
	MN,
	// Mark, spacing combining
	MC,
	// Mark, enclosing
	ME,
	// Number, decimal digit
	ND,
	// Number, letter
	NL,
	// Number, other
	NO,
	// Punctuation, connector
	PC,
	// Punctuation, dash
	PD,
	// Punctuation, open
	PS,
	// Punctuation, close
	PE,
	// Punctuation, initial quote
	PI,
	// Punctuation, final quote
	PF,
	// Punctuation, other
	PO,
	// Symbol, math
	SM,
	// Symbol, currency
	SC,
	// Symbol, modifier
	SK,
	// Symbol, other
	SO,
	// Separator, space
	ZS,
	// Separator, line
	ZL,
	// Separator, paragraph
	ZP,
	// Other, control
	CC,
	// Other, format
	CF,
	// Other, surrogate
	CS,
	// Other, private use
	CO,
	// Other, not assigned (including noncharacters)
	CN,
};

// Bidirectional class. See UAX #9.
export type bc = enum {
	// Right-to-left (Arabic)
	AL,
	// Arabic number
	AN,
	// Paragraph separator
	B,
	// Boundary neutral
	BN,
	// Common number separator
	CS,
	// European number
	EN,
	// European number separator
	ES,
	// Euromean number terminator
	ET,
	// First strong isolate
	FSI,
	// Left-to-right
	L,
	// Left-to-right embedding
	LRE,
	// Right-to-left isolate
	LRI,
	// Left-to-right override
	LRO,
	// Nonspacing mark
	NSM,
	// Other neutrals
	ON,
	// Pop directional format
	PDF,
	// Pop directional isolate
	PDI,
	// Right-to-left
	R,
	// Right-to-left embedding
	RLE,
	// Right-to-left isolate
	RLI,
	// Right-to-left override
	RLO,
	// Segment separator
	S,
	// Whitespace
	WS,
};

// Bidi paired bracket type. See BidiBrackets.txt in the UCD.
export type bpt = enum {
	// Open
	O,
	// Closed
	C,
	// None
	N,
};

// Decomposition type. See UAX #44, section 5.7.3.
export type dt = enum {
	// Canonical mapping
	CAN,
	// Otherwise unspecified compatibility character
	COM,
	// Encircled form
	ENC,
	// Final presentation form (Arabic)
	FIN,
	// Font variant (for example, a blackletter form)
	FONT,
	// Vulgar fraction form
	FRA,
	// Initial presentation form (Arabic)
	INIT,
	// Isolated presentation form (Arabic)
	ISO,
	// Medial presentation form (Arabic)
	MED,
	// Narrow (or hankaku) compatibility character
	NAR,
	// No-break version of a space or hyphen
	NB,
	// Small variant form (CNS compatibility)
	SML,
	// CJK squared font variant
	SQR,
	// Subscript form
	SUB,
	// Superscript form
	SUP,
	// Vertical layout presentation form
	VERT,
	// Wide (or zenkaku) compatibility character
	WIDE,
	// None
	NONE,
};

// Normalization quick-check properties. See UAX #44, section 5.7.5.
export type quickcheck = enum uint {
	NO	= 0b00,
	MAYBE	= 0b01,
	YES	= 0b11,
};

// Numeric type. See Unicode section 4.6.
export type nt = enum {
	// Non-numeric
	NONE,
	// Decimal
	DE,
	// Digit
	DI,
	// Numeric
	NU,
};

// Character joining class. See Unicode section 9.2.
export type jt = enum {
	// Non-joining
	U,
	// Join causing
	C,
	// Transparent
	T,
	// Dual joining
	D,
	// Left joining
	L,
	// Right joining
	R,
};

// Character joining group. See Unicode section 9.2.
export type jg = enum {
	AFRICAN_FEH,
	AFRICAN_NOON,
	AFRICAN_QAF,
	AIN,
	ALAPH,
	ALEF,
	ALEF_MAQSURAH,
	BEH,
	BETH,
	BURUSHASKI_YEH_BARREE,
	DAL,
	DALATH_RISH,
	E,
	FARSI_YEH,
	FE,
	FEH,
	FINAL_SEMKATH,
	GAF,
	GAMAL,
	HAH,
	HAMZA_ON_HEH_GOAL,
	HE,
	HEH,
	HEH_GOAL,
	HETH,
	HANIFI_ROHINGYA_KINNA_YA,
	HANIFI_ROHINGYA_PA,
	KAF,
	KAPH,
	KHAPH,
	KNOTTED_HEH,
	LAM,
	LAMADH,
	MALAYALAM_NGA,
	MALAYALAM_JA,
	MALAYALAM_NYA,
	MALAYALAM_TTA,
	MALAYALAM_NNA,
	MALAYALAM_NNNA,
	MALAYALAM_BHA,
	MALAYALAM_RA,
	MALAYALAM_LLA,
	MALAYALAM_LLLA,
	MALAYALAM_SSA,
	MANICHAEAN_ALEPH,
	MANICHAEAN_AYIN,
	MANICHAEAN_BETH,
	MANICHAEAN_DALETH,
	MANICHAEAN_DHAMEDH,
	MANICHAEAN_FIVE,
	MANICHAEAN_GIMEL,
	MANICHAEAN_HETH,
	MANICHAEAN_HUNDRED,
	MANICHAEAN_KAPH,
	MANICHAEAN_LAMEDH,
	MANICHAEAN_MEM,
	MANICHAEAN_NUN,
	MANICHAEAN_ONE,
	MANICHAEAN_PE,
	MANICHAEAN_QOPH,
	MANICHAEAN_RESH,
	MANICHAEAN_SADHE,
	MANICHAEAN_SAMEKH,
	MANICHAEAN_TAW,
	MANICHAEAN_TEN,
	MANICHAEAN_TETH,
	MANICHAEAN_THAMEDH,
	MANICHAEAN_TWENTY,
	MANICHAEAN_WAW,
	MANICHAEAN_YODH,
	MANICHAEAN_ZAYIN,
	MEEM,
	MIM,
	NO_JOINING_GROUP,
	NOON,
	NUN,
	NYA,
	PE,
	QAF,
	QAPH,
	REH,
	REVERSED_PE,
	ROHINGYA_YEH,
	SAD,
	SADHE,
	SEEN,
	SEMKATH,
	SHIN,
	STRAIGHT_WAW,
	SWASH_KAF,
	SYRIAC_WAW,
	TAH,
	TAW,
	TEH_MARBUTA,
	TEH_MARBUTA_GOAL,
	TETH,
	WAW,
	YEH,
	YEH_BARREE,
	YEH_WITH_TAIL,
	YUDH,
	YUDH_HE,
	ZAIN,
	ZHAIN,
};

// Line breaking properties. See UAX #14.
export type lb = enum {
	// Ambiguous
	AI,
	// Alphabetic
	AL,
	// Break opportunity before and after
	B2,
	// Break after
	BA,
	// Break before
	BB,
	// Mandatory break
	BK,
	// Contingent break opportunity
	CB,
	// Conditional Japanese starter
	CJ,
	// Close punctuation
	CL,
	// Combining mark
	CM,
	// Close parenthesis
	CP,
	// Carriage return
	CR,
	// Emoji base
	EB,
	// Emoji modifier
	EM,
	// Exclamation/interrogation
	EX,
	// Non-breaking ("glue")
	GL,
	// Hangul LV syllable
	H2,
	// Hangul LVT syllable
	H3,
	// Hebrew letter
	HL,
	// Hyphen
	HY,
	// Ideographic
	ID,
	// Inseparable
	IN,
	// Infix numeric separator
	IS,
	// Hangul L Jamo
	JL,
	// Hangul T Jamo
	JT,
	// Hangul V Jamo
	JV,
	// Line feed
	LF,
	// Next line
	NL,
	// Nonstarter
	NS,
	// Numeric
	NU,
	// Open punctuation
	OP,
	// Postfix numeric
	PO,
	// Prefix numeric
	PR,
	// Quotation
	QU,
	// Regional indicator
	RI,
	// Complex context dependent (South East Asian)
	SA,
	// Surrogate
	SG,
	// Space
	SP,
	// Symbols allowing break after
	SY,
	// Word joiner
	WJ,
	// Unknown
	XX,
	// Zero width space
	ZW,
	// Zero width joiner
	ZWJ,
};

// East-asian width. See UAX #11.
export type ea = enum {
	// Ambiguous
	A,
	// Fullwidth
	F,
	// Halfwidth
	H,
	// Neutral
	N,
	// Narrow
	NA,
	// Wide
	W,
};

// Case property. See Unicode section 4.2.
export type case = enum uint {
	UPPER		= 1 << 0,
	LOWER		= 1 << 1,
	OTHER_UPPER	= 1 << 2,
	OTHER_LOWER	= 1 << 3,
};

// Casing attributes. See Unicode section 4.2.
export type case_attrs = enum uint {
	// Case ignorable
	CI		= 1 << 0,
	// Cased
	CASED		= 1 << 1,
	// Changes when casefolded
	CWCF		= 1 << 2,
	// Changes when casemapped
	CWCM		= 1 << 3,
	// Changes when lowercased
	CWL		= 1 << 4,
	// Changes when NFKC casefolded
	CWKCF		= 1 << 5,
	// Changes when titlecased
	CWT		= 1 << 6,
	// Changes when uppercased
	CWU		= 1 << 7,
	// NFKC casefold
	NFKC_CF		= 1 << 8,
};

// Script property. See UAX #24.
export type script = enum {
	ADLM,
	AGHB,
	AHOM,
	ARAB,
	ARMI,
	ARMN,
	AVST,
	BALI,
	BAMU,
	BASS,
	BATK,
	BENG,
	BHKS,
	BOPO,
	BRAH,
	BRAI,
	BUGI,
	BUHD,
	CAKM,
	CANS,
	CARI,
	CHAM,
	CHER,
	CHRS,
	COPT,
	CPRT,
	CYRL,
	DEVA,
	DIAK,
	DOGR,
	DSRT,
	DUPL,
	ELBA,
	ELYM,
	EGYP,
	ETHI,
	GEOR,
	GLAG,
	GONG,
	GONM,
	GOTH,
	GRAN,
	GREK,
	GUJR,
	GURU,
	HANG,
	HANI,
	HANO,
	HATR,
	HEBR,
	HIRA,
	HLUW,
	HMNG,
	HMNP,
	HRKT,
	HUNG,
	ITAL,
	JAVA,
	KALI,
	KANA,
	KHAR,
	KHMR,
	KHOJ,
	KITS,
	KNDA,
	KTHI,
	LANA,
	LAOO,
	LATN,
	LEPC,
	LIMB,
	LINA,
	LINB,
	LISU,
	LYCI,
	LYDI,
	MAHJ,
	MAKA,
	MAND,
	MANI,
	MARC,
	MEDF,
	MEND,
	MERC,
	MERO,
	MLYM,
	MODI,
	MONG,
	MROO,
	MTEI,
	MULT,
	MYMR,
	NAND,
	NARB,
	NBAT,
	NEWA,
	NKOO,
	NSHU,
	OGAM,
	OLCK,
	ORKH,
	ORYA,
	OSGE,
	OSMA,
	PALM,
	PAUC,
	PERM,
	PHAG,
	PHLI,
	PHLP,
	PHNX,
	PLRD,
	PRTI,
	QAAI,
	ROHG,
	RJNG,
	RUNR,
	SAMR,
	SARB,
	SAUR,
	SGNW,
	SHAW,
	SHRD,
	SIDD,
	SIND,
	SINH,
	SOGD,
	SOGO,
	SORA,
	SOYO,
	SUND,
	SYLO,
	SYRC,
	TAGB,
	TAKR,
	TALE,
	TALU,
	TAML,
	TANG,
	TAVT,
	TELU,
	TFNG,
	TGLG,
	THAA,
	THAI,
	TIBT,
	TIRH,
	UGAR,
	VAII,
	WARA,
	WCHO,
	XPEO,
	XSUX,
	YEZI,
	YIII,
	ZANB,
	ZINH,
	ZYYY,
	ZZZZ,
};

// Hangul syllable type. See Unicode section 3.12 and 18.6.
export type hst = enum {
	// Leading consonant
	L,
	// LV syllable
	LV,
	// LVT syllable
	LVT,
	// Trailing consonant
	T,
	// Vowel
	V,
	// Non-applicable
	NA,
};

// Indic syllabic category. See IndicSyllabicCategory.txt in the UCD.
export type insc = enum {
	AVAGRAHA,
	BINDU,
	BRAHMI_JOINING_NUMBER,
	CANTILLATION_MARK,
	CONSONANT,
	CONSONANT_DEAD,
	CONSONANT_FINAL,
	CONSONANT_HEAD_LETTER,
	CONSONANT_INITIAL_POSTFIXED,
	CONSONANT_KILLER,
	CONSONANT_MEDIAL,
	CONSONANT_PLACEHOLDER,
	CONSONANT_PRECEDING_REPHA,
	CONSONANT_PREFIXED,
	CONSONANT_REPHA,
	CONSONANT_SUBJOINED,
	CONSONANT_SUCCEEDING_REPHA,
	CONSONANT_WITH_STACKER,
	GEMINATION_MARK,
	INVISIBLE_STACKER,
	JOINER,
	MODIFYING_LETTER,
	NON_JOINER,
	NUKTA,
	NUMBER,
	NUMBER_JOINER,
	OTHER,
	PURE_KILLER,
	REGISTER_SHIFTER,
	SYLLABLE_MODIFIER,
	TONE_LETTER,
	TONE_MARK,
	VIRAMA,
	VISARGA,
	VOWEL,
	VOWEL_DEPENDENT,
	VOWEL_INDEPENDENT,
};

// Indic positional category. See IndicPositionalCategory.txt in the UCD.
export type inpc = enum {
	BOTTOM,
	BOTTOM_AND_LEFT,
	BOTTOM_AND_RIGHT,
	LEFT,
	LEFT_AND_RIGHT,
	NA,
	OVERSTRUCK,
	RIGHT,
	TOP,
	TOP_AND_BOTTOM,
	TOP_AND_BOTTOM_AND_LEFT,
	TOP_AND_BOTTOM_AND_RIGHT,
	TOP_AND_LEFT,
	TOP_AND_LEFT_AND_RIGHT,
	TOP_AND_RIGHT,
	VISUAL_ORDER_LEFT,
};

// Identifier and pattern properties. See UAX #31.
export type id = enum uint {
	IDS	= 1 << 0,
	IDC	= 1 << 1,
	OIDS	= 1 << 2,
	OIDC	= 1 << 2,
	XIDS	= 1 << 3,
	XIDC	= 1 << 4,
	SYN	= 1 << 5,
	WS	= 1 << 6,
};

// Properties related to function and graphics characteristics. This is a
// synethetic type based on mulitple Unicode properties listed in UAX #42
// section 4.4.10.
export type fgc = enum uint {
	DASH					= 1 << 0,
	HYPHEN					= 1 << 1,
	QUOTATION_MARK				= 1 << 2,
	TERMINAL_PUNCTUATION			= 1 << 3,
	SENTENCE_TERMINAL			= 1 << 4,
	DIACRITIC				= 1 << 5,
	EXTENDER				= 1 << 6,
	SOFT_DOTTED				= 1 << 7,
	ALPHABETIC				= 1 << 8,
	OTHER_ALPHABETIC			= 1 << 9,
	MATH					= 1 << 10,
	OTHER_MATH				= 1 << 11,
	HEX_DIGIT				= 1 << 12,
	ASCII_HEX_DIGIT				= 1 << 13,
	DEFAULT_IGNORABLE_CODE_POINT		= 1 << 14,
	OTHER_DEFAULT_IGNORABLE_CODE_POINT	= 1 << 15,
	LOGICAL_ORDER_EXCEPTION			= 1 << 16,
	PREPENDED_CONCATENATION_MARK		= 1 << 17,
	WHITE_SPACE				= 1 << 18,
	VERTICAL_ORIENTATION			= 1 << 19,
	REGIONAL_INDICATOR			= 1 << 20,
};

// Properties related to boundaries. This is a synethetic type based on mulitple
// Unicode properties listed in UAX #42 section 4.4.20.
export type gr = enum uint {
	GR_BASE	= 1 << 0,
	GR_EXT	= 1 << 1,
};

// Grapheme cluster break. See UAX #29.
export type gcb = enum {
	XX,
	CN,
	CR,
	EX,
	L,
	LF,
	LV,
	LVT,
	PP,
	RI,
	SM,
	T,
	V,
	ZWJ,
};

// Word break. See UAX #29.
export type wb = enum {
	XX,
	CR,
	DQ,
	EX,
	EXTEND,
	FO,
	HL,
	KA,
	LE,
	LF,
	MB,
	ML,
	MN,
	NL,
	NU,
	RI,
	SQ,
	WSEGSPACE,
	ZWJ,
};

// Sentence break. See UAX #29.
export type sb = enum {
	XX,
	AT,
	CL,
	CR,
	EX,
	FO,
	LE,
	LF,
	LO,
	NU,
	SC,
	SE,
	SP,
	ST,
	UP,
};

// Properties related to ideographs. This is a synethetic type based on mulitple
// Unicode properties listed in UAX #42 section 4.4.21.
export type ideo = enum uint {
	IDEO	= 1 << 1,
	UIDEO	= 1 << 2,
	IDSB	= 1 << 3,
	IDST	= 1 << 4,
	RADICAL	= 1 << 5,
};

// Miscellaneous properties. This is a synethetic type based on mulitple Unicode
// properties listed in UAX #42 section 4.4.22.
export type misc = enum uint {
	DEP	= 1 << 0,
	VS	= 1 << 1,
	NCHAR	= 1 << 2,
};

// Properties related to Emoji. This is a synethetic type based on mulitple
// Unicode properties listed in UAX #42 section 4.4.26.
export type emoji = enum uint {
	EMOJI	= 1 << 0,
	EPRES	= 1 << 1,
	EMOD	= 1 << 2,
	EBASE	= 1 << 3,
	ECOMP	= 1 << 4,
	EXTPICT	= 1 << 5,
};
