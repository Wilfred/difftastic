require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#destination_encoding" do
    it "returns the destination encoding as an Encoding object" do
      ec = Encoding::Converter.new('ASCII','Big5')
      ec.destination_encoding.should == Encoding::BIG5

      ec = Encoding::Converter.new('SJIS','EUC-JP')
      ec.destination_encoding.should == Encoding::EUC_JP
    end
  end
end
