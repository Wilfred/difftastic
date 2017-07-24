require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#trust" do
  it "returns self" do
    o = Object.new
    o.trust.should equal(o)
  end

  it "clears the untrusted bit" do
    o = Object.new.untrust
    o.trust
    o.untrusted?.should == false
  end

  it "raises RuntimeError on an untrusted, frozen object" do
    o = Object.new.untrust.freeze
    lambda { o.trust }.should raise_error(RuntimeError)
  end

  it "does not raise an error on a trusted, frozen object" do
    o = Object.new.freeze
    o.trust.should equal(o)
  end
end
