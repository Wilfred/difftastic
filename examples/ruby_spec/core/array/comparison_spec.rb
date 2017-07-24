require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#<=>" do
  it "calls <=> left to right and return first non-0 result" do
    [-1, +1, nil, "foobar"].each do |result|
      lhs = Array.new(3) { mock("#{result}") }
      rhs = Array.new(3) { mock("#{result}") }

      lhs[0].should_receive(:<=>).with(rhs[0]).and_return(0)
      lhs[1].should_receive(:<=>).with(rhs[1]).and_return(result)
      lhs[2].should_not_receive(:<=>)

      (lhs <=> rhs).should == result
    end
  end

  it "returns 0 if the arrays are equal" do
    ([] <=> []).should == 0
    ([1, 2, 3, 4, 5, 6] <=> [1, 2, 3, 4, 5.0, 6.0]).should == 0
  end

  it "returns -1 if the array is shorter than the other array" do
    ([] <=> [1]).should == -1
    ([1, 1] <=> [1, 1, 1]).should == -1
  end

  it "returns +1 if the array is longer than the other array" do
    ([1] <=> []).should == +1
    ([1, 1, 1] <=> [1, 1]).should == +1
  end

  it "returns -1 if the arrays have same length and a pair of corresponding elements returns -1 for <=>" do
    eq_l = mock('an object equal to the other')
    eq_r = mock('an object equal to the other')
    eq_l.should_receive(:<=>).with(eq_r).any_number_of_times.and_return(0)

    less = mock('less than the other')
    greater = mock('greater then the other')
    less.should_receive(:<=>).with(greater).any_number_of_times.and_return(-1)

    rest = mock('an rest element of the arrays')
    rest.should_receive(:<=>).with(rest).any_number_of_times.and_return(0)
    lhs = [eq_l, eq_l, less, rest]
    rhs = [eq_r, eq_r, greater, rest]

    (lhs <=> rhs).should == -1
  end

  it "returns +1 if the arrays have same length and a pair of corresponding elements returns +1 for <=>" do
    eq_l = mock('an object equal to the other')
    eq_r = mock('an object equal to the other')
    eq_l.should_receive(:<=>).with(eq_r).any_number_of_times.and_return(0)

    greater = mock('greater then the other')
    less = mock('less than the other')
    greater.should_receive(:<=>).with(less).any_number_of_times.and_return(+1)

    rest = mock('an rest element of the arrays')
    rest.should_receive(:<=>).with(rest).any_number_of_times.and_return(0)
    lhs = [eq_l, eq_l, greater, rest]
    rhs = [eq_r, eq_r, less, rest]

    (lhs <=> rhs).should == +1
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    (empty <=> empty).should == 0
    (empty <=> []).should == 1
    ([] <=> empty).should == -1

    (ArraySpecs.recursive_array <=> []).should == 1
    ([] <=> ArraySpecs.recursive_array).should == -1

    (ArraySpecs.recursive_array <=> ArraySpecs.empty_recursive_array).should == nil

    array = ArraySpecs.recursive_array
    (array <=> array).should == 0
  end

  it "tries to convert the passed argument to an Array using #to_ary" do
    obj = mock('to_ary')
    obj.stub!(:to_ary).and_return([1, 2, 3])
    ([4, 5] <=> obj).should == ([4, 5] <=> obj.to_ary)
  end

  it "does not call #to_ary on Array subclasses" do
    obj = ArraySpecs::ToAryArray[5, 6, 7]
    obj.should_not_receive(:to_ary)
    ([5, 6, 7] <=> obj).should == 0
  end

  it "returns nil when the argument is not array-like" do
    ([] <=> false).should be_nil
  end
end
