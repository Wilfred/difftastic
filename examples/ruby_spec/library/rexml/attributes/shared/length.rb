require File.expand_path('../../../../../spec_helper', __FILE__)
require 'rexml/document'

describe :rexml_attribute_length, shared: true do
  it "returns the number of attributes" do
    e = REXML::Element.new("root")
    e.attributes.send(@method).should == 0

    e.attributes << REXML::Attribute.new("name", "John")
    e.attributes << REXML::Attribute.new("another_name", "Leo")
    e.attributes.send(@method).should == 2
  end
end
