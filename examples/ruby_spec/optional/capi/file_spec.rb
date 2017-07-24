require File.expand_path('../spec_helper', __FILE__)

load_extension('file')

describe :rb_file_open, shared: true do
  it "raises an ArgumentError if passed an empty mode string" do
    touch @name
    lambda { @s.rb_file_open(@name, "") }.should raise_error(ArgumentError)
  end

  it "opens a file in read-only mode with 'r'" do
    touch(@name) { |f| f.puts "readable" }
    @file = @s.send(@method, @name, "r")
    @file.should be_an_instance_of(File)
    @file.read.chomp.should == "readable"
  end

  it "creates and opens a non-existent file with 'w'" do
    @file = @s.send(@method, @name, "w")
    @file.write "writable"
    @file.flush
    File.read(@name).should == "writable"
  end

  it "truncates an existing file with 'w'" do
    touch(@name) { |f| f.puts "existing" }
    @file = @s.send(@method, @name, "w")
    File.read(@name).should == ""
  end
end

describe "C-API File function" do
  before :each do
    @s = CApiFileSpecs.new
    @name = tmp("rb_file_open")
  end

  after :each do
    @file.close if @file and !@file.closed?
    rm_r @name
  end

  describe "rb_file_open" do
    it_behaves_like :rb_file_open, :rb_file_open
  end

  describe "rb_file_open_str" do
    it_behaves_like :rb_file_open, :rb_file_open_str
  end

  describe "rb_file_open_str" do
    it "calls #to_path to convert on object to a path" do
      path = mock("rb_file_open_str to_path")
      path.should_receive(:to_path).and_return(@name)
      @file = @s.rb_file_open_str(path, "w")
    end

    it "calls #to_str to convert an object to a path if #to_path isn't defined" do
      path = mock("rb_file_open_str to_str")
      path.should_receive(:to_str).and_return(@name)
      @file = @s.rb_file_open_str(path, "w")
    end
  end

  describe "FilePathValue" do
    it "returns a String argument unchanged" do
      obj = "path"
      @s.FilePathValue(obj).should eql(obj)
    end

    it "does not call #to_str on a String" do
      obj = "path"
      obj.should_not_receive(:to_str)
      @s.FilePathValue(obj).should eql(obj)
    end

    it "calls #to_path to convert an object to a String" do
      obj = mock("FilePathValue to_path")
      obj.should_receive(:to_path).and_return("path")
      @s.FilePathValue(obj).should == "path"
    end

    it "calls #to_str to convert an object to a String if #to_path isn't defined" do
      obj = mock("FilePathValue to_str")
      obj.should_receive(:to_str).and_return("path")
      @s.FilePathValue(obj).should == "path"
    end
  end
end
