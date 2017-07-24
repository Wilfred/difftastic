require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/extract_range_matched', __FILE__)
require 'strscan'

describe "StringScanner#matched" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the last matched string" do
    @s.match?(/\w+/)
    @s.matched.should == "This"
    @s.getch
    @s.matched.should == "T"
    @s.get_byte
    @s.matched.should == "h"
  end

  it "returns nil if there's no match" do
    @s.match?(/\d+/)
    @s.matched.should == nil
  end

  it_behaves_like :extract_range_matched, :matched
end

describe "StringScanner#matched?" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns true if the last match was successful" do
    @s.match?(/\w+/)
    @s.matched?.should be_true
  end

  it "returns false if there's no match" do
    @s.match?(/\d+/)
    @s.matched?.should be_false
  end
end
