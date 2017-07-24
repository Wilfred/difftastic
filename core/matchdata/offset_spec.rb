# -*- encoding: utf-8 -*-

require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#offset" do
  it "returns a two element array with the begin and end of the nth match" do
    match_data = /(.)(.)(\d+)(\d)/.match("THX1138.")
    match_data.offset(0).should == [1, 7]
    match_data.offset(4).should == [6, 7]
  end

  it "returns [nil, nil] when the nth match isn't found" do
    match_data = /something is( not)? (right)/.match("something is right")
    match_data.offset(1).should == [nil, nil]
  end

  it "returns the offset for multi byte strings" do
    match_data = /(.)(.)(\d+)(\d)/.match("TñX1138.")
    match_data.offset(0).should == [1, 7]
    match_data.offset(4).should == [6, 7]
  end

  not_supported_on :opal do
    it "returns the offset for multi byte strings with unicode regexp" do
      match_data = /(.)(.)(\d+)(\d)/u.match("TñX1138.")
      match_data.offset(0).should == [1, 7]
      match_data.offset(4).should == [6, 7]
    end
  end
end
