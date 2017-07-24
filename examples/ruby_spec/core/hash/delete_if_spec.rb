require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/iteration', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Hash#delete_if" do
  it "yields two arguments: key and value" do
    all_args = []
    { 1 => 2, 3 => 4 }.delete_if { |*args| all_args << args }
    all_args.sort.should == [[1, 2], [3, 4]]
  end

  it "removes every entry for which block is true and returns self" do
    h = { a: 1, b: 2, c: 3, d: 4 }
    h.delete_if { |k,v| v % 2 == 1 }.should equal(h)
    h.should == { b: 2, d: 4 }
  end

  it "removes all entries if the block is true" do
    h = { a: 1, b: 2, c: 3 }
    h.delete_if { |k,v| true }.should equal(h)
    h.should == {}
  end

  it "processes entries with the same order as each()" do
    h = { a: 1, b: 2, c: 3, d: 4 }

    each_pairs = []
    delete_pairs = []

    h.each_pair { |k,v| each_pairs << [k, v] }
    h.delete_if { |k,v| delete_pairs << [k,v] }

    each_pairs.should == delete_pairs
  end

  it "raises a RuntimeError if called on a frozen instance" do
    lambda { HashSpecs.frozen_hash.delete_if { false } }.should raise_error(RuntimeError)
    lambda { HashSpecs.empty_frozen_hash.delete_if { true } }.should raise_error(RuntimeError)
  end

  it_behaves_like(:hash_iteration_no_block, :delete_if)
  it_behaves_like(:enumeratorized_with_origin_size, :delete_if, { 1 => 2, 3 => 4, 5 => 6 })
end
