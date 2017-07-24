require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#retrbinary" do
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

  it "sends the passed command to the server" do
    @ftp.retrbinary("RETR test", 4096) {}
    @ftp.last_response.should == "226 Closing data connection. (RETR test)\n"
  end

  it "yields the received content as binary blocks of the passed size" do
    res = []
    @ftp.retrbinary("RETR test", 10) { |bin| res << bin }
    res.should == [ "This is th", "e content\n", "of the fil", "e named 't", "est'.\n" ]
  end
end
