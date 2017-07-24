describe :file_zero, shared: true do
  before :each do
    @zero_file    = tmp("test.txt")
    @nonzero_file = tmp("test2.txt")
    @dir = tmp("dir")

    Dir.mkdir @dir
    touch @zero_file
    touch(@nonzero_file) { |f| f.puts "hello" }
  end

  after :each do
    rm_r @zero_file, @nonzero_file
    rm_r @dir
  end

  it "returns true if the file is empty" do
    @object.send(@method, @zero_file).should == true
  end

  it "returns false if the file is not empty" do
    @object.send(@method, @nonzero_file).should == false
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(@zero_file)).should == true
  end

  platform_is :windows do
    it "returns true for NUL" do
      @object.send(@method, 'NUL').should == true
      @object.send(@method, 'nul').should == true
    end
  end

  platform_is_not :windows do
    it "returns true for /dev/null" do
      @object.send(@method, File.realpath('/dev/null')).should == true
    end
  end

  it "raises an ArgumentError if not passed one argument" do
    lambda { File.zero? }.should raise_error(ArgumentError)
  end

  it "raises a TypeError if not passed a String type" do
    lambda { @object.send(@method, nil)   }.should raise_error(TypeError)
    lambda { @object.send(@method, true)  }.should raise_error(TypeError)
    lambda { @object.send(@method, false) }.should raise_error(TypeError)
  end

  it "returns true inside a block opening a file if it is empty" do
    File.open(@zero_file,'w') do
      @object.send(@method, @zero_file).should == true
    end
  end

  platform_is_not :windows do
    it "returns false for a directory" do
      @object.send(@method, @dir).should == false
    end
  end

  platform_is :windows do
    # see http://redmine.ruby-lang.org/issues/show/449 for background
    it "returns true for a directory" do
      @object.send(@method, @dir).should == true
    end
  end
end

describe :file_zero_missing, shared: true do
  it "returns false if the file does not exist" do
    @object.send(@method, 'fake_file').should == false
  end
end
