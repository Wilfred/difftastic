require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)
require File.expand_path('../../shared/partially_closable_sockets', __FILE__)

platform_is_not :windows do
  describe "UNIXSocket partial closability" do

    before :each do
      @path = SocketSpecs.socket_path
      @server = UNIXServer.open(@path)
      @s1 = UNIXSocket.new(@path)
      @s2 = @server.accept
    end

    after :each do
      @server.close
      @s1.close
      @s2.close
      SocketSpecs.rm_socket @path
    end

    it_should_behave_like "partially closable sockets"

  end
end
