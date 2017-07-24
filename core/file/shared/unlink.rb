describe :file_unlink, shared: true do
  before :each do
    @file1 = tmp('test.txt')
    @file2 = tmp('test2.txt')

    touch @file1
    touch @file2
  end

  after :each do
    File.send(@method, @file1) if File.exist?(@file1)
    File.send(@method, @file2) if File.exist?(@file2)

    @file1 = nil
    @file2 = nil
  end

  it "returns 0 when called without arguments" do
    File.send(@method).should == 0
  end

  it "deletes a single file" do
    File.send(@method, @file1).should == 1
    File.exist?(@file1).should == false
  end

  it "deletes multiple files" do
    File.send(@method, @file1, @file2).should == 2
    File.exist?(@file1).should == false
    File.exist?(@file2).should == false
  end

  it "raises a TypeError if not passed a String type" do
    lambda { File.send(@method, 1) }.should raise_error(TypeError)
  end

  it "raises an Errno::ENOENT when the given file doesn't exist" do
    lambda { File.send(@method, 'bogus') }.should raise_error(Errno::ENOENT)
  end

  it "coerces a given parameter into a string if possible" do
    mock = mock("to_str")
    mock.should_receive(:to_str).and_return(@file1)
    File.send(@method, mock).should == 1
  end

  it "accepts an object that has a #to_path method" do
    File.send(@method, mock_to_path(@file1)).should == 1
  end

  ruby_version_is "2.3" do
    platform_is :windows do
      it "allows deleting an open file with File::SHARE_DELETE" do
        path = tmp("share_delete.txt")
        File.open(path, mode: File::CREAT | File::WRONLY | File::BINARY | File::SHARE_DELETE) do |f|
          File.exist?(path).should be_true
          File.send(@method, path)
        end
        File.exist?(path).should be_false
      end
    end
  end
end
