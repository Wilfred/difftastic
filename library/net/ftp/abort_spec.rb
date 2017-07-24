require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#abort" do
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

  it "sends the ABOR command to the server" do
    lambda { @ftp.abort }.should_not raise_error
  end

  it "ignores the response" do
    @ftp.abort
    @ftp.last_response.should == "220 Dummy FTP Server ready!\n"
  end

  it "returns the full response" do
    @ftp.abort.should == "226 Closing data connection. (ABOR)\n"
  end

  it "does not raise any error when the response code is 225" do
    @server.should_receive(:abor).and_respond("225 Data connection open; no transfer in progress.")
    lambda { @ftp.abort }.should_not raise_error
  end

  it "does not raise any error when the response code is 226" do
    @server.should_receive(:abor).and_respond("226 Closing data connection.")
    lambda { @ftp.abort }.should_not raise_error
  end

  it "raises a Net::FTPProtoError when the response code is 500" do
    @server.should_receive(:abor).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.abort }.should raise_error(Net::FTPProtoError)
  end

  it "raises a Net::FTPProtoError when the response code is 501" do
    @server.should_receive(:abor).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.abort }.should raise_error(Net::FTPProtoError)
  end

  it "raises a Net::FTPProtoError when the response code is 502" do
    @server.should_receive(:abor).and_respond("502 Command not implemented.")
    lambda { @ftp.abort }.should raise_error(Net::FTPProtoError)
  end

  it "raises a Net::FTPProtoError when the response code is 421" do
    @server.should_receive(:abor).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.abort }.should raise_error(Net::FTPProtoError)
  end
end
