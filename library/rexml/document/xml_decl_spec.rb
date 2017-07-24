require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#xml_decl" do
  it "returns XML declaration of the document" do
    d = REXML::Document.new
    decl = REXML::XMLDecl.new("1.0", "UTF-16", "yes")
    d.add decl
    d.xml_decl.should == decl
  end

  it "returns default XML declaration unless present" do
    REXML::Document.new.xml_decl.should == REXML::XMLDecl.new
  end
end
