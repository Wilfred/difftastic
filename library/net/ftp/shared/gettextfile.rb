describe :net_ftp_gettextfile, shared: :true do
  before :each do
    @tmp_file = tmp("gettextfile")

    @server = NetFTPSpecs::DummyFTP.new
    @server.serve_once

    @ftp = Net::FTP.new
    @ftp.connect(@server.hostname, @server.server_port)
    @ftp.binary = @binary_mode
  end

  after :each do
    @ftp.quit rescue nil
    @ftp.close
    @server.stop

    rm_r @tmp_file
  end

  it "sends the RETR command to the server" do
    @ftp.send(@method, "test", @tmp_file)
    @ftp.last_response.should == "226 Closing data connection. (RETR test)\n"
  end

  it "returns nil" do
    @ftp.send(@method, "test", @tmp_file).should be_nil
  end

  it "saves the contents of the passed remote file to the passed local file" do
    @ftp.send(@method, "test", @tmp_file)
    File.read(@tmp_file).should == "This is the content\nof the file named 'test'.\n"
  end

  describe "when passed a block" do
    it "yields each line of the retrieved file to the passed block" do
      res = []
      @ftp.send(@method, "test", @tmp_file) { |line| res << line }
      res.should == [ "This is the content", "of the file named 'test'."]
    end
  end

  describe "when the RETR command fails" do
    it "raises a Net::FTPTempError when the response code is 450" do
      @server.should_receive(:retr).and_respond("450 Requested file action not taken.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPProtoError when the response code is 550" do
      @server.should_receive(:retr).and_respond("Requested action not taken.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPProtoError)
    end

    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:retr).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:retr).and_respond("501 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:retr).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:retr).and_respond("530 Not logged in.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPPermError)
    end
  end

  describe "when opening the data port fails" do
    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:eprt).and_respond("500 Syntax error, command unrecognized.")
      @server.should_receive(:port).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:eprt).and_respond("501 Syntax error in parameters or arguments.")
      @server.should_receive(:port).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:eprt).and_respond("421 Service not available, closing control connection.")
      @server.should_receive(:port).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:eprt).and_respond("530 Not logged in.")
      @server.should_receive(:port).and_respond("530 Not logged in.")
      lambda { @ftp.send(@method, "test", @tmp_file) }.should raise_error(Net::FTPPermError)
    end
  end
end
