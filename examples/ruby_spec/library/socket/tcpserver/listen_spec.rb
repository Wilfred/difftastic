require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

require 'socket'

describe 'TCPServer#listen' do
  before :each do
    @server = TCPServer.new(SocketSpecs.hostname, 0)
  end

  after :each do
    @server.close unless @server.closed?
  end

  it 'returns 0' do
    @server.listen(10).should == 0
  end
end
