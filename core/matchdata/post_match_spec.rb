require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#post_match" do
  it "returns the string after the match equiv. special var $'" do
    /(.)(.)(\d+)(\d)/.match("THX1138: The Movie").post_match.should == ': The Movie'
    $'.should == ': The Movie'
  end

  it "keeps taint status from the source string" do
    str = "THX1138: The Movie"
    str.taint
    res = /(.)(.)(\d+)(\d)/.match(str).post_match
    res.tainted?.should be_true
    $'.tainted?.should be_true
  end

  it "keeps untrusted status from the source string" do
    str = "THX1138: The Movie"
    str.untrust
    res = /(.)(.)(\d+)(\d)/.match(str).post_match
    res.untrusted?.should be_true
    $'.untrusted?.should be_true
  end

  with_feature :encoding do
    it "sets the encoding to the encoding of the source String" do
      str = "abc".force_encoding Encoding::EUC_JP
      str.match(/b/).post_match.encoding.should equal(Encoding::EUC_JP)
    end

    it "sets an empty result to the encoding of the source String" do
      str = "abc".force_encoding Encoding::ISO_8859_1
      str.match(/c/).post_match.encoding.should equal(Encoding::ISO_8859_1)
    end
  end
end
