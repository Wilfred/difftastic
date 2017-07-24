require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#storlines" do
  before :each do
    @server = NetFTPSpecs::DummyFTP.new
    @server.serve_once

    @local_fixture_file  = File.dirname(__FILE__) + "/fixtures/puttextfile"
    @tmp_file = tmp("textfile", false)

    @ftp = Net::FTP.new
    @ftp.connect(@server.hostname, @server.server_port)
  end

  after :each do
    @ftp.quit rescue nil
    @ftp.close
    @server.stop

    rm_r @tmp_file
  end

  it "sends the passed command and the passed File object's content to the server" do
    File.open(@local_fixture_file) do |f|
      @ftp.storlines("STOR text", f) {}
      @ftp.last_response.should == "200 OK, Data received. (STOR text)\n"
    end
  end

  it "yields each line of the transmitted content" do
    File.open(@local_fixture_file) do |f|
      res = []
      @ftp.storlines("STOR text", f) { |x| res << x }
      res.should == [
        "This is an example file\r\n",
        "which is going to be transmitted\r\n",
        "using #puttextfile.\r\n"
      ]
    end
  end
end
