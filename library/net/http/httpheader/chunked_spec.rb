require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'
require File.expand_path('../fixtures/classes', __FILE__)

describe "Net::HTTPHeader#chunked?" do
  before :each do
    @headers = NetHTTPHeaderSpecs::Example.new
  end

  it "returns true if the 'Transfer-Encoding' header entry is set to chunked" do
    @headers.chunked?.should be_false

    @headers["Transfer-Encoding"] = "bla"
    @headers.chunked?.should be_false

    @headers["Transfer-Encoding"] = "blachunkedbla"
    @headers.chunked?.should be_false

    @headers["Transfer-Encoding"] = "chunked"
    @headers.chunked?.should be_true
  end
end
