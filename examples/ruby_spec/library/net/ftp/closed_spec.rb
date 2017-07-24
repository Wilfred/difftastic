require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#closed?" do
  before :each do
    @socket = mock("Socket")

    @ftp = Net::FTP.new
    @ftp.instance_variable_set(:@sock, @socket)
  end

  it "returns true when the socket is closed" do
    @socket.should_receive(:closed?).and_return(true)
    @ftp.closed?.should be_true
  end

  it "returns true when the socket is nil" do
    @ftp.instance_variable_set(:@sock, nil)
    @ftp.closed?.should be_true
  end
end
