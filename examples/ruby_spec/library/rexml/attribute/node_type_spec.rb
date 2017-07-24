require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#node_type" do
  it "always returns :attribute" do
    attr = REXML::Attribute.new("foo", "bar")
    attr.node_type.should == :attribute
    REXML::Attribute.new(attr).node_type.should == :attribute
  end
end
