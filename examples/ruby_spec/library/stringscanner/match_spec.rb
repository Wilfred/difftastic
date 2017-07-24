require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#match?" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the length of the match and the scan pointer is not advanced" do
    @s.match?(/\w+/).should == 4
    @s.match?(/\w+/).should == 4
    @s.pos.should == 0
  end

  it "returns nil if there's no match" do
    @s.match?(/\d+/).should == nil
    @s.match?(/\s+/).should == nil
  end

  it "effects pre_match" do
    @s.scan(/\w+/)
    @s.scan(/\s/)

    @s.pre_match.should == "This"
    @s.match?(/\w+/)
    @s.pre_match.should == "This "
  end
end
