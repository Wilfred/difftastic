require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP.default_port" do
  it "returns 80" do
    Net::HTTP.http_default_port.should eql(80)
  end
end
