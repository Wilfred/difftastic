require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::TCPServer.accept_nonblock" do
  before :each do
    @server = TCPServer.new("127.0.0.1", 0)
    @port = @server.addr[1]
  end

  after :each do
    @server.close unless @server.closed?
  end

  it "accepts non blocking connections" do
    @server.listen(5)
    lambda {
      @server.accept_nonblock
    }.should raise_error(IO::WaitReadable)

    c = TCPSocket.new("127.0.0.1", @port)
    sleep 0.1
    s = @server.accept_nonblock

    port, address = Socket.unpack_sockaddr_in(s.getsockname)

    port.should == @port
    address.should == "127.0.0.1"
    s.should be_kind_of(TCPSocket)

    c.close
    s.close
  end

  it "raises an IOError if the socket is closed" do
    @server.close
    lambda { @server.accept }.should raise_error(IOError)
  end

  describe 'without a connected client' do
    it 'raises error' do
      lambda { @server.accept_nonblock }.should raise_error(IO::WaitReadable)
    end

    ruby_version_is '2.3' do
      it 'returns :wait_readable in exceptionless mode' do
        @server.accept_nonblock(exception: false).should == :wait_readable
      end
    end
  end
end
