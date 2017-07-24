require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#delete_at" do
  it "removes the element at the specified index" do
    a = [1, 2, 3, 4]
    a.delete_at(2)
    a.should == [1, 2, 4]
    a.delete_at(-1)
    a.should == [1, 2]
  end

  it "returns the removed element at the specified index" do
    a = [1, 2, 3, 4]
    a.delete_at(2).should == 3
    a.delete_at(-1).should == 4
  end

  it "returns nil and makes no modification if the index is out of range" do
    a = [1, 2]
    a.delete_at(3).should == nil
    a.should == [1, 2]
    a.delete_at(-3).should == nil
    a.should == [1, 2]
  end

  it "tries to convert the passed argument to an Integer using #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(-1)
    [1, 2].delete_at(obj).should == 2
  end

  it "accepts negative indices" do
    a = [1, 2]
    a.delete_at(-2).should == 1
  end

  it "raises a RuntimeError on a frozen array" do
    lambda { [1,2,3].freeze.delete_at(0) }.should raise_error(RuntimeError)
  end

  it "keeps tainted status" do
    ary = [1, 2]
    ary.taint
    ary.tainted?.should be_true
    ary.delete_at(0)
    ary.tainted?.should be_true
    ary.delete_at(0) # now empty
    ary.tainted?.should be_true
  end

  it "keeps untrusted status" do
    ary = [1, 2]
    ary.untrust
    ary.untrusted?.should be_true
    ary.delete_at(0)
    ary.untrusted?.should be_true
    ary.delete_at(0) # now empty
    ary.untrusted?.should be_true
  end
end
