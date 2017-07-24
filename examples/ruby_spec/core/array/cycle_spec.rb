require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Array#cycle" do
  before :each do
    ScratchPad.record []

    @array = [1, 2, 3]
    @prc = lambda { |x| ScratchPad << x }
  end

  it "does not yield and returns nil when the array is empty and passed value is an integer" do
    [].cycle(6, &@prc).should be_nil
    ScratchPad.recorded.should == []
  end

  it "does not yield and returns nil when the array is empty and passed value is nil" do
    [].cycle(nil, &@prc).should be_nil
    ScratchPad.recorded.should == []
  end

  it "does not yield and returns nil when passed 0" do
    @array.cycle(0, &@prc).should be_nil
    ScratchPad.recorded.should == []
  end

  it "iterates the array 'count' times yielding each item to the block" do
    @array.cycle(2, &@prc)
    ScratchPad.recorded.should == [1, 2, 3, 1, 2, 3]
  end

  it "iterates indefinitely when not passed a count" do
    @array.cycle do |x|
      ScratchPad << x
      break if ScratchPad.recorded.size > 7
    end
    ScratchPad.recorded.should == [1, 2, 3, 1, 2, 3, 1, 2]
  end

  it "iterates indefinitely when passed nil" do
    @array.cycle(nil) do |x|
      ScratchPad << x
      break if ScratchPad.recorded.size > 7
    end
    ScratchPad.recorded.should == [1, 2, 3, 1, 2, 3, 1, 2]
  end

  it "does not rescue StopIteration when not passed a count" do
    lambda do
      @array.cycle { raise StopIteration }
    end.should raise_error(StopIteration)
  end

  it "does not rescue StopIteration when passed a count" do
    lambda do
      @array.cycle(3) { raise StopIteration }
    end.should raise_error(StopIteration)
  end

  it "iterates the array Integer(count) times when passed a Float count" do
    @array.cycle(2.7, &@prc)
    ScratchPad.recorded.should == [1, 2, 3, 1, 2, 3]
  end

  it "calls #to_int to convert count to an Integer" do
    count = mock("cycle count 2")
    count.should_receive(:to_int).and_return(2)

    @array.cycle(count, &@prc)
    ScratchPad.recorded.should == [1, 2, 3, 1, 2, 3]
  end

  it "raises a TypeError if #to_int does not return an Integer" do
    count = mock("cycle count 2")
    count.should_receive(:to_int).and_return("2")

    lambda { @array.cycle(count, &@prc) }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed a String" do
    lambda { @array.cycle("4") { } }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed an Object" do
    lambda { @array.cycle(mock("cycle count")) { } }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed true" do
    lambda { @array.cycle(true) { } }.should raise_error(TypeError)
  end

  it "raises a TypeError if passed false" do
    lambda { @array.cycle(false) { } }.should raise_error(TypeError)
  end

  before :all do
    @object = [1, 2, 3, 4]
    @empty_object = []
  end
  it_should_behave_like :enumeratorized_with_cycle_size
end
