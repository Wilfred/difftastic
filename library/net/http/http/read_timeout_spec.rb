require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP#read_timeout" do
  it "returns the seconds to wait until reading one block" do
    net = Net::HTTP.new("localhost")
    net.read_timeout.should eql(60)
    net.read_timeout = 10
    net.read_timeout.should eql(10)
  end
end

describe "Net::HTTP#read_timeout=" do
  it "sets the seconds to wait till the connection is open" do
    net = Net::HTTP.new("localhost")
    net.read_timeout = 10
    net.read_timeout.should eql(10)
  end

  it "returns the newly set value" do
    net = Net::HTTP.new("localhost")
    (net.read_timeout = 10).should eql(10)
  end
end
