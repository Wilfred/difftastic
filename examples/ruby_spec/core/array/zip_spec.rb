require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#zip" do
  it "returns an array of arrays containing corresponding elements of each array" do
    [1, 2, 3, 4].zip(["a", "b", "c", "d", "e"]).should ==
      [[1, "a"], [2, "b"], [3, "c"], [4, "d"]]
  end

  it "fills in missing values with nil" do
    [1, 2, 3, 4, 5].zip(["a", "b", "c", "d"]).should ==
      [[1, "a"], [2, "b"], [3, "c"], [4, "d"], [5, nil]]
  end

  it "properly handles recursive arrays" do
    a = []; a << a
    b = [1]; b << b

    a.zip(a).should == [ [a[0], a[0]] ]
    a.zip(b).should == [ [a[0], b[0]] ]
    b.zip(a).should == [ [b[0], a[0]], [b[1], a[1]] ]
    b.zip(b).should == [ [b[0], b[0]], [b[1], b[1]] ]
  end

  it "calls #to_ary to convert the argument to an Array" do
    obj = mock('[3,4]')
    obj.should_receive(:to_ary).and_return([3, 4])
    [1, 2].zip(obj).should == [[1, 3], [2, 4]]
  end

  it "uses #each to extract arguments' elements when #to_ary fails" do
    obj = Class.new do
      def each(&b)
        [3,4].each(&b)
      end
    end.new

    [1, 2].zip(obj).should == [[1, 3], [2, 4]]
  end

  it "stops at own size when given an infinite enumerator" do
    [1, 2].zip(10.upto(Float::INFINITY)).should == [[1, 10], [2, 11]]
  end

  it "fills nil when the given enumereator is shorter than self" do
    obj = Object.new
    def obj.each
      yield 10
    end
    [1, 2].zip(obj).should == [[1, 10], [2, nil]]
  end

  it "calls block if supplied" do
    values = []
    [1, 2, 3, 4].zip(["a", "b", "c", "d", "e"]) { |value|
      values << value
    }.should == nil

    values.should == [[1, "a"], [2, "b"], [3, "c"], [4, "d"]]
  end

  it "does not return subclass instance on Array subclasses" do
    ArraySpecs::MyArray[1, 2, 3].zip(["a", "b"]).should be_an_instance_of(Array)
  end
end
