require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#empty?" do
  it "returns true if the text is empty" do
    REXML::Text.new("").empty?.should == true
  end

  it "returns false if the text is not empty" do
    REXML::Text.new("some_text").empty?.should == false
  end
end
