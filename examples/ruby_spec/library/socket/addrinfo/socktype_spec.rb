require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo#socktype" do
  describe "for an ipv4 socket" do

    before :each do
      @addrinfo = Addrinfo.tcp("127.0.0.1", 80)
    end

    it "returns Socket::SOCK_STREAM" do
      @addrinfo.socktype.should == Socket::SOCK_STREAM
    end

  end

  describe "for an ipv6 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("::1", 80)
    end

    it "returns Socket::SOCK_STREAM" do
      @addrinfo.socktype.should == Socket::SOCK_STREAM
    end
  end

  platform_is_not :windows do
    describe "for a unix socket" do
      before :each do
        @addrinfo = Addrinfo.unix("/tmp/sock")
      end

      it "returns Socket::SOCK_STREAM" do
        @addrinfo.socktype.should == Socket::SOCK_STREAM
      end
    end
  end
end
