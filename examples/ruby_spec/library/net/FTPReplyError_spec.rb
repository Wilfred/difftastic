require File.expand_path('../../../spec_helper', __FILE__)
require 'net/ftp'

describe "Net::FTPReplyError" do
  it "is an Exception" do
    Net::FTPReplyError.should < Exception
  end

  it "is a subclass of Net::FTPError" do
    Net::FTPPermError.should < Net::FTPError
  end
end
