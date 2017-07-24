require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/eql', __FILE__)

describe "Array#==" do
  it_behaves_like :array_eql, :==

  it "compares with an equivalent Array-like object using #to_ary" do
    obj = mock('array-like')
    obj.should_receive(:respond_to?).at_least(1).with(:to_ary).and_return(true)
    obj.should_receive(:==).with([1]).at_least(1).and_return(true)

    ([1] == obj).should be_true
    ([[1]] == [obj]).should be_true
    ([[[1], 3], 2] == [[obj, 3], 2]).should be_true

    # recursive arrays
    arr1 = [[1]]
    arr1 << arr1
    arr2 = [obj]
    arr2 << arr2
    (arr1 == arr2).should be_true
    (arr2 == arr1).should be_true
  end

  it "returns false if any corresponding elements are not #==" do
    a = ["a", "b", "c"]
    b = ["a", "b", "not equal value"]
    a.should_not == b

    c = mock("c")
    c.should_receive(:==).and_return(false)
    ["a", "b", c].should_not == a
  end

  it "returns true if corresponding elements are #==" do
    [].should == []
    ["a", "c", 7].should == ["a", "c", 7]

    [1, 2, 3].should == [1.0, 2.0, 3.0]

    obj = mock('5')
    obj.should_receive(:==).and_return(true)
    [obj].should == [5]
  end

  # As per bug #1720
  it "returns false for [NaN] == [NaN]" do
    [nan_value].should_not == [nan_value]
  end
end
