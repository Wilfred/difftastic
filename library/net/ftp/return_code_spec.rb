require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#return_code" do
  before :each do
    @ftp = Net::FTP.new
  end

  it "outputs a warning and returns a newline" do
    lambda do
      @ftp.return_code.should == "\n"
    end.should complain("warning: Net::FTP#return_code is obsolete and do nothing\n")
  end
end

describe "Net::FTP#return_code=" do
  before :each do
    @ftp = Net::FTP.new
  end

  it "outputs a warning" do
    lambda { @ftp.return_code = 123 }.should complain("warning: Net::FTP#return_code= is obsolete and do nothing\n")
  end
end
