require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#prefixes" do
  before :each do
    @e = REXML::Element.new("root")
    a1 = REXML::Attribute.new("xmlns:a", "bar")
    a2 = REXML::Attribute.new("xmlns:b", "bla")
    a3 = REXML::Attribute.new("xmlns:c", "baz")
    @e.attributes << a1
    @e.attributes << a2
    @e.attributes << a3

    @e.attributes << REXML::Attribute.new("xmlns", "foo")
  end

  it "returns an array with the prefixes of each attribute" do
    @e.attributes.prefixes.sort.should == ["a", "b", "c"]
  end

  it "does not include the default namespace" do
    @e.attributes.prefixes.include?("xmlns").should == false
  end
end
