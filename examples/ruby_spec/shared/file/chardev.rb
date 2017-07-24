describe :file_chardev, shared: true do
  it "returns true/false depending if the named file is a char device" do
    @object.send(@method, tmp("")).should == false
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(tmp(""))).should == false
  end
end
