require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#voidcmd" do
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
    @server.should_receive(:help).and_respond("2xx Does not raise.")
    lambda { @ftp.voidcmd("HELP") }.should_not raise_error
  end

  it "returns nil" do
    @server.should_receive(:help).and_respond("2xx Does not raise.")
    @ftp.voidcmd("HELP").should be_nil
  end

  it "raises a Net::FTPReplyError when the response code is 1xx" do
    @server.should_receive(:help).and_respond("1xx Does raise a Net::FTPReplyError.")
    lambda { @ftp.voidcmd("HELP")  }.should raise_error(Net::FTPReplyError)
  end

  it "raises a Net::FTPReplyError when the response code is 3xx" do
    @server.should_receive(:help).and_respond("3xx Does raise a Net::FTPReplyError.")
    lambda { @ftp.voidcmd("HELP") }.should raise_error(Net::FTPReplyError)
  end

  it "raises a Net::FTPTempError when the response code is 4xx" do
    @server.should_receive(:help).and_respond("4xx Does raise a Net::FTPTempError.")
    lambda { @ftp.voidcmd("HELP") }.should raise_error(Net::FTPTempError)
  end

  it "raises a Net::FTPPermError when the response code is 5xx" do
    @server.should_receive(:help).and_respond("5xx Does raise a Net::FTPPermError.")
    lambda { @ftp.voidcmd("HELP") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPProtoError when the response code is not valid" do
    @server.should_receive(:help).and_respond("999 Does raise a Net::FTPProtoError.")
    lambda { @ftp.voidcmd("HELP") }.should raise_error(Net::FTPProtoError)
  end
end
