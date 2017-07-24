require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#delete_element" do
  before :each do
    @root = REXML::Element.new("root")
  end

  it "deletes the child element" do
    node = REXML::Element.new("some_node")
    @root.add_element node
    @root.delete_element node
    @root.elements.size.should == 0
  end

  it "deletes a child via XPath" do
    @root.add_element "some_node"
    @root.delete_element "some_node"
    @root.elements.size.should == 0
  end

  it "deletes the child at index" do
    @root.add_element "some_node"
    @root.delete_element 1
    @root.elements.size.should == 0
  end

  # According to the docs this should return the deleted element
  # but it won't if it's an Element.
  it "deletes Element and returns it" do
    node = REXML::Element.new("some_node")
    @root.add_element node
    del_node = @root.delete_element node
    del_node.should == node
  end

  # Note how passing the string will return the removed element
  # but passing the Element as above won't.
  it "deletes an element and returns it" do
    node = REXML::Element.new("some_node")
    @root.add_element node
    del_node = @root.delete_element "some_node"
    del_node.should == node
  end

  it "returns nil unless element exists" do
    @root.delete_element("something").should == nil
  end
end
