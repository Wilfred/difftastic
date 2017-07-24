describe :array_replace, shared: true do
  it "replaces the elements with elements from other array" do
    a = [1, 2, 3, 4, 5]
    b = ['a', 'b', 'c']
    a.send(@method, b).should equal(a)
    a.should == b
    a.should_not equal(b)

    a.send(@method, [4] * 10)
    a.should == [4] * 10

    a.send(@method, [])
    a.should == []
  end

  it "properly handles recursive arrays" do
    orig = [1, 2, 3]
    empty = ArraySpecs.empty_recursive_array
    orig.send(@method, empty)
    orig.should == empty

    array = ArraySpecs.recursive_array
    orig.send(@method, array)
    orig.should == array
  end

  it "returns self" do
    ary = [1, 2, 3]
    other = [:a, :b, :c]
    ary.send(@method, other).should equal(ary)
  end

  it "does not make self dependent to the original array" do
    ary = [1, 2, 3]
    other = [:a, :b, :c]
    ary.send(@method, other)
    ary.should == [:a, :b, :c]
    ary << :d
    ary.should == [:a, :b, :c, :d]
    other.should == [:a, :b, :c]
  end

  it "tries to convert the passed argument to an Array using #to_ary" do
    obj = mock('to_ary')
    obj.stub!(:to_ary).and_return([1, 2, 3])
    [].send(@method, obj).should == [1, 2, 3]
  end

  it "does not call #to_ary on Array subclasses" do
    obj = ArraySpecs::ToAryArray[5, 6, 7]
    obj.should_not_receive(:to_ary)
    [].send(@method, ArraySpecs::ToAryArray[5, 6, 7]).should == [5, 6, 7]
  end

  it "raises a RuntimeError on a frozen array" do
    lambda {
      ArraySpecs.frozen_array.send(@method, ArraySpecs.frozen_array)
    }.should raise_error(RuntimeError)
  end
end
