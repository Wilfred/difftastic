require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#key? when passed key" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns true if the header entry with the passed key exists" do
    @headers.key?("My-Header").should be_false
    @headers["My-Header"] = "test"
    @headers.key?("My-Header").should be_true
  end

  it "is case-insensitive" do
    @headers["My-Header"] = "test"
    @headers.key?("my-header").should be_true
    @headers.key?("MY-HEADER").should be_true
  end
end
