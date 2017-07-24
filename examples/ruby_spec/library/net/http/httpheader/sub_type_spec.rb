require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#sub_type" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns the 'sub-content-type', as per 'Content-Type' header entry" do
    @headers["Content-Type"] = "text/html"
    @headers.sub_type.should == "html"

    @headers["Content-Type"] = "application/pdf"
    @headers.sub_type.should == "pdf"

    @headers["Content-Type"] = "text/html;charset=utf-8"
    @headers.sub_type.should == "html"
  end

  it "returns nil if no 'sub-content-type' is set" do
    @headers["Content-Type"] = "text"
    @headers.sub_type.should be_nil

    @headers["Content-Type"] = "text;charset=utf-8"
    @headers.sub_type.should be_nil
  end

  it "returns nil if the 'Content-Type' header entry does not exist" do
    @headers.sub_type.should be_nil
  end
end
