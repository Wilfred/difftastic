require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#pwd" do
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

  it "sends the PWD command to the server" do
    @ftp.pwd
    @ftp.last_response.should == "257 \"/some/dir/\" - current directory\n"
  end

  it "returns the current directory" do
    @ftp.pwd.should == "/some/dir/"
  end

  it "raises a Net::FTPPermError when the response code is 500" do
    @server.should_receive(:pwd).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.pwd }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 501" do
    @server.should_receive(:pwd).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.pwd }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 502" do
    @server.should_receive(:pwd).and_respond("502 Command not implemented.")
    lambda { @ftp.pwd }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:pwd).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.pwd }.should raise_error(Net::FTPTempError)
  end

  it "raises a Net::FTPPermError when the response code is 550" do
    @server.should_receive(:pwd).and_respond("550 Requested action not taken.")
    lambda { @ftp.pwd }.should raise_error(Net::FTPPermError)
  end
end
