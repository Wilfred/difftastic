require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text.normalize" do
  it "escapes a string with <, >, &, ' and \" " do
    REXML::Text.normalize("< > & \" '").should == "&lt; &gt; &amp; &quot; &apos;"
  end
end
