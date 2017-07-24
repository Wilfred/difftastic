require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#document" do

  it "returns the element's document" do
    d = REXML::Document.new("<root><elem/></root>")
    d << REXML::XMLDecl.new
    d.root.document.should == d
    d.root.document.to_s.should == d.to_s
  end

  it "returns nil if it belongs to no document" do
    REXML::Element.new("standalone").document.should be_nil
  end
end


