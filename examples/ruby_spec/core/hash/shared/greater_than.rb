describe :hash_greater_than, shared: true do
  before do
    @h1 = { a: 1, b: 2, c: 3 }
    @h2 = { a: 1, b: 2 }
  end

  it "returns true if the other hash is a subset of self" do
    @h1.send(@method, @h2).should be_true
  end

  it "returns false if the other hash is not a subset of self" do
    @h2.send(@method, @h1).should be_false
  end

  it "converts the right operand to a hash before comparing" do
    o = Object.new
    def o.to_hash
      { a: 1, b: 2 }
    end

    @h1.send(@method, o).should be_true
  end
end
