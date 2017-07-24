# -*- encoding: binary -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Random#bytes" do
  it "returns a String" do
    Random.new.bytes(1).should be_an_instance_of(String)
  end

  it "returns a String of the length given as argument" do
    Random.new.bytes(15).length.should == 15
  end

  it "returns an ASCII-8BIT String" do
    Random.new.bytes(15).encoding.should == Encoding::ASCII_8BIT
  end

  it "returns the same output for a given seed" do
    Random.new(33).bytes(2).should == Random.new(33).bytes(2)
  end

  # Should double check this is official spec
  it "returns the same numeric output for a given seed accross all implementations and platforms" do
    rnd = Random.new(33)
    rnd.bytes(2).should == "\x14\\"
    rnd.bytes(1000) # skip some
    rnd.bytes(2).should == "\xA1p"
  end

  it "returns the same numeric output for a given huge seed accross all implementations and platforms" do
    rnd = Random.new(bignum_value ** 4)
    rnd.bytes(2).should == "_\x91"
    rnd.bytes(1000) # skip some
    rnd.bytes(2).should == "\x17\x12"
  end

  it "returns a random binary String" do
    Random.new.bytes(12).should_not == Random.new.bytes(12)
  end
end
