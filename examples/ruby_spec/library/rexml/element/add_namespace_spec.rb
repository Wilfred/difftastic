require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#add_namespace" do
  before :each do
    @elem = REXML::Element.new("person")
  end

  it "adds a namespace to element" do
    @elem.add_namespace("foo", "bar")
    @elem.namespace("foo").should == "bar"
  end

  it "accepts a prefix string as prefix" do
    @elem.add_namespace("xmlns:foo", "bar")
    @elem.namespace("foo").should == "bar"
  end

  it "uses prefix as URI if uri is nil" do
    @elem.add_namespace("some_uri", nil)
    @elem.namespace.should == "some_uri"
  end
end

