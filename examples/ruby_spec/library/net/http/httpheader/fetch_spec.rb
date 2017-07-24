require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#fetch" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  describe "when passed key" do
    it "returns the header entry for the passed key" do
      @headers["My-Header"] = "test"
      @headers.fetch("My-Header").should == "test"

      @headers.add_field("My-Other-Header", "a")
      @headers.add_field("My-Other-Header", "b")
      @headers.add_field("My-Other-Header", "c")
      @headers.fetch("My-Other-Header").should == "a, b, c"
    end

    it "is case-insensitive" do
      @headers["My-Header"] = "test"
      @headers.fetch("my-header").should == "test"
      @headers.fetch("MY-HEADER").should == "test"
    end

    it "returns nil when there is no entry for the passed key" do
      lambda { @headers.fetch("my-header") }.should raise_error(IndexError)
    end
  end

  describe "when passed key, default" do
    it "returns the header entry for the passed key" do
      @headers["My-Header"] = "test"
      @headers.fetch("My-Header", "bla").should == "test"

      @headers.add_field("My-Other-Header", "a")
      @headers.add_field("My-Other-Header", "b")
      @headers.add_field("My-Other-Header", "c")
      @headers.fetch("My-Other-Header", "bla").should == "a, b, c"
    end

    # TODO: This raises a NoMethodError: undefined method `join' for "bla":String
    it "returns the default value when there is no entry for the passed key" do
      @headers.fetch("My-Header", "bla").should == "bla"
    end
  end

  describe "when passed key and block" do
    it "returns the header entry for the passed key" do
      @headers["My-Header"] = "test"
      @headers.fetch("My-Header") {}.should == "test"

      @headers.add_field("My-Other-Header", "a")
      @headers.add_field("My-Other-Header", "b")
      @headers.add_field("My-Other-Header", "c")
      -> {
        @result = @headers.fetch("My-Other-Header", "bla") {}
      }.should complain(/block supersedes default value argument/)
      @result.should == "a, b, c"
    end

    # TODO: This raises a NoMethodError: undefined method `join' for "redaeh-ym":String
    it "yieldsand returns the block's return value when there is no entry for the passed key" do
      @headers.fetch("My-Header") { |key| key.reverse }.should == "redaeh-ym"
    end
  end
end
