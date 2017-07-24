# -*- encoding: binary -*-
describe :strscan_get_byte, shared: true do
  it "scans one byte and returns it" do
    s = StringScanner.new('abc5.')
    s.send(@method).should == 'a'
    s.send(@method).should == 'b'
    s.send(@method).should == 'c'
    s.send(@method).should == '5'
    s.send(@method).should == '.'
  end

  it "is not multi-byte character sensitive" do
    s = StringScanner.new("\244\242")
    s.send(@method).should == "\244"
    s.send(@method).should == "\242"
  end

  it "returns nil at the end of the string" do
    # empty string case
    s = StringScanner.new('')
    s.send(@method).should == nil
    s.send(@method).should == nil

    # non-empty string case
    s = StringScanner.new('a')
    s.send(@method) # skip one
    s.send(@method).should == nil
  end
end
