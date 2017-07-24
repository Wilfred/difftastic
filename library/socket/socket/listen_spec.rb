require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

include Socket::Constants

describe "Socket#listen" do
  before :each do
    @socket = Socket.new(AF_INET, SOCK_STREAM, 0)
  end

  after :each do
    @socket.closed?.should be_false
    @socket.close
  end

  it "verifies we can listen for incoming connections" do
    sockaddr = Socket.pack_sockaddr_in(0, "127.0.0.1")
    @socket.setsockopt(Socket::SOL_SOCKET, Socket::SO_REUSEADDR, true)
    @socket.bind(sockaddr)
    @socket.listen(1).should == 0
  end
end
