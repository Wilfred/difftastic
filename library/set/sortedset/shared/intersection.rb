describe :sorted_set_intersection, shared: true do
  before :each do
    @set = SortedSet["a", "b", "c"]
  end

  it "returns a new SortedSet containing only elements shared by self and the passed Enumerable" do
    @set.send(@method, SortedSet["b", "c", "d", "e"]).should == SortedSet["b", "c"]
    @set.send(@method, ["b", "c", "d"]).should == SortedSet["b", "c"]
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { @set.send(@method, 1) }.should raise_error(ArgumentError)
    lambda { @set.send(@method, Object.new) }.should raise_error(ArgumentError)
  end
end
