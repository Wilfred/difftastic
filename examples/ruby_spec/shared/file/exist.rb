describe :file_exist, shared: true do
  it "returns true if the file exist" do
    @object.send(@method, __FILE__).should == true
    @object.send(@method, 'a_fake_file').should == false
  end

  it "returns true if the file exist using the alias exists?" do
    @object.send(@method, __FILE__).should == true
    @object.send(@method, 'a_fake_file').should == false
  end

  it "raises an ArgumentError if not passed one argument" do
    lambda { @object.send(@method) }.should raise_error(ArgumentError)
    lambda { @object.send(@method, __FILE__, __FILE__) }.should raise_error(ArgumentError)
  end

  it "raises a TypeError if not passed a String type" do
    lambda { @object.send(@method, nil) }.should raise_error(TypeError)
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(__FILE__)).should == true
  end
end
