require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Node#index_in_parent" do
  it "returns the index (starting from 1) of self in parent" do
    e = REXML::Element.new("root")
    node1 = REXML::Element.new("node")
    node2 = REXML::Element.new("another node")
    e << node1
    e << node2

    node1.index_in_parent.should == 1
    node2.index_in_parent.should == 2
  end
end
