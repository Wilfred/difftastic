describe :array_pack_numeric_basic, shared: true do
  it "returns an empty String if count is zero" do
    [1].pack(pack_format(0)).should == ""
  end

  it "raises a TypeError when passed nil" do
    lambda { [nil].pack(pack_format) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed true" do
    lambda { [true].pack(pack_format) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed false" do
    lambda { [false].pack(pack_format) }.should raise_error(TypeError)
  end

  it "returns an ASCII-8BIT string" do
    [0xFF].pack(pack_format).encoding.should == Encoding::ASCII_8BIT
    [0xE3, 0x81, 0x82].pack(pack_format(3)).encoding.should == Encoding::ASCII_8BIT
  end
end

describe :array_pack_integer, shared: true do
  it "raises a TypeError when the object does not respond to #to_int" do
    obj = mock('not an integer')
    lambda { [obj].pack(pack_format) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { ["5"].pack(pack_format) }.should raise_error(TypeError)
  end
end

describe :array_pack_float, shared: true do
  it "raises a TypeError if a String does not represent a floating point number" do
    lambda { ["a"].pack(pack_format) }.should raise_error(TypeError)
  end

  it "raises a TypeError when the object does not respond to #to_f" do
    obj = mock('not an float')
    lambda { [obj].pack(pack_format) }.should raise_error(TypeError)
  end
end
