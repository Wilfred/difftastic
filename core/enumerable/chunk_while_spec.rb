require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

ruby_version_is "2.3" do
  describe "Enumerable#chunk_while" do
    before :each do
      ary = [10, 9, 7, 6, 4, 3, 2, 1]
      @enum = EnumerableSpecs::Numerous.new(*ary)
      @result = @enum.chunk_while { |i, j| i - 1 == j }
      @enum_length = ary.length
    end

    context "when given a block" do
      it "returns an enumerator" do
        @result.should be_an_instance_of(Enumerator)
      end

      it "splits chunks between adjacent elements i and j where the block returns false" do
        @result.to_a.should == [[10, 9], [7, 6], [4, 3, 2, 1]]
      end

      it "calls the block for length of the receiver enumerable minus one times" do
        times_called = 0
        @enum.chunk_while do |i, j|
          times_called += 1
          i - 1 == j
        end.to_a
        times_called.should == (@enum_length - 1)
      end
    end

    context "when not given a block" do
      it "raises an ArgumentError" do
        lambda { @enum.chunk_while }.should raise_error(ArgumentError)
      end
    end

    context "on a single-element array" do
      it "ignores the block and returns an enumerator that yields [element]" do
        [1].chunk_while {|x| x.even?}.to_a.should == [[1]]
      end
    end
  end
end
