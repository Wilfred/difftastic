require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#add_namespace" do
  before :each do
    @name = REXML::Element.new "Name"
  end

  it "adds text to an element" do
    @name.add_text "Ringo"
    @name.to_s.should == "<Name>Ringo</Name>"
  end

  it "accepts a Text" do
    @name.add_text(REXML::Text.new("Ringo"))
    @name.to_s.should == "<Name>Ringo</Name>"
  end

  it "joins the new text with the old one" do
    @name.add_text "Ringo"
    @name.add_text " Starr"
    @name.to_s.should == "<Name>Ringo Starr</Name>"
  end
end
