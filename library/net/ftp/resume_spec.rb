require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#resume" do
  it "returns true when self is set to resume uploads/downloads" do
    ftp = Net::FTP.new
    ftp.resume.should be_false

    ftp.resume = true
    ftp.resume.should be_true
  end
end

describe "Net::FTP#resume=" do
  it "sets self to resume uploads/downloads when set to true" do
    ftp = Net::FTP.new
    ftp.resume = true
    ftp.resume.should be_true

    ftp.resume = false
    ftp.resume.should be_false
  end
end
