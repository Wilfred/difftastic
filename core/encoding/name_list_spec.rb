require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding.name_list" do
    it "returns an Array" do
      Encoding.name_list.should be_an_instance_of(Array)
    end

    it "returns encoding names as Strings" do
      Encoding.name_list.each {|e| e.should be_an_instance_of(String) }
    end

    it "includes all aliases" do
      Encoding.aliases.keys.each do |enc_alias|
        Encoding.name_list.include?(enc_alias).should be_true
      end
    end

    it "includes all non-dummy encodings" do
      Encoding.list.each do |enc|
        Encoding.name_list.include?(enc.name).should be_true
      end
    end
  end
end
