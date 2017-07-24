require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger::LogDevice#new" do
  before :each do
    @file_path = tmp("test_log.log")
    @log_file = File.open(@file_path, "w+")
  end

  after :each do
    @log_file.close unless @log_file.closed?
    rm_r @file_path
  end

  it "creates a new log device" do
    l = Logger::LogDevice.new(@log_file)
    l.dev.should be_kind_of(File)
  end

  it "receives an IO object to log there as first argument" do
    @log_file.should be_kind_of(IO)
    l = Logger::LogDevice.new(@log_file)
    l.write("foo")
    @log_file.rewind
    @log_file.readlines.first.should == "foo"
  end

  it "creates a File if the IO object does not exist" do
    path = tmp("test_logger_file")
    l = Logger::LogDevice.new(path)
    l.write("Test message")
    l.close

    File.exist?(path).should be_true
    File.open(path) do |f|
      f.readlines.should_not be_empty
    end

    rm_r path
  end

  it "receives options via a hash as second argument" do
    lambda { Logger::LogDevice.new(STDERR,
                                   { shift_age: 8, shift_size: 10
                                   })}.should_not raise_error
  end
end
