require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumeratorize', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

# Modifying a collection while the contents are being iterated
# gives undefined behavior. See
# http://blade.nagaokaut.ac.jp/cgi-bin/scat.rb/ruby/ruby-core/23633

describe "Array#reverse_each" do
  before :each do
    ScratchPad.record []
  end

  it "traverses array in reverse order and pass each element to block" do
    [1, 3, 4, 6].reverse_each { |i| ScratchPad << i }
    ScratchPad.recorded.should == [6, 4, 3, 1]
  end

  it "returns self" do
    a = [:a, :b, :c]
    a.reverse_each { |x| }.should equal(a)
  end

  it "yields only the top level element of an empty recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.reverse_each { |i| ScratchPad << i }
    ScratchPad.recorded.should == [empty]
  end

  it "yields only the top level element of a recursive array" do
    array = ArraySpecs.recursive_array
    array.reverse_each { |i| ScratchPad << i }
    ScratchPad.recorded.should == [array, array, array, array, array, 3.0, 'two', 1]
  end

  it "returns the correct size when no block is given" do
    [1, 2, 3].reverse_each.size.should == 3
  end

  it_behaves_like :enumeratorize, :reverse_each
  it_behaves_like :enumeratorized_with_origin_size, :reverse_each, [1,2,3]
end
