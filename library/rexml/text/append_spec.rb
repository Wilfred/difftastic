require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#<<" do
  it "appends a string to this text node" do
    text = REXML::Text.new("foo")
    text << "bar"
    text.should == "foobar"
  end
end
