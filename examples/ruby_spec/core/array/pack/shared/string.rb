# -*- encoding: binary -*-
describe :array_pack_string, shared: true do
  it "adds count bytes of a String to the output" do
    ["abc"].pack(pack_format(2)).should == "ab"
  end

  it "implicitly has a count of one when no count is specified" do
    ["abc"].pack(pack_format).should == "a"
  end

  it "does not add any bytes when the count is zero" do
    ["abc"].pack(pack_format(0)).should == ""
  end

  it "is not affected by a previous count modifier" do
    ["abcde", "defg"].pack(pack_format(3)+pack_format).should == "abcd"
  end

  it "raises an ArgumentError when the Array is empty" do
    lambda { [].pack(pack_format) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the Array has too few elements" do
    lambda { ["a"].pack(pack_format(nil, 2)) }.should raise_error(ArgumentError)
  end

  it "calls #to_str to convert the element to a String" do
    obj = mock('pack string')
    obj.should_receive(:to_str).and_return("abc")

    [obj].pack(pack_format).should == "a"
  end

  it "raises a TypeError when the object does not respond to #to_str" do
    obj = mock("not a string")
    lambda { [obj].pack(pack_format) }.should raise_error(TypeError)
  end

  it "returns a tainted string when a pack argument is tainted" do
    ["abcd".taint, 0x20].pack(pack_format("3C")).tainted?.should be_true
  end

  it "does not return a tainted string when the array is tainted" do
    ["abcd", 0x20].taint.pack(pack_format("3C")).tainted?.should be_false
  end

  it "returns a tainted string when the format is tainted" do
    ["abcd", 0x20].pack(pack_format("3C").taint).tainted?.should be_true
  end

  it "returns a tainted string when an empty format is tainted" do
    ["abcd", 0x20].pack("".taint).tainted?.should be_true
  end

  it "returns a untrusted string when the format is untrusted" do
    ["abcd", 0x20].pack(pack_format("3C").untrust).untrusted?.should be_true
  end

  it "returns a untrusted string when the empty format is untrusted" do
    ["abcd", 0x20].pack("".untrust).untrusted?.should be_true
  end

  it "returns a untrusted string when a pack argument is untrusted" do
    ["abcd".untrust, 0x20].pack(pack_format("3C")).untrusted?.should be_true
  end

  it "returns a trusted string when the array is untrusted" do
    ["abcd", 0x20].untrust.pack(pack_format("3C")).untrusted?.should be_false
  end

  it "returns a string in encoding of common to the concatenated results" do
    f = pack_format("*")
    [ [["\u{3042 3044 3046 3048}", 0x2000B].pack(f+"U"),       Encoding::ASCII_8BIT],
      [["abcde\xd1", "\xFF\xFe\x81\x82"].pack(f+"u"),          Encoding::ASCII_8BIT],
      [["a".force_encoding("ascii"), "\xFF\xFe\x81\x82"].pack(f+"u"), Encoding::ASCII_8BIT],
      # under discussion [ruby-dev:37294]
      [["\u{3042 3044 3046 3048}", 1].pack(f+"N"),             Encoding::ASCII_8BIT]
    ].should be_computed_by(:encoding)
  end
end
