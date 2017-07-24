describe :array_index, shared: true do
  it "returns the index of the first element == to object" do
    x = mock('3')
    def x.==(obj) 3 == obj; end

    [2, x, 3, 1, 3, 1].send(@method, 3).should == 1
    [2, 3.0, 3, x, 1, 3, 1].send(@method, x).should == 1
  end

  it "returns 0 if first element == to object" do
    [2, 1, 3, 2, 5].send(@method, 2).should == 0
  end

  it "returns size-1 if only last element == to object" do
    [2, 1, 3, 1, 5].send(@method, 5).should == 4
  end

  it "returns nil if no element == to object" do
    [2, 1, 1, 1, 1].send(@method, 3).should == nil
  end

  it "accepts a block instead of an argument" do
    [4, 2, 1, 5, 1, 3].send(@method) {|x| x < 2}.should == 2
  end

  it "ignores the block if there is an argument" do
    -> {
      [4, 2, 1, 5, 1, 3].send(@method, 5) {|x| x < 2}.should == 3
    }.should complain(/given block not used/)
  end

  describe "given no argument and no block" do
    it "produces an Enumerator" do
      [].send(@method).should be_an_instance_of(Enumerator)
    end
  end
end
