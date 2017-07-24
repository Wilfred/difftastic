require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text.unnormalize" do
  it "unescapes a string with the values defined in SETUTITSBUS" do
    REXML::Text.unnormalize("&lt; &gt; &amp; &quot; &apos;").should == "< > & \" '"
  end
end
