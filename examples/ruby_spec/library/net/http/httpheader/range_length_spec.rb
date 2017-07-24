require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#range_length" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns the length of the Range represented by the 'Content-Range' header entry" do
    @headers["Content-Range"] = "bytes 0-499/1234"
    @headers.range_length.should eql(500)

    @headers["Content-Range"] = "bytes 500-1233/1234"
    @headers.range_length.should eql(734)
  end

  it "returns nil when there is no 'Content-Range' header entry" do
    @headers.range_length.should be_nil
  end

  it "raises a Net::HTTPHeaderSyntaxError when the 'Content-Range' has an invalid format" do
    @headers["Content-Range"] = "invalid"
    lambda { @headers.range_length }.should raise_error(Net::HTTPHeaderSyntaxError)

    @headers["Content-Range"] = "bytes 123-abc"
    lambda { @headers.range_length }.should raise_error(Net::HTTPHeaderSyntaxError)

    @headers["Content-Range"] = "bytes abc-123"
    lambda { @headers.range_length }.should raise_error(Net::HTTPHeaderSyntaxError)
  end
end
