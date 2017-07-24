describe :file_size, shared: true do
  before :each do
    @exists = tmp('i_exist')
    touch(@exists) { |f| f.write 'rubinius' }
  end

  after :each do
    rm_r @exists
  end

  it "returns the size of the file if it exists and is not empty" do
    @object.send(@method, @exists).should == 8
  end

  it "accepts a String-like (to_str) parameter" do
    obj = mock("file")
    obj.should_receive(:to_str).and_return(@exists)

    @object.send(@method, obj).should == 8
  end

  it "accepts an object that has a #to_path method" do
    @object.send(@method, mock_to_path(@exists)).should == 8
  end
end

describe :file_size_to_io, shared: true do
  before :each do
    @exists = tmp('i_exist')
    touch(@exists) { |f| f.write 'rubinius' }
    @file = File.open(@exists, 'r')
  end

  after :each do
    @file.close unless @file.closed?
    rm_r @exists
  end

  it "calls #to_io to convert the argument to an IO" do
    obj = mock("io like")
    obj.should_receive(:to_io).and_return(@file)

    @object.send(@method, obj).should == 8
  end
end

describe :file_size_raise_when_missing, shared: true do
  before :each do
    # TODO: missing_file
    @missing = tmp("i_dont_exist")
    rm_r @missing
  end

  after :each do
    rm_r @missing
  end

  it "raises an error if file_name doesn't exist" do
    lambda {@object.send(@method, @missing)}.should raise_error(Errno::ENOENT)
  end
end

describe :file_size_nil_when_missing, shared: true do
  before :each do
    # TODO: missing_file
    @missing = tmp("i_dont_exist")
    rm_r @missing
  end

  after :each do
    rm_r @missing
  end

  it "returns nil if file_name doesn't exist or has 0 size" do
     @object.send(@method, @missing).should == nil
  end
end

describe :file_size_0_when_empty, shared: true do
  before :each do
    @empty = tmp("i_am_empty")
    touch @empty
  end

  after :each do
    rm_r @empty
  end

  it "returns 0 if the file is empty" do
    @object.send(@method, @empty).should == 0
  end
end

describe :file_size_nil_when_empty, shared: true do
  before :each do
    @empty = tmp("i_am_empt")
    touch @empty
  end

  after :each do
    rm_r @empty
  end

  it "returns nil if file_name is empty" do
    @object.send(@method, @empty).should == nil
  end
end

describe :file_size_with_file_argument, shared: true do
  before :each do
    @exists = tmp('i_exist')
    touch(@exists) { |f| f.write 'rubinius' }
  end

  after :each do
    rm_r @exists
  end

  it "accepts a File argument" do
    File.open(@exists) do |f|
      @object.send(@method, f).should == 8
    end
  end
end
