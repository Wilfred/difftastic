require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#captures" do
  it "returns an array of the match captures" do
    /(.)(.)(\d+)(\d)/.match("THX1138.").captures.should == ["H","X","113","8"]
  end
end
