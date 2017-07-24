require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Regexps with anchors" do
  it "supports ^ (line start anchor)" do
    # Basic matching
    /^foo/.match("foo").to_a.should == ["foo"]
    /^bar/.match("foo\nbar").to_a.should == ["bar"]
    # Basic non-matching
    /^foo/.match(" foo").should be_nil
    /foo^/.match("foo\n\n\n").should be_nil

    # A bit advanced
    /^^^foo/.match("foo").to_a.should == ["foo"]
    (/^[^f]/ =~ "foo\n\n").should == "foo\n".size and $~.to_a.should == ["\n"]
    (/($^)($^)/ =~ "foo\n\n").should == "foo\n".size and $~.to_a.should == ["", "", ""]

    # Different start of line chars
    /^bar/.match("foo\rbar").should be_nil
    /^bar/.match("foo\0bar").should be_nil

    # Trivial
    /^/.match("foo").to_a.should == [""]

    # Grouping
    /(^foo)/.match("foo").to_a.should == ["foo", "foo"]
    /(^)/.match("foo").to_a.should == ["", ""]
    /(foo\n^)(^bar)/.match("foo\nbar").to_a.should == ["foo\nbar", "foo\n", "bar"]
  end

  it "does not match ^ after trailing \\n" do
    /^(?!\A)/.match("foo\n").should be_nil # There is no (empty) line after a trailing \n
  end

  it "supports $ (line end anchor)" do
    # Basic  matching
    /foo$/.match("foo").to_a.should == ["foo"]
    /foo$/.match("foo\nbar").to_a.should == ["foo"]
    # Basic non-matching
    /foo$/.match("foo ").should be_nil
    /$foo/.match("\n\n\nfoo").should be_nil

    # A bit advanced
    /foo$$$/.match("foo").to_a.should == ["foo"]
    (/[^o]$/ =~ "foo\n\n").should == ("foo\n".size - 1) and $~.to_a.should == ["\n"]

    # Different end of line chars
    /foo$/.match("foo\r\nbar").should be_nil
    /foo$/.match("foo\0bar").should be_nil

    # Trivial
    (/$/ =~ "foo").should == "foo".size and $~.to_a.should == [""]

    # Grouping
    /(foo$)/.match("foo").to_a.should == ["foo", "foo"]
    (/($)/ =~ "foo").should == "foo".size and $~.to_a.should == ["", ""]
    /(foo$)($\nbar)/.match("foo\nbar").to_a.should == ["foo\nbar", "foo", "\nbar"]
  end

  it "supports \\A (string start anchor)" do
    # Basic matching
    /\Afoo/.match("foo").to_a.should == ["foo"]
    # Basic non-matching
    /\Abar/.match("foo\nbar").should be_nil
    /\Afoo/.match(" foo").should be_nil

    # A bit advanced
    /\A\A\Afoo/.match("foo").to_a.should == ["foo"]
    /(\A\Z)(\A\Z)/.match("").to_a.should == ["", "", ""]

    # Different start of line chars
    /\Abar/.match("foo\0bar").should be_nil

    # Grouping
    /(\Afoo)/.match("foo").to_a.should == ["foo", "foo"]
    /(\A)/.match("foo").to_a.should == ["", ""]
  end

  it "supports \\Z (string end anchor, including before trailing \\n)" do
    # Basic matching
    /foo\Z/.match("foo").to_a.should == ["foo"]
    /foo\Z/.match("foo\n").to_a.should == ["foo"]
    # Basic non-matching
    /foo\Z/.match("foo\nbar").should be_nil
    /foo\Z/.match("foo ").should be_nil

    # A bit advanced
    /foo\Z\Z\Z/.match("foo\n").to_a.should == ["foo"]
    (/($\Z)($\Z)/ =~ "foo\n").should == "foo".size and $~.to_a.should == ["", "", ""]
    (/(\z\Z)(\z\Z)/ =~ "foo\n").should == "foo\n".size and $~.to_a.should == ["", "", ""]

    # Different end of line chars
    /foo\Z/.match("foo\0bar").should be_nil
    /foo\Z/.match("foo\r\n").should be_nil

    # Grouping
    /(foo\Z)/.match("foo").to_a.should == ["foo", "foo"]
    (/(\Z)/ =~ "foo").should == "foo".size and $~.to_a.should == ["", ""]
  end

  it "supports \\z (string end anchor)" do
    # Basic matching
    /foo\z/.match("foo").to_a.should == ["foo"]
    # Basic non-matching
    /foo\z/.match("foo\nbar").should be_nil
    /foo\z/.match("foo\n").should be_nil
    /foo\z/.match("foo ").should be_nil

    # A bit advanced
    /foo\z\z\z/.match("foo").to_a.should == ["foo"]
    (/($\z)($\z)/ =~ "foo").should == "foo".size and $~.to_a.should == ["", "", ""]

    # Different end of line chars
    /foo\z/.match("foo\0bar").should be_nil
    /foo\z/.match("foo\r\nbar").should be_nil

    # Grouping
    /(foo\z)/.match("foo").to_a.should == ["foo", "foo"]
    (/(\z)/ =~ "foo").should == "foo".size and $~.to_a.should == ["", ""]
  end

  it "supports \\b (word boundary)" do
    # Basic matching
    /foo\b/.match("foo").to_a.should == ["foo"]
    /foo\b/.match("foo\n").to_a.should == ["foo"]
    LanguageSpecs.white_spaces.scan(/./).each do |c|
    /foo\b/.match("foo" + c).to_a.should == ["foo"]
    end
    LanguageSpecs.non_alphanum_non_space.scan(/./).each do |c|
    /foo\b/.match("foo" + c).to_a.should == ["foo"]
    end
    /foo\b/.match("foo\0").to_a.should == ["foo"]
    # Basic non-matching
    /foo\b/.match("foobar").should be_nil
    /foo\b/.match("foo123").should be_nil
    /foo\b/.match("foo_").should be_nil
  end

  it "supports \\B (non-word-boundary)" do
    # Basic matching
    /foo\B/.match("foobar").to_a.should == ["foo"]
    /foo\B/.match("foo123").to_a.should == ["foo"]
    /foo\B/.match("foo_").to_a.should == ["foo"]
    # Basic non-matching
    /foo\B/.match("foo").should be_nil
    /foo\B/.match("foo\n").should be_nil
    LanguageSpecs.white_spaces.scan(/./).each do |c|
    /foo\B/.match("foo" + c).should be_nil
    end
    LanguageSpecs.non_alphanum_non_space.scan(/./).each do |c|
    /foo\B/.match("foo" + c).should be_nil
    end
    /foo\B/.match("foo\0").should be_nil
  end

  it "supports (?= ) (positive lookahead)" do
    /foo.(?=bar)/.match("foo1 foo2bar").to_a.should == ["foo2"]
  end

  it "supports (?! ) (negative lookahead)" do
    /foo.(?!bar)/.match("foo1bar foo2").to_a.should == ["foo2"]
  end

  it "supports (?!<) (negative lookbehind)" do
    /(?<!foo)bar./.match("foobar1 bar2").to_a.should == ["bar2"]
  end

  it "supports (?<=) (positive lookbehind)" do
    /(?<=foo)bar./.match("bar1 foobar2").to_a.should == ["bar2"]
  end

  it "supports (?<=\\b) (positive lookbehind with word boundary)" do
    /(?<=\bfoo)bar./.match("1foobar1 foobar2").to_a.should == ["bar2"]
  end

  it "supports (?!<\\b) (negative lookbehind with word boundary)" do
    /(?<!\bfoo)bar./.match("foobar1 1foobar2").to_a.should == ["bar2"]
  end
end
