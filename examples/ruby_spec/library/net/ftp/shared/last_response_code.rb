describe :net_ftp_last_response_code, shared: true do
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

  it "returns the response code for the last response" do
    @server.should_receive(:help).and_respond("200 Command okay.")
    @ftp.help
    @ftp.send(@method).should == "200"

    @server.should_receive(:help).and_respond("212 Directory status.")
    @ftp.help
    @ftp.send(@method).should == "212"
  end
end
