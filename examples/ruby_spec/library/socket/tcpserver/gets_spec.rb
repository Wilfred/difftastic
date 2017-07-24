require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "TCPServer#gets" do
  before :each do
    @server = TCPServer.new(SocketSpecs.hostname, 0)
  end

  after :each do
    @server.close
  end

  it "raises Errno::ENOTCONN on gets" do
    lambda { @server.gets }.should raise_error(Errno::ENOTCONN)
  end
end
