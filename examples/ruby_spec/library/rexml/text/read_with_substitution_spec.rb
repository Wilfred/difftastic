require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text.read_with_substitution" do
  it "reads a text and escapes entities" do
    REXML::Text.read_with_substitution("&lt; &gt; &amp; &quot; &apos;").should == "< > & \" '"
  end

  it "accepts an regex for invalid expressions and raises an error if text matches" do
    lambda {REXML::Text.read_with_substitution("this is illegal", /illegal/)}.should raise_error(Exception)
  end
end

