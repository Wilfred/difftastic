require File.expand_path('../../fixtures/classes', __FILE__)

with_feature :encoding do
  describe "Encoding::InvalidByteSequenceError#destination_encoding_name" do
    before :each do
      @exception, = EncodingSpecs::InvalidByteSequenceError.exception
      @exception2, = EncodingSpecs::InvalidByteSequenceErrorIndirect.exception
    end

    it "returns a String" do
      @exception.destination_encoding_name.should be_an_instance_of(String)
      @exception2.destination_encoding_name.should be_an_instance_of(String)
    end

    it "is equal to the destination encoding name of the object that raised it" do
      @exception.destination_encoding_name.should == "ISO-8859-1"
      @exception2.destination_encoding_name.should == "UTF-8"
    end
  end
end
