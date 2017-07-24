require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo.unix" do

  platform_is_not :windows do
    before :each do
      @addrinfo = Addrinfo.unix("/tmp/sock")
    end

    it "creates a addrinfo for a unix socket" do
      @addrinfo.pfamily.should == Socket::PF_UNIX
      @addrinfo.socktype.should == Socket::SOCK_STREAM
      @addrinfo.protocol.should == 0
      @addrinfo.unix_path.should == "/tmp/sock"
    end
  end
end

describe "Addrinfo#unix?" do
  describe "for an ipv4 socket" do

    before :each do
      @addrinfo = Addrinfo.tcp("127.0.0.1", 80)
    end

    it "returns false" do
      @addrinfo.unix?.should be_false
    end

  end

  describe "for an ipv6 socket" do
    before :each do
      @addrinfo = Addrinfo.tcp("::1", 80)
    end

    it "returns false" do
      @addrinfo.unix?.should be_false
    end
  end

  platform_is_not :windows do
    describe "for a unix socket" do
      before :each do
        @addrinfo = Addrinfo.unix("/tmp/sock")
      end

      it "returns true" do
        @addrinfo.unix?.should be_true
      end
    end
  end
end
