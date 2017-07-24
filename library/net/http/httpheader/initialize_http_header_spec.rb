require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#initialize_http_header when passed Hash" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.allocate
  end

  it "initializes the HTTP Header using the passed Hash" do
    @headers.initialize_http_header("My-Header" => "test", "My-Other-Header" => "another test")
    @headers["My-Header"].should == "test"
    @headers["My-Other-Header"].should == "another test"
  end

  it "complains about duplicate keys when in verbose mode" do
    lambda do
      $VERBOSE = true
      @headers.initialize_http_header("My-Header" => "test", "my-header" => "another test")
    end.should complain(/duplicated HTTP header/)
  end
end
