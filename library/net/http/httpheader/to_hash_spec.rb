require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#to_hash" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns a Hash representing all Header entries (keys in lower case, values as arrays)" do
    @headers.to_hash.should == {}

    @headers["My-Header"] = "test"
    @headers.to_hash.should == { "my-header" => ["test"] }

    @headers.add_field("My-Header", "another test")
    @headers.to_hash.should == { "my-header" => ["test", "another test"] }
  end

  it "does not allow modifying the headers from the returned hash" do
    @headers.to_hash["my-header"] = ["test"]
    @headers.to_hash.should == {}
    @headers.key?("my-header").should be_false
  end
end
