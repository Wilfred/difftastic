require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger#debug?" do
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

  it "returns true if severity level allows debug messages" do
    @logger.level = Logger::DEBUG
    @logger.debug?.should == true
  end

  it "returns false if severity level does not allow debug messages" do
    @logger.level = Logger::WARN
    @logger.debug?.should == false
  end
end

describe "Logger#debug" do
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

  it "logs a DEBUG message" do
    @logger.debug("test")
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "DEBUG -- : test\n"
  end

  it "accepts an application name with a block" do
    @logger.debug("MyApp") { "Test message" }
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "DEBUG -- MyApp: Test message\n"
  end
end
