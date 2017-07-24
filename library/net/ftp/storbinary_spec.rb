require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#storbinary" do
  before :each do
    @server = NetFTPSpecs::DummyFTP.new
    @server.serve_once

    @local_fixture_file  = File.dirname(__FILE__) + "/fixtures/putbinaryfile"
    @tmp_file = tmp("binaryfile", false)

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
      f.binmode

      @ftp.storbinary("STOR binary", f, 4096) {}
      @ftp.last_response.should == "200 OK, Data received. (STOR binary)\n"
    end
  end

  it "yields the transmitted content as binary blocks of the passed size" do
    File.open(@local_fixture_file) do |f|
      f.binmode

      res = []
      @ftp.storbinary("STOR binary", f, 10) { |x| res << x }
      res.should == [
        "This is an", " example f",
        "ile\nwhich ", "is going t",
        "o be trans", "mitted\nusi",
        "ng #putbin", "aryfile.\n"
      ]
    end
  end
end
