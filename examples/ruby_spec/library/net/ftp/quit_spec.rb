require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#quit" do
  before :each do
    @server = NetFTPSpecs::DummyFTP.new
    @server.serve_once

    @ftp = Net::FTP.new
    @ftp.connect(@server.hostname, @server.server_port)
  end

  after :each do
    @ftp.quit rescue nil
    @ftp.close
    @server.stop
  end

  it "sends the QUIT command to the server" do
    @ftp.quit
    @ftp.last_response.should == "221 OK, bye\n"
  end

  it "does not close the socket automagically" do
    @ftp.quit
    @ftp.closed?.should be_false
  end

  it "returns nil" do
    @ftp.quit.should be_nil
  end
end
