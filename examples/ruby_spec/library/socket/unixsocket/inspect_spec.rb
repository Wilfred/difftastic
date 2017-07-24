require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "UNIXSocket#inspect" do
  platform_is_not :windows do
    it "returns sockets fd for unnamed sockets" do
      begin
        s1, s2 = UNIXSocket.socketpair
        s1.inspect.should == "#<UNIXSocket:fd #{s1.fileno}>"
        s2.inspect.should == "#<UNIXSocket:fd #{s2.fileno}>"
      ensure
        s1.close
        s2.close
      end
    end
  end
end
