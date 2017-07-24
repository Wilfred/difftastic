describe :file_stat, shared: true do
  before :each do
    @file = tmp('i_exist')
    touch(@file)
  end

  after :each do
    rm_r @file
  end

  it "returns a File::Stat object if the given file exists" do
    st = File.send(@method, @file)
    st.should be_an_instance_of(File::Stat)
  end

  it "returns a File::Stat object when called on an instance of File" do
    File.open(@file) do |f|
      st = f.send(@method)
      st.should be_an_instance_of(File::Stat)
    end
  end

  it "accepts an object that has a #to_path method" do
    File.send(@method, mock_to_path(@file))
  end

  it "raises an Errno::ENOENT if the file does not exist" do
    lambda {
      File.send(@method, "fake_file")
    }.should raise_error(Errno::ENOENT)
  end
end
