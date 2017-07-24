require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require 'socket'

describe "Addrinfo#bind" do

  before :each do
    @addrinfo = Addrinfo.tcp("127.0.0.1", 0)
  end

  after :each do
    @socket.close unless @socket.closed?
  end

  it "returns a bound socket when no block is given" do
    @socket = @addrinfo.bind
    @socket.should be_kind_of(Socket)
    @socket.closed?.should be_false
  end

  it "yields the socket if a block is given" do
    @addrinfo.bind do |sock|
      @socket = sock
      sock.should be_kind_of(Socket)
    end
    @socket.closed?.should be_true
  end

end
