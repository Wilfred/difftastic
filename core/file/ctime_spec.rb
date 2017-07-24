require File.expand_path('../../../spec_helper', __FILE__)

describe "File.ctime" do
  before :each do
    @file = __FILE__
  end

  after :each do
    @file = nil
  end

  it "returns the change time for the named file (the time at which directory information about the file was changed, not the file itself)." do
    File.ctime(@file)
    File.ctime(@file).should be_kind_of(Time)
  end

  platform_is :linux do
    it "returns the change time for the named file (the time at which directory information about the file was changed, not the file itself) with microseconds." do
      supports_subseconds = Integer(`stat -c%z '#{__FILE__}'`[/\.(\d+)/, 1], 10)
      if supports_subseconds != 0
        File.ctime(__FILE__).usec.should > 0
      else
        File.ctime(__FILE__).usec.should == 0
      end
    end
  end

  it "accepts an object that has a #to_path method" do
    File.ctime(mock_to_path(@file))
  end

  it "raises an Errno::ENOENT exception if the file is not found" do
    lambda { File.ctime('bogus') }.should raise_error(Errno::ENOENT)
  end
end

describe "File#ctime" do
  before :each do
    @file = File.open(__FILE__)
  end

  after :each do
    @file.close
    @file = nil
  end

  it "returns the change time for the named file (the time at which directory information about the file was changed, not the file itself)." do
    @file.ctime
    @file.ctime.should be_kind_of(Time)
  end
end
