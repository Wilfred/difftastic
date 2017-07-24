require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#==" do
  it "returns true if other has equal name and value" do
    a1 = REXML::Attribute.new("foo", "bar")
    a1.should == a1.clone

    a2 = REXML::Attribute.new("foo", "bar")
    a1.should == a2

    a3 = REXML::Attribute.new("foo", "bla")
    a1.should_not == a3

    a4 = REXML::Attribute.new("baz", "bar")
    a1.should_not == a4
  end
end
