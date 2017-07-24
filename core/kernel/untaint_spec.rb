require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#untaint" do
  it "returns self" do
    o = Object.new
    o.untaint.should equal(o)
  end

  it "clears the tainted bit" do
    o = Object.new.taint
    o.untaint
    o.tainted?.should == false
  end

  it "raises RuntimeError on a tainted, frozen object" do
    o = Object.new.taint.freeze
    lambda { o.untaint }.should raise_error(RuntimeError)
  end

  it "does not raise an error on an untainted, frozen object" do
    o = Object.new.freeze
    o.untaint.should equal(o)
  end
end
