require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/set_range', __FILE__)

describe "Net::HTTPHeader#range" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns a Range object that represents the 'Range' header entry" do
    @headers["Range"] = "bytes=0-499"
    @headers.range.should == [0..499]

    @headers["Range"] = "bytes=500-1233"
    @headers.range.should == [500..1233]

    @headers["Range"] = "bytes=10-"
    @headers.range.should == [10..-1]

    @headers["Range"] = "bytes=-10"
    @headers.range.should == [-10..-1]
  end

  it "returns nil when there is no 'Range' header entry" do
    @headers.range.should be_nil
  end

  it "raises a Net::HTTPHeaderSyntaxError when the 'Range' has an invalid format" do
    @headers["Range"] = "invalid"
    lambda { @headers.range }.should raise_error(Net::HTTPHeaderSyntaxError)

    @headers["Range"] = "bytes 123-abc"
    lambda { @headers.range }.should raise_error(Net::HTTPHeaderSyntaxError)

    @headers["Range"] = "bytes abc-123"
    lambda { @headers.range }.should raise_error(Net::HTTPHeaderSyntaxError)
  end

  it "raises a Net::HTTPHeaderSyntaxError when the 'Range' was not specified" do
    @headers["Range"] = "bytes=-"
    lambda { @headers.range }.should raise_error(Net::HTTPHeaderSyntaxError)
  end
end

describe "Net::HTTPHeader#range=" do
  it_behaves_like :net_httpheader_set_range, :range=
end
