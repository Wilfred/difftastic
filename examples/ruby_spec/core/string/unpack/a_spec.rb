# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../shared/basic', __FILE__)
require File.expand_path('../shared/string', __FILE__)

describe "String#unpack with format 'A'" do
  it_behaves_like :string_unpack_basic, 'A'
  it_behaves_like :string_unpack_no_platform, 'A'
  it_behaves_like :string_unpack_string, 'A'
  it_behaves_like :string_unpack_Aa, 'A'

  it "removes trailing space and NULL bytes from the decoded string" do
    [ ["a\x00 b \x00",  ["a\x00 b", ""]],
      ["a\x00 b \x00 ", ["a\x00 b", ""]],
      ["a\x00 b\x00 ",  ["a\x00 b", ""]],
      ["a\x00 b\x00",   ["a\x00 b", ""]],
      ["a\x00 b ",      ["a\x00 b", ""]]
    ].should be_computed_by(:unpack, "A*A")
  end

  it "does not remove whitespace other than space" do
    [ ["a\x00 b\x00\f", ["a\x00 b\x00\f"]],
      ["a\x00 b\x00\n", ["a\x00 b\x00\n"]],
      ["a\x00 b\x00\r", ["a\x00 b\x00\r"]],
      ["a\x00 b\x00\t", ["a\x00 b\x00\t"]],
      ["a\x00 b\x00\v", ["a\x00 b\x00\v"]],
    ].should be_computed_by(:unpack, "A*")
  end

  it "decodes into raw (ascii) string values" do
    str = "str".force_encoding('UTF-8').unpack("A*")[0]
    str.encoding.name.should == 'ASCII-8BIT'
  end

end

describe "String#unpack with format 'a'" do
  it_behaves_like :string_unpack_basic, 'a'
  it_behaves_like :string_unpack_no_platform, 'a'
  it_behaves_like :string_unpack_string, 'a'
  it_behaves_like :string_unpack_Aa, 'a'

  it "does not remove trailing whitespace or NULL bytes from the decoded string" do
    [ ["a\x00 b \x00",  ["a\x00 b \x00"]],
      ["a\x00 b \x00 ", ["a\x00 b \x00 "]],
      ["a\x00 b\x00 ",  ["a\x00 b\x00 "]],
      ["a\x00 b\x00",   ["a\x00 b\x00"]],
      ["a\x00 b ",      ["a\x00 b "]],
      ["a\x00 b\f",     ["a\x00 b\f"]],
      ["a\x00 b\n",     ["a\x00 b\n"]],
      ["a\x00 b\r",     ["a\x00 b\r"]],
      ["a\x00 b\t",     ["a\x00 b\t"]],
      ["a\x00 b\v",     ["a\x00 b\v"]]
    ].should be_computed_by(:unpack, "a*")
  end

  it "decodes into raw (ascii) string values" do
    str = "".unpack("a*")[0]
    str.encoding.name.should == 'ASCII-8BIT'
  end

end
