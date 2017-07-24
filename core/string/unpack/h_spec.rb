# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "String#unpack with format 'H'" do
  it_behaves_like :string_unpack_basic, 'H'
  it_behaves_like :string_unpack_no_platform, 'H'

  it "decodes one nibble from each byte for each format character starting with the most significant bit" do
    [ ["\x8f",     "H",  ["8"]],
      ["\xf8\x0f", "HH", ["f", "0"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes only the number of nibbles in the string when passed a count" do
    "\xca\xfe".unpack("H5").should == ["cafe"]
  end

  it "decodes multiple differing nibble counts from a single string" do
    array = "\xaa\x55\xaa\xd4\xc3\x6b\xd7\xaa\xd7".unpack("HH2H3H4H5")
    array.should == ["a", "55", "aad", "c36b", "d7aad"]
  end

  it "decodes a directive with a '*' modifier after a directive with a count modifier" do
    "\xaa\x55\xaa\xd4\xc3\x6b".unpack("H3H*").should == ["aa5", "aad4c36b"]
  end

  it "decodes a directive with a count modifier after a directive with a '*' modifier" do
    "\xaa\x55\xaa\xd4\xc3\x6b".unpack("H*H3").should == ["aa55aad4c36b", ""]
  end

  it "decodes the number of nibbles specified by the count modifier" do
    [ ["\xab",         "H0", [""]],
      ["\x00",         "H1", ["0"]],
      ["\x01",         "H2", ["01"]],
      ["\x01\x23",     "H3", ["012"]],
      ["\x01\x23",     "H4", ["0123"]],
      ["\x01\x23\x45", "H5", ["01234"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes all the nibbles when passed the '*' modifier" do
    [ ["",          [""]],
      ["\xab",      ["ab"]],
      ["\xca\xfe",  ["cafe"]],
    ].should be_computed_by(:unpack, "H*")
  end

  it "adds an empty string for each element requested beyond the end of the String" do
    [ ["",          ["", "", ""]],
      ["\x01",      ["0", "", ""]],
      ["\x01\x80",  ["0", "8", ""]]
    ].should be_computed_by(:unpack, "HHH")
  end

  it "ignores NULL bytes between directives" do
    "\x01\x10".unpack("H\x00H").should == ["0", "1"]
  end

  it "ignores spaces between directives" do
    "\x01\x10".unpack("H H").should == ["0", "1"]
  end
end

describe "String#unpack with format 'h'" do
  it_behaves_like :string_unpack_basic, 'h'
  it_behaves_like :string_unpack_no_platform, 'h'

  it "decodes one nibble from each byte for each format character starting with the least significant bit" do
    [ ["\x8f",     "h",  ["f"]],
      ["\xf8\x0f", "hh", ["8", "f"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes only the number of nibbles in the string when passed a count" do
    "\xac\xef".unpack("h5").should == ["cafe"]
  end

  it "decodes multiple differing nibble counts from a single string" do
    array = "\xaa\x55\xaa\xd4\xc3\x6b\xd7\xaa\xd7".unpack("hh2h3h4h5")
    array.should == ["a", "55", "aa4", "3cb6", "7daa7"]
  end

  it "decodes a directive with a '*' modifier after a directive with a count modifier" do
    "\xba\x55\xaa\xd4\xc3\x6b".unpack("h3h*").should == ["ab5", "aa4d3cb6"]
  end

  it "decodes a directive with a count modifier after a directive with a '*' modifier" do
    "\xba\x55\xaa\xd4\xc3\x6b".unpack("h*h3").should == ["ab55aa4d3cb6", ""]
  end

  it "decodes the number of nibbles specified by the count modifier" do
    [ ["\xab",         "h0", [""]],
      ["\x00",         "h1", ["0"]],
      ["\x01",         "h2", ["10"]],
      ["\x01\x23",     "h3", ["103"]],
      ["\x01\x23",     "h4", ["1032"]],
      ["\x01\x23\x45", "h5", ["10325"]]
    ].should be_computed_by(:unpack)
  end

  it "decodes all the nibbles when passed the '*' modifier" do
    [ ["",          [""]],
      ["\xab",      ["ba"]],
      ["\xac\xef",  ["cafe"]],
    ].should be_computed_by(:unpack, "h*")
  end

  it "adds an empty string for each element requested beyond the end of the String" do
    [ ["",          ["", "", ""]],
      ["\x01",      ["1", "", ""]],
      ["\x01\x80",  ["1", "0", ""]]
    ].should be_computed_by(:unpack, "hhh")
  end

  it "ignores NULL bytes between directives" do
    "\x01\x10".unpack("h\x00h").should == ["1", "0"]
  end

  it "ignores spaces between directives" do
    "\x01\x10".unpack("h h").should == ["1", "0"]
  end
end
