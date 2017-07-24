require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding.aliases" do
    it "returns a Hash" do
      Encoding.aliases.should be_an_instance_of(Hash)
    end

    it "has Strings as keys" do
      Encoding.aliases.keys.each do |key|
        key.should be_an_instance_of(String)
      end
    end

    it "has Strings as values" do
      Encoding.aliases.values.each do |value|
        value.should be_an_instance_of(String)
      end
    end

    it "has alias names as its keys" do
      Encoding.aliases.key?('BINARY').should be_true
      Encoding.aliases.key?('ASCII').should be_true
    end

    it "has the names of the aliased encoding as its values" do
      Encoding.aliases['BINARY'].should == 'ASCII-8BIT'
      Encoding.aliases['ASCII'].should == 'US-ASCII'
    end

    it "has an 'external' key with the external default encoding as its value" do
      Encoding.aliases['external'].should == Encoding.default_external.name
    end

    it "has a 'locale' key and its value equals to the name of the encoding finded by the locale charmap" do
      Encoding.aliases['locale'].should == Encoding.find(Encoding.locale_charmap).name
    end

    it "only contains valid aliased encodings" do
      Encoding.aliases.each do |aliased, original|
        Encoding.find(aliased).should == Encoding.find(original)
      end
    end
  end
end
