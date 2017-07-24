require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#node_type" do
  it "returns :document" do
    REXML::Document.new.node_type.should == :document
  end
end
