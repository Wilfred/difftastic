describe :dir_pwd, shared: true do
  with_feature :encoding do
    before :each do
      @fs_encoding = Encoding.find('filesystem')
    end
  end

  it "returns the current working directory" do
    pwd = Dir.send(@method)

    File.directory?(pwd).should == true

    # On ubuntu gutsy, for example, /bin/pwd does not
    # understand -P. With just `pwd -P`, /bin/pwd is run.

    # The following uses inode rather than file names to account for
    # case insensitive file systems like default OS/X file systems
    platform_is_not :windows do
      File.stat(pwd).ino.should == File.stat(`/bin/sh -c "pwd -P"`.chomp).ino
    end
    platform_is :windows do
      File.stat(pwd).ino.should == File.stat(File.expand_path(`cd`.chomp)).ino
    end
  end

  it "returns an absolute path" do
    pwd = Dir.send(@method)
    pwd.should == File.expand_path(pwd)
  end

  it "returns an absolute path even when chdir to a relative path" do
    Dir.chdir(".") do
      pwd = Dir.send(@method)
      File.directory?(pwd).should == true
      pwd.should == File.expand_path(pwd)
    end
  end

  with_feature :encoding do
    it "returns a String with the filesystem encoding" do
      enc = Dir.send(@method).encoding
      if @fs_encoding == Encoding::US_ASCII
        [Encoding::US_ASCII, Encoding::ASCII_8BIT].should include(enc)
      else
        enc.should equal(@fs_encoding)
      end
    end
  end
end
