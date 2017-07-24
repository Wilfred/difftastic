require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#inspect" do
  it "returns the name and value as a string" do
    a = REXML::Attribute.new("my_name", "my_value")
    a.inspect.should == "my_name='my_value'"
  end

  it "accepts attributes with no value" do
    a = REXML::Attribute.new("my_name")
    a.inspect.should == "my_name=''"
  end

  it "does not escape text" do
    a = REXML::Attribute.new("&&", "<>")
    a.inspect.should == "&&='<>'"
  end
end

