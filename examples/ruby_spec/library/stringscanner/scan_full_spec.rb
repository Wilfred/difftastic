require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#scan_full" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the number of bytes advanced" do
    orig_pos = @s.pos
    @s.scan_full(/This/, false, false).should == 4
    @s.pos.should == orig_pos
  end

  it "returns the number of bytes advanced and advances the scan pointer if the second argument is true" do
    @s.scan_full(/This/, true, false).should == 4
    @s.pos.should == 4
  end

  it "returns the matched string if the third argument is true" do
    orig_pos = @s.pos
    @s.scan_full(/This/, false, true).should == "This"
    @s.pos.should == orig_pos
  end

  it "returns the matched string if the third argument is true and advances the scan pointer if the second argument is true" do
    @s.scan_full(/This/, true, true).should == "This"
    @s.pos.should == 4
  end
end
