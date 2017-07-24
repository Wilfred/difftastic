require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/symlink', __FILE__)

describe "File.symlink" do
  before :each do
    @file = tmp("file_symlink.txt")
    @link = tmp("file_symlink.lnk")

    rm_r @link
    touch @file
  end

  after :each do
    rm_r @link, @file
  end

  platform_is_not :windows do
    it "creates a symlink between a source and target file" do
      File.symlink(@file, @link).should == 0
      File.identical?(@file, @link).should == true
    end

    it "creates a symbolic link" do
      File.symlink(@file, @link)
      File.symlink?(@link).should == true
    end

    it "accepts args that have #to_path methods" do
      File.symlink(mock_to_path(@file), mock_to_path(@link))
      File.symlink?(@link).should == true
    end

    it "raises an Errno::EEXIST if the target already exists" do
      File.symlink(@file, @link)
      lambda { File.symlink(@file, @link) }.should raise_error(Errno::EEXIST)
    end

    it "raises an ArgumentError if not called with two arguments" do
      lambda { File.symlink        }.should raise_error(ArgumentError)
      lambda { File.symlink(@file) }.should raise_error(ArgumentError)
    end

    it "raises a TypeError if not called with String types" do
      lambda { File.symlink(@file, nil) }.should raise_error(TypeError)
      lambda { File.symlink(@file, 1)   }.should raise_error(TypeError)
      lambda { File.symlink(1, 1)       }.should raise_error(TypeError)
    end
  end
end

describe "File.symlink?" do
  it_behaves_like :file_symlink, :symlink?, File
end

describe "File.symlink?" do
  it_behaves_like :file_symlink_nonexistent, :symlink?, File
end
