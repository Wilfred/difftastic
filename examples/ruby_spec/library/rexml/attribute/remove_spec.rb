require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#remove" do
  before :each do
    @e = REXML::Element.new "Root"
    @attr = REXML::Attribute.new("foo", "bar")
  end

  it "deletes this Attribute from parent" do
    @e.add_attribute(@attr)
    @e.attributes["foo"].should_not == nil
    @attr.remove
    @e.attributes["foo"].should == nil
  end

  it "does not anything if element has no parent" do
    lambda {@attr.remove}.should_not raise_error(Exception)
  end
end
