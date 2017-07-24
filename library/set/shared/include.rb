describe :set_include, shared: true do
  it "returns true when self contains the passed Object" do
    set = Set[:a, :b, :c]
    set.send(@method, :a).should be_true
    set.send(@method, :e).should be_false
  end
end
