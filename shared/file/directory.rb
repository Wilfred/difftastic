describe :file_directory, shared: true do
  before :each do
    @dir = tmp("file_directory")
    @file = tmp("file_directory.txt")

    mkdir_p @dir
    touch @file
  end

  after :each do
    rm_r @dir, @file
  end

  it "returns true if the argument is a directory" do
    @object.send(@method, @dir).should be_true
  end

  it "returns false if the argument is not a directory" do
    @object.send(@method, @file).should be_false
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(@dir)).should be_true
  end

  it "raises a TypeError when passed an Integer" do
    lambda { @object.send(@method, 1) }.should raise_error(TypeError)
    lambda { @object.send(@method, bignum_value) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed nil" do
    lambda { @object.send(@method, nil) }.should raise_error(TypeError)
  end
end

describe :file_directory_io, shared: true do
  before :each do
    @dir = tmp("file_directory_io")
    @file = tmp("file_directory_io.txt")

    mkdir_p @dir
    touch @file
  end

  after :each do
    rm_r @dir, @file
  end

  it "returns false if the argument is an IO that's not a directory" do
    @object.send(@method, STDIN).should be_false
  end

  platform_is_not :windows do
    it "returns true if the argument is an IO that is a directory" do
      File.open(@dir, "r") do |f|
        @object.send(@method, f).should be_true
      end
    end
  end

  it "calls #to_io to convert a non-IO object" do
    io = mock('FileDirectoryIO')
    io.should_receive(:to_io).and_return(STDIN)
    @object.send(@method, io).should be_false
  end
end
