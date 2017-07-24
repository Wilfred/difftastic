require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger#fatal?" do
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

  it "returns true if severity level allows fatal messages" do
    @logger.level = Logger::FATAL
    @logger.fatal?.should == true
  end

  it "returns false if severity level does not allow fatal messages" do
    @logger.level = Logger::UNKNOWN
    @logger.fatal?.should == false
  end
end

describe "Logger#fatal" do
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

  it "logs a FATAL message" do
    @logger.fatal("test")
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "FATAL -- : test\n"
  end

  it "accepts an application name with a block" do
    @logger.fatal("MyApp") { "Test message" }
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "FATAL -- MyApp: Test message\n"
  end

end
