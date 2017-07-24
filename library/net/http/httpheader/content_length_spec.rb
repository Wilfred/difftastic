require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#content_length" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns nil if no 'Content-Length' header entry is set" do
    @headers.content_length.should be_nil
  end

  it "raises a Net::HTTPHeaderSyntaxError when the 'Content-Length' header entry has an invalid format" do
    @headers["Content-Length"] = "invalid"
    lambda { @headers.content_length }.should raise_error(Net::HTTPHeaderSyntaxError)
  end

  it "returns the value of the 'Content-Length' header entry as an Integer" do
    @headers["Content-Length"] = "123"
    @headers.content_length.should eql(123)

    @headers["Content-Length"] = "123valid"
    @headers.content_length.should eql(123)

    @headers["Content-Length"] = "valid123"
    @headers.content_length.should eql(123)
  end
end

describe "Net::HTTPHeader#content_length=" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "removes the 'Content-Length' entry if passed false or nil" do
    @headers["Content-Length"] = "123"
    @headers.content_length = nil
    @headers["Content-Lenght"].should be_nil
  end

  it "sets the 'Content-Length' entry to the passed value" do
    @headers.content_length = "123"
    @headers["Content-Length"].should == "123"

    @headers.content_length = "123valid"
    @headers["Content-Length"].should == "123"
  end

  it "sets the 'Content-Length' entry to 0 if the passed value is not valid" do
    @headers.content_length = "invalid123"
    @headers["Content-Length"].should == "0"
  end
end
