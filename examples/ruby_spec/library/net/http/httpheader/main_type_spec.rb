require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#main_type" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns the 'main-content-type', as per 'Content-Type' header entry" do
    @headers["Content-Type"] = "text/html"
    @headers.main_type.should == "text"

    @headers["Content-Type"] = "application/pdf"
    @headers.main_type.should == "application"

    @headers["Content-Type"] = "text/html;charset=utf-8"
    @headers.main_type.should == "text"
  end

  it "returns nil if the 'Content-Type' header entry does not exist" do
    @headers.main_type.should be_nil
  end
end
