require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

include Socket::Constants

describe "Socket#bind on SOCK_DGRAM socket" do
  before :each do
    @sock = Socket.new(AF_INET, SOCK_DGRAM, 0)
    @sockaddr = Socket.pack_sockaddr_in(0, "127.0.0.1")
  end

  after :each do
    @sock.closed?.should be_false
    @sock.close
  end

  it "binds to a port" do
    lambda { @sock.bind(@sockaddr) }.should_not raise_error
  end

  it "returns 0 if successful" do
    @sock.bind(@sockaddr).should == 0
  end

  it "raises Errno::EINVAL when already bound" do
    @sock.bind(@sockaddr)

    lambda { @sock.bind(@sockaddr) }.should raise_error(Errno::EINVAL)
  end

  it "raises Errno::EADDRNOTAVAIL when the specified sockaddr is not available from the local machine" do
    sockaddr1 = Socket.pack_sockaddr_in(0, "4.3.2.1")
    lambda { @sock.bind(sockaddr1) }.should raise_error(Errno::EADDRNOTAVAIL)
  end

  platform_is_not :windows, :cygwin do
    it "raises Errno::EACCES when the current user does not have permission to bind" do
      sockaddr1 = Socket.pack_sockaddr_in(1, "127.0.0.1")
      lambda { @sock.bind(sockaddr1) }.should raise_error(Errno::EACCES)
    end
  end
end

describe "Socket#bind on SOCK_STREAM socket" do
  before :each do
    @sock = Socket.new(AF_INET, SOCK_STREAM, 0)
    @sock.setsockopt(SOL_SOCKET, SO_REUSEADDR, true)
    @sockaddr = Socket.pack_sockaddr_in(0, "127.0.0.1")
  end

  after :each do
    @sock.closed?.should be_false
    @sock.close
  end

  it "binds to a port" do
    lambda { @sock.bind(@sockaddr) }.should_not raise_error
  end

  it "returns 0 if successful" do
    @sock.bind(@sockaddr).should == 0
  end

  it "raises Errno::EINVAL when already bound" do
    @sock.bind(@sockaddr)

    lambda { @sock.bind(@sockaddr) }.should raise_error(Errno::EINVAL)
  end

  it "raises Errno::EADDRNOTAVAIL when the specified sockaddr is not available from the local machine" do
    sockaddr1 = Socket.pack_sockaddr_in(0, "4.3.2.1")
    lambda { @sock.bind(sockaddr1) }.should raise_error(Errno::EADDRNOTAVAIL)
  end

  platform_is_not :windows, :cygwin do
    it "raises Errno::EACCES when the current user does not have permission to bind" do
      sockaddr1 = Socket.pack_sockaddr_in(1, "127.0.0.1")
      lambda { @sock.bind(sockaddr1) }.should raise_error(Errno::EACCES)
    end
  end
end
