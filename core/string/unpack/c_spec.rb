# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe :string_unpack_8bit, shared: true do
  it "decodes one byte for a single format character" do
    "abc".unpack(unpack_format()).should == [97]
  end

  it "decodes two bytes for two format characters" do
    "abc".unpack(unpack_format(nil, 2)).should == [97, 98]
  end

  it "decodes the number of bytes requested by the count modifier" do
    "abc".unpack(unpack_format(2)).should == [97, 98]
  end

  it "decodes the remaining bytes when passed the '*' modifier" do
    "abc".unpack(unpack_format('*')).should == [97, 98, 99]
  end

  it "decodes the remaining bytes when passed the '*' modifer after another directive" do
    "abc".unpack(unpack_format()+unpack_format('*')).should == [97, 98, 99]
  end

  it "decodes zero bytes when no bytes remain and the '*' modifier is passed" do
    "abc".unpack(unpack_format('*', 2)).should == [97, 98, 99]
  end

  it "adds nil for each element requested beyond the end of the String" do
    [ ["",   [nil, nil, nil]],
      ["a",  [97, nil, nil]],
      ["ab", [97, 98, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end

  it "ignores NULL bytes between directives" do
    "abc".unpack(unpack_format("\000", 2)).should == [97, 98]
  end

  it "ignores spaces between directives" do
    "abc".unpack(unpack_format(' ', 2)).should == [97, 98]
  end
end

describe "String#unpack with format 'C'" do
  it_behaves_like :string_unpack_basic, 'C'
  it_behaves_like :string_unpack_8bit, 'C'

  it "decodes a byte with most significant bit set as a positive number" do
    "\xff\x80\x82".unpack('C*').should == [255, 128, 130]
  end
end

describe "String#unpack with format 'c'" do
  it_behaves_like :string_unpack_basic, 'c'
  it_behaves_like :string_unpack_8bit, 'c'

  it "decodes a byte with most significant bit set as a negative number" do
    "\xff\x80\x82".unpack('c*').should == [-1, -128, -126]
  end
end
