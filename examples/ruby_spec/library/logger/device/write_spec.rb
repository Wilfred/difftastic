require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/common', __FILE__)

describe "Logger::LogDevice#write" do
  before  :each do
    @file_path = tmp("test_log.log")
    @log_file = File.open(@file_path, "w+")
    # Avoid testing this with STDERR, we don't want to be closing that.
    @device = Logger::LogDevice.new(@log_file)
  end

  after :each do
    @log_file.close unless @log_file.closed?
    rm_r @file_path
  end

  it "writes a message to the device" do
    @device.write "This is a test message"
    @log_file.rewind
    @log_file.readlines.first.should == "This is a test message"
  end

  it "can create a file and writes empty message" do
    path = tmp("you_should_not_see_me")
    logdevice = Logger::LogDevice.new(path)
    logdevice.write("")
    logdevice.close

    File.open(path) do |f|
      messages = f.readlines
      messages.size.should == 1
      messages.first.should =~ /#.*/    # only a comment
    end

    rm_r path
  end

  it "fails if the device is already closed" do
    @device.close
    lambda { @device.write "foo" }.should complain(/\Alog writing failed\./)
  end
end
