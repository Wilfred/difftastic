# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "String#unpack with format 'X'" do
  it_behaves_like :string_unpack_basic, 'X'
  it_behaves_like :string_unpack_no_platform, 'X'

  it "moves the read index back by the number of bytes specified by count" do
    "\x01\x02\x03\x04".unpack("C3X2C").should == [1, 2, 3, 2]
  end

  it "does not change the read index when passed a count of zero" do
    "\x01\x02\x03\x04".unpack("C3X0C").should == [1, 2, 3, 4]
  end

  it "implicitly has a count of one when count is not specified" do
    "\x01\x02\x03\x04".unpack("C3XC").should == [1, 2, 3, 3]
  end

  it "moves the read index back by the remaining bytes when passed the '*' modifier" do
    "abcd".unpack("C3X*C").should == [97, 98, 99, 99]
  end

  it "raises an ArgumentError when passed the '*' modifier if the remaining bytes exceed the bytes from the index to the start of the String" do
    lambda { "abcd".unpack("CX*C") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the count exceeds the bytes from current index to the start of the String" do
    lambda { "\x01\x02\x03\x04".unpack("C3X4C") }.should raise_error(ArgumentError)
  end
end

describe "String#unpack with format 'x'" do
  it_behaves_like :string_unpack_basic, 'x'
  it_behaves_like :string_unpack_no_platform, 'x'

  it "moves the read index forward by the number of bytes specified by count" do
    "\x01\x02\x03\x04".unpack("Cx2C").should == [1, 4]
  end

  it "implicitly has a count of one when count is not specified" do
    "\x01\x02\x03\x04".unpack("CxC").should == [1, 3]
  end

  it "does not change the read index when passed a count of zero" do
    "\x01\x02\x03\x04".unpack("Cx0C").should == [1, 2]
  end

  it "moves the read index to the end of the string when passed the '*' modifier" do
    "\x01\x02\x03\x04".unpack("Cx*C").should == [1, nil]
  end

  it "positions the read index one beyond the last readable byte in the String" do
    "\x01\x02\x03\x04".unpack("C2x2C").should == [1, 2, nil]
  end

  it "raises an ArgumentError if the count exceeds the size of the String" do
    lambda { "\x01\x02\x03\x04".unpack("C2x3C") }.should raise_error(ArgumentError)
  end
end
