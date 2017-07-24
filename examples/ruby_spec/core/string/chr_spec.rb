require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "String#chr" do
    it "returns a copy of self" do
      s = 'e'
      s.object_id.should_not == s.chr.object_id
    end

    it "returns a String" do
      'glark'.chr.should be_an_instance_of(String)
    end

    it "returns an empty String if self is an empty String" do
      "".chr.should == ""
    end

    it "returns a 1-character String" do
      "glark".chr.size.should == 1
    end

    it "returns the character at the start of the String" do
      "Goodbye, world".chr.should == "G"
    end

    it "returns a String in the same encoding as self" do
      "\x24".encode(Encoding::US_ASCII).chr.encoding.should == Encoding::US_ASCII
    end

    it "understands multi-byte characters" do
      s = "\u{9879}"
      s.bytesize.should == 3
      s.chr.should == s
    end

    it "understands Strings that contain a mixture of character widths" do
      three = "\u{8082}"
      three.bytesize.should == 3
      four = "\u{77082}"
      four.bytesize.should == 4
      "#{three}#{four}".chr.should == three
    end
  end
end
