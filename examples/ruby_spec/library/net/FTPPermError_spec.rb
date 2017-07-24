require File.expand_path('../../../spec_helper', __FILE__)
require 'net/ftp'

describe "Net::FTPPermError" do
  it "is an Exception" do
    Net::FTPPermError.should < Exception
  end

  it "is a subclass of Net::FTPError" do
    Net::FTPPermError.should < Net::FTPError
  end
end
