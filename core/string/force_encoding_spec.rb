require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "String#force_encoding" do
    it "accepts a String as the name of an Encoding" do
      "abc".force_encoding('shift_jis').encoding.should == Encoding::Shift_JIS
    end

    it "accepts an Encoding instance" do
      "abc".force_encoding(Encoding::SHIFT_JIS).encoding.should == Encoding::Shift_JIS
    end

    it "calls #to_str to convert an object to an encoding name" do
      obj = mock("force_encoding")
      obj.should_receive(:to_str).and_return("utf-8")

      "abc".force_encoding(obj).encoding.should == Encoding::UTF_8
    end

    it "raises a TypeError if #to_str does not return a String" do
      obj = mock("force_encoding")
      obj.should_receive(:to_str).and_return(1)

      lambda { "abc".force_encoding(obj) }.should raise_error(TypeError)
    end

    it "raises a TypeError if passed nil" do
      lambda { "abc".force_encoding(nil) }.should raise_error(TypeError)
    end

    it "returns self" do
      str = "abc"
      str.force_encoding('utf-8').should equal(str)
    end

    it "sets the encoding even if the String contents are invalid in that encoding" do
      str = "\u{9765}"
      str.force_encoding('euc-jp')
      str.encoding.should == Encoding::EUC_JP
      str.valid_encoding?.should be_false
    end

    it "does not transcode self" do
      str = "\u{8612}"
      str.dup.force_encoding('utf-16le').should_not == str.encode('utf-16le')
    end

    it "raises a RuntimeError if self is frozen" do
      str = "abcd".freeze
      lambda { str.force_encoding(str.encoding) }.should raise_error(RuntimeError)
    end
  end
end
