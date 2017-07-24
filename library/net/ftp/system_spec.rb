require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#system" do
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

  it "sends the SYST command to the server" do
    @ftp.system
    @ftp.last_response.should =~ /\A215 FTP Dummy Server \(SYST\)\Z/
  end

  it "returns the received information" do
    @ftp.system.should =~ /\AFTP Dummy Server \(SYST\)\Z/
  end

  it "raises a Net::FTPPermError when the response code is 500" do
    @server.should_receive(:syst).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.system }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 501" do
    @server.should_receive(:syst).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.system }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 502" do
    @server.should_receive(:syst).and_respond("502 Command not implemented.")
    lambda { @ftp.system }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:syst).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.system }.should raise_error(Net::FTPTempError)
  end
end
