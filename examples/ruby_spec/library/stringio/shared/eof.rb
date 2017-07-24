describe :stringio_eof, shared: true do
  before :each do
    @io = StringIO.new("eof")
  end

  it "returns true when self's position is greater than or equal to self's size" do
    @io.pos = 3
    @io.send(@method).should be_true

    @io.pos = 6
    @io.send(@method).should be_true
  end

  it "returns false when self's position is less than self's size" do
    @io.pos = 0
    @io.send(@method).should be_false

    @io.pos = 1
    @io.send(@method).should be_false

    @io.pos = 2
    @io.send(@method).should be_false
  end
end
