require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#initialize" do
  before :each do
    @e = REXML::Element.new "root"
    @name = REXML::Attribute.new("name", "Nicko")
    @e.add_attribute @name
  end

  it "receives two strings for name and value" do
    @e.attributes["name"].should == "Nicko"
    @e.add_attribute REXML::Attribute.new("last_name", nil)
    @e.attributes["last_name"].should == ""
  end

  it "receives an Attribute and clones it" do
    copy = REXML::Attribute.new(@name)
    copy.should == @name
  end

  it "recives a parent node" do
    last_name = REXML::Attribute.new("last_name", "McBrain", @e)
    last_name.element.should == @e

    last_name = REXML::Attribute.new(@name, @e)
    last_name.element.should == @e
  end
end
