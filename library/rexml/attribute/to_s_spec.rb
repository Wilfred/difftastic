require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#to_s" do
  it "returns the value of the Attribute" do
    REXML::Attribute.new("name", "some_value").to_s.should == "some_value"
  end

  it "returns the escaped value if it was created from Attribute" do
    orig = REXML::Attribute.new("name", "<&>")
    copy =  REXML::Attribute.new(orig)
    copy.to_s.should == "&lt;&amp;&gt;"
  end
end
