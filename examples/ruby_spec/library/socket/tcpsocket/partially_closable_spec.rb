require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../../shared/partially_closable_sockets', __FILE__)

describe "TCPSocket partial closability" do

  before :each do
    @server = TCPServer.new("127.0.0.1", 0)
    @s1 = TCPSocket.new("127.0.0.1", @server.addr[1])
    @s2 = @server.accept
  end

  after :each do
    @server.close
    @s1.close
    @s2.close
  end

  it_should_behave_like "partially closable sockets"

end
