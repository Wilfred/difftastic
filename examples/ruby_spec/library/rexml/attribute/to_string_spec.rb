require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#to_string" do
  it "returns the attribute as XML" do
    attr = REXML::Attribute.new("name", "value")
    attr_empty = REXML::Attribute.new("name")
    attr_ns = REXML::Attribute.new("xmlns:ns", "http://uri")

    attr.to_string.should == "name='value'"
    attr_empty.to_string.should == "name=''"
    attr_ns.to_string.should == "xmlns:ns='http://uri'"
  end
end

