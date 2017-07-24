require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#inspect" do
  it "inspects the string attribute as a string" do
    REXML::Text.new("a text").inspect.should == "a text".inspect
  end
end
