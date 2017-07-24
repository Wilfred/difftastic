require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#delete_namespace" do

  before :each do
    @doc = REXML::Document.new "<a xmlns:foo='bar' xmlns='twiddle'/>"
  end

  it "deletes a namespace from the element" do
    @doc.root.delete_namespace 'foo'
    @doc.root.namespace("foo").should be_nil
    @doc.root.to_s.should == "<a xmlns='twiddle'/>"
  end

  it "deletes default namespace when called with no args" do
    @doc.root.delete_namespace
    @doc.root.namespace.should be_empty
    @doc.root.to_s.should == "<a xmlns:foo='bar'/>"
  end

  it "returns the element" do
    @doc.root.delete_namespace.should == @doc.root
  end
end
