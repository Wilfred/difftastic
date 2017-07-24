require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#inspect" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns a String object" do
    @s.inspect.should be_kind_of(String)
  end

  it "returns a string that represents the StringScanner object" do
    @s.inspect.should == "#<StringScanner 0/14 @ \"This ...\">"
    @s.scan_until(/is/)
    @s.inspect.should == "#<StringScanner 4/14 \"This\" @ \" is a...\">"
    @s.terminate
    @s.inspect.should == "#<StringScanner fin>"
  end
end
