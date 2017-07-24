require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/open', __FILE__)

describe "File.new" do
  before :each do
    @file = tmp('test.txt')
    @fh = nil
    @flags = File::CREAT | File::TRUNC | File::WRONLY
    touch @file
  end

  after :each do
    @fh.close if @fh
    rm_r @file
  end

  it "returns a new File with mode string" do
    @fh = File.new(@file, 'w')
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "returns a new File with mode num" do
    @fh = File.new(@file, @flags)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "returns a new File with modus num and permissions" do
    rm_r @file
    File.umask(0011)
    @fh = File.new(@file, @flags, 0755)
    @fh.should be_kind_of(File)
    platform_is_not :windows do
      File.stat(@file).mode.to_s(8).should == "100744"
    end
    File.exist?(@file).should == true
  end

  it "creates the file and returns writable descriptor when called with 'w' mode and r-o permissions" do
    # it should be possible to write to such a file via returned descriptior,
    # even though the file permissions are r-r-r.

    rm_r @file
    begin
      f = File.new(@file, "w", 0444)
      lambda { f.puts("test") }.should_not raise_error(IOError)
    ensure
      f.close
    end
    File.exist?(@file).should == true
    File.read(@file).should == "test\n"
  end

  platform_is_not :windows do
    it "opens the existing file, does not change permissions even when they are specified" do
      File.chmod(0644, @file)           # r-w perms
      orig_perms = File.stat(@file).mode & 0777
      begin
        f = File.new(@file, "w", 0444)    # r-o perms, but they should be ignored
        f.puts("test")
      ensure
        f.close
      end
      perms = File.stat(@file).mode & 0777
      perms.should == orig_perms

      # it should be still possible to read from the file
      File.read(@file).should == "test\n"
    end
  end

  it "returns a new File with modus fd" do
    @fh = File.new(@file)
    fh_copy = File.new(@fh.fileno)
    fh_copy.autoclose = false
    fh_copy.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "creates a new file when use File::EXCL mode" do
    @fh = File.new(@file, File::EXCL)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "raises an Errorno::EEXIST if the file exists when create a new file with File::CREAT|File::EXCL" do
    lambda { @fh = File.new(@file, File::CREAT|File::EXCL) }.should raise_error(Errno::EEXIST)
  end

  it "creates a new file when use File::WRONLY|File::APPEND mode" do
    @fh = File.new(@file, File::WRONLY|File::APPEND)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "returns a new File when use File::APPEND mode" do
    @fh = File.new(@file, File::APPEND)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "returns a new File when use File::RDONLY|File::APPEND mode" do
    @fh = File.new(@file, File::RDONLY|File::APPEND)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "returns a new File when use File::RDONLY|File::WRONLY mode" do
    @fh = File.new(@file, File::RDONLY|File::WRONLY)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end


  it "creates a new file when use File::WRONLY|File::TRUNC mode" do
    @fh = File.new(@file, File::WRONLY|File::TRUNC)
    @fh.should be_kind_of(File)
    File.exist?(@file).should == true
  end

  it "coerces filename using to_str" do
    name = mock("file")
    name.should_receive(:to_str).and_return(@file)
    @fh = File.new(name, "w")
    File.exist?(@file).should == true
  end

  it "coerces filename using #to_path" do
    name = mock("file")
    name.should_receive(:to_path).and_return(@file)
    @fh = File.new(name, "w")
    File.exist?(@file).should == true
  end

  it "raises a TypeError if the first parameter can't be coerced to a string" do
    lambda { File.new(true) }.should raise_error(TypeError)
    lambda { File.new(false) }.should raise_error(TypeError)
  end

  it "raises a TypeError if the first parameter is nil" do
    lambda { File.new(nil) }.should raise_error(TypeError)
  end

  it "raises an Errno::EBADF if the first parameter is an invalid file descriptor" do
    lambda { File.new(-1) }.should raise_error(Errno::EBADF)
  end

  platform_is_not :windows do
    it "can't alter mode or permissions when opening a file" do
      @fh = File.new(@file)
      lambda {
        f = File.new(@fh.fileno, @flags)
        f.autoclose = false
      }.should raise_error(Errno::EINVAL)
    end
  end

  platform_is_not :windows do
    it_behaves_like :open_directory, :new
  end
end
