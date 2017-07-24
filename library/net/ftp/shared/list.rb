describe :net_ftp_list, shared: true do
  before :each do
    @server = NetFTPSpecs::DummyFTP.new
    @server.serve_once

    @ftp = Net::FTP.new
    @ftp.passive = false
    @ftp.connect(@server.hostname, @server.server_port)
  end

  after :each do
    @ftp.quit rescue nil
    @ftp.close
    @server.stop
  end

  describe "when passed a block" do
    it "yields each file in the list of files in the passed dir" do
      expected = [
        "-rw-r--r--  1 spec  staff  507 17 Jul 18:41 last_response_code.rb",
        "-rw-r--r--  1 spec  staff   50 17 Jul 18:41 list.rb",
        "-rw-r--r--  1 spec  staff   48 17 Jul 18:41 pwd.rb"
      ]

      res = []
      @ftp.send(@method, "test.folder") { |line| res << line}
      res.should == expected

      @ftp.last_response.should == "226 transfer complete (LIST test.folder)\n"
    end
  end

  describe "when passed no block" do
    it "returns an Array containing a list of files in the passed dir" do
      expected = [
        "-rw-r--r--  1 spec  staff  507 17 Jul 18:41 last_response_code.rb",
        "-rw-r--r--  1 spec  staff   50 17 Jul 18:41 list.rb",
        "-rw-r--r--  1 spec  staff   48 17 Jul 18:41 pwd.rb"
      ]

      @ftp.send(@method, "test.folder").should == expected

      @ftp.last_response.should == "226 transfer complete (LIST test.folder)\n"
    end
  end

  describe "when the LIST command fails" do
    it "raises a Net::FTPTempError when the response code is 450" do
      @server.should_receive(:list).and_respond("450 Requested file action not taken..")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:list).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:list).and_respond("501 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 502" do
      @server.should_receive(:list).and_respond("502 Command not implemented.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:list).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:list).and_respond("530 Not logged in.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end
  end

  describe "when opening the data port fails" do
    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:eprt).and_respond("500 Syntax error, command unrecognized.")
      @server.should_receive(:port).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:eprt).and_respond("501 Syntax error in parameters or arguments.")
      @server.should_receive(:port).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:eprt).and_respond("421 Service not available, closing control connection.")
      @server.should_receive(:port).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:eprt).and_respond("530 Not logged in.")
      @server.should_receive(:port).and_respond("530 Not logged in.")
      lambda { @ftp.send(@method) }.should raise_error(Net::FTPPermError)
    end
  end
end
