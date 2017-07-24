require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#help" do
  def with_connection
    yield
  end

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

  it "writes the HELP command to the server" do
    @ftp.help
    @ftp.last_response.should == "211 System status, or system help reply. (HELP)\n"
  end

  it "returns the server's response" do
    @ftp.help.should == "211 System status, or system help reply. (HELP)\n"
  end

  it "writes the HELP command with an optional parameter to the socket" do
    @ftp.help("some parameter").should == "211 System status, or system help reply. (HELP some parameter)\n"
  end

  it "does not raise any error when the response code is 211" do
    @server.should_receive(:help).and_respond("211 System status, or system help reply.")
    lambda { @ftp.help }.should_not raise_error
  end

  it "does not raise any error when the response code is 214" do
    @server.should_receive(:help).and_respond("214 Help message.")
    lambda { @ftp.help }.should_not raise_error
  end

  it "raises a Net::FTPPermError when the response code is 500" do
    @server.should_receive(:help).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.help }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 501" do
    @server.should_receive(:help).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.help }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 502" do
    @server.should_receive(:help).and_respond("502 Command not implemented.")
    lambda { @ftp.help }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:help).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.help }.should raise_error(Net::FTPTempError)
  end
end
