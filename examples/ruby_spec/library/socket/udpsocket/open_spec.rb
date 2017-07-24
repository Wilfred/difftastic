require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UDPSocket.open" do
  after :each do
    @socket.close if @socket && !@socket.closed?
  end

  it "allows calls to open without arguments" do
    @socket = UDPSocket.open
    @socket.should be_kind_of(UDPSocket)
  end
end
