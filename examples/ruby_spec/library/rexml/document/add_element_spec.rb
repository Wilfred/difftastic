require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#add_element" do
  it "adds arg1 with attributes arg2 as root node" do
    d = REXML::Document.new
    e = REXML::Element.new("root")
    d.add_element e
    d.root.should == e
  end

  it "sets arg2 as arg1's attributes" do
    d = REXML::Document.new
    e = REXML::Element.new("root")
    attr = {"foo" => "bar"}
    d.add_element(e,attr)
    d.root.attributes["foo"].should == attr["foo"]
  end

  it "accepts a node name as arg1 and adds it as root" do
    d = REXML::Document.new
    d.add_element "foo"
    d.root.name.should == "foo"
  end

  it "sets arg1's context to the root's context" do
    d = REXML::Document.new("", {"foo" => "bar"})
    d.add_element "foo"
    d.root.context.should == d.context
  end
end
