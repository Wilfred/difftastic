require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#clone" do
  before :each do
    @e = REXML::Element.new "a"
  end
  it "creates a copy of element" do
    @e.clone.to_s.should == @e.to_s
  end

  it "copies the attributes" do
    @e.add_attribute("foo", "bar")
    @e.clone.to_s.should == @e.to_s
  end

  it "does not copy the text" do
    @e.add_text "some text..."
    @e.clone.to_s.should_not == @e
    @e.clone.to_s.should == "<a/>"
  end

  it "does not copy the child elements" do
    b = REXML::Element.new "b"
    @e << b
    @e.clone.should_not == @e
    @e.clone.to_s.should == "<a/>"
  end
end
