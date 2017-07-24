require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#add_field when passed key, value" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "adds the passed value to the header entry with the passed key" do
    @headers.add_field("My-Header", "a")
    @headers.get_fields("My-Header").should == ["a"]

    @headers.add_field("My-Header", "b")
    @headers.get_fields("My-Header").should == ["a", "b"]

    @headers.add_field("My-Header", "c")
    @headers.get_fields("My-Header").should == ["a", "b", "c"]
  end

  it "is case-insensitive" do
    @headers.add_field("My-Header", "a")
    @headers.get_fields("My-Header").should == ["a"]

    @headers.add_field("my-header", "b")
    @headers.get_fields("My-Header").should == ["a", "b"]

    @headers.add_field("MY-HEADER", "c")
    @headers.get_fields("My-Header").should == ["a", "b", "c"]
  end
end
