require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger#unknown" do
  before :each do
    @path = tmp("test_log.log")
    @log_file = File.open(@path, "w+")
    @logger = Logger.new(@path)
  end

  after :each do
    @logger.close
    @log_file.close unless @log_file.closed?
    rm_r @path
  end

  it "logs a message with unknown severity" do
    @logger.unknown "Test"
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "ANY -- : Test\n"
  end

  it "defaults the priority value to 5 and text value to ANY" do
    @logger.unknown "Test"
    @log_file.rewind
    message = LoggerSpecs.strip_date(@log_file.readlines.first)[0..2]
    message.should == "ANY"
    Logger::UNKNOWN.should == 5
  end

  it "receives empty messages" do
    lambda { @logger.unknown("") }.should_not raise_error
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should ==  "ANY -- : \n"
  end
end
