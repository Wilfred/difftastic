require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#flatten" do
  it "returns a one-dimensional flattening recursively" do
    [[[1, [2, 3]],[2, 3, [4, [4, [5, 5]], [1, 2, 3]]], [4]], []].flatten.should == [1, 2, 3, 2, 3, 4, 4, 5, 5, 1, 2, 3, 4]
  end

  it "takes an optional argument that determines the level of recursion" do
    [ 1, 2, [3, [4, 5] ] ].flatten(1).should == [1, 2, 3, [4, 5]]
  end

  it "returns dup when the level of recursion is 0" do
    a = [ 1, 2, [3, [4, 5] ] ]
    a.flatten(0).should == a
    a.flatten(0).should_not equal(a)
  end

  it "ignores negative levels" do
    [ 1, 2, [ 3, 4, [5, 6] ] ].flatten(-1).should == [1, 2, 3, 4, 5, 6]
    [ 1, 2, [ 3, 4, [5, 6] ] ].flatten(-10).should == [1, 2, 3, 4, 5, 6]
  end

  it "tries to convert passed Objects to Integers using #to_int" do
    obj = mock("Converted to Integer")
    obj.should_receive(:to_int).and_return(1)

    [ 1, 2, [3, [4, 5] ] ].flatten(obj).should == [1, 2, 3, [4, 5]]
  end

  it "raises a TypeError when the passed Object can't be converted to an Integer" do
    obj = mock("Not converted")
    lambda { [ 1, 2, [3, [4, 5] ] ].flatten(obj) }.should raise_error(TypeError)
  end

  it "does not call flatten on elements" do
    obj = mock('[1,2]')
    obj.should_not_receive(:flatten)
    [obj, obj].flatten.should == [obj, obj]

    obj = [5, 4]
    obj.should_not_receive(:flatten)
    [obj, obj].flatten.should == [5, 4, 5, 4]
  end

  it "raises an ArgumentError on recursive arrays" do
    x = []
    x << x
    lambda { x.flatten }.should raise_error(ArgumentError)

    x = []
    y = []
    x << y
    y << x
    lambda { x.flatten }.should raise_error(ArgumentError)
  end

  it "flattens any element which responds to #to_ary, using the return value of said method" do
    x = mock("[3,4]")
    x.should_receive(:to_ary).at_least(:once).and_return([3, 4])
    [1, 2, x, 5].flatten.should == [1, 2, 3, 4, 5]

    y = mock("MyArray[]")
    y.should_receive(:to_ary).at_least(:once).and_return(ArraySpecs::MyArray[])
    [y].flatten.should == []

    z = mock("[2,x,y,5]")
    z.should_receive(:to_ary).and_return([2, x, y, 5])
    [1, z, 6].flatten.should == [1, 2, 3, 4, 5, 6]
  end

  ruby_version_is "2.3" do
    it "does not call #to_ary on elements beyond the given level" do
      obj = mock("1")
      obj.should_not_receive(:to_ary)
      [[obj]].flatten(1)
    end
  end

  it "returns subclass instance for Array subclasses" do
    ArraySpecs::MyArray[].flatten.should be_an_instance_of(ArraySpecs::MyArray)
    ArraySpecs::MyArray[1, 2, 3].flatten.should be_an_instance_of(ArraySpecs::MyArray)
    ArraySpecs::MyArray[1, [2], 3].flatten.should be_an_instance_of(ArraySpecs::MyArray)
    ArraySpecs::MyArray[1, [2, 3], 4].flatten.should == ArraySpecs::MyArray[1, 2, 3, 4]
    [ArraySpecs::MyArray[1, 2, 3]].flatten.should be_an_instance_of(Array)
  end

  it "is not destructive" do
    ary = [1, [2, 3]]
    ary.flatten
    ary.should == [1, [2, 3]]
  end

  describe "with a non-Array object in the Array" do
    before :each do
      @obj = mock("Array#flatten")
      ScratchPad.record []
    end

    it "does not call #to_ary if the method is not defined" do
      [@obj].flatten.should == [@obj]
    end

    it "does not raise an exception if #to_ary returns nil" do
      @obj.should_receive(:to_ary).and_return(nil)
      [@obj].flatten.should == [@obj]
    end

    it "raises a TypeError if #to_ary does not return an Array" do
      @obj.should_receive(:to_ary).and_return(1)
      lambda { [@obj].flatten }.should raise_error(TypeError)
    end

    it "does not call #to_ary if not defined when #respond_to_missing? returns false" do
      def @obj.respond_to_missing?(*args) ScratchPad << args; false end

      [@obj].flatten.should == [@obj]
      ScratchPad.recorded.should == [[:to_ary, false]]
    end

    it "calls #to_ary if not defined when #respond_to_missing? returns true" do
      def @obj.respond_to_missing?(*args) ScratchPad << args; true end

      lambda { [@obj].flatten }.should raise_error(NoMethodError)
      ScratchPad.recorded.should == [[:to_ary, false]]
    end

    it "calls #method_missing if defined" do
      @obj.should_receive(:method_missing).with(:to_ary).and_return([1, 2, 3])
      [@obj].flatten.should == [1, 2, 3]
    end
  end

  it "returns a tainted array if self is tainted" do
    [].taint.flatten.tainted?.should be_true
  end

  it "returns an untrusted array if self is untrusted" do
    [].untrust.flatten.untrusted?.should be_true
  end

  it "performs respond_to? and method_missing-aware checks when coercing elements to array" do
    bo = BasicObject.new
    [bo].flatten.should == [bo]

    def bo.method_missing(name, *)
      [1,2]
    end

    [bo].flatten.should == [1,2]

    def bo.respond_to?(name, *)
      false
    end

    [bo].flatten.should == [bo]

    def bo.respond_to?(name, *)
      true
    end

    [bo].flatten.should == [1,2]
  end
