require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#values_at" do
  it "returns an array of the matching value" do
    /(.)(.)(\d+)(\d)/.match("THX1138: The Movie").values_at(0, 2, -2).should == ["HX1138", "X", "113"]
  end

  describe "when passed a Range" do
    it "returns an array of the matching value" do
      /(.)(.)(\d+)(\d)/.match("THX1138: The Movie").values_at(2..4, 0..1).should == ["X", "113", "8", "HX1138", "H"]
    end
  end

  ruby_version_is '2.4' do
    it 'slices captures with the given names' do
      /(?<a>.)(?<b>.)(?<c>.)/.match('012').values_at(:c, :a).should == ['2', '0']
    end

    it 'takes names and indices' do
      /\A(?<a>.)(?<b>.)\z/.match('01').values_at(0, 1, 2, :a, :b).should == ['01', '0', '1', '0', '1']
    end
  end
end
