require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Node#find_first_recursive" do
  before :each do
    @e = REXML::Element.new("root")
    @node1 = REXML::Element.new("node")
    @node2 = REXML::Element.new("another node")
    @subnode = REXML::Element.new("another node")
    @node1 << @subnode
    @e << @node1
    @e << @node2
  end

  it "finds the first element that matches block" do
    found = @e.find_first_recursive { |n| n.to_s == "<node><another node/></node>"}
    found.should == @node1
  end

  it "visits the nodes in preorder" do
    found = @e.find_first_recursive { |n| n.to_s == "<another node/>"}
    found.should == @subnode
    found.should_not == @node2
  end
end
