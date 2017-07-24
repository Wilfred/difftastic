require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#slice_when" do
  before :each do
    ary = [10, 9, 7, 6, 4, 3, 2, 1]
    @enum = EnumerableSpecs::Numerous.new(*ary)
    @result = @enum.slice_when { |i, j| i - 1 != j }
    @enum_length = ary.length
  end

  context "when given a block" do
    it "returns an enumerator" do
      @result.should be_an_instance_of(Enumerator)
    end

    it "splits chunks between adjacent elements i and j where the block returns true" do
      @result.to_a.should == [[10, 9], [7, 6], [4, 3, 2, 1]]
    end

    it "calls the block for length of the receiver enumerable minus one times" do
      times_called = 0
      @enum.slice_when do |i, j|
        times_called += 1
        i - 1 != j
      end.to_a
      times_called.should == (@enum_length - 1)
    end

    it "doesn't yield an empty array if the block matches the first or the last time" do
      @enum.slice_when { true }.to_a.should == [[10], [9], [7], [6], [4], [3], [2], [1]]
    end

    it "doesn't yield an empty array on a small enumerable" do
      EnumerableSpecs::Empty.new.slice_when { raise }.to_a.should == []
      EnumerableSpecs::Numerous.new(42).slice_when { raise }.to_a.should == [[42]]
    end
  end

  context "when not given a block" do
    it "raises an ArgumentError" do
      lambda { @enum.slice_when }.should raise_error(ArgumentError)
    end
  end

  describe "when an iterator method yields more than one value" do
    it "processes all yielded values" do
      def foo
        yield 1, 2
      end
      to_enum(:foo).slice_when { true }.to_a.should == [[[1, 2]]]
    end
  end
end
