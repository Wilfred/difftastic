# -*- encoding: utf-8 -*-

require File.expand_path('../../../spec_helper', __FILE__)

describe "MatchData#begin" do
  it "returns the offset of the start of the nth element" do
    match_data = /(.)(.)(\d+)(\d)/.match("THX1138.")
    match_data.begin(0).should == 1
    match_data.begin(2).should == 2
  end

  it "returns nil when the nth match isn't found" do
    match_data = /something is( not)? (right)/.match("something is right")
    match_data.begin(1).should be_nil
  end

  it "returns the offset for multi byte strings" do
    match_data = /(.)(.)(\d+)(\d)/.match("TñX1138.")
    match_data.begin(0).should == 1
    match_data.begin(2).should == 2
  end

  not_supported_on :opal do
    it "returns the offset for multi byte strings with unicode regexp" do
      match_data = /(.)(.)(\d+)(\d)/u.match("TñX1138.")
      match_data.begin(0).should == 1
      match_data.begin(2).should == 2
    end
  end
end
