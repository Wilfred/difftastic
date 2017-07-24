require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UDPSocket.bind" do

  before :each do
    @socket = UDPSocket.new
  end

  after :each do
    @socket.close unless @socket.closed?
  end

  it "binds the socket to a port" do
    @socket.bind(SocketSpecs.hostname, 0)
    @socket.addr[1].should be_kind_of(Integer)
  end

  it "raises Errno::EINVAL when already bound" do
    @socket.bind(SocketSpecs.hostname, 0)

    lambda {
      @socket.bind(SocketSpecs.hostname, @socket.addr[1])
    }.should raise_error(Errno::EINVAL)
  end

  it "receives a hostname and a port" do
    @socket.bind(SocketSpecs.hostname, 0)

    port, host = Socket.unpack_sockaddr_in(@socket.getsockname)

    host.should == "127.0.0.1"
    port.should == @socket.addr[1]
  end

  it "binds to INADDR_ANY if the hostname is empty" do
    @socket.bind("", 0)
    port, host = Socket.unpack_sockaddr_in(@socket.getsockname)
    host.should == "0.0.0.0"
    port.should == @socket.addr[1]
  end
end
