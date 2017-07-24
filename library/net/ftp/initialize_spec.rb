require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#initialize" do
  before :each do
    @ftp = Net::FTP.allocate
    @ftp.stub!(:connect)
  end

  it "is private" do
    Net::FTP.should have_private_instance_method(:initialize)
  end

  it "sets self into binary mode" do
    @ftp.binary.should be_nil
    @ftp.send(:initialize)
    @ftp.binary.should be_true
  end

  it "sets self into active mode" do
    @ftp.passive.should be_nil
    @ftp.send(:initialize)
    @ftp.passive.should be_false
  end

  it "sets self into non-debug mode" do
    @ftp.debug_mode.should be_nil
    @ftp.send(:initialize)
    @ftp.debug_mode.should be_false
  end

  it "sets self to not resume file uploads/downloads" do
    @ftp.resume.should be_nil
    @ftp.send(:initialize)
    @ftp.resume.should be_false
  end

  describe "when passed no arguments" do
    it "does not try to connect" do
      @ftp.should_not_receive(:connect)
      @ftp.send(:initialize)
    end
  end

  describe "when passed host" do
    it "tries to connect to the passed host" do
      @ftp.should_receive(:connect).with("localhost")
      @ftp.send(:initialize, "localhost")
    end
  end

  describe "when passed host, user" do
    it "tries to connect to the passed host" do
      @ftp.should_receive(:connect).with("localhost")
      @ftp.send(:initialize, "localhost")
    end

    it "tries to login with the passed username" do
      @ftp.should_receive(:login).with("rubyspec", nil, nil)
      @ftp.send(:initialize, "localhost", "rubyspec")
    end
  end

  describe "when passed host, user, password" do
    it "tries to connect to the passed host" do
      @ftp.should_receive(:connect).with("localhost")
      @ftp.send(:initialize, "localhost")
    end

    it "tries to login with the passed username and password" do
      @ftp.should_receive(:login).with("rubyspec", "rocks", nil)
      @ftp.send(:initialize, "localhost", "rubyspec", "rocks")
    end
  end

  describe "when passed host, user" do
    it "tries to connect to the passed host" do
      @ftp.should_receive(:connect).with("localhost")
      @ftp.send(:initialize, "localhost")
    end

    it "tries to login with the passed username, password and account" do
      @ftp.should_receive(:login).with("rubyspec", "rocks", "account")
      @ftp.send(:initialize, "localhost", "rubyspec", "rocks", "account")
    end
  end
end
