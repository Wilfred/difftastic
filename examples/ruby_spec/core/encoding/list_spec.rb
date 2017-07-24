require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding.list" do
    it "returns an Array" do
      Encoding.list.should be_an_instance_of(Array)
    end

    it "returns an Array of Encoding objects" do
      Encoding.list.each do |enc|
        enc.should be_an_instance_of(Encoding)
      end
    end

    it "returns each encoding only once" do
      orig = Encoding.list.map {|e| e.name}
      orig.should == orig.uniq
    end

    it "includes the default external encoding" do
      Encoding.list.include?(Encoding.default_external).should be_true
    end

    it "does not include any alias names" do
      Encoding.aliases.keys.each do |enc_alias|
        Encoding.list.include?(enc_alias).should be_false
      end
    end

    it "includes all aliased encodings" do
      Encoding.aliases.values.each do |enc_alias|
        Encoding.list.include?(Encoding.find(enc_alias)).should be_true
      end
    end

    it "includes dummy encodings" do
      Encoding.list.select {|e| e.dummy?}.should_not == []
    end

    # TODO: Find example that illustrates this
    it "updates the list when #find is used to load a new encoding"
  end
end
