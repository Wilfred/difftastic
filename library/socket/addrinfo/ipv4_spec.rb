require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo#ipv4?" do
  describe "for an ipv4 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("10.0.0.1", 80)
    end

    it "returns true" do
      @addrinfo.ipv4?.should be_true
    end
  end

  describe "for an ipv6 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("::1", 80)
    end

    it "returns false" do
      @addrinfo.ipv4?.should be_false
    end
  end

  platform_is_not :windows do
    describe "for a unix socket" do
      before :each do
        @addrinfo = Addrinfo.unix("/tmp/sock")
      end

      it "returns false" do
        @addrinfo.ipv4?.should be_false
      end
    end
  end
end
