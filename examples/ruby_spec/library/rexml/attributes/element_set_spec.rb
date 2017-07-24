require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#[]=" do
  before :each do
    @e = REXML::Element.new("song")
    @name = REXML::Attribute.new("name", "Holy Smoke!")
    @e.attributes << @name
  end

  it "sets an attribute" do
    @e.attributes["author"] = "_why's foxes"
    @e.attributes["author"].should == "_why's foxes"
  end

  it "overwrites an existing attribute" do
    @e.attributes["name"] = "Chunky Bacon"
    @e.attributes["name"].should == "Chunky Bacon"
  end

  it "deletes an attribute is value is nil" do
    @e.attributes["name"] = nil
    @e.attributes.length.should == 0
  end
end

