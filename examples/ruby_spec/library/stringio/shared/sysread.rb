describe :stringio_sysread_length, :shared => true do
  before :each do
    @io = StringIO.new("example")
  end

  it "returns an empty String when passed 0 and no data remains" do
    @io.send(@method, 8).should == "example"
    @io.send(@method, 0).should == ""
  end

  it "raises an EOFError when passed length > 0 and no data remains" do
    @io.read.should == "example"
    lambda { @io.sysread(1) }.should raise_error(EOFError)
  end
end
