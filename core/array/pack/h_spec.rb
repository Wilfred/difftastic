# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/encodings', __FILE__)

describe "Array#pack with format 'H'" do
  it_behaves_like :array_pack_basic, 'H'
  it_behaves_like :array_pack_basic_non_float, 'H'
  it_behaves_like :array_pack_arguments, 'H'
  it_behaves_like :array_pack_hex, 'H'

  it "calls #to_str to convert an Object to a String" do
    obj = mock("pack H string")
    obj.should_receive(:to_str).and_return("a")
    [obj].pack("H").should == "\xa0"
  end

  it "encodes the first character as the most significant nibble when passed no count modifier" do
    ["ab"].pack("H").should == "\xa0"
  end

  it "implicitly has count equal to the string length when passed the '*' modifier" do
    ["deadbeef"].pack("H*").should == "\xde\xad\xbe\xef"
  end

  it "encodes count nibbles when passed a count modifier exceeding the string length" do
    ["ab"].pack('H8').should == "\xab\x00\x00\x00"
  end

  it "encodes the first character as the most significant nibble of a hex value" do
    [ [["0"], "\x00"],
      [["1"], "\x10"],
      [["2"], "\x20"],
      [["3"], "\x30"],
      [["4"], "\x40"],
      [["5"], "\x50"],
      [["6"], "\x60"],
      [["7"], "\x70"],
      [["8"], "\x80"],
      [["9"], "\x90"],
      [["a"], "\xa0"],
      [["b"], "\xb0"],
      [["c"], "\xc0"],
      [["d"], "\xd0"],
      [["e"], "\xe0"],
      [["f"], "\xf0"],
      [["A"], "\xa0"],
      [["B"], "\xb0"],
      [["C"], "\xc0"],
      [["D"], "\xd0"],
      [["E"], "\xe0"],
      [["F"], "\xf0"]
    ].should be_computed_by(:pack, "H")
  end

  it "encodes the second character as the least significant nibble of a hex value" do
    [ [["00"], "\x00"],
      [["01"], "\x01"],
      [["02"], "\x02"],
      [["03"], "\x03"],
      [["04"], "\x04"],
      [["05"], "\x05"],
      [["06"], "\x06"],
      [["07"], "\x07"],
      [["08"], "\x08"],
      [["09"], "\x09"],
      [["0a"], "\x0a"],
      [["0b"], "\x0b"],
      [["0c"], "\x0c"],
      [["0d"], "\x0d"],
      [["0e"], "\x0e"],
      [["0f"], "\x0f"],
      [["0A"], "\x0a"],
      [["0B"], "\x0b"],
      [["0C"], "\x0c"],
      [["0D"], "\x0d"],
      [["0E"], "\x0e"],
      [["0F"], "\x0f"]
    ].should be_computed_by(:pack, "H2")
  end

  it "encodes the least significant nibble of a non alphanumeric character as the most significant nibble of the hex value" do
    [ [["^"], "\xe0"],
      [["*"], "\xa0"],
      [["#"], "\x30"],
      [["["], "\xb0"],
      [["]"], "\xd0"],
      [["@"], "\x00"],
      [["!"], "\x10"],
      [["H"], "\x10"],
      [["O"], "\x80"],
      [["T"], "\xd0"],
      [["Z"], "\x30"],
    ].should be_computed_by(:pack, "H")
  end

  it "returns an ASCII-8BIT string" do
    ["41"].pack("H").encoding.should == Encoding::ASCII_8BIT
  end
end

describe "Array#pack with format 'h'" do
  it_behaves_like :array_pack_basic, 'h'
  it_behaves_like :array_pack_basic_non_float, 'h'
  it_behaves_like :array_pack_arguments, 'h'
  it_behaves_like :array_pack_hex, 'h'

  it "calls #to_str to convert an Object to a String" do
    obj = mock("pack H string")
    obj.should_receive(:to_str).and_return("a")
    [obj].pack("h").should == "\x0a"
  end

  it "encodes the first character as the least significant nibble when passed no count modifier" do
    ["ab"].pack("h").should == "\x0a"
  end

  it "implicitly has count equal to the string length when passed the '*' modifier" do
    ["deadbeef"].pack("h*").should == "\xed\xda\xeb\xfe"
  end

  it "encodes count nibbles when passed a count modifier exceeding the string length" do
    ["ab"].pack('h8').should == "\xba\x00\x00\x00"
  end

  it "encodes the first character as the least significant nibble of a hex value" do
    [ [["0"], "\x00"],
      [["1"], "\x01"],
      [["2"], "\x02"],
      [["3"], "\x03"],
      [["4"], "\x04"],
      [["5"], "\x05"],
      [["6"], "\x06"],
      [["7"], "\x07"],
      [["8"], "\x08"],
      [["9"], "\x09"],
      [["a"], "\x0a"],
      [["b"], "\x0b"],
      [["c"], "\x0c"],
      [["d"], "\x0d"],
      [["e"], "\x0e"],
      [["f"], "\x0f"],
      [["A"], "\x0a"],
      [["B"], "\x0b"],
      [["C"], "\x0c"],
      [["D"], "\x0d"],
      [["E"], "\x0e"],
      [["F"], "\x0f"]
    ].should be_computed_by(:pack, "h")
  end

  it "encodes the second character as the most significant nibble of a hex value" do
    [ [["00"], "\x00"],
      [["01"], "\x10"],
      [["02"], "\x20"],
      [["03"], "\x30"],
      [["04"], "\x40"],
      [["05"], "\x50"],
      [["06"], "\x60"],
      [["07"], "\x70"],
      [["08"], "\x80"],
      [["09"], "\x90"],
      [["0a"], "\xa0"],
      [["0b"], "\xb0"],
      [["0c"], "\xc0"],
      [["0d"], "\xd0"],
      [["0e"], "\xe0"],
      [["0f"], "\xf0"],
      [["0A"], "\xa0"],
      [["0B"], "\xb0"],
      [["0C"], "\xc0"],
      [["0D"], "\xd0"],
      [["0E"], "\xe0"],
      [["0F"], "\xf0"]
    ].should be_computed_by(:pack, "h2")
  end

  it "encodes the least significant nibble of a non alphanumeric character as the least significant nibble of the hex value" do
    [ [["^"], "\x0e"],
      [["*"], "\x0a"],
      [["#"], "\x03"],
      [["["], "\x0b"],
      [["]"], "\x0d"],
      [["@"], "\x00"],
      [["!"], "\x01"],
      [["H"], "\x01"],
      [["O"], "\x08"],
      [["T"], "\x0d"],
      [["Z"], "\x03"],
    ].should be_computed_by(:pack, "h")
  end

  it "returns an ASCII-8BIT string" do
    ["41"].pack("h").encoding.should == Encoding::ASCII_8BIT
  end
end
