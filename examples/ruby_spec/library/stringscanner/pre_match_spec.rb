require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/extract_range_matched', __FILE__)
require 'strscan'

describe "StringScanner#pre_match" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the pre-match (in the regular expression sense) of the last scan" do
    @s.pre_match.should == nil
    @s.scan(/\w+\s/)
    @s.pre_match.should == ""
    @s.getch
    @s.pre_match.should == "This "
    @s.get_byte
    @s.pre_match.should == "This i"
    @s.get_byte
    @s.pre_match.should == "This is"
  end

  it "returns nil if there's no match" do
    @s.scan(/\s+/)
    @s.pre_match.should == nil
  end

  it "is more than just the data from the last match" do
    @s.scan(/\w+/)
    @s.scan_until(/a te/)
    @s.pre_match.should == "This is "
  end

  it "is not changed when the scanner's position changes" do
    @s.scan_until(/\s+/)
    @s.pre_match.should == "This"
    @s.pos -= 1
    @s.pre_match.should == "This"
  end

  it_behaves_like :extract_range_matched, :pre_match
end
