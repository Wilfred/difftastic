require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#delete" do
  it "removes elements that are #== to object" do
    x = mock('delete')
    def x.==(other) 3 == other end

    a = [1, 2, 3, x, 4, 3, 5, x]
    a.delete mock('not contained')
    a.should == [1, 2, 3, x, 4, 3, 5, x]

    a.delete 3
    a.should == [1, 2, 4, 5]
  end

  it "calculates equality correctly for reference values" do
    a = ["foo", "bar", "foo", "quux", "foo"]
    a.delete "foo"
    a.should == ["bar","quux"]
  end

  it "returns object or nil if no elements match object" do
    [1, 2, 4, 5].delete(1).should == 1
    [1, 2, 4, 5].delete(3).should == nil
  end

  it "may be given a block that is executed if no element matches object" do
    [1].delete(1) {:not_found}.should == 1
    [].delete('a') {:not_found}.should == :not_found
  end

  it "returns nil if the array is empty due to a shift" do
    a = [1]
    a.shift
    a.delete(nil).should == nil
  end

  it "returns nil on a frozen array if a modification does not take place" do
    [1, 2, 3].freeze.delete(0).should == nil
  end

  it "raises a RuntimeError on a frozen array" do
    lambda { [1, 2, 3].freeze.delete(1) }.should raise_error(RuntimeError)
  end

  it "keeps tainted status" do
    a = [1, 2]
    a.taint
    a.tainted?.should be_true
    a.delete(2)
    a.tainted?.should be_true
    a.delete(1) # now empty
    a.tainted?.should be_true
  end

  it "keeps untrusted status" do
    a = [1, 2]
    a.untrust
    a.untrusted?.should be_true
    a.delete(2)
    a.untrusted?.should be_true
    a.delete(1) # now empty
    a.untrusted?.should be_true
  end
end
