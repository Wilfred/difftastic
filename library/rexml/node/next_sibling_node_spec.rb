require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Node#next_sibling_node" do
  before :each do
    @e = REXML::Element.new("root")
    @node1 = REXML::Element.new("node")
    @node2 = REXML::Element.new("another node")
    @e << @node1
    @e << @node2
  end

  it "returns the next child node in parent" do
    @node1.next_sibling_node.should == @node2
  end

  it "returns nil if there are no more child nodes next" do
    @node2.next_sibling_node.should == nil
    @e.next_sibling_node.should == nil
  end
end
