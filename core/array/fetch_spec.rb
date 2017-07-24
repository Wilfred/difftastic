require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#fetch" do
  it "returns the element at the passed index" do
    [1, 2, 3].fetch(1).should == 2
    [nil].fetch(0).should == nil
  end

  it "counts negative indices backwards from end" do
    [1, 2, 3, 4].fetch(-1).should == 4
  end

  it "raises an IndexError if there is no element at index" do
    lambda { [1, 2, 3].fetch(3) }.should raise_error(IndexError)
    lambda { [1, 2, 3].fetch(-4) }.should raise_error(IndexError)
    lambda { [].fetch(0) }.should raise_error(IndexError)
  end

  it "returns default if there is no element at index if passed a default value" do
    [1, 2, 3].fetch(5, :not_found).should == :not_found
    [1, 2, 3].fetch(5, nil).should == nil
    [1, 2, 3].fetch(-4, :not_found).should == :not_found
    [nil].fetch(0, :not_found).should == nil
  end

  it "returns the value of block if there is no element at index if passed a block" do
    [1, 2, 3].fetch(9) { |i| i * i }.should == 81
    [1, 2, 3].fetch(-9) { |i| i * i }.should == 81
  end

  it "passes the original index argument object to the block, not the converted Integer" do
    o = mock('5')
    def o.to_int(); 5; end

    [1, 2, 3].fetch(o) { |i| i }.should equal(o)
  end

  it "gives precedence to the default block over the default argument" do
    lambda {
      @result = [1, 2, 3].fetch(9, :foo) { |i| i * i }
    }.should complain(/block supersedes default value argument/)
    @result.should == 81
  end

  it "tries to convert the passed argument to an Integer using #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(2)
    ["a", "b", "c"].fetch(obj).should == "c"
  end

  it "raises a TypeError when the passed argument can't be coerced to Integer" do
    lambda { [].fetch("cat") }.should raise_error(TypeError)
  end
end
