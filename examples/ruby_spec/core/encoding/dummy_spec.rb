require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding#dummy?" do
    it "returns false for proper encodings" do
      Encoding::UTF_8.dummy?.should be_false
      Encoding::ASCII.dummy?.should be_false
    end

    it "returns true for dummy encodings" do
      Encoding::ISO_2022_JP.dummy?.should be_true
      Encoding::CP50221.dummy?.should be_true
      Encoding::UTF_7.dummy?.should be_true
    end
  end
end
