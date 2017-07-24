require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#group_by" do
  it "returns a hash with values grouped according to the block" do
    e = EnumerableSpecs::Numerous.new("foo", "bar", "baz")
    h = e.group_by { |word| word[0..0].to_sym }
    h.should == { f: ["foo"], b: ["bar", "baz"]}
  end

  it "returns an empty hash for empty enumerables" do
    EnumerableSpecs::Empty.new.group_by { |x| x}.should == {}
  end

  it "returns a hash without default_proc" do
    e = EnumerableSpecs::Numerous.new("foo", "bar", "baz")
    h = e.group_by { |word| word[0..0].to_sym }
    h[:some].should be_nil
    h.default_proc.should be_nil
    h.default.should be_nil
  end

  it "returns an Enumerator if called without a block" do
    EnumerableSpecs::Numerous.new.group_by.should be_an_instance_of(Enumerator)
  end

  it "gathers whole arrays as elements when each yields multiple" do
    e = EnumerableSpecs::YieldsMulti.new
    h = e.group_by { |i| i }
    h.should == { [1, 2] => [[1, 2]],
                  [6, 7, 8, 9] => [[6, 7, 8, 9]],
                  [3, 4, 5] => [[3, 4, 5]] }
  end

  it "returns a tainted hash if self is tainted" do
    EnumerableSpecs::Empty.new.taint.group_by {}.tainted?.should be_true
  end

  it "returns an untrusted hash if self is untrusted" do
    EnumerableSpecs::Empty.new.untrust.group_by {}.untrusted?.should be_true
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :group_by
end
