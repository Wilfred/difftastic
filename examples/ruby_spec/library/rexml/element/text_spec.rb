require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#text" do
  before :each do
    @e = REXML::Element.new "name"
    @e.text = "John"
  end

  it "returns the text node of element" do
    @e.text.should == "John"
  end

  it "returns the text node value" do
    t = REXML::Text.new "Joe"
    @e.text = t
    @e.text.should == "Joe"
    @e.text.should_not == t
  end

  it "returns nil if no text is attached" do
    elem = REXML::Element.new "name"
    elem.text.should == nil
  end
end

describe "REXML::Element#text=" do
  before :each do
    @e = REXML::Element.new "name"
    @e.text = "John"
  end

  it "sets the text node" do
    @e.to_s.should == "<name>John</name>"
  end

  it "replaces existing text" do
    @e.text = "Joe"
    @e.to_s.should == "<name>Joe</name>"
  end

  it "receives nil as an argument" do
    @e.text = nil
    @e.to_s.should == "<name/>"
  end
end
