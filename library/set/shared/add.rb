describe :set_add, shared: true do
  before :each do
    @set = Set.new
  end

  it "adds the passed Object to self" do
    @set.send(@method, "dog")
    @set.should include("dog")
  end

  it "returns self" do
    @set.send(@method, "dog").should equal(@set)
  end
end
