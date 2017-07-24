require File.expand_path('../../fixtures/classes', __FILE__)

with_feature :encoding do
  describe "Encoding::UndefinedConversionError#error_char" do
    before :each do
      @exception = EncodingSpecs::UndefinedConversionError.exception
      @exception2 = EncodingSpecs::UndefinedConversionErrorIndirect.exception
    end

    it "returns a String" do
      @exception.error_char.should be_an_instance_of(String)
      @exception2.error_char.should be_an_instance_of(String)
    end

    it "returns the one-character String that caused the exception" do
      @exception.error_char.size.should == 1
      @exception.error_char.should == "\u{8765}"

      @exception2.error_char.size.should == 1
      @exception2.error_char.should == "\u{A0}"
    end

    it "uses the source encoding" do
      @exception.error_char.encoding.should == @exception.source_encoding

      @exception2.error_char.encoding.should == @exception2.source_encoding
    end
  end
end
