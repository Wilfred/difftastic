require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#wrap" do
  before :each do
    @t = REXML::Text.new("abc def")
  end

  it "wraps the text at width" do
    @t.wrap("abc def", 3, false).should == "abc\ndef"
  end

  it "returns the string if width is greater than the size of the string" do
    @t.wrap("abc def", 10, false).should == "abc def"
  end

  it "takes a newline at the beginning option as the third parameter" do
    @t.wrap("abc def", 3, true).should == "\nabc\ndef"
  end
end

