require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding#ascii_compatible?" do
    it "returns true if self represents an ASCII-compatible encoding" do
      Encoding::UTF_8.ascii_compatible?.should be_true
    end

    it "returns false if self does not represent an ASCII-compatible encoding" do
      Encoding::UTF_16LE.ascii_compatible?.should be_false
    end
  end
end
