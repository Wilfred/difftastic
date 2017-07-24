require File.expand_path('../../../../spec_helper', __FILE__)
require 'socket'

describe "Addrinfo.udp" do

  before :each do
    @addrinfo = Addrinfo.udp("localhost", "daytime")
  end

  it "creates a addrinfo for a tcp socket" do
    ["::1", "127.0.0.1"].should include(@addrinfo.ip_address)
    [Socket::PF_INET, Socket::PF_INET6].should include(@addrinfo.pfamily)
    @addrinfo.ip_port.should == 13
    @addrinfo.socktype.should == Socket::SOCK_DGRAM
    platform_is_not :solaris do
      @addrinfo.protocol.should == Socket::IPPROTO_UDP
    end
  end

end
