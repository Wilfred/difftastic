describe :socket_socketpair, shared: true do
  platform_is_not :windows do
    it "ensures the returned sockets are connected" do
      s1, s2 = Socket.public_send(@method, Socket::AF_UNIX, 1, 0)
      s1.puts("test")
      s2.gets.should == "test\n"
      s1.close
      s2.close
    end

    it "responses with array of two sockets" do
      begin
        s1, s2 = Socket.public_send(@method, :UNIX, :STREAM)

        s1.should be_an_instance_of(Socket)
        s2.should be_an_instance_of(Socket)
      ensure
        s1.close
        s2.close
      end
    end
  end
end
