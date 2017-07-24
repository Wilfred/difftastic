require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP.open" do
  before :each do
    @ftp = mock("Net::FTP instance")
    Net::FTP.stub!(:new).and_return(@ftp)
  end

  describe "when passed no block" do
    it "returns a new Net::FTP instance" do
      Net::FTP.open("localhost").should equal(@ftp)
    end

    it "passes the passed arguments down to Net::FTP.new" do
      Net::FTP.should_receive(:new).with("localhost", "user", "password", "account")
      Net::FTP.open("localhost", "user", "password", "account")
    end
  end

  describe "when passed a block" do
    before :each do
      @ftp.stub!(:close)
    end

    it "yields a new Net::FTP instance to the passed block" do
      yielded = false
      Net::FTP.open("localhost") do |ftp|
        yielded = true
        ftp.should equal(@ftp)
      end
      yielded.should be_true
    end

    it "closes the Net::FTP instance after yielding" do
      Net::FTP.open("localhost") do |ftp|
        ftp.should_receive(:close)
      end
    end

    it "closes the Net::FTP instance even if an exception is raised while yielding" do
      begin
        Net::FTP.open("localhost") do |ftp|
          ftp.should_receive(:close)
          raise ArgumentError, "some exception"
        end
      rescue ArgumentError
      end
    end

    it "returns the block's return value" do
      Net::FTP.open("localhost") { :test }.should == :test
    end
  end
end
