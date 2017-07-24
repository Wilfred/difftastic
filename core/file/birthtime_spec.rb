require File.expand_path('../../../spec_helper', __FILE__)

describe "File.birthtime" do
  before :each do
    @file = __FILE__
  end

  after :each do
    @file = nil
  end

  platform_is :windows, :darwin, :freebsd, :netbsd do
    it "returns the birth time for the named file as a Time object" do
      File.birthtime(@file)
      File.birthtime(@file).should be_kind_of(Time)
    end

    it "accepts an object that has a #to_path method" do
      File.birthtime(mock_to_path(@file))
    end

    it "raises an Errno::ENOENT exception if the file is not found" do
      lambda { File.birthtime('bogus') }.should raise_error(Errno::ENOENT)
    end
  end

  platform_is :linux, :openbsd do
    it "raises an NotImplementedError" do
      lambda { File.birthtime(@file) }.should raise_error(NotImplementedError)
    end
  end
end

describe "File#birthtime" do
  before :each do
    @file = File.open(__FILE__)
  end

  after :each do
    @file.close
    @file = nil
  end

  platform_is :windows, :darwin, :freebsd, :netbsd do
    it "returns the birth time for self" do
      @file.birthtime
      @file.birthtime.should be_kind_of(Time)
    end
  end

  platform_is :linux, :openbsd do
    it "raises an NotImplementedError" do
      lambda { @file.birthtime }.should raise_error(NotImplementedError)
    end
  end
end
