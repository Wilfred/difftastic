require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

ruby_version_is "2.3" do
  describe "Hash#fetch_values" do
    before :each do
      @hash = { a: 1, b: 2, c: 3 }
    end

    describe "with matched keys" do
      it "returns the values for keys" do
        @hash.fetch_values(:a).should == [1]
        @hash.fetch_values(:a, :c).should == [1, 3]
      end
    end

    describe "with unmatched keys" do
      it "raises a KeyError" do
        ->{ @hash.fetch_values :z }.should raise_error(KeyError)
        ->{ @hash.fetch_values :a, :z }.should raise_error(KeyError)
      end

      it "returns the default value from block" do
        @hash.fetch_values(:z) { |key| "`#{key}' is not found" }.should == ["`z' is not found"]
        @hash.fetch_values(:a, :z) { |key| "`#{key}' is not found" }.should == [1, "`z' is not found"]
      end
    end

    describe "without keys" do
      it "returns an empty Array" do
        @hash.fetch_values.should == []
      end
    end
  end
end
