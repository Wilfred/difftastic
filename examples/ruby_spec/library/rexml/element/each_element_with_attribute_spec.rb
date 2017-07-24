require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#each_element_with_attributes" do
  before :each do
    @document = REXML::Element.new("people")
    @father = REXML::Element.new("Person")
    @father.attributes["name"] = "Joe"
    @son = REXML::Element.new("Child")
    @son.attributes["name"] = "Fred"
    @document.root << @father
    @document.root << @son
    @childs = []
  end

  it "returns childs with attribute" do
    @document.each_element_with_attribute("name") { |elem| @childs << elem }
    @childs[0].should == @father
    @childs[1].should == @son
  end

  it "takes attribute value as second argument" do
    @document.each_element_with_attribute("name", "Fred"){ |elem| elem.should == @son }
  end

  it "takes max number of childs as third argument" do
    @document.each_element_with_attribute("name", nil, 1) { |elem| @childs << elem }
    @childs.size.should == 1
    @childs[0].should == @father
  end

  it "takes XPath filter as fourth argument" do
    @document.each_element_with_attribute("name", nil, 0, "Child"){ |elem| elem.should == @son}
  end
end
