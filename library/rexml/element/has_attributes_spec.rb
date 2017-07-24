require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#has_attributes?" do
  before :each do
    @e = REXML::Element.new("test_elem")
  end

  it "returns true when element has any attributes" do
    @e.add_attribute("name", "Joe")
    @e.has_attributes?.should be_true
  end

  it "returns false if element has no attributes" do
    @e.has_attributes?.should be_false
  end
end
