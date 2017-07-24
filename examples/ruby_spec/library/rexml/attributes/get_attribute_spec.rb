require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#get_attribute" do
  before :each do
    @e = REXML::Element.new("root")
    @name = REXML::Attribute.new("name", "Dave")
    @e.attributes << @name
  end

  it "fetches an attributes" do
    @e.attributes.get_attribute("name").should == @name
  end

  it "fetches an namespaced attribute" do
    ns_name = REXML::Attribute.new("im:name", "Murray")
    @e.attributes << ns_name
    @e.attributes.get_attribute("name").should == @name
    @e.attributes.get_attribute("im:name").should == ns_name
  end

  it "returns an Attribute" do
    @e.attributes.get_attribute("name").should be_kind_of(REXML::Attribute)
  end

  it "returns nil if it attribute does not exist" do
    @e.attributes.get_attribute("fake").should be_nil
  end
end
