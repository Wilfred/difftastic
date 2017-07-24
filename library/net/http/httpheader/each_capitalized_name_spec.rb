require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#each_capitalized_name" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
    @headers["My-Header"] = "test"
    @headers.add_field("My-Other-Header", "a")
    @headers.add_field("My-Other-Header", "b")
  end

  describe "when passed a block" do
    it "yields each header key to the passed block (keys capitalized)" do
      res = []
      @headers.each_capitalized_name do |key|
        res << key
      end
      res.sort.should == ["My-Header", "My-Other-Header"]
    end
  end

  describe "when passed no block" do
    it "returns an Enumerator" do
      enumerator = @headers.each_capitalized_name
      enumerator.should be_an_instance_of(Enumerator)

      res = []
      enumerator.each do |key|
        res << key
      end
      res.sort.should == ["My-Header", "My-Other-Header"]
    end
  end
end
