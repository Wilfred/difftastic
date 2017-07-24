describe :strscan_bol, shared: true do
  it "returns true if the scan pointer is at the beginning of the line, false otherwise" do
    s = StringScanner.new("This is a test")
    s.send(@method).should be_true
    s.scan(/This/)
    s.send(@method).should be_false
    s.terminate
    s.send(@method).should be_false

    s = StringScanner.new("hello\nworld")
    s.bol?.should be_true
    s.scan(/\w+/)
    s.bol?.should be_false
    s.scan(/\n/)
    s.bol?.should be_true
    s.unscan
    s.bol?.should be_false
  end

  it "returns true if the scan pointer is at the end of the line of an empty string." do
    s = StringScanner.new('')
    s.terminate
    s.send(@method).should be_true
  end
end
