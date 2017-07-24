require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#prefix" do
  it "returns the namespace of the Attribute" do
    ans = REXML::Attribute.new("ns:someattr", "some_value")
    out = REXML::Attribute.new("out:something", "some_other_value")

    ans.prefix.should == "ns"
    out.prefix.should == "out"
  end

  it "returns an empty string for Attributes with no prefixes" do
    attr = REXML::Attribute.new("foo", "bar")

    attr.prefix.should == ""
  end
end
