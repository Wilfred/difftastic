require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#write" do
  before :each do
    @attr = REXML::Attribute.new("name", "Charlotte")
    @s = ""
  end

  it "writes the name and value to output" do
    @attr.write(@s)
    @s.should == "name='Charlotte'"
  end

  it "currently ignores the second argument" do
    @attr.write(@s, 3)
    @s.should == "name='Charlotte'"

    @s = ""
    @attr.write(@s, "foo")
    @s.should == "name='Charlotte'"
  end
end
