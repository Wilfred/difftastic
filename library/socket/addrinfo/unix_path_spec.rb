require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

platform_is_not :windows do
  describe "Addrinfo#unix_path" do
    describe "for an ipv4 socket" do

      before :each do
        @addrinfo = Addrinfo.tcp("127.0.0.1", 80)
      end

      it "raises an exception" do
        lambda { @addrinfo.unix_path }.should raise_error(SocketError)
      end

    end

    describe "for an ipv6 socket" do
      before :each do
        @addrinfo = Addrinfo.tcp("::1", 80)
      end

      it "raises an exception" do
        lambda { @addrinfo.unix_path }.should raise_error(SocketError)
      end
    end

    platform_is_not :windows do
      describe "for a unix socket" do
        before :each do
          @addrinfo = Addrinfo.unix("/tmp/sock")
        end

        it "returns the socket path" do
          @addrinfo.unix_path.should == "/tmp/sock"
        end
      end
    end
  end
end
