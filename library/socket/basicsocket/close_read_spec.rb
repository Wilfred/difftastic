require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::BasicSocket#close_read" do
  before :each do
    @server = TCPServer.new(0)
  end

  after :each do
    @server.close unless @server.closed?
  end

  it "closes the reading end of the socket" do
    @server.close_read
    lambda { @server.read }.should raise_error(IOError)
  end

  it "it works on sockets with closed ends" do
    @server.close_read
    lambda { @server.close_read }.should_not raise_error(Exception)
    lambda { @server.read }.should raise_error(IOError)
  end

  it "does not close the socket" do
    @server.close_read
    @server.closed?.should be_false
  end

  it "fully closes the socket if it was already closed for writing" do
    @server.close_write
    @server.close_read
    @server.closed?.should be_true
  end

  it "raises IOError on closed socket" do
    @server.close
    lambda { @server.close_read }.should raise_error(IOError)
  end

  it "returns nil" do
    @server.close_read.should be_nil
  end
end
