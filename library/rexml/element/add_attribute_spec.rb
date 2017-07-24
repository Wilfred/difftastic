require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#add_attribute" do
  before :each do
    @person = REXML::Element.new "person"
    @person.attributes["name"] = "Bill"
  end

  it "adds a new attribute" do
    @person.add_attribute("age", "17")
    @person.attributes["age"].should == "17"
  end

  it "overwrites an existing attribute" do
    @person.add_attribute("name", "Bill")
    @person.attributes["name"].should == "Bill"
  end

  it "accepts a pair of strings" do
    @person.add_attribute("male", "true")
    @person.attributes["male"].should == "true"
  end

  it "accepts an Attribute for key" do
    attr = REXML::Attribute.new("male", "true")
    @person.add_attribute attr
    @person.attributes["male"].should == "true"
  end

  it "ignores value if key is an Attribute" do
    attr = REXML::Attribute.new("male", "true")
    @person.add_attribute(attr, "false")
    @person.attributes["male"].should == "true"
  end

  it "returns the attribute added" do
    attr = REXML::Attribute.new("name", "Tony")
    @person.add_attribute(attr).should == attr
  end
end
