# -*- encoding: binary -*-
require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::InvalidByteSequenceError#incomplete_input?" do

    it "returns nil by default" do
      Encoding::InvalidByteSequenceError.new.incomplete_input?.should be_nil
    end

    it "returns true if #primitive_convert returned :incomplete_input for the same data" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      ec.primitive_convert("\xA1",'').should == :incomplete_input
      begin
        ec.convert("\xA1")
      rescue Encoding::InvalidByteSequenceError => e
        e.incomplete_input?.should be_true
      end
    end

    it "returns false if #primitive_convert returned :invalid_byte_sequence for the same data" do
      ec = Encoding::Converter.new("ascii", "utf-8")
      ec.primitive_convert("\xfffffffff",'').should == :invalid_byte_sequence
      begin
        ec.convert("\xfffffffff")
      rescue Encoding::InvalidByteSequenceError => e
        e.incomplete_input?.should be_false
      end
    end
  end
end
