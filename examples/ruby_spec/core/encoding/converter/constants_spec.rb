require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter::INVALID_MASK" do
    it "exists" do
      Encoding::Converter.should have_constant(:INVALID_MASK)
    end

    it "has a Fixnum value" do
      Encoding::Converter::INVALID_MASK.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::INVALID_REPLACE" do
    it "exists" do
      Encoding::Converter.should have_constant(:INVALID_REPLACE)
    end

    it "has a Fixnum value" do
      Encoding::Converter::INVALID_REPLACE.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::UNDEF_MASK" do
    it "exists" do
      Encoding::Converter.should have_constant(:UNDEF_MASK)
    end

    it "has a Fixnum value" do
      Encoding::Converter::UNDEF_MASK.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::UNDEF_REPLACE" do
    it "exists" do
      Encoding::Converter.should have_constant(:UNDEF_REPLACE)
    end

    it "has a Fixnum value" do
      Encoding::Converter::UNDEF_REPLACE.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::UNDEF_HEX_CHARREF" do
    it "exists" do
      Encoding::Converter.should have_constant(:UNDEF_HEX_CHARREF)
    end

    it "has a Fixnum value" do
      Encoding::Converter::UNDEF_HEX_CHARREF.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::PARTIAL_INPUT" do
    it "exists" do
      Encoding::Converter.should have_constant(:PARTIAL_INPUT)
    end

    it "has a Fixnum value" do
      Encoding::Converter::PARTIAL_INPUT.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::AFTER_OUTPUT" do
    it "exists" do
      Encoding::Converter.should have_constant(:AFTER_OUTPUT)
    end

    it "has a Fixnum value" do
      Encoding::Converter::AFTER_OUTPUT.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::UNIVERSAL_NEWLINE_DECORATOR" do
    it "exists" do
      Encoding::Converter.should have_constant(:UNIVERSAL_NEWLINE_DECORATOR)
    end

    it "has a Fixnum value" do
      Encoding::Converter::UNIVERSAL_NEWLINE_DECORATOR.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::CRLF_NEWLINE_DECORATOR" do
    it "exists" do
      Encoding::Converter.should have_constant(:CRLF_NEWLINE_DECORATOR)
    end

    it "has a Fixnum value" do
      Encoding::Converter::CRLF_NEWLINE_DECORATOR.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::CR_NEWLINE_DECORATOR" do
    it "exists" do
      Encoding::Converter.should have_constant(:CR_NEWLINE_DECORATOR)
    end

    it "has a Fixnum value" do
      Encoding::Converter::CR_NEWLINE_DECORATOR.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::XML_TEXT_DECORATOR" do
    it "exists" do
      Encoding::Converter.should have_constant(:XML_TEXT_DECORATOR)
    end

    it "has a Fixnum value" do
      Encoding::Converter::XML_TEXT_DECORATOR.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::XML_ATTR_CONTENT_DECORATOR" do
    it "exists" do
      Encoding::Converter.should have_constant(:XML_ATTR_CONTENT_DECORATOR)
    end

    it "has a Fixnum value" do
      Encoding::Converter::XML_ATTR_CONTENT_DECORATOR.should be_an_instance_of(Fixnum)
    end
  end

  describe "Encoding::Converter::XML_ATTR_QUOTE_DECORATOR" do
    it "exists" do
      Encoding::Converter.should have_constant(:XML_ATTR_QUOTE_DECORATOR)
    end

    it "has a Fixnum value" do
      Encoding::Converter::XML_ATTR_QUOTE_DECORATOR.should be_an_instance_of(Fixnum)
    end
  end
end
