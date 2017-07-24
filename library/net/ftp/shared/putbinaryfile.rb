describe :net_ftp_putbinaryfile, shared: :true do
  before :each do
    @server = NetFTPSpecs::DummyFTP.new
    @server.serve_once

    @local_fixture_file  = File.dirname(__FILE__) + "/../fixtures/putbinaryfile"
    @remote_tmp_file = tmp("binaryfile", false)

    @ftp = Net::FTP.new
    @ftp.connect(@server.hostname, @server.server_port)
    @ftp.binary = @binary_mode
  end

  after :each do
    @ftp.quit rescue nil
    @ftp.close
    @server.stop

    rm_r @remote_tmp_file
  end

  it "sends the STOR command to the server" do
    @ftp.send(@method, @local_fixture_file, "binary")
    @ftp.last_response.should == "200 OK, Data received. (STOR binary)\n"
  end

  it "sends the contents of the passed local_file, without modifications" do
    @ftp.send(@method, @local_fixture_file, "binary")

    remote_lines = File.readlines(@remote_tmp_file)
    local_lines  = File.readlines(@local_fixture_file)

    remote_lines.should == local_lines
  end

  it "returns nil" do
    @ftp.send(@method, @local_fixture_file, "binary").should be_nil
  end

  describe "when passed a block" do
    it "yields the transmitted content as binary blocks of the passed size" do
      res = []
      @ftp.send(@method, @local_fixture_file, "binary", 10) { |x| res << x }
      res.should == [
        "This is an", " example f",
        "ile\nwhich ", "is going t",
        "o be trans", "mitted\nusi",
        "ng #putbin", "aryfile.\n"
      ]
    end
  end

  describe "when resuming an existing file" do
    before :each do
      File.open(@remote_tmp_file, "w") do |f|
        f << "This is an example file\n"
      end

      @ftp.resume = true
    end

    it "sends the remaining content of the passed local_file to the passed remote_file" do
      @ftp.send(@method, @local_fixture_file, "binary")
      File.read(@remote_tmp_file).should == File.read(@local_fixture_file)
    end

    describe "and the APPE command fails" do
      it "raises a Net::FTPProtoError when the response code is 550" do
        @server.should_receive(:appe).and_respond("Requested action not taken.")
        lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPProtoError)
      end

      it "raises a Net::FTPPermError when the response code is 500" do
        @server.should_receive(:appe).and_respond("500 Syntax error, command unrecognized.")
        lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
      end

      it "raises a Net::FTPPermError when the response code is 501" do
        @server.should_receive(:appe).and_respond("501 Syntax error, command unrecognized.")
        lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
      end

      it "raises a Net::FTPPermError when the response code is 502" do
        @server.should_receive(:appe).and_respond("502 Command not implemented.")
        lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
      end

      it "raises a Net::FTPTempError when the response code is 421" do
        @server.should_receive(:appe).and_respond("421 Service not available, closing control connection.")
        lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPTempError)
      end

      it "raises a Net::FTPPermError when the response code is 530" do
        @server.should_receive(:appe).and_respond("530 Not logged in.")
        lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
      end
    end
  end

  describe "when the STOR command fails" do
    it "raises a Net::FTPPermError when the response code is 532" do
      @server.should_receive(:stor).and_respond("532 Need account for storing files.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 450" do
      @server.should_receive(:stor).and_respond("450 Requested file action not taken.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPTempError when the response code is 452" do
      @server.should_receive(:stor).and_respond("452 Requested action not taken.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 553" do
      @server.should_receive(:stor).and_respond("553 Requested action not taken.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:stor).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:stor).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:stor).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:stor).and_respond("530 Not logged in.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end
  end

  describe "when opening the data port fails" do
    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:eprt).and_respond("500 Syntax error, command unrecognized.")
      @server.should_receive(:port).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:eprt).and_respond("501 Syntax error in parameters or arguments.")
      @server.should_receive(:port).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:eprt).and_respond("421 Service not available, closing control connection.")
      @server.should_receive(:port).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:eprt).and_respond("530 Not logged in.")
      @server.should_receive(:port).and_respond("530 Not logged in.")
      lambda { @ftp.send(@method, @local_fixture_file, "binary") }.should raise_error(Net::FTPPermError)
    end
  end
end
