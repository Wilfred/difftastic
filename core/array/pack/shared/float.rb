# -*- encoding: ascii-8bit -*-

describe :array_pack_float_le, shared: true do
  it "encodes a positive Float" do
    [1.42].pack(pack_format).should == "\x8f\xc2\xb5?"
  end

  it "encodes a negative Float" do
    [-34.2].pack(pack_format).should == "\xcd\xcc\x08\xc2"
  end

  it "converts an Integer to a Float" do
    [8].pack(pack_format).should == "\x00\x00\x00A"
  end

  it "raises a TypeError if passed a String representation of a floating point number" do
    lambda { ["13"].pack(pack_format) }.should raise_error(TypeError)
  end

  it "encodes the number of array elements specified by the count modifier" do
    [2.9, 1.4, 8.2].pack(pack_format(nil, 2)).should == "\x9a\x999@33\xb3?"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    [2.9, 1.4, 8.2].pack(pack_format("*")).should == "\x9a\x999@33\xb3?33\x03A"
  end

  it "ignores NULL bytes between directives" do
    [5.3, 9.2].pack(pack_format("\000", 2)).should == "\x9a\x99\xa9@33\x13A"
  end

  it "ignores spaces between directives" do
    [5.3, 9.2].pack(pack_format(" ", 2)).should == "\x9a\x99\xa9@33\x13A"
  end

  it "encodes positive Infinity" do
    [infinity_value].pack(pack_format).should == "\x00\x00\x80\x7f"
  end

  it "encodes negative Infinity" do
    [-infinity_value].pack(pack_format).should == "\x00\x00\x80\xff"
  end

  platform_is "86" do # x86 / x86_64
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\x00\x00\xc0\xff"
    end
  end

  platform_is "powerpc64" do
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\x00\x00\xc0\x7f"
    end
  end

  it "encodes a positive Float outside the range of a single precision float" do
    [1e150].pack(pack_format).should == "\x00\x00\x80\x7f"
  end

  it "encodes a negative Float outside the range of a single precision float" do
    [-1e150].pack(pack_format).should == "\x00\x00\x80\xff"
  end
end

describe :array_pack_float_be, shared: true do
  it "encodes a positive Float" do
    [1.42].pack(pack_format).should == "?\xb5\xc2\x8f"
  end

  it "encodes a negative Float" do
    [-34.2].pack(pack_format).should == "\xc2\x08\xcc\xcd"
  end

  it "converts an Integer to a Float" do
    [8].pack(pack_format).should == "A\x00\x00\x00"
  end

  it "raises a TypeError if passed a String representation of a floating point number" do
    lambda { ["13"].pack(pack_format) }.should raise_error(TypeError)
  end

  it "encodes the number of array elements specified by the count modifier" do
    [2.9, 1.4, 8.2].pack(pack_format(nil, 2)).should == "@9\x99\x9a?\xb333"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    [2.9, 1.4, 8.2].pack(pack_format("*")).should == "@9\x99\x9a?\xb333A\x0333"
  end

  it "ignores NULL bytes between directives" do
    [5.3, 9.2].pack(pack_format("\000", 2)).should == "@\xa9\x99\x9aA\x1333"
  end

  it "ignores spaces between directives" do
    [5.3, 9.2].pack(pack_format(" ", 2)).should == "@\xa9\x99\x9aA\x1333"
  end

  it "encodes positive Infinity" do
    [infinity_value].pack(pack_format).should == "\x7f\x80\x00\x00"
  end

  it "encodes negative Infinity" do
    [-infinity_value].pack(pack_format).should == "\xff\x80\x00\x00"
  end

  platform_is "86" do # x86 / x86_64
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\xff\xc0\x00\x00"
    end
  end

  platform_is "powerpc64" do
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\x7f\xc0\x00\x00"
    end
  end

  it "encodes a positive Float outside the range of a single precision float" do
    [1e150].pack(pack_format).should == "\x7f\x80\x00\x00"
  end

  it "encodes a negative Float outside the range of a single precision float" do
    [-1e150].pack(pack_format).should == "\xff\x80\x00\x00"
  end
end

