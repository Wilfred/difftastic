require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket::BasicSocket#close_write" do
  before :each do
    @server = TCPServer.new(0)
  end

  after :each do
    @server.close unless @server.closed?
  end

  it "closes the writing end of the socket" do
    @server.close_write
    lambda { @server.write("foo") }.should raise_error(IOError)
  end

  it "works on sockets with closed write ends" do
    @server.close_write
    lambda { @server.close_write }.should_not raise_error(Exception)
    lambda { @server.write("foo") }.should raise_error(IOError)
  end

  it "does not close the socket" do
    @server.close_write
    @server.closed?.should be_false
  end

  it "does not prevent reading" do
    @server.close_write
    @server.read(0).should == ""
  end

  it "fully closes the socket if it was already closed for reading" do
    @server.close_read
    @server.close_write
    @server.closed?.should be_true
  end

  it "raises IOError on closed socket" do
    @server.close
    lambda { @server.close_write }.should raise_error(IOError)
  end

  it "returns nil" do
    @server.close_write.should be_nil
  end
end
