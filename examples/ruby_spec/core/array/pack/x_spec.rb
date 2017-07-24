# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "Array#pack with format 'x'" do
  it_behaves_like :array_pack_basic, 'x'
  it_behaves_like :array_pack_basic_non_float, 'x'
  it_behaves_like :array_pack_no_platform, 'x'

  it "adds a NULL byte with an empty array" do
    [].pack("x").should == "\x00"
  end

  it "adds a NULL byte without consuming an element" do
    [1, 2].pack("CxC").should == "\x01\x00\x02"
  end

  it "is not affected by a previous count modifier" do
    [].pack("x3x").should == "\x00\x00\x00\x00"
  end

  it "adds multiple NULL bytes when passed a count modifier" do
    [].pack("x3").should == "\x00\x00\x00"
  end

  it "does not add a NULL byte if the count modifier is zero" do
    [].pack("x0").should == ""
  end

  it "does not add a NULL byte when passed the '*' modifier" do
    [].pack("x*").should == ""
  end
end

describe "Array#pack with format 'X'" do
  it_behaves_like :array_pack_basic, 'X'
  it_behaves_like :array_pack_basic_non_float, 'X'
  it_behaves_like :array_pack_no_platform, 'X'

  it "reduces the output string by one byte at the point it is encountered" do
    [1, 2, 3].pack("C2XC").should == "\x01\x03"
  end

  it "does not consume any elements" do
    [1, 2, 3].pack("CXC").should == "\x02"
  end

  it "reduces the output string by multiple bytes when passed a count modifier" do
    [1, 2, 3, 4, 5].pack("C2X2C").should == "\x03"
  end

  it "has no affect when passed the '*' modifier" do
    [1, 2, 3].pack("C2X*C").should == "\x01\x02\x03"
  end

  it "raises an ArgumentError if the output string is empty" do
    lambda { [1, 2, 3].pack("XC") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the count modifier is greater than the bytes in the string" do
    lambda { [1, 2, 3].pack("C2X3") }.should raise_error(ArgumentError)
  end
end
