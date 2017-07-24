require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding#names" do
    it "returns an Array" do
      Encoding.name_list.each do |name|
        e = Encoding.find(name) or next
        e.names.should be_an_instance_of(Array)
      end
    end

    it "returns names as Strings" do
      Encoding.name_list.each do |name|
        e = Encoding.find(name) or next
        e.names.each do |this_name|
          this_name.should be_an_instance_of(String)
        end
      end
    end

    it "returns #name as the first value" do
      Encoding.name_list.each do |name|
        e = Encoding.find(name) or next
        e.names.first.should == e.name
      end
    end

    it "includes any aliases the encoding has" do
      Encoding.name_list.each do |name|
        e = Encoding.find(name) or next
        aliases = Encoding.aliases.select{|a,n| n == name}.keys
        names = e.names
        aliases.each {|a| names.include?(a).should be_true}
      end
    end
  end
end
