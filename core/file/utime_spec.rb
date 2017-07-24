require File.expand_path('../../../spec_helper', __FILE__)

describe "File.utime" do
  before :each do
    @atime = Time.now
    @mtime = Time.now
    @file1 = tmp("specs_file_utime1")
    @file2 = tmp("specs_file_utime2")
    touch @file1
    touch @file2
  end

  after :each do
    rm_r @file1, @file2
  end

  it "sets the access and modification time of each file" do
    File.utime(@atime, @mtime, @file1, @file2)
    File.atime(@file1).to_i.should be_close(@atime.to_i, 2)
    File.mtime(@file1).to_i.should be_close(@mtime.to_i, 2)
    File.atime(@file2).to_i.should be_close(@atime.to_i, 2)
    File.mtime(@file2).to_i.should be_close(@mtime.to_i, 2)
  end

  it "uses the current times if two nil values are passed" do
    File.utime(nil, nil, @file1, @file2)
    File.atime(@file1).to_i.should be_close(Time.now.to_i, 2)
    File.mtime(@file1).to_i.should be_close(Time.now.to_i, 2)
    File.atime(@file2).to_i.should be_close(Time.now.to_i, 2)
    File.mtime(@file2).to_i.should be_close(Time.now.to_i, 2)
  end

  it "accepts an object that has a #to_path method" do
    File.utime(@atime, @mtime, mock_to_path(@file1), mock_to_path(@file2))
  end
end
