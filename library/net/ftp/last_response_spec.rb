require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#last_response" do
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

  it "returns the last response" do
    @ftp.last_response.should == "220 Dummy FTP Server ready!\n"
    @ftp.help
    @ftp.last_response.should == "211 System status, or system help reply. (HELP)\n"
  end
end
