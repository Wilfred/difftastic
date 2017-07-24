require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#[] when passed key" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns the value of the header entry with the passed key" do
    @headers["My-Header"] = "test"
    @headers["My-Header"].should == "test"
    @headers["My-Other-Header"] = "another test"
    @headers["My-Other-Header"].should == "another test"
  end

  it "is case-insensitive" do
    @headers["My-Header"] = "test"

    @headers['My-Header'].should == "test"
    @headers['my-Header'].should == "test"
    @headers['My-header'].should == "test"
    @headers['my-header'].should == "test"
    @headers['MY-HEADER'].should == "test"
  end

  it "returns multi-element values joined together" do
    @headers["My-Header"] = "test"
    @headers.add_field("My-Header", "another test")
    @headers.add_field("My-Header", "and one more")

    @headers["My-Header"].should == "test, another test, and one more"
  end

  it "returns nil for non-existing entries" do
    @headers["My-Header"].should be_nil
    @headers["My-Other-Header"].should be_nil
  end
end
