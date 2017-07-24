require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#mkdir" do
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

  it "sends the MKD command with the passed pathname to the server" do
    @ftp.mkdir("test.folder")
    @ftp.last_response.should == %{257 "test.folder" created.\n}
  end

  it "returns the path to the newly created directory" do
    @ftp.mkdir("test.folder").should == "test.folder"
    @ftp.mkdir("/absolute/path/to/test.folder").should == "/absolute/path/to/test.folder"
    @ftp.mkdir("relative/path/to/test.folder").should == "relative/path/to/test.folder"
    @ftp.mkdir('/usr/dm/foo"bar').should == '/usr/dm/foo"bar'
  end

  it "raises a Net::FTPPermError when the response code is 500" do
    @server.should_receive(:mkd).and_respond("500 Syntax error, command unrecognized.")
    lambda { @ftp.mkdir("test.folder") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 501" do
    @server.should_receive(:mkd).and_respond("501 Syntax error in parameters or arguments.")
    lambda { @ftp.mkdir("test.folder") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 502" do
    @server.should_receive(:mkd).and_respond("502 Command not implemented.")
    lambda { @ftp.mkdir("test.folder") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:mkd).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.mkdir("test.folder") }.should raise_error(Net::FTPTempError)
  end

  it "raises a Net::FTPPermError when the response code is 530" do
    @server.should_receive(:mkd).and_respond("530 Not logged in.")
    lambda { @ftp.mkdir("test.folder") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPPermError when the response code is 550" do
    @server.should_receive(:mkd).and_respond("550 Requested action not taken.")
    lambda { @ftp.mkdir("test.folder") }.should raise_error(Net::FTPPermError)
  end
end
