# -*- encoding: binary -*-
require File.expand_path('../../fixtures/classes', __FILE__)

with_feature :encoding do
  describe "Encoding::InvalidByteSequenceError#error_bytes" do
    before :each do
      @exception, @errinfo = EncodingSpecs::InvalidByteSequenceError.exception
      @exception2, @errinfo2 = EncodingSpecs::InvalidByteSequenceErrorIndirect.exception
    end

    it "returns a String" do
      @exception.error_bytes.should be_an_instance_of(String)
      @exception2.error_bytes.should be_an_instance_of(String)
    end

    it "returns the bytes that caused the exception" do
      @exception.error_bytes.size.should == 1
      @exception.error_bytes.should == "\xF1"
      @exception.error_bytes.should == @errinfo[-2]

      @exception2.error_bytes.size.should == 1
      @exception2.error_bytes.should == "\xA1"
      @exception2.error_bytes.should == @errinfo2[-2]
    end

    it "uses ASCII-8BIT as the encoding" do
      @exception.error_bytes.encoding.should == Encoding::ASCII_8BIT

      @exception2.error_bytes.encoding.should == Encoding::ASCII_8BIT
    end
  end
end
