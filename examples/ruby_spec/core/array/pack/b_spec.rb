# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/encodings', __FILE__)

describe "Array#pack with format 'B'" do
  it_behaves_like :array_pack_basic, 'B'
  it_behaves_like :array_pack_basic_non_float, 'B'
  it_behaves_like :array_pack_arguments, 'B'
  it_behaves_like :array_pack_hex, 'B'

  it "calls #to_str to convert an Object to a String" do
    obj = mock("pack H string")
    obj.should_receive(:to_str).and_return("``abcdef")
    [obj].pack("B*").should == "\x2a"
  end

  it "encodes one bit for each character starting with the most significant bit" do
    [ [["0"], "\x00"],
      [["1"], "\x80"]
    ].should be_computed_by(:pack, "B")
  end

  it "implicitly has a count of one when not passed a count modifier" do
    ["1"].pack("B").should == "\x80"
  end

  it "implicitly has count equal to the string length when passed the '*' modifier" do
    [ [["00101010"], "\x2a"],
      [["00000000"], "\x00"],
      [["11111111"], "\xff"],
      [["10000000"], "\x80"],
      [["00000001"], "\x01"]
    ].should be_computed_by(:pack, "B*")
  end

  it "encodes the least significant bit of a character other than 0 or 1" do
    [ [["bbababab"], "\x2a"],
      [["^&#&#^#^"], "\x2a"],
      [["(()()()("], "\x2a"],
      [["@@%@%@%@"], "\x2a"],
      [["ppqrstuv"], "\x2a"],
      [["rqtvtrqp"], "\x42"]
    ].should be_computed_by(:pack, "B*")
  end

  it "returns an ASCII-8BIT string" do
    ["1"].pack("B").encoding.should == Encoding::ASCII_8BIT
  end

  it "encodes the string as a sequence of bytes" do
    ["ああああああああ"].pack("B*").should == "\xdbm\xb6"
  end
end

describe "Array#pack with format 'b'" do
  it_behaves_like :array_pack_basic, 'b'
  it_behaves_like :array_pack_basic_non_float, 'b'
  it_behaves_like :array_pack_arguments, 'b'
  it_behaves_like :array_pack_hex, 'b'

  it "calls #to_str to convert an Object to a String" do
    obj = mock("pack H string")
    obj.should_receive(:to_str).and_return("`abcdef`")
    [obj].pack("b*").should == "\x2a"
  end

  it "encodes one bit for each character starting with the least significant bit" do
    [ [["0"], "\x00"],
      [["1"], "\x01"]
    ].should be_computed_by(:pack, "b")
  end

  it "implicitly has a count of one when not passed a count modifier" do
    ["1"].pack("b").should == "\x01"
  end

  it "implicitly has count equal to the string length when passed the '*' modifier" do
    [ [["0101010"],  "\x2a"],
      [["00000000"], "\x00"],
      [["11111111"], "\xff"],
      [["10000000"], "\x01"],
      [["00000001"], "\x80"]
    ].should be_computed_by(:pack, "b*")
  end

  it "encodes the least significant bit of a character other than 0 or 1" do
    [ [["bababab"], "\x2a"],
      [["&#&#^#^"], "\x2a"],
      [["()()()("], "\x2a"],
      [["@%@%@%@"], "\x2a"],
      [["pqrstuv"], "\x2a"],
      [["qrtrtvs"], "\x41"]
    ].should be_computed_by(:pack, "b*")
  end

  it "returns an ASCII-8BIT string" do
    ["1"].pack("b").encoding.should == Encoding::ASCII_8BIT
  end

  it "encodes the string as a sequence of bytes" do
    ["ああああああああ"].pack("b*").should == "\xdb\xb6m"
  end
end
