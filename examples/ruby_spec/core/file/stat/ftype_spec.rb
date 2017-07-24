require "#{File.dirname(__FILE__)}/../../../spec_helper"
require "#{File.dirname(__FILE__)}/../fixtures/file_types"

describe "File::Stat#ftype" do
  before :all do
    FileSpecs.configure_types
  end

  it "returns a String" do
    FileSpecs.normal_file do |file|
      File.lstat(file).ftype.should be_kind_of(String)
    end
  end

  it "returns 'file' when the file is a file" do
    FileSpecs.normal_file do |file|
      File.lstat(file).ftype.should == 'file'
    end
  end

  it "returns 'directory' when the file is a dir" do
    FileSpecs.directory do |dir|
      File.lstat(dir).ftype.should == 'directory'
    end
  end

  platform_is_not :windows do
    it "returns 'characterSpecial' when the file is a char"  do
      FileSpecs.character_device do |char|
        File.lstat(char).ftype.should == 'characterSpecial'
      end
    end
  end

  platform_is_not :freebsd do  # FreeBSD does not have block devices
    with_block_device do
      it "returns 'blockSpecial' when the file is a block" do
        FileSpecs.block_device do |block|
          File.lstat(block).ftype.should == 'blockSpecial'
        end
      end
    end
  end

  platform_is_not :windows do
    it "returns 'link' when the file is a link" do
      FileSpecs.symlink do |link|
        File.lstat(link).ftype.should == 'link'
      end
    end

    it "returns fifo when the file is a fifo" do
      FileSpecs.fifo do |fifo|
        File.lstat(fifo).ftype.should == 'fifo'
      end
    end

    # This will silently not execute the block if no socket
    # can be found. However, if you are running X, there is
    # a good chance that if nothing else, at least the X
    # Server socket exists.
    it "returns 'socket' when the file is a socket" do
      FileSpecs.socket do |socket|
        File.lstat(socket).ftype.should == 'socket'
      end
    end
  end
end
