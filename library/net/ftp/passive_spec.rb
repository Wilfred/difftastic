require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../spec_helper', __FILE__)

describe "Net::FTP#passive" do
  it "returns true when self is in passive mode" do
    ftp = Net::FTP.new
    ftp.passive.should be_false

    ftp.passive = true
    ftp.passive.should be_true
  end

  ruby_version_is ""..."2.3" do
    it "is false by default" do
      ruby_exe(fixture(__FILE__, "passive.rb")).should == "false"
    end
  end

  ruby_version_is "2.3" do
    it "is the value of Net::FTP.default_value by default" do
      ruby_exe(fixture(__FILE__, "passive.rb")).should == "true"
    end
  end
end

describe "Net::FTP#passive=" do
  it "sets self to passive mode when passed true" do
    ftp = Net::FTP.new

    ftp.passive = true
    ftp.passive.should be_true

    ftp.passive = false
    ftp.passive.should be_false
  end
end
