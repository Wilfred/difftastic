describe :set_intersection, shared: true do
  before :each do
    @set = Set[:a, :b, :c]
  end

  it "returns a new Set containing only elements shared by self and the passed Enumerable" do
    @set.send(@method, Set[:b, :c, :d, :e]).should == Set[:b, :c]
    @set.send(@method, [:b, :c, :d]).should == Set[:b, :c]
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { @set.send(@method, 1) }.should raise_error(ArgumentError)
    lambda { @set.send(@method, Object.new) }.should raise_error(ArgumentError)
  end
end
