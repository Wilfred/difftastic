require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#get_fields when passed key" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns an Array containing the values of the header entry with the passed key" do
    @headers["My-Header"] = "a"
    @headers.get_fields("My-Header").should == ["a"]

    @headers.add_field("My-Header", "b")
    @headers.get_fields("My-Header").should == ["a", "b"]
  end

  it "returns a copy of the header entry values" do
    @headers["My-Header"] = "a"

    @headers.get_fields("My-Header").clear
    @headers.get_fields("My-Header").should == ["a"]

    @headers.get_fields("My-Header") << "b"
    @headers.get_fields("My-Header").should == ["a"]
  end

  it "returns nil for non-existing header entries" do
    @headers.get_fields("My-Header").should be_nil
    @headers.get_fields("My-Other-header").should be_nil
  end

  it "is case-insensitive" do
    @headers["My-Header"] = "test"
    @headers.get_fields("My-Header").should == ["test"]
    @headers.get_fields("my-header").should == ["test"]
    @headers.get_fields("MY-HEADER").should == ["test"]
  end
end
