describe :enumerable_entries, shared: true do
  it "returns an array containing the elements" do
    numerous = EnumerableSpecs::Numerous.new(1, nil, 'a', 2, false, true)
    numerous.send(@method).should == [1, nil, "a", 2, false, true]
  end

  it "passes through the values yielded by #each_with_index" do
    [:a, :b].each_with_index.send(@method).should == [[:a, 0], [:b, 1]]
  end

  it "passes arguments to each" do
    count = EnumerableSpecs::EachCounter.new(1, 2, 3)
    count.send(@method, :hello, "world").should == [1, 2, 3]
    count.arguments_passed.should == [:hello, "world"]
  end

  it "returns a tainted array if self is tainted" do
    EnumerableSpecs::Empty.new.taint.send(@method).tainted?.should be_true
  end

  it "returns an untrusted array if self is untrusted" do
    EnumerableSpecs::Empty.new.untrust.send(@method).untrusted?.should be_true
  end
end
