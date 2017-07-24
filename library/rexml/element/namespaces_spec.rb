require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

describe "REXML::Element#namespaces" do
  before :each do
    doc = REXML::Document.new("<a xmlns='1' xmlns:y='2'><b/><c xmlns:z='3'/></a>")
    @elem = doc.elements["//c"]
  end

  it "returns a hash of the namespaces" do
    ns = {"y"=>"2", "z"=>"3", "xmlns"=>"1"}
    @elem.namespaces.keys.sort.should == ns.keys.sort
    @elem.namespaces.values.sort.should == ns.values.sort
  end

  it "returns an empty hash if no namespaces exist" do
    e = REXML::Element.new "element"
    e.namespaces.kind_of?(Hash).should == true
    e.namespaces.should be_empty
  end

  it "uses namespace prefixes as keys" do
    prefixes = ["y", "z", "xmlns"]
    @elem.namespaces.keys.sort.should == prefixes.sort
  end

  it "uses namespace values as the hash values" do
    values = ["2", "3", "1"]
    @elem.namespaces.values.sort.should == values.sort
  end

end
