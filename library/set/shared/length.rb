describe :set_length, shared: true do
  it "returns the number of elements in the set" do
    set = Set[:a, :b, :c]
    set.send(@method).should == 3
  end
end
