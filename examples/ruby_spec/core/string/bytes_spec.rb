# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "String#bytes" do
  before :each do
    @utf8 = "東京"
    @ascii = 'Tokyo'
    @utf8_ascii = @utf8 + @ascii
  end

  it "returns an Array when no block is given" do
    @utf8.bytes.should be_an_instance_of(Array)
  end

  it "yields each byte to a block if one is given, returning self" do
    bytes = []
    @utf8.bytes {|b| bytes << b}.should == @utf8
    bytes.should == @utf8.bytes.to_a
  end

  it "returns #bytesize bytes" do
    @utf8_ascii.bytes.to_a.size.should == @utf8_ascii.bytesize
  end

  it "returns bytes as Fixnums" do
    @ascii.bytes.to_a.each {|b| b.should be_an_instance_of(Fixnum)}
    @utf8_ascii.bytes { |b| b.should be_an_instance_of(Fixnum) }
  end

  it "agrees with #unpack('C*')" do
    @utf8_ascii.bytes.to_a.should == @utf8_ascii.unpack("C*")
  end

  it "yields/returns no bytes for the empty string" do
    ''.bytes.to_a.should == []
  end
end

with_feature :encoding do
  describe "String#bytes" do
    before :each do
      @utf8 = "東京"
      @ascii = 'Tokyo'
      @utf8_ascii = @utf8 + @ascii
    end

    it "agrees with #getbyte" do
      @utf8_ascii.bytes.to_a.each_with_index do |byte,index|
        byte.should == @utf8_ascii.getbyte(index)
      end
    end

    it "is unaffected by #force_encoding" do
      @utf8.force_encoding('ASCII').bytes.to_a.should == @utf8.bytes.to_a
    end
  end
end
