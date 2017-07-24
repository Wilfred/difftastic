require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#rename" do
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

  describe "when passed from_name, to_name" do
    it "sends the RNFR command with the passed from_name and the RNTO command with the passed to_name to the server" do
      @ftp.rename("from.file", "to.file")
      @ftp.last_response.should == "250 Requested file action okay, completed. (Renamed from.file to to.file)\n"
    end

    it "returns something" do
      @ftp.rename("from.file", "to.file").should be_nil
    end
  end

  describe "when the RNFR command fails" do
    it "raises a Net::FTPTempError when the response code is 450" do
      @server.should_receive(:rnfr).and_respond("450 Requested file action not taken.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 550" do
      @server.should_receive(:rnfr).and_respond("550 Requested action not taken.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:rnfr).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 502" do
      @server.should_receive(:rnfr).and_respond("502 Command not implemented.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:rnfr).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:rnfr).and_respond("530 Not logged in.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end
  end

  describe "when the RNTO command fails" do
    it "raises a Net::FTPPermError when the response code is 532" do
      @server.should_receive(:rnfr).and_respond("532 Need account for storing files.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 553" do
      @server.should_receive(:rnto).and_respond("553 Requested action not taken.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:rnto).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 502" do
      @server.should_receive(:rnto).and_respond("502 Command not implemented.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:rnto).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:rnto).and_respond("530 Not logged in.")
      lambda { @ftp.rename("from.file", "to.file") }.should raise_error(Net::FTPPermError)
    end
  end
end
