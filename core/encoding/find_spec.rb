require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding.find" do
    before :all do
      @encodings = Encoding.aliases.to_a.flatten.uniq
    end

    it "returns the corresponding Encoding object if given a valid encoding name" do
      @encodings.each do |enc|
        Encoding.find(enc).should be_an_instance_of(Encoding)
      end
    end

    it "returns the corresponding Encoding object if given a valid alias name" do
      Encoding.aliases.keys.each do |enc_alias|
        Encoding.find(enc_alias).should be_an_instance_of(Encoding)
      end
    end

    it "raises a TypeError if passed a Symbol" do
      lambda { Encoding.find(:"utf-8") }.should raise_error(TypeError)
    end

    it "returns the passed Encoding object" do
      Encoding.find(Encoding::UTF_8).should == Encoding::UTF_8
    end

    it "accepts encoding names as Strings" do
      Encoding.list.each do |enc|
        Encoding.find(enc.name).should == enc
      end
    end

    it "accepts any object as encoding name, if it responds to #to_str" do
      obj = Class.new do
        attr_writer :encoding_name
        def to_str; @encoding_name; end
      end.new

      Encoding.list.each do |enc|
        obj.encoding_name = enc.name
        Encoding.find(obj).should == enc
      end
    end

    it "is case insensitive" do
      @encodings.each do |enc|
        Encoding.find(enc.upcase).should == Encoding.find(enc)
      end
    end

    it "raises an ArgumentError if the given encoding does not exist" do
      lambda { Encoding.find('dh2dh278d') }.should raise_error(ArgumentError)
    end

    # Not sure how to do a better test, since locale depends on weird platform-specific stuff
    it "supports the 'locale' encoding alias" do
      enc = Encoding.find('locale')
      enc.should_not == nil
    end

    it "returns default external encoding for the 'external' encoding alias" do
      enc = Encoding.find('external')
      enc.should == Encoding.default_external
    end

    it "returns default internal encoding for the 'internal' encoding alias" do
      enc = Encoding.find('internal')
      enc.should == Encoding.default_internal
    end

    platform_is_not :windows do
      it "uses default external encoding for the 'filesystem' encoding alias" do
        enc = Encoding.find('filesystem')
        enc.should == Encoding.default_external
      end
    end

    platform_is :windows do
      it "needs to be reviewed for spec completeness"
    end
  end
end
