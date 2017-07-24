require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#previous_element" do
  before :each do
    @a = REXML::Element.new "a"
    @b = REXML::Element.new "b"
    @c = REXML::Element.new "c"
    @a.root << @b
    @a.root << @c
  end

  it "returns previous element" do
    @a.elements["c"].previous_element.should == @b
  end

  it "returns nil on first element" do
    @a.elements["b"].previous_element.should == nil
  end
end
