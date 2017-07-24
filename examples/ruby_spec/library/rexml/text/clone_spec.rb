require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#clone" do
  it "creates a copy of this node" do
    text = REXML::Text.new("foo")
    text.clone.should == "foo"
    text.clone.should == text
  end
end
