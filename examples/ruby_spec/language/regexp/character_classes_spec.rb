require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Regexp with character classes" do
  it "supports \\w (word character)" do
    /\w/.match("a").to_a.should == ["a"]
    /\w/.match("1").to_a.should == ["1"]
    /\w/.match("_").to_a.should == ["_"]

    # Non-matches
    /\w/.match(LanguageSpecs.white_spaces).should be_nil
    /\w/.match(LanguageSpecs.non_alphanum_non_space).should be_nil
    /\w/.match("\0").should be_nil
  end

  it "supports \\W (non-word character)" do
    /\W+/.match(LanguageSpecs.white_spaces).to_a.should == [LanguageSpecs.white_spaces]
    /\W+/.match(LanguageSpecs.non_alphanum_non_space).to_a.should == [LanguageSpecs.non_alphanum_non_space]
    /\W/.match("\0").to_a.should == ["\0"]

    # Non-matches
    /\W/.match("a").should be_nil
    /\W/.match("1").should be_nil
    /\W/.match("_").should be_nil
  end

  it "supports \\s (space character)" do
    /\s+/.match(LanguageSpecs.white_spaces).to_a.should == [LanguageSpecs.white_spaces]

    # Non-matches
    /\s/.match("a").should be_nil
    /\s/.match("1").should be_nil
    /\s/.match(LanguageSpecs.non_alphanum_non_space).should be_nil
    /\s/.match("\0").should be_nil
  end

  it "supports \\S (non-space character)" do
    /\S/.match("a").to_a.should == ["a"]
    /\S/.match("1").to_a.should == ["1"]
    /\S+/.match(LanguageSpecs.non_alphanum_non_space).to_a.should == [LanguageSpecs.non_alphanum_non_space]
    /\S/.match("\0").to_a.should == ["\0"]

    # Non-matches
    /\S/.match(LanguageSpecs.white_spaces).should be_nil
  end

  it "supports \\d (numeric digit)" do
    /\d/.match("1").to_a.should == ["1"]

    # Non-matches
    /\d/.match("a").should be_nil
    /\d/.match(LanguageSpecs.white_spaces).should be_nil
    /\d/.match(LanguageSpecs.non_alphanum_non_space).should be_nil
    /\d/.match("\0").should be_nil
  end

  it "supports \\D (non-digit)" do
    /\D/.match("a").to_a.should == ["a"]
    /\D+/.match(LanguageSpecs.white_spaces).to_a.should == [LanguageSpecs.white_spaces]
    /\D+/.match(LanguageSpecs.non_alphanum_non_space).to_a.should == [LanguageSpecs.non_alphanum_non_space]
    /\D/.match("\0").to_a.should == ["\0"]

    # Non-matches
    /\D/.match("1").should be_nil
  end

  it "supports [] (character class)" do
    /[a-z]+/.match("fooBAR").to_a.should == ["foo"]
    /[\b]/.match("\b").to_a.should == ["\b"] # \b inside character class is backspace
  end

  it "supports [[:alpha:][:digit:][:etc:]] (predefined character classes)" do
    /[[:alnum:]]+/.match("a1").to_a.should == ["a1"]
    /[[:alpha:]]+/.match("Aa1").to_a.should == ["Aa"]
    /[[:blank:]]+/.match(LanguageSpecs.white_spaces).to_a.should == [LanguageSpecs.blanks]
    # /[[:cntrl:]]/.match("").to_a.should == [""] # TODO: what should this match?
    /[[:digit:]]/.match("1").to_a.should == ["1"]
    # /[[:graph:]]/.match("").to_a.should == [""] # TODO: what should this match?
    /[[:lower:]]+/.match("Aa1").to_a.should == ["a"]
    /[[:print:]]+/.match(LanguageSpecs.white_spaces).to_a.should == [" "]     # include all of multibyte encoded characters
    /[[:punct:]]+/.match(LanguageSpecs.punctuations).to_a.should == [LanguageSpecs.punctuations]
    /[[:space:]]+/.match(LanguageSpecs.white_spaces).to_a.should == [LanguageSpecs.white_spaces]
    /[[:upper:]]+/.match("123ABCabc").to_a.should == ["ABC"]
    /[[:xdigit:]]+/.match("xyz0123456789ABCDEFabcdefXYZ").to_a.should == ["0123456789ABCDEFabcdef"]

    # Parsing
    /[[:lower:][:digit:]A-C]+/.match("a1ABCDEF").to_a.should == ["a1ABC"] # can be composed with other constructs in the character class
    /[^[:lower:]A-C]+/.match("abcABCDEF123def").to_a.should == ["DEF123"] # negated character class
    /[:alnum:]+/.match("a:l:n:u:m").to_a.should == ["a:l:n:u:m"] # should behave like regular character class composed of the individual letters
    /[\[:alnum:]+/.match("[:a:l:n:u:m").to_a.should == ["[:a:l:n:u:m"] # should behave like regular character class composed of the individual letters
    lambda { eval('/[[:alpha:]-[:digit:]]/') }.should raise_error(SyntaxError) # can't use character class as a start value of range
  end

  it "matches ASCII characters with [[:ascii:]]" do
    "\x00".match(/[[:ascii:]]/).to_a.should == ["\x00"]
    "\x7F".match(/[[:ascii:]]/).to_a.should == ["\x7F"]
  end

  not_supported_on :opal do
    it "doesn't match non-ASCII characters with [[:ascii:]]" do
      /[[:ascii:]]/.match("\u{80}").should be_nil
      /[[:ascii:]]/.match("\u{9898}").should be_nil
    end
  end

  it "matches Unicode letter characters with [[:alnum:]]" do
    "à".match(/[[:alnum:]]/).to_a.should == ["à"]
  end

  it "matches Unicode digits with [[:alnum:]]" do
    "\u{0660}".match(/[[:alnum:]]/).to_a.should == ["\u{0660}"]
  end

  it "doesn't matches Unicode marks with [[:alnum:]]" do
    "\u{36F}".match(/[[:alnum:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:alnum:]]" do
    "\u{16}".match(/[[:alnum:]]/).to_a.should == []
  end

  it "doesn't match Unicode punctuation characters with [[:alnum:]]" do
    "\u{3F}".match(/[[:alnum:]]/).to_a.should == []
  end

  it "matches Unicode letter characters with [[:alpha:]]" do
    "à".match(/[[:alpha:]]/).to_a.should == ["à"]
  end

  it "doesn't match Unicode digits with [[:alpha:]]" do
    "\u{0660}".match(/[[:alpha:]]/).to_a.should == []
  end

  it "doesn't matches Unicode marks with [[:alpha:]]" do
    "\u{36F}".match(/[[:alpha:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:alpha:]]" do
    "\u{16}".match(/[[:alpha:]]/).to_a.should == []
  end

  it "doesn't match Unicode punctuation characters with [[:alpha:]]" do
    "\u{3F}".match(/[[:alpha:]]/).to_a.should == []
  end

  it "matches Unicode space characters with [[:blank:]]" do
    "\u{1680}".match(/[[:blank:]]/).to_a.should == ["\u{1680}"]
  end

  it "doesn't match Unicode control characters with [[:blank:]]" do
    "\u{16}".match(/[[:blank:]]/).should be_nil
  end

  it "doesn't match Unicode punctuation characters with [[:blank:]]" do
    "\u{3F}".match(/[[:blank:]]/).should be_nil
  end

  it "doesn't match Unicode letter characters with [[:blank:]]" do
    "à".match(/[[:blank:]]/).should be_nil
  end

  it "doesn't match Unicode digits with [[:blank:]]" do
    "\u{0660}".match(/[[:blank:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:blank:]]" do
    "\u{36F}".match(/[[:blank:]]/).should be_nil
  end

  it "doesn't Unicode letter characters with [[:cntrl:]]" do
    "à".match(/[[:cntrl:]]/).should be_nil
  end

  it "doesn't match Unicode digits with [[:cntrl:]]" do
    "\u{0660}".match(/[[:cntrl:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:cntrl:]]" do
    "\u{36F}".match(/[[:cntrl:]]/).should be_nil
  end

  it "doesn't match Unicode punctuation characters with [[:cntrl:]]" do
    "\u{3F}".match(/[[:cntrl:]]/).should be_nil
  end

  it "matches Unicode control characters with [[:cntrl:]]" do
    "\u{16}".match(/[[:cntrl:]]/).to_a.should == ["\u{16}"]
  end

  it "doesn't match Unicode format characters with [[:cntrl:]]" do
    "\u{2060}".match(/[[:cntrl:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:cntrl:]]" do
    "\u{E001}".match(/[[:cntrl:]]/).should be_nil
  end

  it "doesn't match Unicode letter characters with [[:digit:]]" do
    "à".match(/[[:digit:]]/).should be_nil
  end

  it "matches Unicode digits with [[:digit:]]" do
    "\u{0660}".match(/[[:digit:]]/).to_a.should == ["\u{0660}"]
    "\u{FF12}".match(/[[:digit:]]/).to_a.should == ["\u{FF12}"]
  end

  it "doesn't match Unicode marks with [[:digit:]]" do
    "\u{36F}".match(/[[:digit:]]/).should be_nil
  end

  it "doesn't match Unicode punctuation characters with [[:digit:]]" do
    "\u{3F}".match(/[[:digit:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:digit:]]" do
    "\u{16}".match(/[[:digit:]]/).should be_nil
  end

  it "doesn't match Unicode format characters with [[:digit:]]" do
    "\u{2060}".match(/[[:digit:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:digit:]]" do
    "\u{E001}".match(/[[:digit:]]/).should be_nil
  end

  it "matches Unicode letter characters with [[:graph:]]" do
      "à".match(/[[:graph:]]/).to_a.should == ["à"]
  end

  it "matches Unicode digits with [[:graph:]]" do
    "\u{0660}".match(/[[:graph:]]/).to_a.should == ["\u{0660}"]
    "\u{FF12}".match(/[[:graph:]]/).to_a.should == ["\u{FF12}"]
  end

  it "matches Unicode marks with [[:graph:]]" do
    "\u{36F}".match(/[[:graph:]]/).to_a.should ==["\u{36F}"]
  end

  it "matches Unicode punctuation characters with [[:graph:]]" do
    "\u{3F}".match(/[[:graph:]]/).to_a.should == ["\u{3F}"]
  end

  it "doesn't match Unicode control characters with [[:graph:]]" do
    "\u{16}".match(/[[:graph:]]/).should be_nil
  end

  it "match Unicode format characters with [[:graph:]]" do
    "\u{2060}".match(/[[:graph:]]/).to_a.should == ["\u2060"]
  end

  it "match Unicode private-use characters with [[:graph:]]" do
    "\u{E001}".match(/[[:graph:]]/).to_a.should == ["\u{E001}"]
  end

  it "matches Unicode lowercase letter characters with [[:lower:]]" do
    "\u{FF41}".match(/[[:lower:]]/).to_a.should == ["\u{FF41}"]
    "\u{1D484}".match(/[[:lower:]]/).to_a.should == ["\u{1D484}"]
    "\u{E8}".match(/[[:lower:]]/).to_a.should == ["\u{E8}"]
  end

  it "doesn't match Unicode uppercase letter characters with [[:lower:]]" do
    "\u{100}".match(/[[:lower:]]/).should be_nil
    "\u{130}".match(/[[:lower:]]/).should be_nil
    "\u{405}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode title-case characters with [[:lower:]]" do
    "\u{1F88}".match(/[[:lower:]]/).should be_nil
    "\u{1FAD}".match(/[[:lower:]]/).should be_nil
    "\u{01C5}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode digits with [[:lower:]]" do
    "\u{0660}".match(/[[:lower:]]/).should be_nil
    "\u{FF12}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:lower:]]" do
    "\u{36F}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode punctuation characters with [[:lower:]]" do
    "\u{3F}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:lower:]]" do
    "\u{16}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode format characters with [[:lower:]]" do
    "\u{2060}".match(/[[:lower:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:lower:]]" do
    "\u{E001}".match(/[[:lower:]]/).should be_nil
  end

  it "matches Unicode lowercase letter characters with [[:print:]]" do
    "\u{FF41}".match(/[[:print:]]/).to_a.should == ["\u{FF41}"]
    "\u{1D484}".match(/[[:print:]]/).to_a.should == ["\u{1D484}"]
    "\u{E8}".match(/[[:print:]]/).to_a.should == ["\u{E8}"]
  end

  it "matches Unicode uppercase letter characters with [[:print:]]" do
    "\u{100}".match(/[[:print:]]/).to_a.should == ["\u{100}"]
    "\u{130}".match(/[[:print:]]/).to_a.should == ["\u{130}"]
    "\u{405}".match(/[[:print:]]/).to_a.should == ["\u{405}"]
  end

  it "matches Unicode title-case characters with [[:print:]]" do
    "\u{1F88}".match(/[[:print:]]/).to_a.should == ["\u{1F88}"]
    "\u{1FAD}".match(/[[:print:]]/).to_a.should == ["\u{1FAD}"]
    "\u{01C5}".match(/[[:print:]]/).to_a.should == ["\u{01C5}"]
  end

  it "matches Unicode digits with [[:print:]]" do
    "\u{0660}".match(/[[:print:]]/).to_a.should == ["\u{0660}"]
    "\u{FF12}".match(/[[:print:]]/).to_a.should == ["\u{FF12}"]
  end

  it "matches Unicode marks with [[:print:]]" do
    "\u{36F}".match(/[[:print:]]/).to_a.should == ["\u{36F}"]
  end

  it "matches Unicode punctuation characters with [[:print:]]" do
    "\u{3F}".match(/[[:print:]]/).to_a.should == ["\u{3F}"]
  end

  it "doesn't match Unicode control characters with [[:print:]]" do
    "\u{16}".match(/[[:print:]]/).should be_nil
  end

  it "match Unicode format characters with [[:print:]]" do
    "\u{2060}".match(/[[:print:]]/).to_a.should == ["\u{2060}"]
  end

  it "match Unicode private-use characters with [[:print:]]" do
    "\u{E001}".match(/[[:print:]]/).to_a.should == ["\u{E001}"]
  end


  it "doesn't match Unicode lowercase letter characters with [[:punct:]]" do
    "\u{FF41}".match(/[[:punct:]]/).should be_nil
    "\u{1D484}".match(/[[:punct:]]/).should be_nil
    "\u{E8}".match(/[[:punct:]]/).should be_nil
  end

  it "doesn't match Unicode uppercase letter characters with [[:punct:]]" do
    "\u{100}".match(/[[:punct:]]/).should be_nil
    "\u{130}".match(/[[:punct:]]/).should be_nil
    "\u{405}".match(/[[:punct:]]/).should be_nil
  end

  it "doesn't match Unicode title-case characters with [[:punct:]]" do
    "\u{1F88}".match(/[[:punct:]]/).should be_nil
    "\u{1FAD}".match(/[[:punct:]]/).should be_nil
    "\u{01C5}".match(/[[:punct:]]/).should be_nil
  end

  it "doesn't match Unicode digits with [[:punct:]]" do
    "\u{0660}".match(/[[:punct:]]/).should be_nil
    "\u{FF12}".match(/[[:punct:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:punct:]]" do
    "\u{36F}".match(/[[:punct:]]/).should be_nil
  end

  it "matches Unicode Pc characters with [[:punct:]]" do
    "\u{203F}".match(/[[:punct:]]/).to_a.should == ["\u{203F}"]
  end

  it "matches Unicode Pd characters with [[:punct:]]" do
    "\u{2E17}".match(/[[:punct:]]/).to_a.should == ["\u{2E17}"]
  end

  it "matches Unicode Ps characters with [[:punct:]]" do
    "\u{0F3A}".match(/[[:punct:]]/).to_a.should == ["\u{0F3A}"]
  end

  it "matches Unicode Pe characters with [[:punct:]]" do
    "\u{2046}".match(/[[:punct:]]/).to_a.should == ["\u{2046}"]
  end

  it "matches Unicode Pi characters with [[:punct:]]" do
    "\u{00AB}".match(/[[:punct:]]/).to_a.should == ["\u{00AB}"]
  end

  it "matches Unicode Pf characters with [[:punct:]]" do
    "\u{201D}".match(/[[:punct:]]/).to_a.should == ["\u{201D}"]
    "\u{00BB}".match(/[[:punct:]]/).to_a.should == ["\u{00BB}"]
  end

  it "matches Unicode Po characters with [[:punct:]]" do
    "\u{00BF}".match(/[[:punct:]]/).to_a.should == ["\u{00BF}"]
  end

  it "doesn't match Unicode format characters with [[:punct:]]" do
    "\u{2060}".match(/[[:punct:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:punct:]]" do
    "\u{E001}".match(/[[:punct:]]/).should be_nil
  end

  it "doesn't match Unicode lowercase letter characters with [[:space:]]" do
    "\u{FF41}".match(/[[:space:]]/).should be_nil
    "\u{1D484}".match(/[[:space:]]/).should be_nil
    "\u{E8}".match(/[[:space:]]/).should be_nil
  end

  it "doesn't match Unicode uppercase letter characters with [[:space:]]" do
    "\u{100}".match(/[[:space:]]/).should be_nil
    "\u{130}".match(/[[:space:]]/).should be_nil
    "\u{405}".match(/[[:space:]]/).should be_nil
  end

  it "doesn't match Unicode title-case characters with [[:space:]]" do
    "\u{1F88}".match(/[[:space:]]/).should be_nil
    "\u{1FAD}".match(/[[:space:]]/).should be_nil
    "\u{01C5}".match(/[[:space:]]/).should be_nil
  end

  it "doesn't match Unicode digits with [[:space:]]" do
    "\u{0660}".match(/[[:space:]]/).should be_nil
    "\u{FF12}".match(/[[:space:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:space:]]" do
    "\u{36F}".match(/[[:space:]]/).should be_nil
  end

  it "matches Unicode Zs characters with [[:space:]]" do
    "\u{205F}".match(/[[:space:]]/).to_a.should == ["\u{205F}"]
  end

  it "matches Unicode Zl characters with [[:space:]]" do
    "\u{2028}".match(/[[:space:]]/).to_a.should == ["\u{2028}"]
  end

  it "matches Unicode Zp characters with [[:space:]]" do
    "\u{2029}".match(/[[:space:]]/).to_a.should == ["\u{2029}"]
  end

  it "doesn't match Unicode format characters with [[:space:]]" do
    "\u{2060}".match(/[[:space:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:space:]]" do
    "\u{E001}".match(/[[:space:]]/).should be_nil
  end

  it "doesn't match Unicode lowercase characters with [[:upper:]]" do
    "\u{FF41}".match(/[[:upper:]]/).should be_nil
    "\u{1D484}".match(/[[:upper:]]/).should be_nil
    "\u{E8}".match(/[[:upper:]]/).should be_nil
  end

  it "matches Unicode uppercase characters with [[:upper:]]" do
    "\u{100}".match(/[[:upper:]]/).to_a.should == ["\u{100}"]
    "\u{130}".match(/[[:upper:]]/).to_a.should == ["\u{130}"]
    "\u{405}".match(/[[:upper:]]/).to_a.should == ["\u{405}"]
  end

  it "doesn't match Unicode title-case characters with [[:upper:]]" do
    "\u{1F88}".match(/[[:upper:]]/).should be_nil
    "\u{1FAD}".match(/[[:upper:]]/).should be_nil
    "\u{01C5}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode digits with [[:upper:]]" do
    "\u{0660}".match(/[[:upper:]]/).should be_nil
    "\u{FF12}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:upper:]]" do
    "\u{36F}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode punctuation characters with [[:upper:]]" do
    "\u{3F}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:upper:]]" do
    "\u{16}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode format characters with [[:upper:]]" do
    "\u{2060}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:upper:]]" do
    "\u{E001}".match(/[[:upper:]]/).should be_nil
  end

  it "doesn't match Unicode letter characters [^a-fA-F] with [[:xdigit:]]" do
    "à".match(/[[:xdigit:]]/).should be_nil
    "g".match(/[[:xdigit:]]/).should be_nil
    "X".match(/[[:xdigit:]]/).should be_nil
  end

  it "matches Unicode letter characters [a-fA-F] with [[:xdigit:]]" do
    "a".match(/[[:xdigit:]]/).to_a.should == ["a"]
    "F".match(/[[:xdigit:]]/).to_a.should == ["F"]
  end

  it "doesn't match Unicode digits [^0-9] with [[:xdigit:]]" do
    "\u{0660}".match(/[[:xdigit:]]/).should be_nil
    "\u{FF12}".match(/[[:xdigit:]]/).should be_nil
  end

  it "doesn't match Unicode marks with [[:xdigit:]]" do
    "\u{36F}".match(/[[:xdigit:]]/).should be_nil
  end

  it "doesn't match Unicode punctuation characters with [[:xdigit:]]" do
    "\u{3F}".match(/[[:xdigit:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:xdigit:]]" do
    "\u{16}".match(/[[:xdigit:]]/).should be_nil
  end

  it "doesn't match Unicode format characters with [[:xdigit:]]" do
    "\u{2060}".match(/[[:xdigit:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:xdigit:]]" do
    "\u{E001}".match(/[[:xdigit:]]/).should be_nil
  end

  it "matches Unicode lowercase characters with [[:word:]]" do
    "\u{FF41}".match(/[[:word:]]/).to_a.should == ["\u{FF41}"]
    "\u{1D484}".match(/[[:word:]]/).to_a.should == ["\u{1D484}"]
    "\u{E8}".match(/[[:word:]]/).to_a.should == ["\u{E8}"]
  end

  it "matches Unicode uppercase characters with [[:word:]]" do
    "\u{100}".match(/[[:word:]]/).to_a.should == ["\u{100}"]
    "\u{130}".match(/[[:word:]]/).to_a.should == ["\u{130}"]
    "\u{405}".match(/[[:word:]]/).to_a.should == ["\u{405}"]
  end

  it "matches Unicode title-case characters with [[:word:]]" do
    "\u{1F88}".match(/[[:word:]]/).to_a.should == ["\u{1F88}"]
    "\u{1FAD}".match(/[[:word:]]/).to_a.should == ["\u{1FAD}"]
    "\u{01C5}".match(/[[:word:]]/).to_a.should == ["\u{01C5}"]
  end

  it "matches Unicode decimal digits with [[:word:]]" do
    "\u{FF10}".match(/[[:word:]]/).to_a.should == ["\u{FF10}"]
    "\u{096C}".match(/[[:word:]]/).to_a.should == ["\u{096C}"]
  end

  it "matches Unicode marks with [[:word:]]" do
    "\u{36F}".match(/[[:word:]]/).to_a.should == ["\u{36F}"]
  end

  it "match Unicode Nl characters with [[:word:]]" do
    "\u{16EE}".match(/[[:word:]]/).to_a.should == ["\u{16EE}"]
  end

  it "doesn't match Unicode No characters with [[:word:]]" do
    "\u{17F0}".match(/[[:word:]]/).should be_nil
  end
  it "doesn't match Unicode punctuation characters with [[:word:]]" do
    "\u{3F}".match(/[[:word:]]/).should be_nil
  end

  it "doesn't match Unicode control characters with [[:word:]]" do
    "\u{16}".match(/[[:word:]]/).should be_nil
  end

  it "doesn't match Unicode format characters with [[:word:]]" do
    "\u{2060}".match(/[[:word:]]/).should be_nil
  end

  it "doesn't match Unicode private-use characters with [[:word:]]" do
    "\u{E001}".match(/[[:word:]]/).should be_nil
  end

  it "matches unicode named character properties" do
    "a1".match(/\p{Alpha}/).to_a.should == ["a"]
  end

  it "matches unicode abbreviated character properties" do
    "a1".match(/\p{L}/).to_a.should == ["a"]
  end

  it "matches unicode script properties" do
    "a\u06E9b".match(/\p{Arabic}/).to_a.should == ["\u06E9"]
  end

  it "matches unicode Han properties" do
    "松本行弘 Ruby".match(/\p{Han}+/u).to_a.should == ["松本行弘"]
  end

  it "matches unicode Hiragana properties" do
    "Ruby（ルビー）、まつもとゆきひろ".match(/\p{Hiragana}+/u).to_a.should == ["まつもとゆきひろ"]
  end

  it "matches unicode Katakana properties" do
    "Ruby（ルビー）、まつもとゆきひろ".match(/\p{Katakana}+/u).to_a.should == ["ルビ"]
  end

  it "matches unicode Hangul properties" do
    "루비(Ruby)".match(/\p{Hangul}+/u).to_a.should == ["루비"]
  end
end
