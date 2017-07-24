# -*- encoding: utf-8 -*-

describe :string_unpack_unicode, shared: true do
  it "decodes Unicode codepoints as ASCII values" do
    [ ["\x00",      [0]],
      ["\x01",      [1]],
      ["\x08",      [8]],
      ["\x0f",      [15]],
      ["\x18",      [24]],
      ["\x1f",      [31]],
      ["\x7f",      [127]],
      ["\xc2\x80",  [128]],
      ["\xc2\x81",  [129]],
      ["\xc3\xbf",  [255]]
    ].should be_computed_by(:unpack, "U")
  end

  it "decodes the number of characters specified by the count modifier" do
    [ ["\xc2\x80\xc2\x81\xc2\x82\xc2\x83", "U1", [0x80]],
      ["\xc2\x80\xc2\x81\xc2\x82\xc2\x83", "U2", [0x80, 0x81]],
      ["\xc2\x80\xc2\x81\xc2\x82\xc2\x83", "U3", [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end

  it "implicitly has a count of one when no count modifier is passed" do
    "\xc2\x80\xc2\x81\xc2\x82\xc2\x83".unpack("U1").should == [0x80]
  end

  it "decodes all remaining characters when passed the '*' modifier" do
    "\xc2\x80\xc2\x81\xc2\x82\xc2\x83".unpack("U*").should == [0x80, 0x81, 0x82, 0x83]
  end

  it "decodes UTF-8 BMP codepoints" do
    [ ["\xc2\x80",      [0x80]],
      ["\xdf\xbf",      [0x7ff]],
      ["\xe0\xa0\x80",  [0x800]],
      ["\xef\xbf\xbf",  [0xffff]]
    ].should be_computed_by(:unpack, "U")
  end

  it "decodes UTF-8 max codepoints" do
    [ ["\xf0\x90\x80\x80", [0x10000]],
      ["\xf3\xbf\xbf\xbf", [0xfffff]],
      ["\xf4\x80\x80\x80", [0x100000]],
      ["\xf4\x8f\xbf\xbf", [0x10ffff]]
    ].should be_computed_by(:unpack, "U")
  end

  it "does not decode any items for directives exceeding the input string size" do
    "\xc2\x80".unpack("UUUU").should == [0x80]
  end

  it "ignores NULL bytes between directives" do
    "\x01\x02".unpack("U\x00U").should == [1, 2]
  end

  it "ignores spaces between directives" do
    "\x01\x02".unpack("U U").should == [1, 2]
  end
end
