require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#debug_mode" do
  it "returns true when self is in debug mode" do
    ftp = Net::FTP.new
    ftp.debug_mode.should be_false

    ftp.debug_mode = true
    ftp.debug_mode.should be_true
  end
end

describe "Net::FTP#debug_mode=" do
  it "sets self into debug mode when passed true" do
    ftp = Net::FTP.new
    ftp.debug_mode = true
    ftp.debug_mode.should be_true

    ftp.debug_mode = false
    ftp.debug_mode.should be_false
  end
end
