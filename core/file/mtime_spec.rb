require File.expand_path('../../../spec_helper', __FILE__)

describe "File.mtime" do
  before :each do
    @filename = tmp('i_exist')
    touch(@filename) { @mtime = Time.now }
  end

  after :each do
    rm_r @filename
  end

  it "returns the modification Time of the file" do
    File.mtime(@filename).should be_kind_of(Time)
    File.mtime(@filename).should be_close(@mtime, 2.0)
  end

  platform_is :linux do
    it "returns the modification Time of the file with microseconds" do
      supports_subseconds = Integer(`stat -c%y '#{__FILE__}'`[/\.(\d+)/, 1], 10)
      if supports_subseconds != 0
        expected_time = Time.at(Time.now.to_i + 0.123456)
        File.utime 0, expected_time, @filename
        File.mtime(@filename).usec.should == expected_time.usec
      else
        File.mtime(__FILE__).usec.should == 0
      end
    end
  end

  it "raises an Errno::ENOENT exception if the file is not found" do
    lambda { File.mtime('bogus') }.should raise_error(Errno::ENOENT)
  end
end

describe "File#mtime" do
  before :each do
    @filename = tmp('i_exist')
    @f = File.open(@filename, 'w')
  end

  after :each do
    @f.close
    rm_r @filename
  end

  it "returns the modification Time of the file" do
    @f.mtime.should be_kind_of(Time)
  end

end
