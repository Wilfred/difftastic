require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#delete_attribute" do
  before :each do
    @e = REXML::Element.new("Person")
    @attr = REXML::Attribute.new("name", "Sean")
    @e.add_attribute(@attr)
  end

  it "deletes an attribute from the element" do
    @e.delete_attribute("name")
    @e.attributes["name"].should be_nil
  end

#  Bug was filled with a patch in Ruby's tracker #20298
  quarantine! do
    it "receives an Attribute" do
      @e.add_attribute(@attr)
      @e.delete_attribute(@attr)
      @e.attributes["name"].should be_nil
    end
  end

  # Docs say that it returns the removed attribute but then examples
  # show it returns the element with the attribute removed.
  # Also fixed in #20298
  it "returns the element with the attribute removed" do
    elem = @e.delete_attribute("name")
    elem.attributes.should be_empty
    elem.to_s.should eql("<Person/>")
  end

  it "returns nil if the attribute does not exist" do
    @e.delete_attribute("name")
    at = @e.delete_attribute("name")
    at.should be_nil
  end
end
