# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "String#unpack with format '@'" do
  it_behaves_like :string_unpack_basic, '@'
  it_behaves_like :string_unpack_no_platform, '@'

  it "moves the read index to the byte specified by the count" do
    "\x01\x02\x03\x04".unpack("C3@2C").should == [1, 2, 3, 3]
  end

  it "implicitly has a count of zero when count is not specified" do
    "\x01\x02\x03\x04".unpack("C2@C").should == [1, 2, 1]
  end

  it "has no effect when passed the '*' modifier" do
    "\x01\x02\x03\x04".unpack("C2@*C").should == [1, 2, 3]
  end

  it "positions the read index one beyond the last readable byte in the String" do
    "\x01\x02\x03\x04".unpack("C2@4C").should == [1, 2, nil]
  end

  it "raises an ArgumentError if the count exceeds the size of the String" do
    lambda { "\x01\x02\x03\x04".unpack("C2@5C") }.should raise_error(ArgumentError)
  end
end
