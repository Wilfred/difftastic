require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/extract_range_matched', __FILE__)
require 'strscan'

describe "StringScanner#rest" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the rest of the string" do
    @s.scan(/This\s+/)
    @s.rest.should == "is a test"
  end

  it "returns self in the reset position" do
    @s.reset
    @s.rest.should == @s.string
  end

  it "returns an empty string in the terminate position" do
    @s.terminate
    @s.rest.should == ""
  end

  it_behaves_like :extract_range_matched, :rest

end

describe "StringScanner#rest?" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns true if there is more data in the string" do
    @s.rest?.should be_true
    @s.scan(/This/)
    @s.rest?.should be_true
  end

  it "returns false if there is no more data in the string" do
    @s.terminate
    @s.rest?.should be_false
  end

  it "is the opposite of eos?" do
    @s.rest?.should_not == @s.eos?
  end
end
