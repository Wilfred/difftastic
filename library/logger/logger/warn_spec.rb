require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger#warn?" do
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

  it "returns true if severity level allows printing warn messages" do
    @logger.level = Logger::WARN
    @logger.warn?.should == true
  end

  it "returns false if severity level does not allow printing warn messages" do
    @logger.level = Logger::FATAL
    @logger.warn?.should == false
  end
end

describe "Logger#warn" do
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

  it "logs a WARN message" do
    @logger.warn("test")
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "WARN -- : test\n"
  end

  it "accepts an application name with a block" do
    @logger.warn("MyApp") { "Test message" }
    @log_file.rewind
    LoggerSpecs.strip_date(@log_file.readlines.first).should == "WARN -- MyApp: Test message\n"
  end

end
