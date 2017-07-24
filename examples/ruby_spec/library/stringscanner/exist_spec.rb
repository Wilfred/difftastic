require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#exist?" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the index of the first occurrence of the given pattern" do
    @s.exist?(/s/).should == 4
    @s.scan(/This is/)
    @s.exist?(/s/).should == 6
  end

  it "returns 0 if the pattern is empty" do
    @s.exist?(//).should == 0
  end

  it "returns nil if the pattern isn't found in the string" do
    @s.exist?(/S/).should == nil
    @s.scan(/This is/)
    @s.exist?(/i/).should == nil
  end
end
