describe :strscan_rest_size, shared: true do
  before :each do
    @s = StringScanner.new('This is a test')
  end

  it "returns the length of the rest of the string" do
    @s.send(@method).should == 14
    @s.scan(/This/)
    @s.send(@method).should == 10
    @s.terminate
    @s.send(@method).should == 0
  end

  it "is equivalent to rest.size" do
    @s.scan(/This/)
    @s.send(@method).should == @s.rest.size
  end
end
