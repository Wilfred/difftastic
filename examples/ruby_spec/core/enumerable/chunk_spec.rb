require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#chunk" do
  before do
    ScratchPad.record []
  end

  ruby_version_is ""..."2.4" do
    it "raises an ArgumentError if called without a block" do
      lambda do
        EnumerableSpecs::Numerous.new.chunk
      end.should raise_error(ArgumentError)
    end
  end

  ruby_version_is "2.4" do
    it "returns an Enumerator if called without a block" do
      chunk = EnumerableSpecs::Numerous.new(1, 2, 3, 1, 2).chunk
      chunk.should be_an_instance_of(Enumerator)
      result = chunk.with_index {|elt, i| elt - i }.to_a
      result.should == [[1, [1, 2, 3]], [-2, [1, 2]]]
    end
  end

  it "returns an Enumerator if given a block" do
    EnumerableSpecs::Numerous.new.chunk {}.should be_an_instance_of(Enumerator)
  end

  it "yields the current element and the current chunk to the block" do
    e = EnumerableSpecs::Numerous.new(1, 2, 3)
    e.chunk { |x| ScratchPad << x }.to_a
    ScratchPad.recorded.should == [1, 2, 3]
  end

  it "returns elements of the Enumerable in an Array of Arrays, [v, ary], where 'ary' contains the consecutive elements for which the block returned the value 'v'" do
    e = EnumerableSpecs::Numerous.new(1, 2, 3, 2, 3, 2, 1)
    result = e.chunk { |x| x < 3 && 1 || 0 }.to_a
    result.should == [[1, [1, 2]], [0, [3]], [1, [2]], [0, [3]], [1, [2, 1]]]
  end

  it "returns elements for which the block returns :_alone in separate Arrays" do
    e = EnumerableSpecs::Numerous.new(1, 2, 3, 2, 1)
    result = e.chunk { |x| x < 2 && :_alone }.to_a
    result.should == [[:_alone, [1]], [false, [2, 3, 2]], [:_alone, [1]]]
  end

  it "does not return elements for which the block returns :_separator" do
    e = EnumerableSpecs::Numerous.new(1, 2, 3, 3, 2, 1)
    result = e.chunk { |x| x == 2 ? :_separator : 1 }.to_a
    result.should == [[1, [1]], [1, [3, 3]], [1, [1]]]
  end

  it "does not return elements for which the block returns nil" do
    e = EnumerableSpecs::Numerous.new(1, 2, 3, 2, 1)
    result = e.chunk { |x| x == 2 ? nil : 1 }.to_a
    result.should == [[1, [1]], [1, [3]], [1, [1]]]
  end

  it "raises a RuntimeError if the block returns a Symbol starting with an underscore other than :_alone or :_separator" do
    e = EnumerableSpecs::Numerous.new(1, 2, 3, 2, 1)
    lambda { e.chunk { |x| :_arbitrary }.to_a }.should raise_error(RuntimeError)
  end

  ruby_version_is ""..."2.3" do
    describe "with [initial_state]" do
      it "yields an element and an object value-equal but not identical to the object passed to #chunk" do
        e = EnumerableSpecs::Numerous.new(1)
        value = "value"

        e.chunk(value) do |x, v|
          x.should == 1
          v.should == value
          v.should_not equal(value)
        end.to_a
      end

      it "does not yield the object passed to #chunk if it is nil" do
        e = EnumerableSpecs::Numerous.new(1)
        e.chunk(nil) { |*x| ScratchPad << x }.to_a
        ScratchPad.recorded.should == [[1]]
      end
    end
  end

  ruby_version_is "2.3" do
    it "does not accept arguments" do
      e = EnumerableSpecs::Numerous.new(1, 2, 3)
      lambda {
        e.chunk(1) {}
      }.should raise_error(ArgumentError)
    end
  end

  it 'returned Enumerator size returns nil' do
    e = EnumerableSpecs::NumerousWithSize.new(1, 2, 3, 2, 1)
    enum = e.chunk { |x| true }
    enum.size.should == nil
  end
end
