require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo#ipv4_loopback?" do
  describe "for an ipv4 socket" do
    before :each do
      @loopback = Addrinfo.tcp("127.0.0.1", 80)
      @other    = Addrinfo.tcp("0.0.0.0", 80)
    end

    it "returns true for the loopback address" do
      @loopback.ipv4_loopback?.should be_true
    end

    it "returns false for another address" do
      @other.ipv4_loopback?.should be_false
    end
  end

  describe "for an ipv6 socket" do
    before :each do
      @loopback = Addrinfo.tcp("::1", 80)
      @other    = Addrinfo.tcp("::", 80)
    end

    it "returns false for the loopback address" do
      @loopback.ipv4_loopback?.should be_false
    end

    it "returns false for another address" do
      @other.ipv4_loopback?.should be_false
    end
  end

  platform_is_not :windows do
    describe "for a unix socket" do
      before :each do
        @addrinfo = Addrinfo.unix("/tmp/sock")
      end

      it "returns false" do
        @addrinfo.ipv4_loopback?.should be_false
      end
    end
  end
end
