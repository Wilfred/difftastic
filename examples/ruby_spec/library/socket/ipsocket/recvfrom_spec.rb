require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::IPSocket#recvfrom" do

  before :each do
    @server = TCPServer.new("127.0.0.1", 0)
    @port = @server.addr[1]
    @client = TCPSocket.new("127.0.0.1", @port)
  end

  after :each do
    @server.close unless @server.closed?
    @client.close unless @client.closed?
  end

  it "reads data from the connection" do
    data = nil
    t = Thread.new do
      client = @server.accept
      begin
        data = client.recvfrom(6)
      ensure
        client.close
      end
    end

    @client.send('hello', 0)
    @client.shutdown rescue nil
    # shutdown may raise Errno::ENOTCONN when sent data is pending.
    t.join

    data.first.should == 'hello'
  end

  it "reads up to len bytes" do
    data = nil
    t = Thread.new do
      client = @server.accept
      begin
        data = client.recvfrom(3)
      ensure
        client.close
      end
    end

    @client.send('hello', 0)
    @client.shutdown rescue nil
    t.join

    data.first.should == 'hel'
  end

  it "returns an array with the data and connection info" do
    data = nil
    t = Thread.new do
      client = @server.accept
      data = client.recvfrom(3)
      client.close
    end

    @client.send('hello', 0)
    @client.shutdown rescue nil
    t.join

    data.size.should == 2
    data.first.should == "hel"
    # This does not apply to every platform, dependant on recvfrom(2)
    # data.last.should == nil
  end

end
