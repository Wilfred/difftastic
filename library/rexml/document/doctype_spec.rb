require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Document#doctype" do
  it "returns the doctype" do
    d = REXML::Document.new
    dt = REXML::DocType.new("foo")
    d.add dt
    d.doctype.should == dt
  end

  it "returns nil if there's no doctype" do
    REXML::Document.new.doctype.should == nil
  end
end
