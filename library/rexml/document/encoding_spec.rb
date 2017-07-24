require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#encoding" do
  before :each do
    @doc = REXML::Document.new
  end

  it "returns encoding from XML declaration" do
    @doc.add REXML::XMLDecl.new(nil, "UTF-16", nil)
    @doc.encoding.should == "UTF-16"
  end

  it "returns encoding from XML declaration (for UTF-16 as well)" do
    @doc.add REXML::XMLDecl.new("1.0", "UTF-8", nil)
    @doc.encoding.should == "UTF-8"
  end

  it "uses UTF-8 as default encoding" do
    @doc.encoding.should == "UTF-8"
  end
end
