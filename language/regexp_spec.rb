require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Literal Regexps" do
  it "matches against $_ (last input) in a conditional if no explicit matchee provided" do
    -> {
      eval <<-EOR
      $_ = nil
      (true if /foo/).should_not == true

      $_ = "foo"
      (true if /foo/).should == true
      EOR
    }.should complain(/regex literal in condition/)
  end

  it "yields a Regexp" do
    /Hello/.should be_kind_of(Regexp)
  end

  it "caches the Regexp object" do
    rs = []
    2.times do |i|
      rs << /foo/
    end
    rs[0].should equal(rs[1])
  end

  it "throws SyntaxError for malformed literals" do
    lambda { eval('/(/') }.should raise_error(SyntaxError)
  end

  #############################################################################
  # %r
  #############################################################################

  it "supports paired delimiters with %r" do
    LanguageSpecs.paired_delimiters.each do |p0, p1|
      eval("%r#{p0} foo #{p1}").should == / foo /
    end
  end

  it "supports grouping constructs that are also paired delimiters" do
    LanguageSpecs.paired_delimiters.each do |p0, p1|
      eval("%r#{p0} () [c]{1} #{p1}").should == / () [c]{1} /
    end
  end

  it "allows second part of paired delimiters to be used as non-paired delimiters" do
    LanguageSpecs.paired_delimiters.each do |p0, p1|
      eval("%r#{p1} foo #{p1}").should == / foo /
    end
  end

  it "disallows first part of paired delimiters to be used as non-paired delimiters" do
    LanguageSpecs.paired_delimiters.each do |p0, p1|
      lambda { eval("%r#{p0} foo #{p0}") }.should raise_error(SyntaxError)
    end
  end

  it "supports non-paired delimiters delimiters with %r" do
    LanguageSpecs.non_paired_delimiters.each do |c|
      eval("%r#{c} foo #{c}").should == / foo /
    end
  end

  it "disallows alphabets as non-paired delimiter with %r" do
    lambda { eval('%ra foo a') }.should raise_error(SyntaxError)
  end

  it "disallows spaces after %r and delimiter" do
    lambda { eval('%r !foo!') }.should raise_error(SyntaxError)
  end

  it "allows unescaped / to be used with %r" do
    %r[/].to_s.should == /\//.to_s
  end


  #############################################################################
  # Specs for the matching semantics
  #############################################################################

  it "supports . (any character except line terminator)" do
    # Basic matching
    /./.match("foo").to_a.should == ["f"]
    # Basic non-matching
    /./.match("").should be_nil
    /./.match("\n").should be_nil
    /./.match("\0").to_a.should == ["\0"]
  end


  it "supports | (alternations)" do
    /a|b/.match("a").to_a.should == ["a"]
  end

  it "supports (?> ) (embedded subexpression)" do
    /(?>foo)(?>bar)/.match("foobar").to_a.should == ["foobar"]
    /(?>foo*)obar/.match("foooooooobar").should be_nil # it is possesive
  end

  it "supports (?# )" do
    /foo(?#comment)bar/.match("foobar").to_a.should == ["foobar"]
    /foo(?#)bar/.match("foobar").to_a.should == ["foobar"]
  end

  it "supports (?<= ) (positive lookbehind)" do
    /foo.(?<=\d)/.match("fooA foo1").to_a.should == ["foo1"]
  end

  it "supports (?<! ) (negative lookbehind)" do
    /foo.(?<!\d)/.match("foo1 fooA").to_a.should == ["fooA"]
  end

  it "supports \\g (named backreference)" do
    /(?<foo>foo.)bar\g<foo>/.match("foo1barfoo2").to_a.should == ["foo1barfoo2", "foo2"]
  end

  it "supports character class composition" do
    /[a-z&&[^a-c]]+/.match("abcdef").to_a.should == ["def"]
    /[a-z&&[^d-i&&[^d-f]]]+/.match("abcdefghi").to_a.should == ["abcdef"]
  end

  it "supports possessive quantifiers" do
    /fooA++bar/.match("fooAAAbar").to_a.should == ["fooAAAbar"]

    /fooA++Abar/.match("fooAAAbar").should be_nil
    /fooA?+Abar/.match("fooAAAbar").should be_nil
    /fooA*+Abar/.match("fooAAAbar").should be_nil
  end

  it "supports conditional regular expressions with positional capture groups" do
    pattern = /\A(foo)?(?(1)(T)|(F))\z/

    pattern.should =~ 'fooT'
    pattern.should =~ 'F'
    pattern.should_not =~ 'fooF'
    pattern.should_not =~ 'T'
  end

  it "supports conditional regular expressions with named capture groups" do
    pattern = /\A(?<word>foo)?(?(<word>)(T)|(F))\z/

    pattern.should =~ 'fooT'
    pattern.should =~ 'F'
    pattern.should_not =~ 'fooF'
    pattern.should_not =~ 'T'
  end
end
