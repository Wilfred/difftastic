require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#namespace" do
  it "returns the namespace url" do
    e = REXML::Element.new("root")
    e.add_attribute REXML::Attribute.new("xmlns:ns", "http://some_uri")
    e.namespace("ns").should == "http://some_uri"
  end

  it "returns nil if namespace is not defined" do
    e = REXML::Element.new("root")
    e.add_attribute REXML::Attribute.new("test", "value")
    e.namespace("test").should == nil
    e.namespace("ns").should == nil
  end

  it "defaults arg to nil" do
    e = REXML::Element.new("root")
    e.add_attribute REXML::Attribute.new("xmlns:ns", "http://some_uri")
    e.namespace.should == ""
    e.namespace("ns").should == "http://some_uri"
  end
end
