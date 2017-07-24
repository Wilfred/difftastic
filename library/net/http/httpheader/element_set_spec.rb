require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#[]= when passed key, value" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "sets the header entry with the passed key to the passed value" do
    @headers["My-Header"] = "test"
    @headers["My-Header"].should == "test"

    @headers["My-Header"] = "overwritten"
    @headers["My-Header"].should == "overwritten"

    @headers["My-Other-Header"] = "another test"
    @headers["My-Other-Header"].should == "another test"
  end

  it "is case-insensitive" do
    @headers['My-Header'] = "test"
    @headers['my-Header'] = "another test"
    @headers['My-header'] = "and one more test"
    @headers['my-header'] = "and another one"
    @headers['MY-HEADER'] = "last one"

    @headers["My-Header"].should == "last one"
    @headers.size.should eql(1)
  end

  it "removes the header entry with the passed key when the value is false or nil" do
    @headers['My-Header'] = "test"
    @headers['My-Header'] = nil
    @headers['My-Header'].should be_nil

    @headers['My-Header'] = "test"
    @headers['My-Header'] = false
    @headers['My-Header'].should be_nil
  end
end
