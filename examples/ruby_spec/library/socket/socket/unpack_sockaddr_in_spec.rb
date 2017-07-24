require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require 'socket'

describe "Socket.unpack_sockaddr_in" do

  it "decodes the host name and port number of a packed sockaddr_in" do
    sockaddr = Socket.sockaddr_in 3333, '127.0.0.1'
    Socket.unpack_sockaddr_in(sockaddr).should == [3333, '127.0.0.1']
  end

  it "gets the hostname and port number from a passed Addrinfo" do
    addrinfo = Addrinfo.tcp('127.0.0.1', 3333)
    Socket.unpack_sockaddr_in(addrinfo).should == [3333, '127.0.0.1']
  end

  platform_is_not :windows do
    it "raises an ArgumentError when the sin_family is not AF_INET" do
      sockaddr = Socket.sockaddr_un '/tmp/x'
      lambda { Socket.unpack_sockaddr_in sockaddr }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError when passed addrinfo is not AF_INET/AF_INET6" do
      addrinfo = Addrinfo.unix('/tmp/sock')
      lambda { Socket.unpack_sockaddr_in(addrinfo) }.should raise_error(ArgumentError)
    end
  end

end
