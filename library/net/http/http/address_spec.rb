require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP#address" do
  it "returns the current host name" do
    net = Net::HTTP.new("localhost")
    net.address.should == "localhost"
  end
end
