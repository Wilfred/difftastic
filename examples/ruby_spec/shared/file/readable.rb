describe :file_readable, shared: true do
  before :each do
    @file = tmp('i_exist')
    platform_is :windows do
      @file2 = File.join(ENV["WINDIR"], "system32/drivers/etc/services").tr(File::SEPARATOR, File::ALT_SEPARATOR)
    end
    platform_is_not :windows do
      @file2 = "/etc/passwd"
    end
  end

  after :each do
    rm_r @file
  end

  it "returns true if named file is readable by the effective user id of the process, otherwise false" do
    @object.send(@method, @file2).should == true
    File.open(@file,'w') { @object.send(@method, @file).should == true }
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(@file2)).should == true
  end
end

describe :file_readable_missing, shared: true do
  it "returns false if the file does not exist" do
    @object.send(@method, 'fake_file').should == false
  end
end
