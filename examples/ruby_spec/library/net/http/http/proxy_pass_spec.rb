require File.expand_path('../../../../../spec_helper', __FILE__)
require 'net/http'

describe "Net::HTTP.proxy_pass" do
  describe "when self is no proxy class" do
    it "returns nil" do
      Net::HTTP.proxy_pass.should be_nil
    end
  end

  describe "when self is a proxy class" do
    it "returns nil if no password was set for self's proxy connection" do
      Net::HTTP.Proxy("localhost").proxy_pass.should be_nil
    end

    it "returns the password for self's proxy connection" do
      Net::HTTP.Proxy("localhost", 1234, "rspec", "rocks").proxy_pass.should == "rocks"
    end
  end
end

describe "Net::HTTP#proxy_pass" do
  describe "when self is no proxy class instance" do
    it "returns nil" do
      Net::HTTP.new("localhost", 3333).proxy_pass.should be_nil
    end
  end

  describe "when self is a proxy class instance" do
    it "returns nil if no password was set for self's proxy connection" do
      Net::HTTP.Proxy("localhost").new("localhost", 3333).proxy_pass.should be_nil
    end

    it "returns the password for self's proxy connection" do
      http_with_proxy = Net::HTTP.Proxy("localhost", 1234, "rspec", "rocks")
      http_with_proxy.new("localhost", 3333).proxy_pass.should == "rocks"
    end
  end
end
