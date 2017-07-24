require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding.default_external" do
    before :each do
      @original_encoding = Encoding.default_external
    end

    after :each do
      Encoding.default_external = @original_encoding
    end

    it "returns an Encoding object" do
      Encoding.default_external.should be_an_instance_of(Encoding)
    end

    it "returns the default external encoding" do
      Encoding.default_external = Encoding::UTF_8
      Encoding.default_external.should == Encoding::UTF_8
    end

    describe "with command line options" do
      it "is not changed by the -U option" do
        result = ruby_exe("print Encoding.default_external", options: '-U')
        result.should == Encoding.default_external.name
      end

      it "returns the encoding specified by '-E external'" do
        result = ruby_exe("print Encoding.default_external", options: '-E euc-jp')
        result.should == "EUC-JP"
      end

      it "returns the encoding specified by '-E external:'" do
        result = ruby_exe("print Encoding.default_external", options: '-E Shift_JIS:')
        result.should == "Shift_JIS"
      end
    end
  end

  describe "Encoding.default_external=" do
    before :each do
      @original_encoding = Encoding.default_external
    end

    after :each do
      Encoding.default_external = @original_encoding
    end

    it "sets the default external encoding" do
      Encoding.default_external = Encoding::UTF_8
      Encoding.default_external.should == Encoding::UTF_8
    end

    it "can accept a name of an encoding as a String" do
      Encoding.default_external = 'Shift_JIS'
      Encoding.default_external.should == Encoding::SHIFT_JIS
    end

    it "calls #to_s on arguments that are neither Strings nor Encodings" do
      string = mock('string')
      string.should_receive(:to_str).at_least(1).and_return('US-ASCII')
      Encoding.default_external = string
      Encoding.default_external.should == Encoding::ASCII
    end

    it "raises a TypeError unless the argument is an Encoding or convertible to a String" do
      lambda { Encoding.default_external = [] }.should raise_error(TypeError)
    end

    it "raises an ArgumentError if the argument is nil" do
      lambda { Encoding.default_external = nil }.should raise_error(ArgumentError)
    end
  end
end
