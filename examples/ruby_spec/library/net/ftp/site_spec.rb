require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#site" do
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

  it "sends the SITE command with the passed argument to the server" do
    @ftp.site("param")
    @ftp.last_response.should == "200 Command okay. (SITE param)\n"
  end

  it "returns nil" do
    @ftp.site("param").should be_nil
  end

  it "does not raise an error when the response code is 202" do
    @server.should_receive(:site).and_respond("202 Command not implemented, superfluous at this site.")
    lambda { @ftp.site("param") }.should_not raise_error
  end

  it "raises a Net::FTPPermError when the response code is 500" do
    @server.should_receive(:site).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.site("param") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 501" do
    @server.should_receive(:site).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.site("param") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:site).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.site("param") }.should raise_error(Net::FTPTempError)
  end

  it "raises a Net::FTPPermError when the response code is 530" do
    @server.should_receive(:site).and_respond("530 Requested action not taken.")
    lambda { @ftp.site("param") }.should raise_error(Net::FTPPermError)
  end
end
