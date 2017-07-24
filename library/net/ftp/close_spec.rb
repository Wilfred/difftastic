require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#close" do
  before :each do
    @socket = mock("Socket")
    @socket.stub!(:closed?).and_return(false)
    @socket.stub!(:read_timeout).and_return(60)
    @socket.stub!(:read_timeout=).and_return(3)

    @ftp = Net::FTP.new
    @ftp.instance_variable_set(:@sock, @socket)
  end

  it "closes the socket" do
    @socket.should_receive(:close)
    @ftp.close.should be_nil
  end

  it "does not try to close the socket if it has already been closed" do
    @socket.should_receive(:closed?).and_return(true)
    @socket.should_not_receive(:close)
    @ftp.close.should be_nil
  end

  it "does not try to close the socket if it is nil" do
    @ftp.instance_variable_set(:@sock, nil)
    @ftp.close.should be_nil
  end
end
