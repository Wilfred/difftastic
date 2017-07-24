require File.expand_path('../../../../spec_helper', __FILE__)

describe "Enumerator::Yielder#yield" do
  it "yields the value to the block" do
    ary = []
    y = Enumerator::Yielder.new {|x| ary << x}
    y.yield 1

    ary.should == [1]
  end

  it "returns the result of the block for the given value" do
    y = Enumerator::Yielder.new {|x| x + 1}
    y.yield(1).should == 2
  end
end
