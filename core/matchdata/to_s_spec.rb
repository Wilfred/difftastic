require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#to_s" do
  it "returns the entire matched string" do
    /(.)(.)(\d+)(\d)/.match("THX1138.").to_s.should == "HX1138"
  end
end
