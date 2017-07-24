describe :hash_iteration_no_block, shared: true do
  before :each do
    @hsh = { 1 => 2, 3 => 4, 5 => 6 }
    @empty = {}
  end

  it "returns an Enumerator if called on a non-empty hash without a block" do
    @hsh.send(@method).should be_an_instance_of(Enumerator)
  end

  it "returns an Enumerator if called on an empty hash without a block" do
    @empty.send(@method).should be_an_instance_of(Enumerator)
  end

  it "returns an Enumerator if called on a frozen instance" do
    @hsh.freeze
    @hsh.send(@method).should be_an_instance_of(Enumerator)
  end
end
