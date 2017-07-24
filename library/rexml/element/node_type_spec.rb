require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#node_type" do
  it "returns :element" do
    REXML::Element.new("MyElem").node_type.should == :element
  end
end
