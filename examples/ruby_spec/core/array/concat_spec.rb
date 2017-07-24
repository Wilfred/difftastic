require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#concat" do
  it "returns the array itself" do
    ary = [1,2,3]
    ary.concat([4,5,6]).equal?(ary).should be_true
  end

  it "appends the elements in the other array" do
    ary = [1, 2, 3]
    ary.concat([9, 10, 11]).should equal(ary)
    ary.should == [1, 2, 3, 9, 10, 11]
    ary.concat([])
    ary.should == [1, 2, 3, 9, 10, 11]
  end

  it "does not loop endlessly when argument is self" do
    ary = ["x", "y"]
    ary.concat(ary).should == ["x", "y", "x", "y"]
  end

  it "tries to convert the passed argument to an Array using #to_ary" do
    obj = mock('to_ary')
    obj.should_receive(:to_ary).and_return(["x", "y"])
    [4, 5, 6].concat(obj).should == [4, 5, 6, "x", "y"]
  end

  it "does not call #to_ary on Array subclasses" do
    obj = ArraySpecs::ToAryArray[5, 6, 7]
    obj.should_not_receive(:to_ary)
    [].concat(obj).should == [5, 6, 7]
  end

  it "raises a RuntimeError when Array is frozen and modification occurs" do
    lambda { ArraySpecs.frozen_array.concat [1] }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23666]
  it "raises a RuntimeError when Array is frozen and no modification occurs" do
    lambda { ArraySpecs.frozen_array.concat([]) }.should raise_error(RuntimeError)
  end

  it "keeps tainted status" do
    ary = [1, 2]
    ary.taint
    ary.concat([3])
    ary.tainted?.should be_true
    ary.concat([])
    ary.tainted?.should be_true
  end

  it "is not infected by the other" do
    ary = [1,2]
    other = [3]; other.taint
    ary.tainted?.should be_false
    ary.concat(other)
    ary.tainted?.should be_false
  end

  it "keeps the tainted status of elements" do
    ary = [ Object.new, Object.new, Object.new ]
    ary.each {|x| x.taint }

    ary.concat([ Object.new ])
    ary[0].tainted?.should be_true
    ary[1].tainted?.should be_true
    ary[2].tainted?.should be_true
    ary[3].tainted?.should be_false
  end

  it "keeps untrusted status" do
    ary = [1, 2]
    ary.untrust
    ary.concat([3])
    ary.untrusted?.should be_true
    ary.concat([])
    ary.untrusted?.should be_true
  end

  it "is not infected untrustedness by the other" do
    ary = [1,2]
    other = [3]; other.untrust
    ary.untrusted?.should be_false
    ary.concat(other)
    ary.untrusted?.should be_false
  end

  it "keeps the untrusted status of elements" do
    ary = [ Object.new, Object.new, Object.new ]
    ary.each {|x| x.untrust }

    ary.concat([ Object.new ])
    ary[0].untrusted?.should be_true
    ary[1].untrusted?.should be_true
    ary[2].untrusted?.should be_true
    ary[3].untrusted?.should be_false
  end

  it "appends elements to an Array with enough capacity that has been shifted" do
    ary = [1, 2, 3, 4, 5]
    2.times { ary.shift }
    2.times { ary.pop }
    ary.concat([5, 6]).should == [3, 5, 6]
  end

  it "appends elements to an Array without enough capacity that has been shifted" do
    ary = [1, 2, 3, 4]
    3.times { ary.shift }
    ary.concat([5, 6]).should == [4, 5, 6]
  end

  ruby_version_is "2.4" do
    it "takes multiple arguments" do
      ary = [1, 2]
      ary.concat [3, 4]
      ary.should == [1, 2, 3, 4]
    end

    it "concatenates the initial value when given arguments contain 2 self" do
      ary = [1, 2]
      ary.concat ary, ary
      ary.should == [1, 2, 1, 2, 1, 2]
    end

    it "returns self when given no arguments" do
      ary = [1, 2]
      ary.concat.should equal(ary)
      ary.should == [1, 2]
    end
  end
end
