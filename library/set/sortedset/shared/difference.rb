describe :sorted_set_difference, shared: true do
  before :each do
    @set = SortedSet["a", "b", "c"]
  end

  it "returns a new SortedSet containting self's elements excluding the elements in the passed Enumerable" do
    @set.send(@method, SortedSet["a", "b"]).should == SortedSet["c"]
    @set.send(@method, ["b", "c"]).should == SortedSet["a"]
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { @set.send(@method, 1) }.should raise_error(ArgumentError)
    lambda { @set.send(@method, Object.new) }.should raise_error(ArgumentError)
  end
end
