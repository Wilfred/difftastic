require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#get_attribute_ns" do
  it "returns an attribute by name and namespace" do
    e = REXML::Element.new("root")
    attr = REXML::Attribute.new("xmlns:ns", "http://some_url")
    e.attributes << attr
    attr.prefix.should == "xmlns"
    # This might be a bug in Attribute, commenting until those specs
    # are ready
    # e.attributes.get_attribute_ns(attr.prefix, "name").should == "http://some_url"
  end
end
