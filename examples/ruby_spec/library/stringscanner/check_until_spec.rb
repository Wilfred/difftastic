require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#check_until" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the same value of scan_until, but don't advances the scan pointer" do
    @s.check_until(/a/).should == "This is a"
    @s.pos.should == 0
    @s.matched.should == "a"
    @s.check_until(/test/).should == "This is a test"
  end
end
