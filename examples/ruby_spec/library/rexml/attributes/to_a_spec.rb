require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#to_a" do
  it "returns an array with the attributes" do
    e = REXML::Element.new("root")
    name = REXML::Attribute.new("name", "Dave")
    last = REXML::Attribute.new("last_name", "Murray")

    e.attributes << name
    e.attributes << last

    e.attributes.to_a.sort{|a,b|a.to_s<=>b.to_s}.should == [name, last]
  end

  it "returns an empty array if it has no attributes" do
    REXML::Element.new("root").attributes.to_a.should == []
  end
end

