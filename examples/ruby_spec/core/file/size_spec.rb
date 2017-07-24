require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/size', __FILE__)

describe "File.size?" do
  it_behaves_like :file_size,                     :size?, File
end

describe "File.size?" do
  it_behaves_like :file_size_to_io,               :size?, File
end

describe "File.size?" do
  it_behaves_like :file_size_nil_when_missing,    :size?, File
end

describe "File.size?" do
  it_behaves_like :file_size_nil_when_empty,      :size?, File
end

describe "File.size?" do
  it_behaves_like :file_size_with_file_argument,  :size?, File
end

describe "File.size" do
  it_behaves_like :file_size,                     :size,  File
end

describe "File.size" do
  it_behaves_like :file_size_to_io,               :size, File
end

describe "File.size" do
  it_behaves_like :file_size_raise_when_missing,  :size,  File
end

describe "File.size" do
  it_behaves_like :file_size_0_when_empty,        :size,  File
end

describe "File.size" do
  it_behaves_like :file_size_with_file_argument,  :size,  File
end

describe "File#size" do

  before :each do
    @name = tmp('i_exist')
    touch(@name) { |f| f.write 'rubinius' }
    @file = File.new @name
    @file_org = @file
  end

  after :each do
    @file_org.close unless @file_org.closed?
    rm_r @name
  end

  it "is an instance method" do
    @file.respond_to?(:size).should be_true
  end

  it "returns the file's size as a Fixnum" do
    @file.size.should be_an_instance_of(Fixnum)
  end

  it "returns the file's size in bytes" do
    @file.size.should == 8
  end

  platform_is_not :windows do # impossible to remove opened file on Windows
    it "returns the cached size of the file if subsequently deleted" do
      rm_r @file.path
      @file.size.should == 8
    end
  end

  it "returns the file's current size even if modified" do
    File.open(@file.path,'a') {|f| f.write '!'}
    @file.size.should == 9
  end

  it "raises an IOError on a closed file" do
    @file.close
    lambda { @file.size }.should raise_error(IOError)
  end

  platform_is_not :windows do
    it "follows symlinks if necessary" do
      ln_file = tmp('i_exist_ln')
      rm_r ln_file

      begin
        File.symlink(@file.path, ln_file).should == 0
        file = File.new(ln_file)
        file.size.should == 8
      ensure
        file.close if file && !file.closed?
        rm_r ln_file
      end
    end
  end
end

describe "File#size for an empty file" do
  before :each do
    @name = tmp('empty')
    touch(@name)
    @file = File.new @name
  end

  after :each do
    @file.close unless @file.closed?
    rm_r @name
  end

  it "returns 0" do
    @file.size.should == 0
  end
end
