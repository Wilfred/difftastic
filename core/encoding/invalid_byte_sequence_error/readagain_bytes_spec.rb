# -*- encoding: binary -*-
require File.expand_path('../../fixtures/classes', __FILE__)

with_feature :encoding do
  describe "Encoding::InvalidByteSequenceError#readagain_bytes" do
    before :each do
      @exception, @errinfo = EncodingSpecs::InvalidByteSequenceError.exception
      @exception2, @errinfo2 = EncodingSpecs::InvalidByteSequenceErrorIndirect.exception
    end

    it "returns a String" do
      @exception.readagain_bytes.should be_an_instance_of(String)
      @exception2.readagain_bytes.should be_an_instance_of(String)
    end

    it "returns the bytes to be read again" do
      @exception.readagain_bytes.size.should == 1
      @exception.readagain_bytes.should == "a".force_encoding('binary')
      @exception.readagain_bytes.should == @errinfo[-1]

      @exception2.readagain_bytes.size.should == 1
      @exception2.readagain_bytes.should == "\xFF".force_encoding('binary')
      @exception2.readagain_bytes.should == @errinfo2[-1]
    end

    it "uses ASCII-8BIT as the encoding" do
      @exception.readagain_bytes.encoding.should == Encoding::ASCII_8BIT

      @exception2.readagain_bytes.encoding.should == Encoding::ASCII_8BIT
    end
  end
end