end

describe "Array#flatten!" do
  it "modifies array to produce a one-dimensional flattening recursively" do
    a = [[[1, [2, 3]],[2, 3, [4, [4, [5, 5]], [1, 2, 3]]], [4]], []]
    a.flatten!
    a.should == [1, 2, 3, 2, 3, 4, 4, 5, 5, 1, 2, 3, 4]
  end

  it "returns self if made some modifications" do
    a = [[[1, [2, 3]],[2, 3, [4, [4, [5, 5]], [1, 2, 3]]], [4]], []]
    a.flatten!.should equal(a)
  end

  it "returns nil if no modifications took place" do
    a = [1, 2, 3]
    a.flatten!.should == nil
    a = [1, [2, 3]]
    a.flatten!.should_not == nil
  end

  it "should not check modification by size" do
    a = [1, 2, [3]]
    a.flatten!.should_not == nil
    a.should == [1, 2, 3]
  end

  it "takes an optional argument that determines the level of recursion" do
    [ 1, 2, [3, [4, 5] ] ].flatten!(1).should == [1, 2, 3, [4, 5]]
  end

  # redmine #1440
  it "returns nil when the level of recursion is 0" do
    a = [ 1, 2, [3, [4, 5] ] ]
    a.flatten!(0).should == nil
  end

  it "treats negative levels as no arguments" do
    [ 1, 2, [ 3, 4, [5, 6] ] ].flatten!(-1).should == [1, 2, 3, 4, 5, 6]
    [ 1, 2, [ 3, 4, [5, 6] ] ].flatten!(-10).should == [1, 2, 3, 4, 5, 6]
  end

  it "tries to convert passed Objects to Integers using #to_int" do
    obj = mock("Converted to Integer")
    obj.should_receive(:to_int).and_return(1)

    [ 1, 2, [3, [4, 5] ] ].flatten!(obj).should == [1, 2, 3, [4, 5]]
  end

  it "raises a TypeError when the passed Object can't be converted to an Integer" do
    obj = mock("Not converted")
    lambda { [ 1, 2, [3, [4, 5] ] ].flatten!(obj) }.should raise_error(TypeError)
  end

  it "does not call flatten! on elements" do
    obj = mock('[1,2]')
    obj.should_not_receive(:flatten!)
    [obj, obj].flatten!.should == nil

    obj = [5, 4]
    obj.should_not_receive(:flatten!)
    [obj, obj].flatten!.should == [5, 4, 5, 4]
  end

  it "raises an ArgumentError on recursive arrays" do
    x = []
    x << x
    lambda { x.flatten! }.should raise_error(ArgumentError)

    x = []
    y = []
    x << y
    y << x
    lambda { x.flatten! }.should raise_error(ArgumentError)
  end

  it "flattens any elements which responds to #to_ary, using the return value of said method" do
    x = mock("[3,4]")
    x.should_receive(:to_ary).at_least(:once).and_return([3, 4])
    [1, 2, x, 5].flatten!.should == [1, 2, 3, 4, 5]

    y = mock("MyArray[]")
    y.should_receive(:to_ary).at_least(:once).and_return(ArraySpecs::MyArray[])
    [y].flatten!.should == []

    z = mock("[2,x,y,5]")
    z.should_receive(:to_ary).and_return([2, x, y, 5])
    [1, z, 6].flatten!.should == [1, 2, 3, 4, 5, 6]

    ary = [ArraySpecs::MyArray[1, 2, 3]]
    ary.flatten!
    ary.should be_an_instance_of(Array)
    ary.should == [1, 2, 3]
  end

  it "raises a RuntimeError on frozen arrays when the array is modified" do
    nested_ary = [1, 2, []]
    nested_ary.freeze
    lambda { nested_ary.flatten! }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23663]
  it "raises a RuntimeError on frozen arrays when the array would not be modified" do
    lambda { ArraySpecs.frozen_array.flatten! }.should raise_error(RuntimeError)
    lambda { ArraySpecs.empty_frozen_array.flatten! }.should raise_error(RuntimeError)
  end
end
