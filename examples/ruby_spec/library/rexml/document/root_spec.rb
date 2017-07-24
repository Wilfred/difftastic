require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#root" do
  it "returns document root tag name" do
    REXML::Document.new("<foo/>").root.name.should == "foo"
  end

  it "returns nil if there is not root" do
    REXML::Document.new.root.should == nil
  end
end
