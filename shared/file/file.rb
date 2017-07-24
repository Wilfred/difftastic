describe :file_file, shared: true do
  before :each do
    platform_is :windows do
      @null = "NUL"
      @dir  = "C:\\"
    end

    platform_is_not :windows do
      @null = "/dev/null"
      @dir  = "/bin"
    end

    @file = tmp("test.txt")
    touch @file
  end

  after :each do
    rm_r @file
  end

  it "returns true if the named file exists and is a regular file." do
    @object.send(@method, @file).should == true
    @object.send(@method, @dir).should == false
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(@file)).should == true
  end

  platform_is_not :windows do
    it "returns true if the null device exists and is a regular file." do
      @object.send(@method, @null).should == false # May fail on MS Windows
    end
  end

  it "raises an ArgumentError if not passed one argument" do
    lambda { @object.send(@method)               }.should raise_error(ArgumentError)
    lambda { @object.send(@method, @null, @file) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError if not passed a String type" do
    lambda { @object.send(@method, nil) }.should raise_error(TypeError)
    lambda { @object.send(@method, 1)   }.should raise_error(TypeError)
  end
end
