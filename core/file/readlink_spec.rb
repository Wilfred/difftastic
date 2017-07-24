require File.expand_path('../../../spec_helper', __FILE__)

describe "File.readlink" do
  # symlink/readlink are not supported on Windows
  platform_is_not :windows do
    describe "File.readlink with absolute paths" do
      before :each do
        @file = tmp('file_readlink.txt')
        @link = tmp('file_readlink.lnk')

        File.symlink(@file, @link)
      end

      after :each do
        rm_r @file, @link
      end

      it "returns the name of the file referenced by the given link" do
        touch @file
        File.readlink(@link).should == @file
      end

      it "returns the name of the file referenced by the given link when the file does not exist" do
        File.readlink(@link).should == @file
      end

      it "raises an Errno::ENOENT if there is no such file" do
        # TODO: missing_file
        lambda { File.readlink("/this/surely/doesnt/exist") }.should raise_error(Errno::ENOENT)
      end

      it "raises an Errno::EINVAL if called with a normal file" do
        touch @file
        lambda { File.readlink(@file) }.should raise_error(Errno::EINVAL)
      end
    end

    describe "File.readlink when changing the working directory" do
      before :each do
        @cwd = Dir.pwd
        @tmpdir = tmp("/readlink")
        Dir.mkdir @tmpdir
        Dir.chdir @tmpdir

        @link = 'readlink_link'
        @file = 'readlink_file'

        File.symlink(@file, @link)
      end

      after :each do
        rm_r @file, @link
        Dir.chdir @cwd
        Dir.rmdir @tmpdir
      end

      it "returns the name of the file referenced by the given link" do
        touch @file
        File.readlink(@link).should == @file
      end

      it "returns the name of the file referenced by the given link when the file does not exist" do
        File.readlink(@link).should == @file
      end
    end
  end
end
