require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::BasicSocket#getpeername" do

  before :each do
    @server = TCPServer.new("127.0.0.1", 0)
    @port = @server.addr[1]
    @client = TCPSocket.new("127.0.0.1", @port)
  end

  after :each do
    @server.close unless @server.closed?
    @client.close unless @client.closed?
  end

  it "returns the sockaddr of the other end of the connection" do
    server_sockaddr = Socket.pack_sockaddr_in(@port, "127.0.0.1")
    @client.getpeername.should == server_sockaddr
  end

  # Catch general exceptions to prevent NotImplementedError
  it "raises an error if socket's not connected" do
    lambda { @server.getpeername }.should raise_error(Exception)
  end
end
