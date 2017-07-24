require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#namespace" do
  before :each do
    @doc = REXML::Document.new("<a xmlns='1' xmlns:y='2'><b/><c xmlns:z='3'/></a>")
    @elem = @doc.elements["//b"]
  end

  it "returns the default namespace" do
    @elem.namespace.should == "1"
  end

  it "accepts a namespace prefix" do
    @elem.namespace("y").should == "2"
    @doc.elements["//c"].namespace("z").should == "3"
  end

  it "returns an empty String if default namespace is not defined" do
    e = REXML::Document.new("<a/>")
    e.root.namespace.should be_empty
  end

  it "returns nil if namespace is not defined" do
    @elem.namespace("z").should be_nil
  end
end
