require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#skip_until" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the number of bytes advanced and advances the scan pointer until pattern is matched and consumed" do
    @s.skip_until(/a/).should == 9
    @s.pos.should == 9
    @s.matched.should == "a"
  end

  it "returns nil if no match was found" do
    @s.skip_until(/d+/).should == nil
  end
end
