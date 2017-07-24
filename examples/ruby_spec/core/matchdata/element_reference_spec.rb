require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#[]" do
  it "acts as normal array indexing [index]" do
    md = /(.)(.)(\d+)(\d)/.match("THX1138.")

    md[0].should == 'HX1138'
    md[1].should == 'H'
    md[2].should == 'X'
    md[-3].should == 'X'
    md[10000].should == nil
    md[-10000].should == nil
  end

  it "supports accessors [start, length]" do
    /(.)(.)(\d+)(\d)/.match("THX1138.")[1, 2].should == %w|H X|
    /(.)(.)(\d+)(\d)/.match("THX1138.")[-3, 2].should == %w|X 113|
  end

  it "supports ranges [start..end]" do
    /(.)(.)(\d+)(\d)/.match("THX1138.")[1..3].should == %w|H X 113|
  end
end

describe "MatchData#[Symbol]" do
  it "returns the corresponding named match when given a Symbol" do
    md = 'haystack'.match(/(?<t>t(?<a>ack))/)
    md[:a].should == 'ack'
    md[:t].should == 'tack'
  end

  it "returns the corresponding named match when given a String" do
    md = 'haystack'.match(/(?<t>t(?<a>ack))/)
    md['a'].should == 'ack'
    md['t'].should == 'tack'
  end

  it "returns the matching version of multiple corresponding named match" do
    regexp = /(?:
        A(?<word>\w+)
      |
        B(?<word>\w+)
    )/x
    md_a = regexp.match("Afoo")
    md_b = regexp.match("Bfoo")

    md_a[:word].should == "foo"
    md_b[:word].should == "foo"

    md_a['word'].should == "foo"
    md_b['word'].should == "foo"
  end

  it "returns the last match when multiple named matches exist with the same name" do
    md = /(?<word>hay)(?<word>stack)/.match('haystack')
    md[:word].should == "stack"
    md['word'].should == "stack"
  end

  it "returns nil on non-matching named matches" do
    regexp = /(?<foo>foo )?(?<bar>bar)/
    full_match = regexp.match("foo bar")
    partial_match = regexp.match("bar")

    full_match[:foo].should == "foo "
    partial_match[:foo].should == nil

    full_match['foo'].should == "foo "
    partial_match['foo'].should == nil
  end

  it "raises an IndexError if there is no named match corresponding to the Symbol" do
    md = 'haystack'.match(/(?<t>t(?<a>ack))/)
    lambda { md[:baz] }.should raise_error(IndexError, /baz/)
  end

  it "raises an IndexError if there is no named match corresponding to the String" do
    md = 'haystack'.match(/(?<t>t(?<a>ack))/)
    lambda { md['baz'] }.should raise_error(IndexError, /baz/)
  end

  it "returns matches in the String's encoding" do
    rex = /(?<t>t(?<a>ack))/u
    md = 'haystack'.force_encoding('euc-jp').match(rex)
    md[:t].encoding.should == Encoding::EUC_JP
  end
end
