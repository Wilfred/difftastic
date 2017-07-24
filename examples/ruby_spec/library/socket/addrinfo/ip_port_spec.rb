require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo#ip_port" do
  describe "for an ipv4 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("127.0.0.1", 80)
    end

    it "returns the port" do
      @addrinfo.ip_port.should == 80
    end
  end

  describe "for an ipv6 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("::1", 80)
    end

    it "returns the port" do
      @addrinfo.ip_port.should == 80
    end
  end

  platform_is_not :windows do
    describe "for a unix socket" do
      before :each do
        @addrinfo = Addrinfo.unix("/tmp/sock")
      end

      it "raises an exception" do
        lambda { @addrinfo.ip_port }.should raise_error(SocketError)
      end
    end
  end
end
