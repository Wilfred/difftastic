require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Node#each_recursive" do
  before :each do
    @doc = REXML::Document.new
    @doc << REXML::XMLDecl.new
    @root = REXML::Element.new "root"
    @child1 = REXML::Element.new "child1"
    @child2 = REXML::Element.new "child2"
    @root << @child1
    @root << @child2
    @doc << @root
  end

  it "visits all subnodes of self" do
    nodes = []
    @doc.each_recursive { |node| nodes << node}
    nodes.should == [@root, @child1, @child2]
  end
end
