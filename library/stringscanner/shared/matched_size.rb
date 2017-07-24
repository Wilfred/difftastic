describe :strscan_matched_size, shared: true do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns the size of the most recent match" do
    @s.check(/This/)
    @s.send(@method).should == 4
    @s.send(@method).should == 4
    @s.scan(//)
    @s.send(@method).should == 0
  end

  it "returns nil if there was no recent match" do
    @s.send(@method).should == nil
    @s.check(/\d+/)
    @s.send(@method).should == nil
    @s.terminate
    @s.send(@method).should == nil
  end
end
