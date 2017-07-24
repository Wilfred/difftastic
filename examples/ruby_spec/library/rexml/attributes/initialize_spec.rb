require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#initialize" do
  it "is auto initialized by Element" do
    e = REXML::Element.new "root"
    e.attributes.should be_kind_of(REXML::Attributes)

    e.attributes << REXML::Attribute.new("name", "Paul")
    e.attributes["name"].should == "Paul"
  end

  it "receives a parent node" do
    e = REXML::Element.new "root"
    e.attributes << REXML::Attribute.new("name", "Vic")
    e.attributes["name"].should == "Vic"
  end
end
