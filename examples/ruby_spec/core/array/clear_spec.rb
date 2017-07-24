require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#clear" do
  it "removes all elements" do
    a = [1, 2, 3, 4]
    a.clear.should equal(a)
    a.should == []
  end

  it "returns self" do
    a = [1]
    oid = a.object_id
    a.clear.object_id.should == oid
  end

  it "leaves the Array empty" do
    a = [1]
    a.clear
    a.empty?.should == true
    a.size.should == 0
  end

  it "keeps tainted status" do
    a = [1]
    a.taint
    a.tainted?.should be_true
    a.clear
    a.tainted?.should be_true
  end

  it "does not accept any arguments" do
    lambda { [1].clear(true) }.should raise_error(ArgumentError)
  end

  it "keeps untrusted status" do
    a = [1]
    a.untrust
    a.untrusted?.should be_true
    a.clear
    a.untrusted?.should be_true
  end

  it "raises a RuntimeError on a frozen array" do
    a = [1]
    a.freeze
    lambda { a.clear }.should raise_error(RuntimeError)
  end
end
