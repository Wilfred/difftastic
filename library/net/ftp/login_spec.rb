require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)
require File.expand_path('../fixtures/server', __FILE__)

describe "Net::FTP#login" do
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

  describe "when passed no arguments" do
    it "sends the USER command with 'anonymous' as name to the server" do
      @ftp.login
      @server.login_user.should == "anonymous"
    end

    it "sends 'anonymous@' as a password when required" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @ftp.login
      @server.login_pass.should == "anonymous@"
    end

    it "raises a Net::FTPReplyError when the server requests an account" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @server.should_receive(:pass).and_respond("332 Need account for login.")
      lambda { @ftp.login }.should raise_error(Net::FTPReplyError)
    end
  end

  describe "when passed name" do
    it "sends the USER command with the passed name to the server" do
      @ftp.login("rubyspec")
      @server.login_user.should == "rubyspec"
    end

    it "raises a Net::FTPReplyError when the server requests a password, but none was given" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      lambda { @ftp.login("rubyspec") }.should raise_error(Net::FTPReplyError)
    end

    it "raises a Net::FTPReplyError when the server requests an account, but none was given" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @server.should_receive(:pass).and_respond("332 Need account for login.")
      lambda { @ftp.login("rubyspec") }.should raise_error(Net::FTPReplyError)
    end
  end

  describe "when passed name, password" do
    it "sends the USER command with the passed name to the server" do
      @ftp.login("rubyspec", "rocks")
      @server.login_user.should == "rubyspec"
    end

    it "sends the passed password when required" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @ftp.login("rubyspec", "rocks")
      @server.login_pass.should == "rocks"
    end

    it "raises a Net::FTPReplyError when the server requests an account" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @server.should_receive(:pass).and_respond("332 Need account for login.")
      lambda { @ftp.login("rubyspec", "rocks") }.should raise_error(Net::FTPReplyError)
    end
  end

  describe "when passed name, password, account" do
    it "sends the USER command with the passed name to the server" do
      @ftp.login("rubyspec", "rocks", "account")
      @server.login_user.should == "rubyspec"
    end

    it "sends the passed password when required" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @ftp.login("rubyspec", "rocks", "account")
      @server.login_pass.should == "rocks"
    end

    it "sends the passed account when required" do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @server.should_receive(:pass).and_respond("332 Need account for login.")
      @ftp.login("rubyspec", "rocks", "account")
      @server.login_acct.should == "account"
    end
  end

  describe "when the USER command fails" do
    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:user).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:user).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 502" do
      @server.should_receive(:user).and_respond("502 Command not implemented.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:user).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:user).and_respond("530 Not logged in.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end
  end

  describe "when the PASS command fails" do
    before :each do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
    end

    it "does not raise an Error when the response code is 202" do
      @server.should_receive(:pass).and_respond("202 Command not implemented, superfluous at this site.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should_not raise_error
    end

    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:pass).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:pass).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 502" do
      @server.should_receive(:pass).and_respond("502 Command not implemented.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:pass).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:pass).and_respond("530 Not logged in.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end
  end

  describe "when the ACCT command fails" do
    before :each do
      @server.should_receive(:user).and_respond("331 User name okay, need password.")
      @server.should_receive(:pass).and_respond("332 Need account for login.")
    end

    it "does not raise an Error when the response code is 202" do
      @server.should_receive(:acct).and_respond("202 Command not implemented, superfluous at this site.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should_not raise_error
    end

    it "raises a Net::FTPPermError when the response code is 500" do
      @server.should_receive(:acct).and_respond("500 Syntax error, command unrecognized.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 501" do
      @server.should_receive(:acct).and_respond("501 Syntax error in parameters or arguments.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPPermError when the response code is 502" do
      @server.should_receive(:acct).and_respond("502 Command not implemented.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end

    it "raises a Net::FTPTempError when the response code is 421" do
      @server.should_receive(:acct).and_respond("421 Service not available, closing control connection.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPTempError)
    end

    it "raises a Net::FTPPermError when the response code is 530" do
      @server.should_receive(:acct).and_respond("530 Not logged in.")
      lambda { @ftp.login("rubyspec", "rocks", "account") }.should raise_error(Net::FTPPermError)
    end
  end
end
