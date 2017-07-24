require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Attributes#each" do
  before :each do
    @e = REXML::Element.new("root")
    @name = REXML::Attribute.new("name", "Joe")
    @ns_uri = REXML::Attribute.new("xmlns:ns", "http://some_uri")
    @e.add_attribute @name
    @e.add_attribute @ns_uri
  end

  it "iterates over the attributes yielding expanded-name/value" do
    attributes = []
    @e.attributes.each do |attr|
      attr.should be_kind_of(Array)
      attributes << attr
    end
    attributes = attributes.sort_by {|a| a.first }
    attributes.first.should == ["name", "Joe"]
    attributes.last.should == ["xmlns:ns", "http://some_uri"]
  end
end


