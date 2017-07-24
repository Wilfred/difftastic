require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#binary" do
  it "returns true when self is in binary mode" do
    ftp = Net::FTP.new
    ftp.binary.should be_true

    ftp.binary = false
    ftp.binary.should be_false
  end
end

describe "Net::FTP#binary=" do
  it "sets self to binary mode when passed true" do
    ftp = Net::FTP.new

    ftp.binary = true
    ftp.binary.should be_true

    ftp.binary = false
    ftp.binary.should be_false
  end
end
