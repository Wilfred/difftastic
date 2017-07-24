# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "Array#pack with format '@'" do
  it_behaves_like :array_pack_basic, '@'
  it_behaves_like :array_pack_basic_non_float, '@'
  it_behaves_like :array_pack_no_platform, '@'

  it "moves the insertion point to the index specified by the count modifier" do
    [1, 2, 3, 4, 5].pack("C4@2C").should == "\x01\x02\x05"
  end

  it "does not consume any elements" do
    [1, 2, 3].pack("C@3C").should == "\x01\x00\x00\x02"
  end

  it "extends the string with NULL bytes if the string size is less than the count" do
    [1, 2, 3].pack("@3C*").should == "\x00\x00\x00\x01\x02\x03"
  end

  it "truncates the string if the string size is greater than the count" do
    [1, 2, 3].pack("Cx5@2C").should == "\x01\x00\x02"
  end

  it "implicitly has a count of one when no count modifier is passed" do
    [1, 2, 3].pack("C*@").should == "\x01"
  end
end
