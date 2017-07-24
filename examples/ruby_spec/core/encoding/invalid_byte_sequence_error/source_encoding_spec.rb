require File.expand_path('../../fixtures/classes', __FILE__)

with_feature :encoding do
  describe "Encoding::InvalidByteSequenceError#source_encoding" do
    before :each do
      @exception, = EncodingSpecs::InvalidByteSequenceError.exception
      @exception2, = EncodingSpecs::InvalidByteSequenceErrorIndirect.exception
    end

    it "returns an Encoding object" do
      @exception.source_encoding.should be_an_instance_of(Encoding)
      @exception2.source_encoding.should be_an_instance_of(Encoding)
    end

    it "is equal to the source encoding of the object that raised it" do
      @exception.source_encoding.should == Encoding::UTF_8
    end

    # The source encoding specified in the Encoding::Converter constructor may
    # differ from the source encoding returned here. What seems to happen is
    # that when transcoding along a path with multiple pairs of encodings, the
    # last one encountered when the error occurred is returned. So in this
    # case, the conversion path is EUC-JP -> UTF-8 -> ISO-8859-1. The
    # conversions failed with the first pair of encodings (i.e. transcoding
    # from EUC-JP to UTF-8, so UTF-8 is regarded as the source encoding; if
    # the error had occurred when converting from UTF-8 to ISO-8859-1, UTF-8
    # would have been the source encoding.

    # FIXME: Derive example where the failure occurs at the UTF-8 ->
    # ISO-8859-1 case so as to better illustrate the issue
    it "is equal to the source encoding at the stage of the conversion path where the error occured" do
      @exception2.source_encoding.should == Encoding::EUC_JP
    end
  end
end
