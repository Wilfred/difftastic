describe :dir_delete, shared: true do
  before :each do
    DirSpecs.rmdir_dirs true
  end

  after :each do
    DirSpecs.rmdir_dirs false
  end

  it "removes empty directories" do
    Dir.send(@method, DirSpecs.mock_rmdir("empty")).should == 0
  end

  it "calls #to_path on non-String arguments" do
    p = mock('path')
    p.should_receive(:to_path).and_return(DirSpecs.mock_rmdir("empty"))
    Dir.send(@method, p)
  end

  platform_is_not :solaris do
    it "raises an Errno::ENOTEMPTY when trying to remove a nonempty directory" do
      lambda do
        Dir.send @method, DirSpecs.mock_rmdir("nonempty")
      end.should raise_error(Errno::ENOTEMPTY)
    end
  end

  platform_is :solaris do
    it "raises an Errno::EEXIST when trying to remove a nonempty directory" do
      lambda do
        Dir.send @method, DirSpecs.mock_rmdir("nonempty")
      end.should raise_error(Errno::EEXIST)
    end
  end

  it "raises an Errno::ENOENT when trying to remove a non-existing directory" do
    lambda do
      Dir.send @method, DirSpecs.nonexistent
    end.should raise_error(Errno::ENOENT)
  end

  it "raises an Errno::ENOTDIR when trying to remove a non-directory" do
    file = DirSpecs.mock_rmdir("nonempty/regular")
    touch(file)
    lambda do
      Dir.send @method, file
    end.should raise_error(Errno::ENOTDIR)
  end

  # this won't work on Windows, since chmod(0000) does not remove all permissions
  platform_is_not :windows do
    it "raises an Errno::EACCES if lacking adequate permissions to remove the directory" do
      parent = DirSpecs.mock_rmdir("noperm")
      child = DirSpecs.mock_rmdir("noperm", "child")
      File.chmod(0000, parent)
      lambda do
        Dir.send @method, child
      end.should raise_error(Errno::EACCES)
    end
  end
end
