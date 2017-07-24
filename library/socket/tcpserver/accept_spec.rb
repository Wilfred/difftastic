require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)


describe "TCPServer#accept" do
  before :each do
    @server = TCPServer.new("127.0.0.1", 0)
    @port = @server.addr[1]
  end

  after :each do
    @server.close unless @server.closed?
  end

  it "accepts a connection and returns a TCPSocket" do
    data = nil
    t = Thread.new do
      client = @server.accept
      client.should be_kind_of(TCPSocket)
      data = client.read(5)
      client << "goodbye"
      client.close
    end
    Thread.pass while t.status and t.status != "sleep"

    socket = TCPSocket.new('127.0.0.1', @port)
    socket.write('hello')
    socket.shutdown(1) # we are done with sending
    socket.read.should == 'goodbye'
    t.join
    data.should == 'hello'
    socket.close
  end

  it "can be interrupted by Thread#kill" do
    t = Thread.new { @server.accept }

    Thread.pass while t.status and t.status != "sleep"

    # kill thread, ensure it dies in a reasonable amount of time
    t.kill
    a = 0
    while t.alive? and a < 5000
      sleep 0.001
      a += 1
    end
    a.should < 5000
  end

  it "can be interrupted by Thread#raise" do
    t = Thread.new { @server.accept }

    Thread.pass while t.status and t.status != "sleep"

    # raise in thread, ensure the raise happens
    ex = Exception.new
    t.raise ex
    lambda { t.join }.should raise_error(Exception)
  end

  it "raises an IOError if the socket is closed" do
    @server.close
    lambda { @server.accept }.should raise_error(IOError)
  end
end
