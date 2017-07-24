require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attribute#clone" do
  it "returns a copy of this Attribute" do
    orig = REXML::Attribute.new("name", "value&&")
    orig.should == orig.clone
    orig.clone.to_s.should == orig.to_s
    orig.clone.to_string.should == orig.to_string
  end
end
