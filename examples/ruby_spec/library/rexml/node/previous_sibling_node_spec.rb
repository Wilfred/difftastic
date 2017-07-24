require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Node#previous_sibling_node" do
  before :each do
    @e = REXML::Element.new("root")
    @node1 = REXML::Element.new("node")
    @node2 = REXML::Element.new("another node")
    @e << @node1
    @e << @node2
  end

  it "returns the previous child node in parent" do
    @node2.previous_sibling_node.should == @node1
  end

  it "returns nil if there are no more child nodes before" do
    @node1.previous_sibling_node.should == nil
    @e.previous_sibling_node.should == nil
  end
end
