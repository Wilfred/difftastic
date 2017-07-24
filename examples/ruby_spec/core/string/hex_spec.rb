require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

# TODO: Move actual results to String#to_int() and spec in terms of it
describe "String#hex" do
  it "treats leading characters of self as a string of hex digits" do
    "0a".hex.should == 10
    "0o".hex.should == 0
    "0x".hex.should == 0
    "A_BAD_BABE".hex.should == 0xABADBABE
    "0b1010".hex.should == "b1010".hex
    "0d500".hex.should == "d500".hex
    "abcdefG".hex.should == 0xabcdef
  end

  it "does not accept a sequence of underscores as part of a number" do
    "a__b".hex.should == 0xa
    "a____b".hex.should == 0xa
    "a___f".hex.should == 0xa
  end

  it "takes an optional sign" do
    "-1234".hex.should == -4660
    "+1234".hex.should == 4660
  end

  it "takes an optional 0x" do
    "0x0a".hex.should == 10
    "0a".hex.should == 10
  end

  it "requires that the sign is in front of the 0x if present" do
    "-0x1".hex.should == -1
    "0x-1".hex.should == 0
  end

  it "returns 0 on error" do
    "".hex.should == 0
    "+-5".hex.should == 0
    "wombat".hex.should == 0
    "0x0x42".hex.should == 0
  end

  it "returns 0 if sequence begins with underscore" do
    "_a".hex.should == 0
    "___b".hex.should == 0
    "___0xc".hex.should == 0
  end
end
