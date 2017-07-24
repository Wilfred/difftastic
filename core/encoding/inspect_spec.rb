require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding#inspect" do
    it "returns a String" do
      Encoding::UTF_8.inspect.should be_an_instance_of(String)
    end

    it "returns #<Encoding:name> for a non-dummy encoding named 'name'" do
      Encoding.list.to_a.reject {|e| e.dummy? }.each do |enc|
        enc.inspect.should =~ /#<Encoding:#{enc.name}>/
      end
    end

    it "returns #<Encoding:name (dummy)> for a dummy encoding named 'name'" do
      Encoding.list.to_a.select {|e| e.dummy? }.each do |enc|
        enc.inspect.should =~ /#<Encoding:#{enc.name} \(dummy\)>/
      end
    end
  end
end
