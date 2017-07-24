require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#finish" do
    before :each do
      @ec = Encoding::Converter.new("utf-8", "iso-2022-jp")
    end

    it "returns a String" do
      @ec.convert('foo')
      @ec.finish.should be_an_instance_of(String)
    end

    it "returns an empty String if there is nothing more to convert" do
      @ec.convert("glark")
      @ec.finish.should == ""
    end

    it "returns the last part of the converted String if it hasn't already" do
       @ec.convert("\u{9999}").should == "\e$B9a".force_encoding('iso-2022-jp')
       @ec.finish.should == "\e(B".force_encoding('iso-2022-jp')
    end

    it "returns a String in the destination encoding" do
      @ec.convert("glark")
      @ec.finish.encoding.should == Encoding::ISO2022_JP
    end

    it "returns an empty String if self was not given anything to convert" do
      @ec.finish.should == ""
    end

    it "returns an empty String on subsequent invocations" do
      @ec.finish.should == ""
      @ec.finish.should == ""
    end
  end
end
