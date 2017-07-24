require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP#open_timeout" do
  ruby_version_is ""..."2.3" do
    it "returns the seconds to wait till the connection is open" do
      net = Net::HTTP.new("localhost")
      net.open_timeout.should be_nil
      net.open_timeout = 10
      net.open_timeout.should eql(10)
    end
  end

  ruby_version_is "2.3" do
    it "returns the seconds to wait till the connection is open" do
      net = Net::HTTP.new("localhost")
      net.open_timeout.should eql(60)
      net.open_timeout = 10
      net.open_timeout.should eql(10)
    end
  end
end

describe "Net::HTTP#open_timeout=" do
  it "sets the seconds to wait till the connection is open" do
    net = Net::HTTP.new("localhost")
    net.open_timeout = 10
    net.open_timeout.should eql(10)
  end

  it "returns the newly set value" do
    net = Net::HTTP.new("localhost")
    (net.open_timeout = 10).should eql(10)
  end
end
