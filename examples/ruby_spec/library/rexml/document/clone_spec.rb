require 'rexml/document'
require File.expand_path('../../../../spec_helper', __FILE__)

# According to the MRI documentation (http://www.ruby-doc.org/stdlib/libdoc/rexml/rdoc/index.html),
# clone's behavior "should be obvious". Apparently "obvious" means cloning
# only the attributes and the context of the document, not its children.
describe "REXML::Document#clone" do
  it "clones document attributes" do
    d = REXML::Document.new("foo")
    d.attributes["foo"] = "bar"
    e = d.clone
    e.attributes.should == d.attributes
  end

  it "clones document context" do
    d = REXML::Document.new("foo", {"foo" => "bar"})
    e = d.clone
    e.context.should == d.context
  end
end
