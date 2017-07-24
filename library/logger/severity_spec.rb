require File.expand_path('../../../spec_helper', __FILE__)
require 'logger'

describe "Logger::Severity" do
  it "defines Logger severity constants" do
    Logger::DEBUG.should == 0
    Logger::INFO.should == 1
    Logger::WARN.should == 2
    Logger::ERROR.should == 3
    Logger::FATAL.should == 4
    Logger::UNKNOWN.should == 5
  end
end
