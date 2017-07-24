require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#acct" do
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

  it "writes the ACCT command to the server" do
    @ftp.acct("my_account")
    @ftp.last_response.should == "230 User 'my_account' logged in, proceed. (ACCT)\n"
  end

  it "returns nil" do
    @ftp.acct("my_account").should == nil
  end

  it "does not raise any error when the response code is 230" do
    @server.should_receive(:acct).and_respond("230 User logged in, proceed.")
    lambda { @ftp.acct("my_account") }.should_not raise_error
  end

  it "raises a Net::FTPPermError when the response code is 530" do
    @server.should_receive(:acct).and_respond("530 Not logged in.")
    lambda { @ftp.acct("my_account") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 500" do
    @server.should_receive(:acct).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.acct("my_account") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 501" do
    @server.should_receive(:acct).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.acct("my_account") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 503" do
    @server.should_receive(:acct).and_respond("503 Bad sequence of commands.")
    lambda { @ftp.acct("my_account") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:acct).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.acct("my_account") }.should raise_error(Net::FTPTempError)
  end
end
