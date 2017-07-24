require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/iteration', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Hash#keep_if" do
  it "yields two arguments: key and value" do
    all_args = []
    { 1 => 2, 3 => 4 }.keep_if { |*args| all_args << args }
    all_args.should == [[1, 2], [3, 4]]
  end

  it "keeps every entry for which block is true and returns self" do
    h = { a: 1, b: 2, c: 3, d: 4 }
    h.keep_if { |k,v| v % 2 == 0 }.should equal(h)
    h.should == { b: 2, d: 4 }
  end

  it "removes all entries if the block is false" do
    h = { a: 1, b: 2, c: 3 }
    h.keep_if { |k,v| false }.should equal(h)
    h.should == {}
  end

  it "returns self even if unmodified" do
    h = { 1 => 2, 3 => 4 }
    h.keep_if { true }.should equal(h)
  end

  it "raises a RuntimeError if called on a frozen instance" do
    lambda { HashSpecs.frozen_hash.keep_if { true } }.should raise_error(RuntimeError)
    lambda { HashSpecs.empty_frozen_hash.keep_if { false } }.should raise_error(RuntimeError)
  end

  it_behaves_like(:hash_iteration_no_block, :keep_if)
  it_behaves_like(:enumeratorized_with_origin_size, :keep_if, { 1 => 2, 3 => 4, 5 => 6 })
end
