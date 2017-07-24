require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UDPSocket.send" do
  before :each do
    @port = nil
    @server_thread = Thread.new do
      @server = UDPSocket.open
      begin
        @server.bind(nil, 0)
        @port = @server.addr[1]
        begin
          @msg = @server.recvfrom_nonblock(64)
        rescue IO::WaitReadable
          IO.select([@server])
          retry
        end
      ensure
        @server.close if !@server.closed?
      end
    end
    Thread.pass while @server_thread.status and !@port
  end

  after :each do
    @server_thread.join
  end

  it "sends data in ad hoc mode" do
    @socket = UDPSocket.open
    @socket.send("ad hoc", 0, SocketSpecs.hostname, @port)
    @socket.close
    @server_thread.join

    @msg[0].should == "ad hoc"
    @msg[1][0].should == "AF_INET"
    @msg[1][1].should be_kind_of(Fixnum)
    @msg[1][3].should == "127.0.0.1"
  end

  it "sends data in ad hoc mode (with port given as a String)" do
    @socket = UDPSocket.open
    @socket.send("ad hoc", 0, SocketSpecs.hostname, @port.to_s)
    @socket.close
    @server_thread.join

    @msg[0].should == "ad hoc"
    @msg[1][0].should == "AF_INET"
    @msg[1][1].should be_kind_of(Fixnum)
    @msg[1][3].should == "127.0.0.1"
  end

  it "sends data in connection mode" do
    @socket = UDPSocket.open
    @socket.connect(SocketSpecs.hostname, @port)
    @socket.send("connection-based", 0)
    @socket.close
    @server_thread.join

    @msg[0].should == "connection-based"
    @msg[1][0].should == "AF_INET"
    @msg[1][1].should be_kind_of(Fixnum)
    @msg[1][3].should == "127.0.0.1"
  end

  it "raises EMSGSIZE if data is too too big" do
    @socket = UDPSocket.open
    begin
      lambda do
        @socket.send('1' * 100_000, 0, SocketSpecs.hostname, @port.to_s)
      end.should raise_error(Errno::EMSGSIZE)
    ensure
      @socket.send("ad hoc", 0, SocketSpecs.hostname, @port)
      @socket.close
      @server_thread.join
    end
  end
end
