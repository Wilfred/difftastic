require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo#initialize" do

  describe "with a sockaddr string" do

    describe "without a family" do
      before :each do
        @addrinfo = Addrinfo.new(Socket.sockaddr_in("smtp", "2001:DB8::1"))
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "2001:db8::1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 25
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_UNSPEC
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET6
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == 0
      end

      it "returns the 0 protocol" do
        @addrinfo.protocol.should == 0
      end
    end

    describe "with a family given" do
      before :each do
        @addrinfo = Addrinfo.new(Socket.sockaddr_in("smtp", "2001:DB8::1"), Socket::PF_INET6)
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "2001:db8::1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 25
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET6
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET6
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == 0
      end

      it "returns the 0 protocol" do
        @addrinfo.protocol.should == 0
      end
    end

    describe "with a family and socket type" do
      before :each do
        @addrinfo = Addrinfo.new(Socket.sockaddr_in("smtp", "2001:DB8::1"), Socket::PF_INET6, Socket::SOCK_STREAM)
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "2001:db8::1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 25
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET6
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET6
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == Socket::SOCK_STREAM
      end

      it "returns the 0 protocol" do
        @addrinfo.protocol.should == 0
      end
    end

    describe "with a family, socket type and protocol" do
      before :each do
        @addrinfo = Addrinfo.new(Socket.sockaddr_in("smtp", "2001:DB8::1"), Socket::PF_INET6, Socket::SOCK_STREAM, Socket::IPPROTO_TCP)
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "2001:db8::1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 25
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET6
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET6
      end

      it "returns the specified socket type" do
        @addrinfo.socktype.should == Socket::SOCK_STREAM
      end

      it "returns the specified protocol" do
        @addrinfo.protocol.should == Socket::IPPROTO_TCP
      end
    end

  end

  describe "with a sockaddr array" do

    describe "without a family" do
      before :each do
        @addrinfo = Addrinfo.new(["AF_INET", 46102, "localhost", "127.0.0.1"])
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "127.0.0.1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 46102
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == 0
      end

      it "returns the 0 protocol" do
        @addrinfo.protocol.should == 0
      end
    end

    describe "with a family given" do
      before :each do
        @addrinfo = Addrinfo.new(["AF_INET", 46102, "localhost", "127.0.0.1"], Socket::PF_INET)
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "127.0.0.1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 46102
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == 0
      end

      it "returns the 0 protocol" do
        @addrinfo.protocol.should == 0
      end
    end

    describe "with a family and socket type" do
      before :each do
        @addrinfo = Addrinfo.new(["AF_INET", 46102, "localhost", "127.0.0.1"], Socket::PF_INET, Socket::SOCK_STREAM)
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "127.0.0.1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 46102
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == Socket::SOCK_STREAM
      end

      it "returns the 0 protocol" do
        @addrinfo.protocol.should == 0
      end
    end

    describe "with a family, socket type and protocol" do
      before :each do
        @addrinfo = Addrinfo.new(["AF_INET", 46102, "localhost", "127.0.0.1"], Socket::PF_INET, Socket::SOCK_STREAM, Socket::IPPROTO_TCP)
      end

      it "stores the ip address from the sockaddr" do
        @addrinfo.ip_address.should == "127.0.0.1"
      end

      it "stores the port number from the sockaddr" do
        @addrinfo.ip_port.should == 46102
      end

      it "returns the Socket::UNSPEC pfamily" do
        @addrinfo.pfamily.should == Socket::PF_INET
      end

      it "returns the INET6 afamily" do
        @addrinfo.afamily.should == Socket::AF_INET
      end

      it "returns the 0 socket type" do
        @addrinfo.socktype.should == Socket::SOCK_STREAM
      end

      it "returns the specified protocol" do
        @addrinfo.protocol.should == Socket::IPPROTO_TCP
      end
    end
  end

end
