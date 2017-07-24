require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#mtime" do
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
    @ftp.mtime("test.file")
    @ftp.last_response.should == "213 19980705132316\n"
  end

  describe "when passed filename" do
    it "returns the last modification time of the passed file as a Time object in the local time" do
      @ftp.mtime("test.file").should == Time.gm("1998", "07", "05", "13", "23", "16")
    end
  end

  describe "when passed filename, local_time" do
    it "returns the last modification time as a Time object in UTC when local_time is true" do
      @ftp.mtime("test.file", true).should == Time.local("1998", "07", "05", "13", "23", "16")
    end

    it "returns the last modification time as a Time object in the local time when local_time is false" do
      @ftp.mtime("test.file", false).should == Time.gm("1998", "07", "05", "13", "23", "16")
    end
  end

  it "raises a Net::FTPPermError when the response code is 550" do
    @server.should_receive(:mdtm).and_respond("550 Requested action not taken.")
    lambda { @ftp.mtime("test.file") }.should raise_error(Net::FTPPermError)
  end

  it "raises a Net::FTPTempError when the response code is 421" do
    @server.should_receive(:mdtm).and_respond("421 Service not available, closing control connection.")
    lambda { @ftp.mtime("test.file") }.should raise_error(Net::FTPTempError)
  end
end
