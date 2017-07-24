require File.expand_path('../../../spec_helper', __FILE__)

describe "File.atime" do
  before :each do
    @file = tmp('test.txt')
    touch @file
  end

  after :each do
    rm_r @file
  end

  it "returns the last access time for the named file as a Time object" do
    File.atime(@file)
    File.atime(@file).should be_kind_of(Time)
  end

  platform_is :linux do
    ## NOTE also that some Linux systems disable atime (e.g. via mount params) for better filesystem speed.
    it "returns the last access time for the named file with microseconds" do
      supports_subseconds = Integer(`stat -c%x '#{__FILE__}'`[/\.(\d+)/, 1], 10)
      if supports_subseconds != 0
        expected_time = Time.at(Time.now.to_i + 0.123456)
        File.utime expected_time, 0, @file
        File.atime(@file).usec.should == expected_time.usec
      else
        File.atime(__FILE__).usec.should == 0
      end
    end
  end

  it "raises an Errno::ENOENT exception if the file is not found" do
    lambda { File.atime('a_fake_file') }.should raise_error(Errno::ENOENT)
  end

  it "accepts an object that has a #to_path method" do
    File.atime(mock_to_path(@file))
  end
end

describe "File#atime" do
  before :each do
    @name = File.expand_path(__FILE__)
    @file = File.open(@name)
  end

  after :each do
    @file.close rescue nil
  end

  it "returns the last access time to self" do
    @file.atime
    @file.atime.should be_kind_of(Time)
  end
end
