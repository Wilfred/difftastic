require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#to_s" do
  it "returns the string of this Text node" do
    u = REXML::Text.new("sean russell", false, nil, true)
    u.to_s.should == "sean russell"

    t = REXML::Text.new("some test text")
    t.to_s.should == "some test text"
  end

  it "escapes the text" do
    t = REXML::Text.new("& < >")
    t.to_s.should == "&amp; &lt; &gt;"
  end
end

