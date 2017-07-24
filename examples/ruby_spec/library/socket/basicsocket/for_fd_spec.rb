
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "BasicSocket#for_fd" do
  before :each do
    @server = TCPServer.new(0)
    @s2 = nil
  end

  after :each do
    @server.close if @server
  end

  it "return a Socket instance wrapped around the descriptor" do
    @s2 = TCPServer.for_fd(@server.fileno)
    @s2.autoclose = false
    @s2.should be_kind_of(TCPServer)
    @s2.fileno.should == @server.fileno
  end
end
