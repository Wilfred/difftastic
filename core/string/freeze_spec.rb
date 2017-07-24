require File.expand_path('../../../spec_helper', __FILE__)

describe "String#freeze" do

  it "produces the same object whenever called on an instance of a literal in the source" do
    ids = Array.new(2) { "abc".freeze.object_id }
    ids.first.should == ids.last
  end

  it "doesn't produce the same object for different instances of literals in the source" do
    "abc".object_id.should_not == "abc".object_id
  end

  it "being a special form doesn't change the value of defined?" do
    defined?("abc".freeze).should == "method"
  end

end
