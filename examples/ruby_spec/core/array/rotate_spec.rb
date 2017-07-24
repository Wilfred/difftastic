require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#rotate" do
  describe "when passed no argument" do
    it "returns a copy of the array with the first element moved at the end" do
      [1, 2, 3, 4, 5].rotate.should == [2, 3, 4, 5, 1]
    end
  end

  describe "with an argument n" do
    it "returns a copy of the array with the first (n % size) elements moved at the end" do
      a = [1, 2, 3, 4, 5]
      a.rotate(  2).should == [3, 4, 5, 1, 2]
      a.rotate( -1).should == [5, 1, 2, 3, 4]
      a.rotate(-21).should == [5, 1, 2, 3, 4]
      a.rotate( 13).should == [4, 5, 1, 2, 3]
      a.rotate(  0).should == a
    end

    it "coerces the argument using to_int" do
      [1, 2, 3].rotate(2.6).should == [3, 1, 2]

      obj = mock('integer_like')
      obj.should_receive(:to_int).and_return(2)
      [1, 2, 3].rotate(obj).should == [3, 1, 2]
    end

    it "raises a TypeError if not passed an integer-like argument" do
      lambda {
        [1, 2].rotate(nil)
      }.should raise_error(TypeError)
      lambda {
        [1, 2].rotate("4")
      }.should raise_error(TypeError)
    end
  end

  it "returns a copy of the array when its length is one or zero" do
    [1].rotate.should == [1]
    [1].rotate(2).should == [1]
    [1].rotate(-42).should == [1]
    [ ].rotate.should == []
    [ ].rotate(2).should == []
    [ ].rotate(-42).should == []
  end

  it "does not mutate the receiver" do
    lambda {
      [].freeze.rotate
      [2].freeze.rotate(2)
      [1,2,3].freeze.rotate(-3)
    }.should_not raise_error
  end

  it "does not return self" do
    a = [1, 2, 3]
    a.rotate.should_not equal(a)
    a = []
    a.rotate(0).should_not equal(a)
  end

  it "does not return subclass instance for Array subclasses" do
    ArraySpecs::MyArray[1, 2, 3].rotate.should be_an_instance_of(Array)
  end
end

describe "Array#rotate!" do
  describe "when passed no argument" do
    it "moves the first element to the end and returns self" do
      a = [1, 2, 3, 4, 5]
      a.rotate!.should equal(a)
      a.should == [2, 3, 4, 5, 1]
    end
  end

  describe "with an argument n" do
    it "moves the first (n % size) elements at the end and returns self" do
      a = [1, 2, 3, 4, 5]
      a.rotate!(2).should equal(a)
      a.should == [3, 4, 5, 1, 2]
      a.rotate!(-12).should equal(a)
      a.should == [1, 2, 3, 4, 5]
      a.rotate!(13).should equal(a)
      a.should == [4, 5, 1, 2, 3]
    end

    it "coerces the argument using to_int" do
      [1, 2, 3].rotate!(2.6).should == [3, 1, 2]

      obj = mock('integer_like')
      obj.should_receive(:to_int).and_return(2)
      [1, 2, 3].rotate!(obj).should == [3, 1, 2]
    end

    it "raises a TypeError if not passed an integer-like argument" do
      lambda {
        [1, 2].rotate!(nil)
      }.should raise_error(TypeError)
      lambda {
        [1, 2].rotate!("4")
      }.should raise_error(TypeError)
    end
  end

  it "does nothing and returns self when the length is zero or one" do
    a = [1]
    a.rotate!.should equal(a)
    a.should == [1]
    a.rotate!(2).should equal(a)
    a.should == [1]
    a.rotate!(-21).should equal(a)
    a.should == [1]

    a = []
    a.rotate!.should equal(a)
    a.should == []
    a.rotate!(2).should equal(a)
    a.should == []
    a.rotate!(-21).should equal(a)
    a.should == []
  end

  it "raises a RuntimeError on a frozen array" do
    lambda { [1, 2, 3].freeze.rotate!(0) }.should raise_error(RuntimeError)
    lambda { [1].freeze.rotate!(42) }.should raise_error(RuntimeError)
    lambda { [].freeze.rotate! }.should raise_error(RuntimeError)
  end
end
