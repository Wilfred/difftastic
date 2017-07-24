describe :socket_recv_nonblock, shared: true do
  before :each do
    @s1 = Socket.new(Socket::AF_INET, Socket::SOCK_DGRAM, 0)
    @s2 = Socket.new(Socket::AF_INET, Socket::SOCK_DGRAM, 0)
  end

  after :each do
    @s1.close unless @s1.closed?
    @s2.close unless @s2.closed?
  end

  it "raises an exception extending IO::WaitReadable if there's no data available" do
    @s1.bind(Socket.pack_sockaddr_in(0, "127.0.0.1"))
    lambda {
      @s1.recv_nonblock(5)
    }.should raise_error(IO::WaitReadable) { |e|
      platform_is_not :windows do
        e.should be_kind_of(Errno::EAGAIN)
      end
      platform_is :windows do
        e.should be_kind_of(Errno::EWOULDBLOCK)
      end
    }
  end

  it "receives data after it's ready" do
    @s1.bind(Socket.pack_sockaddr_in(0, "127.0.0.1"))
    @s2.send("aaa", 0, @s1.getsockname)
    IO.select([@s1], nil, nil, 2)
    @s1.recv_nonblock(5).should == "aaa"
  end

  ruby_version_is "2.3" do
    it "allows an output buffer as third argument" do
      @s1.bind(Socket.pack_sockaddr_in(0, "127.0.0.1"))
      @s2.send("data", 0, @s1.getsockname)
      IO.select([@s1], nil, nil, 2)

      buf = "foo"
      @s1.recv_nonblock(5, 0, buf)
      buf.should == "data"
    end
  end

  it "does not block if there's no data available" do
    @s1.bind(Socket.pack_sockaddr_in(0, "127.0.0.1"))
    @s2.send("a", 0, @s1.getsockname)
    IO.select([@s1], nil, nil, 2)
    @s1.recv_nonblock(1).should == "a"
    lambda {
      @s1.recv_nonblock(5)
    }.should raise_error(IO::WaitReadable)
  end
end
