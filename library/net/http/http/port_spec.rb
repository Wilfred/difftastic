require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP#port" do
  it "returns the current port number" do
    net = Net::HTTP.new("localhost", 3333)
    net.port.should eql(3333)
  end
end
