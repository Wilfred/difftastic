require File.expand_path('../../../spec_helper', __FILE__)

describe "File.rename" do
  before :each do
    @old = tmp("file_rename.txt")
    @new = tmp("file_rename.new")

    rm_r @new
    touch(@old) { |f| f.puts "hello" }
  end

  after :each do
    rm_r @old, @new
  end

  it "renames a file" do
    File.exist?(@old).should == true
    File.exist?(@new).should == false
    File.rename(@old, @new)
    File.exist?(@old).should == false
    File.exist?(@new).should == true
  end

  it "raises an Errno::ENOENT if the source does not exist" do
    rm_r @old
    lambda { File.rename(@old, @new) }.should raise_error(Errno::ENOENT)
  end

  it "raises an ArgumentError if not passed two arguments" do
    lambda { File.rename        }.should raise_error(ArgumentError)
    lambda { File.rename(@file) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError if not passed String types" do
    lambda { File.rename(1, 2)  }.should raise_error(TypeError)
  end
end
