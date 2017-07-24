require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger#datetime_format" do
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

  it "returns the date format used for the logs" do
    format = "%Y-%d"
    @logger.datetime_format = format
    @logger.datetime_format.should == format
  end

  it "returns nil logger is using the default date format" do
    @logger.datetime_format.should == nil
  end
end

describe "Logger#datetime_format=" do
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

  it "sets the date format for the logs" do
    @logger.datetime_format = "%Y"
    @logger.datetime_format.should == "%Y"
    @logger.add(Logger::WARN, "Test message")
    @log_file.rewind

    regex = /2[0-9]{3}.*Test message/
    @log_file.readlines.first.should =~ regex
  end

  it "follows the Time#strftime format" do
    lambda { @logger.datetime_format = "%Y-%m" }.should_not raise_error

    regex = /\d{4}-\d{2}-\d{2}oo-\w+ar/
    @logger.datetime_format = "%Foo-%Bar"
    @logger.add(nil, "Test message")
    @log_file.rewind
    @log_file.readlines.first.should =~ regex
  end
end
