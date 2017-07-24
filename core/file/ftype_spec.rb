require "#{File.dirname(__FILE__)}/../../spec_helper"
require "#{File.dirname(__FILE__)}/fixtures/file_types"

describe "File.ftype" do
  before :all do
    FileSpecs.configure_types
  end

  it "raises ArgumentError if not given exactly one filename" do
    lambda { File.ftype }.should raise_error(ArgumentError)
    lambda { File.ftype('blah', 'bleh') }.should raise_error(ArgumentError)
  end

  it "raises Errno::ENOENT if the file is not valid" do
    l = lambda { File.ftype("/#{$$}#{Time.now.to_f}") }
    l.should raise_error(Errno::ENOENT)
  end

  it "returns a String" do
    FileSpecs.normal_file do |file|
      File.ftype(file).should be_kind_of(String)
    end
  end

  it "returns 'file' when the file is a file" do
    FileSpecs.normal_file do |file|
      File.ftype(file).should == 'file'
    end
  end

  it "returns 'directory' when the file is a dir" do
    FileSpecs.directory do |dir|
      File.ftype(dir).should == 'directory'
    end
  end

  # Both FreeBSD and Windows does not have block devices
  platform_is_not :freebsd, :windows do
    with_block_device do
      it "returns 'blockSpecial' when the file is a block" do
        FileSpecs.block_device do |block|
          File.ftype(block).should == 'blockSpecial'
        end
      end
    end
  end

  platform_is_not :windows do
    it "returns 'characterSpecial' when the file is a char"  do
      FileSpecs.character_device do |char|
        File.ftype(char).should == 'characterSpecial'
      end
    end

    it "returns 'link' when the file is a link" do
      FileSpecs.symlink do |link|
        File.ftype(link).should == 'link'
      end
    end

    it "returns fifo when the file is a fifo" do
      FileSpecs.fifo do |fifo|
        File.ftype(fifo).should == 'fifo'
      end
    end

    it "returns 'socket' when the file is a socket" do
      FileSpecs.socket do |socket|
        File.ftype(socket).should == 'socket'
      end
    end
  end
end
