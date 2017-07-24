require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

require 'socket'

describe "Socket#connect_nonblock" do
  before :each do
    @hostname = "127.0.0.1"
    @server = TCPServer.new(@hostname, 0) # started, but no accept
    @addr = Socket.sockaddr_in(@server.addr[1], @hostname)
    @socket = Socket.new(Socket::AF_INET, Socket::SOCK_STREAM, 0)
    @thread = nil
  end

  after :each do
    @socket.close
    @server.close
    @thread.join if @thread
  end

  it "connects the socket to the remote side" do
    port = nil
    accept = false
    @thread = Thread.new do
      server = TCPServer.new(@hostname, 0)
      port = server.addr[1]
      Thread.pass until accept
      conn = server.accept
      conn << "hello!"
      conn.close
      server.close
    end

    Thread.pass until port

    addr = Socket.sockaddr_in(port, @hostname)
    begin
      @socket.connect_nonblock(addr)
    rescue Errno::EINPROGRESS
    end

    accept = true
    IO.select nil, [@socket]

    begin
      @socket.connect_nonblock(addr)
    rescue Errno::EISCONN
      # Not all OS's use this errno, so we trap and ignore it
    end

    @socket.read(6).should == "hello!"
  end

  platform_is_not :freebsd, :solaris, :aix do
    it "raises Errno::EINPROGRESS when the connect would block" do
      lambda do
        @socket.connect_nonblock(@addr)
      end.should raise_error(Errno::EINPROGRESS)
    end

    it "raises Errno::EINPROGRESS with IO::WaitWritable mixed in when the connect would block" do
      lambda do
        @socket.connect_nonblock(@addr)
      end.should raise_error(IO::WaitWritable)
    end

    ruby_version_is "2.3" do
      it "returns :wait_writable in exceptionless mode when the connect would block" do
        @socket.connect_nonblock(@addr, exception: false).should == :wait_writable
      end
    end
  end
end
