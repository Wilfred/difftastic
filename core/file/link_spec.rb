require File.expand_path('../../../spec_helper', __FILE__)

describe "File.link" do
  before :each do
    @file = tmp("file_link.txt")
    @link = tmp("file_link.lnk")

    rm_r @link
    touch @file
  end

  after :each do
    rm_r @link, @file
  end

  platform_is_not :windows do
    it "link a file with another" do
      File.link(@file, @link).should == 0
      File.exist?(@link).should == true
      File.identical?(@file, @link).should == true
    end

    it "raises an Errno::EEXIST if the target already exists" do
      File.link(@file, @link)
      lambda { File.link(@file, @link) }.should raise_error(Errno::EEXIST)
    end

    it "raises an ArgumentError if not passed two arguments" do
      lambda { File.link                      }.should raise_error(ArgumentError)
      lambda { File.link(@file)               }.should raise_error(ArgumentError)
      lambda { File.link(@file, @link, @file) }.should raise_error(ArgumentError)
    end

    it "raises a TypeError if not passed String types" do
      lambda { File.link(@file, nil) }.should raise_error(TypeError)
      lambda { File.link(@file, 1)   }.should raise_error(TypeError)
    end
  end
end
