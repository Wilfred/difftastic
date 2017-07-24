describe :sorted_set_union, shared: true do
  before :each do
    @set = SortedSet["a", "b", "c"]
  end

  it "returns a new SortedSet containing all elements of self and the passed Enumerable" do
    @set.send(@method, SortedSet["b", "d", "e"]).should == SortedSet["a", "b", "c", "d", "e"]
    @set.send(@method, ["b", "e"]).should == SortedSet["a", "b", "c", "e"]
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { @set.send(@method, 1) }.should raise_error(ArgumentError)
    lambda { @set.send(@method, Object.new) }.should raise_error(ArgumentError)
  end
end
