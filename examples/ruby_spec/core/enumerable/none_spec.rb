require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#none?" do
  it "returns true if none of the elements in self are true" do
    e = EnumerableSpecs::Numerous.new(false, nil, false)
    e.none?.should be_true
  end

  it "returns false if at least one of the elements in self are true" do
    e = EnumerableSpecs::Numerous.new(false, nil, true, false)
    e.none?.should be_false
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMultiWithFalse.new
    multi.none?.should be_false
  end
end

describe "Enumerable#none? with a block" do
  before :each do
    @e = EnumerableSpecs::Numerous.new(1,1,2,3,4)
  end

  it "passes each element to the block in turn until it returns true" do
    acc = []
    @e.none? {|e| acc << e; false }
    acc.should == [1,1,2,3,4]
  end

  it "stops passing elements to the block when it returns true" do
    acc = []
    @e.none? {|e| acc << e; e == 3 ? true : false }
    acc.should == [1,1,2,3]
  end

  it "returns true if the block never returns true" do
    @e.none? {|e| false }.should be_true
  end

  it "returns false if the block ever returns true" do
    @e.none? {|e| e == 3 ? true : false }.should be_false
  end

  it "gathers initial args as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.none? {|e| e == [1, 2] }.should be_true
  end

  it "yields multiple arguments when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    yielded = []
    multi.none? {|e, i| yielded << [e, i] }
    yielded.should == [[1, 2]]
  end
end
