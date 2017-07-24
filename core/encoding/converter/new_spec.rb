# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter.new" do
    it "accepts a String for the source encoding" do
      conv = Encoding::Converter.new("us-ascii", "utf-8")
      conv.source_encoding.should == Encoding::US_ASCII
    end

    it "accepts a String for the destination encoding" do
      conv = Encoding::Converter.new("us-ascii", "utf-8")
      conv.destination_encoding.should == Encoding::UTF_8
    end

    it "accepts an Encoding object for the source encoding" do
      conv = Encoding::Converter.new(Encoding::US_ASCII, "utf-8")
      conv.source_encoding.should == Encoding::US_ASCII
    end

    it "accepts an Encoding object for the destination encoding" do
      conv = Encoding::Converter.new("us-ascii", Encoding::UTF_8)
      conv.destination_encoding.should == Encoding::UTF_8
    end

    it "raises an Encoding::ConverterNotFoundError if both encodings are the same" do
      lambda do
        Encoding::Converter.new "utf-8", "utf-8"
      end.should raise_error(Encoding::ConverterNotFoundError)
    end

    it "calls #to_str to convert the source encoding argument to an encoding name" do
      enc = mock("us-ascii")
      enc.should_receive(:to_str).and_return("us-ascii")
      conv = Encoding::Converter.new(enc, "utf-8")
      conv.source_encoding.should == Encoding::US_ASCII
    end

    it "calls #to_str to convert the destination encoding argument to an encoding name" do
      enc = mock("utf-8")
      enc.should_receive(:to_str).and_return("utf-8")
      conv = Encoding::Converter.new("us-ascii", enc)
      conv.destination_encoding.should == Encoding::UTF_8
    end

    it "sets replacement from the options Hash" do
      conv = Encoding::Converter.new("us-ascii", "utf-8", replace: "fubar")
      conv.replacement.should == "fubar"
    end

    it "calls #to_hash to convert the options argument to a Hash if not a Fixnum" do
      opts = mock("encoding converter options")
      opts.should_receive(:to_hash).and_return({ replace: "fubar" })
      conv = Encoding::Converter.new("us-ascii", "utf-8", opts)
      conv.replacement.should == "fubar"
    end

    it "calls #to_str to convert the replacement object to a String" do
      obj = mock("encoding converter replacement")
      obj.should_receive(:to_str).and_return("fubar")
      conv = Encoding::Converter.new("us-ascii", "utf-8", replace: obj)
      conv.replacement.should == "fubar"
    end

    it "raises a TypeError if #to_str does not return a String" do
      obj = mock("encoding converter replacement")
      obj.should_receive(:to_str).and_return(1)

      lambda do
        Encoding::Converter.new("us-ascii", "utf-8", replace: obj)
      end.should raise_error(TypeError)
    end

    it "raises a TypeError if passed true for the replacement object" do
      lambda do
        Encoding::Converter.new("us-ascii", "utf-8", replace: true)
      end.should raise_error(TypeError)
    end

    it "raises a TypeError if passed false for the replacement object" do
      lambda do
        Encoding::Converter.new("us-ascii", "utf-8", replace: false)
      end.should raise_error(TypeError)
    end

    it "raises a TypeError if passed a Fixnum for the replacement object" do
      lambda do
        Encoding::Converter.new("us-ascii", "utf-8", replace: 1)
      end.should raise_error(TypeError)
    end

    it "accepts an empty String for the replacement object" do
      conv = Encoding::Converter.new("us-ascii", "utf-8", replace: "")
      conv.replacement.should == ""
    end

    describe "when passed nil for the replacement object" do
      describe "when the destination encoding is not UTF-8" do
        it "sets the replacement String to '?'" do
          conv = Encoding::Converter.new("us-ascii", "ascii-8bit", replace: nil)
          conv.replacement.should == "?"
        end

        it "sets the replacement String encoding to US-ASCII" do
          conv = Encoding::Converter.new("us-ascii", "ascii-8bit", replace: nil)
          conv.replacement.encoding.should == Encoding::US_ASCII
        end

        it "sets the replacement String to '\\uFFFD'" do
          conv = Encoding::Converter.new("us-ascii", "utf-8", replace: nil)
          conv.replacement.should == "\u{fffd}".force_encoding("utf-8")
        end

        it "sets the replacement String encoding to UTF-8" do
          conv = Encoding::Converter.new("us-ascii", "utf-8", replace: nil)
          conv.replacement.encoding.should == Encoding::UTF_8
        end
      end
    end
  end
end
