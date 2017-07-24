require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::IPSocket#peeraddr" do
  before :each do
    @do_not_reverse_lookup = BasicSocket.do_not_reverse_lookup
    @server = TCPServer.new("127.0.0.1", 0)
    @port = @server.addr[1]
    @client = TCPSocket.new("127.0.0.1", @port)
  end

  after :each do
    @server.close unless @server.closed?
    @client.close unless @client.closed?
    BasicSocket.do_not_reverse_lookup = @do_not_reverse_lookup
  end

  it "raises error if socket is not connected" do
    lambda { @server.peeraddr }.should raise_error
  end

  it "returns an array of information on the peer" do
    @client.do_not_reverse_lookup = false
    BasicSocket.do_not_reverse_lookup = false
    addrinfo = @client.peeraddr
    addrinfo[0].should == "AF_INET"
    addrinfo[1].should == @port
    addrinfo[2].should == SocketSpecs.hostname
    addrinfo[3].should == "127.0.0.1"
  end

  it "returns an IP instead of hostname if do_not_reverse_lookup is true" do
    @client.do_not_reverse_lookup = true
    BasicSocket.do_not_reverse_lookup = true
    addrinfo = @client.peeraddr
    addrinfo[0].should == "AF_INET"
    addrinfo[1].should == @port
    addrinfo[2].should == "127.0.0.1"
    addrinfo[3].should == "127.0.0.1"
  end

  it "returns an IP instead of hostname if passed false" do
    addrinfo = @client.peeraddr(false)
    addrinfo[0].should == "AF_INET"
    addrinfo[1].should == @port
    addrinfo[2].should == "127.0.0.1"
    addrinfo[3].should == "127.0.0.1"
  end
end
