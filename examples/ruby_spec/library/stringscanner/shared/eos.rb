describe :strscan_eos, shared: true do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "returns true if the scan pointer is at the end of the string" do
    @s.terminate
    @s.send(@method).should be_true

    s = StringScanner.new('')
    s.send(@method).should be_true
  end

  it "returns false if the scan pointer is not at the end of the string" do
    @s.send(@method).should be_false
  end
end
