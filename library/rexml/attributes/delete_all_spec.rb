require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#delete_all" do
  before :each do
    @e = REXML::Element.new("root")
  end

  it "deletes all attributes that match name" do
    uri = REXML::Attribute.new("uri", "http://something")
    @e.attributes << uri
    @e.attributes.delete_all("uri")
    @e.attributes.should be_empty
    @e.attributes["uri"].should == nil
  end

  it "deletes all attributes that match name with a namespace" do
    ns_uri = REXML::Attribute.new("xmlns:uri", "http://something_here_too")
    @e.attributes << ns_uri
    @e.attributes.delete_all("xmlns:uri")
    @e.attributes.should be_empty
    @e.attributes["xmlns:uri"].should == nil
  end

  it "returns the removed attribute" do
    uri = REXML::Attribute.new("uri", "http://something_here_too")
    @e.attributes << uri
    attrs = @e.attributes.delete_all("uri")
    attrs.first.should == uri
  end
end
