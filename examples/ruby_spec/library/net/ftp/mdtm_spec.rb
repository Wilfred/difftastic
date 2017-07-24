require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#mdtm" do
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

  it "sends the MDTM with the passed filename command to the server" do
    @ftp.mdtm("test.file")
    @ftp.last_response.should == "213 19980705132316\n"
  end

  it "returns the last modification time of the passed file" do
    @ftp.mdtm("test.file").should == "19980705132316"
  end

  it "raises a Net::FTPPermError when the response code is 550" do
    @server.should_receive(:mdtm).and_respond("550 Requested action not taken.")
    lambda { @ftp.mdtm("test.file") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:mdtm).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.mdtm("test.file") }.should raise_error(Net::FTPTempError)
  end
end
