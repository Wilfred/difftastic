require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#reset" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "reset the scan pointer and clear matching data" do
    @s.scan(/This/)
    @s.reset
    @s.pos.should == 0
    @s.matched.should == nil
  end
end