describe :array_pack_double_le, shared: true do
  it "encodes a positive Float" do
    [1.42].pack(pack_format).should == "\xb8\x1e\x85\xebQ\xb8\xf6?"
  end

  it "encodes a negative Float" do
    [-34.2].pack(pack_format).should == "\x9a\x99\x99\x99\x99\x19A\xc0"
  end

  it "converts an Integer to a Float" do
    [8].pack(pack_format).should == "\x00\x00\x00\x00\x00\x00\x20@"
  end

  it "raises a TypeError if passed a String representation of a floating point number" do
    lambda { ["13"].pack(pack_format) }.should raise_error(TypeError)
  end

  it "encodes the number of array elements specified by the count modifier" do
    [2.9, 1.4, 8.2].pack(pack_format(nil, 2)).should == "333333\x07@ffffff\xf6?"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    [2.9, 1.4, 8.2].pack(pack_format("*")).should == "333333\x07@ffffff\xf6?ffffff\x20@"
  end

  it "ignores NULL bytes between directives" do
    [5.3, 9.2].pack(pack_format("\000", 2)).should == "333333\x15@ffffff\x22@"
  end

  it "ignores spaces between directives" do
    [5.3, 9.2].pack(pack_format(" ", 2)).should == "333333\x15@ffffff\x22@"
  end

  it "encodes positive Infinity" do
    [infinity_value].pack(pack_format).should == "\x00\x00\x00\x00\x00\x00\xf0\x7f"
  end

  it "encodes negative Infinity" do
    [-infinity_value].pack(pack_format).should == "\x00\x00\x00\x00\x00\x00\xf0\xff"
  end

  platform_is "86" do # x86 / x86_64
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\x00\x00\x00\x00\x00\x00\xf8\xff"
    end
  end

  platform_is "powerpc64" do
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\x00\x00\x00\x00\x00\x00\xf8\x7f"
    end
  end

  it "encodes a positive Float outside the range of a single precision float" do
    [1e150].pack(pack_format).should == "\xaf\x96P\x2e5\x8d\x13_"
  end

  it "encodes a negative Float outside the range of a single precision float" do
    [-1e150].pack(pack_format).should == "\xaf\x96P\x2e5\x8d\x13\xdf"
  end
end

describe :array_pack_double_be, shared: true do
  it "encodes a positive Float" do
    [1.42].pack(pack_format).should == "?\xf6\xb8Q\xeb\x85\x1e\xb8"
  end

  it "encodes a negative Float" do
    [-34.2].pack(pack_format).should == "\xc0A\x19\x99\x99\x99\x99\x9a"
  end

  it "converts an Integer to a Float" do
    [8].pack(pack_format).should == "@\x20\x00\x00\x00\x00\x00\x00"
  end

  it "raises a TypeError if passed a String representation of a floating point number" do
    lambda { ["13"].pack(pack_format) }.should raise_error(TypeError)
  end

  it "encodes the number of array elements specified by the count modifier" do
    [2.9, 1.4, 8.2].pack(pack_format(nil, 2)).should == "@\x07333333?\xf6ffffff"
  end

  it "encodes all remaining elements when passed the '*' modifier" do
    [2.9, 1.4, 8.2].pack(pack_format("*")).should == "@\x07333333?\xf6ffffff@\x20ffffff"
  end

  it "ignores NULL bytes between directives" do
    [5.3, 9.2].pack(pack_format("\000", 2)).should == "@\x15333333@\x22ffffff"
  end

  it "ignores spaces between directives" do
    [5.3, 9.2].pack(pack_format(" ", 2)).should == "@\x15333333@\x22ffffff"
  end

  it "encodes positive Infinity" do
    [infinity_value].pack(pack_format).should == "\x7f\xf0\x00\x00\x00\x00\x00\x00"
  end

  it "encodes negative Infinity" do
    [-infinity_value].pack(pack_format).should == "\xff\xf0\x00\x00\x00\x00\x00\x00"
  end

  platform_is "86" do # x86 / x86_64
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\xff\xf8\x00\x00\x00\x00\x00\x00"
    end
  end

  platform_is "powerpc64" do
    it "encodes NaN" do
      [nan_value].pack(pack_format).should == "\x7f\xf8\x00\x00\x00\x00\x00\x00"
    end
  end

  it "encodes a positive Float outside the range of a single precision float" do
    [1e150].pack(pack_format).should == "_\x13\x8d5\x2eP\x96\xaf"
  end

  it "encodes a negative Float outside the range of a single precision float" do
    [-1e150].pack(pack_format).should == "\xdf\x13\x8d5\x2eP\x96\xaf"
  end
end
