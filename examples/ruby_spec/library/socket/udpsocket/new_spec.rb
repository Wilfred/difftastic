require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe 'UDPSocket.new' do
  after :each do
    @socket.close if @socket && !@socket.closed?
  end

  it 'without arguments' do
    @socket = UDPSocket.new
    @socket.should be_an_instance_of(UDPSocket)
  end

  it 'using Fixnum argument' do
    @socket = UDPSocket.new(Socket::AF_INET)
    @socket.should be_an_instance_of(UDPSocket)
  end

  it 'using Symbol argument' do
    @socket = UDPSocket.new(:INET)
    @socket.should be_an_instance_of(UDPSocket)
  end

  it 'using String argument' do
    @socket = UDPSocket.new('INET')
    @socket.should be_an_instance_of(UDPSocket)
  end

  it 'raises Errno::EAFNOSUPPORT if unsupported family passed' do
    lambda { UDPSocket.new(-1) }.should raise_error(Errno::EAFNOSUPPORT)
  end
end
