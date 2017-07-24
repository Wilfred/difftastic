require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP.proxy_port" do
  describe "when self is no proxy class" do
    it "returns nil" do
      Net::HTTP.proxy_port.should be_nil
    end
  end

  describe "when self is a proxy class" do
    it "returns 80 if no port was set for self's proxy connection" do
      Net::HTTP.Proxy("localhost").proxy_port.should eql(80)
    end

    it "returns the port for self's proxy connection" do
      Net::HTTP.Proxy("localhost", 1234, "rspec", "rocks").proxy_port.should eql(1234)
    end
  end
end

describe "Net::HTTP#proxy_port" do
  describe "when self is no proxy class instance" do
    it "returns nil" do
      Net::HTTP.new("localhost", 3333).proxy_port.should be_nil
    end
  end

  describe "when self is a proxy class instance" do
    it "returns 80 if no port was set for self's proxy connection" do
      Net::HTTP.Proxy("localhost").new("localhost", 3333).proxy_port.should eql(80)
    end

    it "returns the port for self's proxy connection" do
      http_with_proxy = Net::HTTP.Proxy("localhost", 1234, "rspec", "rocks")
      http_with_proxy.new("localhost", 3333).proxy_port.should eql(1234)
    end
  end
end
