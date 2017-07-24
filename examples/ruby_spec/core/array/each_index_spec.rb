require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumeratorize', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

# Modifying a collection while the contents are being iterated
# gives undefined behavior. See
# http://blade.nagaokaut.ac.jp/cgi-bin/scat.rb/ruby/ruby-core/23633

describe "Array#each_index" do
  before :each do
    ScratchPad.record []
  end

  it "passes the index of each element to the block" do
    a = ['a', 'b', 'c', 'd']
    a.each_index { |i| ScratchPad << i }
    ScratchPad.recorded.should == [0, 1, 2, 3]
  end

  it "returns self" do
    a = [:a, :b, :c]
    a.each_index { |i| }.should equal(a)
  end

  it "is not confused by removing elements from the front" do
    a = [1, 2, 3]

    a.shift
    ScratchPad.record []
    a.each_index { |i| ScratchPad << i }
    ScratchPad.recorded.should == [0, 1]

    a.shift
    ScratchPad.record []
    a.each_index { |i| ScratchPad << i }
    ScratchPad.recorded.should == [0]
  end

  it_behaves_like :enumeratorize, :each_index
  it_behaves_like :enumeratorized_with_origin_size, :each_index, [1,2,3]
end
