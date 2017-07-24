require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#check" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the value that scan would return, without advancing the scan pointer" do
    @s.check(/This/).should == "This"
    @s.matched.should == "This"
    @s.pos.should == 0
    @s.check(/is/).should == nil
    @s.matched.should == nil
  end
end
