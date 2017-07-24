require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#retrlines" do
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

  it "sends the passed command over the socket" do
    @ftp.retrlines("LIST test.dir") {}
    @ftp.last_response.should == "226 transfer complete (LIST test.dir)\n"
  end

  it "yields each received line to the passed block" do
    res = []
    @ftp.retrlines("LIST test.dir") { |x| res << x }
    res.should == [
      "-rw-r--r--  1 spec  staff  507 17 Jul 18:41 last_response_code.rb",
      "-rw-r--r--  1 spec  staff   50 17 Jul 18:41 list.rb",
      "-rw-r--r--  1 spec  staff   48 17 Jul 18:41 pwd.rb"
    ]
  end
end
