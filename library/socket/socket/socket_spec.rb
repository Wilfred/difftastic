require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Socket" do
  it "inherits from BasicSocket and IO" do
    Socket.superclass.should == BasicSocket
    BasicSocket.superclass.should == IO
  end
end

describe "The socket class hierarchy" do
  it "has an IPSocket in parallel to Socket" do
    Socket.ancestors.include?(IPSocket).should == false
    IPSocket.ancestors.include?(Socket).should == false
    IPSocket.superclass.should == BasicSocket
  end

  it "has TCPSocket and UDPSocket subclasses of IPSocket" do
    TCPSocket.superclass.should == IPSocket
    UDPSocket.superclass.should == IPSocket
  end

  platform_is_not :windows do
    it "has a UNIXSocket in parallel to Socket" do
      Socket.ancestors.include?(UNIXSocket).should == false
      UNIXSocket.ancestors.include?(Socket).should == false
      UNIXSocket.superclass.should == BasicSocket
    end
  end
end

platform_is_not :windows do
  describe "Server class hierarchy" do
    it "contains UNIXServer" do
      UNIXServer.superclass.should == UNIXSocket
    end
  end
end
