require File.expand_path('../../../spec_helper', __FILE__)
require 'net/ftp'

describe "Net::FTPError" do
  it "is an Exception" do
    Net::FTPError.should < Exception
  end
end
