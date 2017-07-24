require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#one?" do
  describe "when passed a block" do
    it "returns true if block returns true once" do
      [:a, :b, :c].one? { |s| s == :a }.should be_true
    end

    it "returns false if the block returns true more than once" do
      [:a, :b, :c].one? { |s| s == :a || s == :b }.should be_false
    end

    it "returns false if the block only returns false" do
      [:a, :b, :c].one? { |s| s == :d }.should be_false
    end

    it "gathers initial args as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      multi.one? {|e| e == 1 }.should be_true
    end

    it "yields multiple arguments when each yields multiple" do
      multi = EnumerableSpecs::YieldsMulti.new
      yielded = []
      multi.one? {|e, i| yielded << [e, i] }
      yielded.should == [[1, 2], [3, 4]]
    end
  end

  describe "when not passed a block" do
    it "returns true if only one element evaluates to true" do
      [false, nil, true].one?.should be_true
    end

    it "returns false if two elements evaluate to true" do
      [false, :value, nil, true].one?.should be_false
    end

    it "returns false if all elements evaluate to false" do
      [false, nil, false].one?.should be_false
    end

    it "gathers whole arrays as elements when each yields multiple" do
      multi = EnumerableSpecs::YieldsMultiWithSingleTrue.new
      multi.one?.should be_false
    end
  end
end
