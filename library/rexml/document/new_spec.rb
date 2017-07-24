require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Document#new" do

  it "initializes context of {} unless specified" do
    d = REXML::Document.new("<foo />")
    d.context.should == {}
  end

  it "has empty attributes if source is nil" do
    d = REXML::Document.new(nil)
    d.elements.should be_empty
  end

  it "can use other document context" do
    s = REXML::Document.new("")
    d = REXML::Document.new(s)
    d.context.should == s.context
  end

  it "clones source attributes" do
    s = REXML::Document.new("<root />")
    s.attributes["some_attr"] = "some_val"
    d = REXML::Document.new(s)
    d.attributes.should == s.attributes
  end

  it "raises an error if source is not a Document, String or IO" do
    lambda {REXML::Document.new(3)}.should raise_error(RuntimeError)
  end

  it "does not perform XML validation" do
    REXML::Document.new("Invalid document").should be_kind_of(REXML::Document)
  end
end
