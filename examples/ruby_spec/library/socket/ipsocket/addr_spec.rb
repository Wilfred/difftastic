require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::IPSocket#addr" do
  before :each do
    @do_not_reverse_lookup = BasicSocket.do_not_reverse_lookup
    @socket = TCPServer.new("127.0.0.1", 0)
  end

  after :each do
    @socket.close unless @socket.closed?
    BasicSocket.do_not_reverse_lookup = @do_not_reverse_lookup
  end

  it "returns an array with the socket's information" do
    @socket.do_not_reverse_lookup = false
    BasicSocket.do_not_reverse_lookup = false
    addrinfo = @socket.addr
    addrinfo[0].should == "AF_INET"
    addrinfo[1].should be_kind_of(Integer)
    addrinfo[2].should == SocketSpecs.hostname
    addrinfo[3].should == "127.0.0.1"
  end

  it "returns an address in the array if do_not_reverse_lookup is true" do
    @socket.do_not_reverse_lookup = true
    BasicSocket.do_not_reverse_lookup = true
    addrinfo = @socket.addr
    addrinfo[0].should == "AF_INET"
    addrinfo[1].should be_kind_of(Integer)
    addrinfo[2].should == "127.0.0.1"
    addrinfo[3].should == "127.0.0.1"
  end

  it "returns an address in the array if passed false" do
    addrinfo = @socket.addr(false)
    addrinfo[0].should == "AF_INET"
    addrinfo[1].should be_kind_of(Integer)
    addrinfo[2].should == "127.0.0.1"
    addrinfo[3].should == "127.0.0.1"
  end
end
