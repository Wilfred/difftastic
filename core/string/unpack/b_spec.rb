# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "String#unpack with format 'B'" do
  it_behaves_like :string_unpack_basic, 'B'
  it_behaves_like :string_unpack_no_platform, 'B'

  it "decodes one bit from each byte for each format character starting with the most significant bit" do
    [ ["\x00",     "B",  ["0"]],
      ["\x80",     "B",  ["1"]],
      ["\x0f",     "B",  ["0"]],
      ["\x8f",     "B",  ["1"]],
      ["\x7f",     "B",  ["0"]],
      ["\xff",     "B",  ["1"]],
      ["\x80\x00", "BB", ["1", "0"]],
      ["\x8f\x00", "BB", ["1", "0"]],
      ["\x80\x0f", "BB", ["1", "0"]],
      ["\x80\x8f", "BB", ["1", "1"]],
      ["\x80\x80", "BB", ["1", "1"]],
      ["\x0f\x80", "BB", ["0", "1"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes only the number of bits in the string when passed a count" do
    "\x83".unpack("B25").should == ["10000011"]
  end

  it "decodes multiple differing bit counts from a single string" do
    str = "\xaa\xaa\xaa\xaa\x55\xaa\xd4\xc3\x6b\xd7\xaa\xd7\xc3\xd4\xaa\x6b\xd7\xaa"
    array = str.unpack("B5B6B7B8B9B10B13B14B16B17")
    array.should == ["10101", "101010", "1010101", "10101010", "010101011",
                     "1101010011", "0110101111010", "10101010110101",
                     "1100001111010100", "10101010011010111"]
  end

  it "decodes a directive with a '*' modifier after a directive with a count modifier" do
    "\xd4\xc3\x6b\xd7".unpack("B5B*").should == ["11010", "110000110110101111010111"]
  end

  it "decodes a directive with a count modifier after a directive with a '*' modifier" do
    "\xd4\xc3\x6b\xd7".unpack("B*B5").should == ["11010100110000110110101111010111", ""]
  end

  it "decodes the number of bits specified by the count modifier" do
    [ ["\x00",     "B0",  [""]],
      ["\x80",     "B1",  ["1"]],
      ["\x7f",     "B2",  ["01"]],
      ["\x8f",     "B3",  ["100"]],
      ["\x7f",     "B4",  ["0111"]],
      ["\xff",     "B5",  ["11111"]],
      ["\xf8",     "B6",  ["111110"]],
      ["\x9c",     "B7",  ["1001110"]],
      ["\xbd",     "B8",  ["10111101"]],
      ["\x80\x80", "B9",  ["100000001"]],
      ["\x80\x70", "B10", ["1000000001"]],
      ["\x80\x20", "B11", ["10000000001"]],
      ["\x8f\x10", "B12", ["100011110001"]],
      ["\x8f\x0f", "B13", ["1000111100001"]],
      ["\x80\x0f", "B14", ["10000000000011"]],
      ["\x80\x8f", "B15", ["100000001000111"]],
      ["\x0f\x81", "B16", ["0000111110000001"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes all the bits when passed the '*' modifier" do
    [ ["",         [""]],
      ["\x00",     ["00000000"]],
      ["\x80",     ["10000000"]],
      ["\x7f",     ["01111111"]],
      ["\x81",     ["10000001"]],
      ["\x0f",     ["00001111"]],
      ["\x80\x80", ["1000000010000000"]],
      ["\x8f\x10", ["1000111100010000"]],
      ["\x00\x10", ["0000000000010000"]]
    ].should be_computed_by(:unpack, "B*")
  end

  it "adds an empty string for each element requested beyond the end of the String" do
    [ ["",          ["", "", ""]],
      ["\x80",      ["1", "", ""]],
      ["\x80\x08",  ["1", "0", ""]]
    ].should be_computed_by(:unpack, "BBB")
  end

  it "ignores NULL bytes between directives" do
    "\x80\x00".unpack("B\x00B").should == ["1", "0"]
  end

  it "ignores spaces between directives" do
    "\x80\x00".unpack("B B").should == ["1", "0"]
  end
end

describe "String#unpack with format 'b'" do
  it_behaves_like :string_unpack_basic, 'b'
  it_behaves_like :string_unpack_no_platform, 'b'

  it "decodes one bit from each byte for each format character starting with the least significant bit" do
    [ ["\x00",     "b",  ["0"]],
      ["\x01",     "b",  ["1"]],
      ["\xf0",     "b",  ["0"]],
      ["\xf1",     "b",  ["1"]],
      ["\xfe",     "b",  ["0"]],
      ["\xff",     "b",  ["1"]],
      ["\x01\x00", "bb", ["1", "0"]],
      ["\xf1\x00", "bb", ["1", "0"]],
      ["\x01\xf0", "bb", ["1", "0"]],
      ["\x01\xf1", "bb", ["1", "1"]],
      ["\x01\x01", "bb", ["1", "1"]],
      ["\xf0\x01", "bb", ["0", "1"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes only the number of bits in the string when passed a count" do
    "\x83".unpack("b25").should == ["11000001"]
  end

  it "decodes multiple differing bit counts from a single string" do
    str = "\xaa\xaa\xaa\xaa\x55\xaa\xd4\xc3\x6b\xd7\xaa\xd7\xc3\xd4\xaa\x6b\xd7\xaa"
    array = str.unpack("b5b6b7b8b9b10b13b14b16b17")
    array.should == ["01010", "010101", "0101010", "01010101", "101010100",
                     "0010101111", "1101011011101", "01010101111010",
                     "1100001100101011", "01010101110101101"]
  end

  it "decodes a directive with a '*' modifier after a directive with a count modifier" do
    "\xd4\xc3\x6b\xd7".unpack("b5b*").should == ["00101", "110000111101011011101011"]
  end

  it "decodes a directive with a count modifier after a directive with a '*' modifier" do
    "\xd4\xc3\x6b\xd7".unpack("b*b5").should == ["00101011110000111101011011101011", ""]
  end

  it "decodes the number of bits specified by the count modifier" do
    [ ["\x00",     "b0",  [""]],
      ["\x01",     "b1",  ["1"]],
      ["\xfe",     "b2",  ["01"]],
      ["\xfc",     "b3",  ["001"]],
      ["\xf7",     "b4",  ["1110"]],
      ["\xff",     "b5",  ["11111"]],
      ["\xfe",     "b6",  ["011111"]],
      ["\xce",     "b7",  ["0111001"]],
      ["\xbd",     "b8",  ["10111101"]],
      ["\x01\xff", "b9",  ["100000001"]],
      ["\x01\xfe", "b10", ["1000000001"]],
      ["\x01\xfc", "b11", ["10000000001"]],
      ["\xf1\xf8", "b12", ["100011110001"]],
      ["\xe1\xf1", "b13", ["1000011110001"]],
      ["\x03\xe0", "b14", ["11000000000001"]],
      ["\x47\xc0", "b15", ["111000100000001"]],
      ["\x81\x0f", "b16", ["1000000111110000"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes all the bits when passed the '*' modifier" do
    [ ["",         [""]],
      ["\x00",     ["00000000"]],
      ["\x80",     ["00000001"]],
      ["\x7f",     ["11111110"]],
      ["\x81",     ["10000001"]],
      ["\x0f",     ["11110000"]],
      ["\x80\x80", ["0000000100000001"]],
      ["\x8f\x10", ["1111000100001000"]],
      ["\x00\x10", ["0000000000001000"]]
    ].should be_computed_by(:unpack, "b*")
  end

  it "adds an empty string for each element requested beyond the end of the String" do
    [ ["",          ["", "", ""]],
      ["\x01",      ["1", "", ""]],
      ["\x01\x80",  ["1", "0", ""]]
    ].should be_computed_by(:unpack, "bbb")
  end

  it "ignores NULL bytes between directives" do
    "\x01\x00".unpack("b\x00b").should == ["1", "0"]
  end

  it "ignores spaces between directives" do
    "\x01\x00".unpack("b b").should == ["1", "0"]
  end

  it "decodes into US-ASCII string values" do
    str = "s".force_encoding('UTF-8').unpack("b*")[0]
    str.encoding.name.should == 'US-ASCII'
  end

end
