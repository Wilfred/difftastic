require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#delete" do
  before :each do
    @e = REXML::Element.new("root")
    @name = REXML::Attribute.new("name", "Pepe")
  end

  it "takes an attribute name and deletes the attribute" do
    @e.attributes.delete("name")
    @e.attributes["name"].should be_nil
    @e.attributes.should be_empty
  end

  it "takes an Attribute and deletes it" do
    @e.attributes.delete(@name)
    @e.attributes["name"].should be_nil
    @e.attributes.should be_empty
  end

  it "returns the element with the attribute removed" do
    ret_val = @e.attributes.delete(@name)
    ret_val.should == @e
    ret_val.attributes.should be_empty
  end
end
