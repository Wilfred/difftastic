# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)

describe "String#unpack with directive 'w'" do
  it_behaves_like :string_unpack_basic, 'w'
  it_behaves_like :string_unpack_no_platform, 'w'

  it "decodes a BER-compressed integer" do
    [ ["\x00", [0]],
      ["\x01", [1]],
      ["\xce\x0f", [9999]],
      ["\x84\x80\x80\x80\x80\x80\x80\x80\x80\x00", [2**65]]
    ].should be_computed_by(:unpack, "w")
  end

  it "ignores NULL bytes between directives" do
    "\x01\x02\x03".unpack("w\x00w").should == [1, 2]
  end

  it "ignores spaces between directives" do
    "\x01\x02\x03".unpack("w w").should == [1, 2]
  end
end
