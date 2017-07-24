require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#attribute" do
  it "returns an attribute by name" do
    person = REXML::Element.new "Person"
    attribute = REXML::Attribute.new("drink", "coffee")
    person.add_attribute(attribute)
    person.attribute("drink").should == attribute
  end

  it "supports attributes inside namespaces" do
    e = REXML::Element.new("element")
    e.add_attributes({"xmlns:ns" => "http://some_uri"})
    e.attribute("ns", "ns").to_s.should == "http://some_uri"
  end
end
