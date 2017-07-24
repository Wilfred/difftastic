require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#write_with_substitution" do
  before :each do
    @t = REXML::Text.new("test")
    @f = tmp("rexml_spec")
    @file = File.open(@f, "w+")
  end

  after :each do
    @file.close
    rm_r @f
  end

  it "writes out the input to a String" do
    s = ""
    @t.write_with_substitution(s, "some text")
    s.should == "some text"
  end

  it "writes out the input to an IO" do
    @t.write_with_substitution(@file, "some text")
    @file.rewind
    @file.gets.should == "some text"
  end

  it "escapes characters" do
    @t.write_with_substitution(@file, "& < >")
    @file.rewind
    @file.gets.should == "&amp; &lt; &gt;"
  end
end
