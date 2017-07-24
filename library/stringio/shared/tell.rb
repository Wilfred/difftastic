describe :stringio_tell, shared: true do
  before :each do
    @io = StringIOSpecs.build
  end

  it "returns the current byte offset" do
    @io.getc
    @io.send(@method).should == 1
    @io.read(7)
    @io.send(@method).should == 8
  end
end
