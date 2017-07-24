require File.expand_path('../../fixtures/classes', __FILE__)

with_feature :encoding do
  describe "Encoding::InvalidByteSequenceError#destination_encoding" do
    before :each do
      @exception, = EncodingSpecs::InvalidByteSequenceError.exception
      @exception2, = EncodingSpecs::InvalidByteSequenceErrorIndirect.exception
    end

    it "returns an Encoding object" do
      @exception.destination_encoding.should be_an_instance_of(Encoding)
      @exception2.destination_encoding.should be_an_instance_of(Encoding)
    end

    it "is equal to the destination encoding of the object that raised it" do
      @exception.destination_encoding.should == Encoding::ISO_8859_1
      @exception2.destination_encoding.should == Encoding::UTF_8
    end
  end
end
