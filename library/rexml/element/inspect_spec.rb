require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#inspect" do

  before :each do
    @name = REXML::Element.new "name"
  end

  it "returns the node as a string" do
    @name.inspect.should == "<name/>"
  end

  it "inserts '...' if the node has children" do
    e = REXML::Element.new "last_name"
    @name << e
    @name.inspect.should == "<name> ... </>"
    # This might make more sense but differs from MRI's default behavior
    # @name.inspect.should == "<name> ... </name>"
  end

  it "inserts the attributes in the string" do
    @name.add_attribute "language"
    @name.attributes["language"] = "english"
    @name.inspect.should == "<name language='english'/>"
  end
end
