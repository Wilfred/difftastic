require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#node_type" do
  it "returns :text" do
    REXML::Text.new("test").node_type.should == :text
  end
end
