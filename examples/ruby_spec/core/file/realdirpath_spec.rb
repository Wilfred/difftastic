require File.expand_path('../../../spec_helper', __FILE__)

platform_is_not :windows do
  describe "File.realdirpath" do
    before :each do
      @real_dir = tmp('dir_realdirpath_real')
      @fake_dir = tmp('dir_realdirpath_fake')
      @link_dir = tmp('dir_realdirpath_link')

      mkdir_p @real_dir
      File.symlink(@real_dir, @link_dir)

      @file = File.join(@real_dir, 'file')
      @link = File.join(@link_dir, 'link')

      touch @file
      File.symlink(@file, @link)

      @fake_file_in_real_dir = File.join(@real_dir, 'fake_file_in_real_dir')
      @fake_file_in_fake_dir = File.join(@fake_dir, 'fake_file_in_fake_dir')
      @fake_link_to_real_dir = File.join(@link_dir, 'fake_link_to_real_dir')
      @fake_link_to_fake_dir = File.join(@link_dir, 'fake_link_to_fake_dir')

      File.symlink(@fake_file_in_real_dir, @fake_link_to_real_dir)
      File.symlink(@fake_file_in_fake_dir, @fake_link_to_fake_dir)

      @dir_for_relative_link = File.join(@real_dir, 'dir1')
      mkdir_p @dir_for_relative_link

      @relative_path_to_file = File.join('..', 'file')
      @relative_symlink = File.join(@dir_for_relative_link, 'link')
      File.symlink(@relative_path_to_file, @relative_symlink)
    end

    after :each do
      rm_r @file, @link, @fake_link_to_real_dir, @fake_link_to_fake_dir, @real_dir, @link_dir
    end

    it "returns '/' when passed '/'" do
      File.realdirpath('/').should == '/'
    end

    it "returns the real (absolute) pathname not containing symlinks" do
      File.realdirpath(@link).should == @file
    end

    it "uses base directory for interpreting relative pathname" do
      File.realdirpath(File.basename(@link), @link_dir).should == @file
    end

    it "uses current directory for interpreting relative pathname" do
      Dir.chdir @link_dir do
        File.realdirpath(File.basename(@link)).should == @file
      end
    end

    it "uses link directory for expanding relative links" do
      File.realdirpath(@relative_symlink).should == @file
    end

    it "raises an Errno::ELOOP if the symlink points to itself" do
      File.unlink @link
      File.symlink(@link, @link)
      lambda { File.realdirpath(@link) }.should raise_error(Errno::ELOOP)
    end

    it "returns the real (absolute) pathname if the file is absent" do
      File.realdirpath(@fake_file_in_real_dir).should == @fake_file_in_real_dir
    end

    it "raises Errno::ENOENT if the directory is absent" do
      lambda { File.realdirpath(@fake_file_in_fake_dir) }.should raise_error(Errno::ENOENT)
    end

    it "returns the real (absolute) pathname if the symlink points to an absent file" do
      File.realdirpath(@fake_link_to_real_dir).should == @fake_file_in_real_dir
    end

    it "raises Errno::ENOENT if the symlink points to an absent directory" do
      lambda { File.realdirpath(@fake_link_to_fake_dir) }.should raise_error(Errno::ENOENT)
    end
  end
end

platform_is :windows do
  describe "File.realdirpath" do
    before :each do
      @file = tmp("realdirpath")
    end

    after :each do
      rm_r @file
    end

    it "returns the same path" do
      touch @file
      File.realdirpath(@file).should == @file
    end

    it "returns the same path even if the last component does not exist" do
      File.realdirpath(@file).should == @file
    end
  end
end
