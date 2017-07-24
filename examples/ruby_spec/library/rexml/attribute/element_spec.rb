require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#element" do
  it "returns the parent element" do
    e = REXML::Element.new "root"

    REXML::Attribute.new("name", "value", e).element.should == e
    REXML::Attribute.new("name", "default_constructor").element.should == nil
  end
end

describe "REXML::Attribute#element=" do
  it "sets the parent element" do
    e = REXML::Element.new "root"
    f = REXML::Element.new "temp"
    a = REXML::Attribute.new("name", "value", e)
    a.element.should == e

    a.element = f
    a.element.should == f
  end
end
