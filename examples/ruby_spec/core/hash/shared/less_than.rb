describe :hash_less_than, shared: true do
  before do
    @h1 = { a: 1, b: 2 }
    @h2 = { a: 1, b: 2, c: 3 }
  end

  it "returns true if self is a subset of the other hash" do
    @h1.send(@method, @h2).should be_true
  end

  it "returns false if self is not a subset of the other hash" do
    @h2.send(@method, @h1).should be_false
  end

  it "converts the right operand to a hash before comparing" do
    o = Object.new
    def o.to_hash
      { a: 1, b: 2, c: 3 }
    end

    @h1.send(@method, o).should be_true
  end
end
