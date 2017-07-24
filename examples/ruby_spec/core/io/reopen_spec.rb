require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

require 'fcntl'

describe "IO#reopen" do
  before :each do
    @name = tmp("io_reopen.txt")
    @other_name = tmp("io_reopen_other.txt")

    @io = new_io @name
    @other_io = File.open @other_name, "w"
  end

  after :each do
    @io.close unless @io.closed?
    @other_io.close unless @other_io.closed?
    rm_r @name, @other_name
  end

  it "calls #to_io to convert an object" do
    obj = mock("io")
    obj.should_receive(:to_io).and_return(@other_io)
    @io.reopen obj
  end

  it "changes the class of the instance to the class of the object returned by #to_io" do
    obj = mock("io")
    obj.should_receive(:to_io).and_return(@other_io)
    @io.reopen(obj).should be_an_instance_of(File)
  end

  it "raises an IOError if the object returned by #to_io is closed" do
    obj = mock("io")
    obj.should_receive(:to_io).and_return(IOSpecs.closed_io)
    lambda { @io.reopen obj }.should raise_error(IOError)
  end

  it "raises a TypeError if #to_io does not return an IO instance" do
    obj = mock("io")
    obj.should_receive(:to_io).and_return("something else")
    lambda { @io.reopen obj }.should raise_error(TypeError)
  end

  it "raises an IOError when called on a closed stream with an object" do
    @io.close
    obj = mock("io")
    obj.should_not_receive(:to_io)
    lambda { @io.reopen(STDOUT) }.should raise_error(IOError)
  end

  it "raises an IOError if the IO argument is closed" do
    lambda { @io.reopen(IOSpecs.closed_io) }.should raise_error(IOError)
  end

  it "raises an IOError when called on a closed stream with an IO" do
    @io.close
    lambda { @io.reopen(STDOUT) }.should raise_error(IOError)
  end
end

describe "IO#reopen with a String" do
  before :each do
    @name = fixture __FILE__, "numbered_lines.txt"
    @other_name = tmp("io_reopen.txt")
    touch @other_name
    @io = IOSpecs.io_fixture "lines.txt"

    @tmp_file = tmp("reopen")
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @other_name, @tmp_file
  end

  it "does not raise an exception when called on a closed stream with a path" do
    @io.close
    @io.reopen @name, "r"
    @io.closed?.should be_false
    @io.gets.should == "Line 1: One\n"
  end

  it "returns self" do
    @io.reopen(@name).should equal(@io)
  end

  it "positions a newly created instance at the beginning of the new stream" do
    @io.reopen(@name)
    @io.gets.should == "Line 1: One\n"
  end

  it "positions an instance that has been read from at the beginning of the new stream" do
    @io.gets
    @io.reopen(@name)
    @io.gets.should == "Line 1: One\n"
  end

  platform_is_not :windows do
    it "passes all mode flags through" do
      @io.reopen(@tmp_file, "ab")
      (@io.fcntl(Fcntl::F_GETFL) & File::APPEND).should == File::APPEND
    end
  end

  platform_is_not :windows do
    # TODO Should this work on Windows?
    it "affects exec/system/fork performed after it" do
      ruby_exe fixture(__FILE__, "reopen_stdout.rb"), args: @tmp_file
      File.read(@tmp_file).should == "from system\nfrom exec\n"
    end
  end

  it "calls #to_path on non-String arguments" do
    obj = mock('path')
    obj.should_receive(:to_path).and_return(@other_name)
    @io.reopen(obj)
  end
end

describe "IO#reopen with a String" do
  before :each do
    @name = tmp("io_reopen.txt")
    @other_name = tmp("io_reopen_other.txt")
    @other_io = nil

    rm_r @other_name
  end

  after :each do
    @io.close unless @io.closed?
    @other_io.close if @other_io and not @other_io.closed?
    rm_r @name, @other_name
  end

  it "opens a path after writing to the original file descriptor" do
    @io = new_io @name, "w"

    @io.print "original data"
    @io.reopen @other_name
    @io.print "new data"
    @io.flush

    File.read(@name).should == "original data"
    File.read(@other_name).should == "new data"
  end

  it "closes the file descriptor obtained by opening the new file" do
    @io = new_io @name, "w"

    @other_io = File.open @other_name, "w"
    max = @other_io.fileno
    @other_io.close

    @io.reopen @other_name

    @other_io = File.open @other_name, "w"
    @other_io.fileno.should == max
  end

  it "creates the file if it doesn't exist if the IO is opened in write mode" do
    @io = new_io @name, "w"

    @io.reopen(@other_name)
    File.exist?(@other_name).should be_true
  end

  it "creates the file if it doesn't exist if the IO is opened in write mode" do
    @io = new_io @name, "a"

    @io.reopen(@other_name)
    File.exist?(@other_name).should be_true
  end
end

describe "IO#reopen with a String" do
  before :each do
    @name = tmp("io_reopen.txt")
    @other_name = tmp("io_reopen_other.txt")

    touch @name
    rm_r @other_name
  end

  after :each do
    @io.close
    rm_r @name, @other_name
  end

  it "raises an Errno::ENOENT if the file does not exist and the IO is not opened in write mode" do
    @io = new_io @name, "r"
    lambda { @io.reopen(@other_name) }.should raise_error(Errno::ENOENT)
  end
end

describe "IO#reopen with an IO at EOF" do
  before :each do
    @name = tmp("io_reopen.txt")
    touch(@name) { |f| f.puts "a line" }
    @other_name = tmp("io_reopen_other.txt")
    touch(@other_name) do |f|
      f.puts "Line 1"
      f.puts "Line 2"
    end

    @io = new_io @name, "r"
    @other_io = new_io @other_name, "r"
    @io.read
  end

  after :each do
    @io.close unless @io.closed?
    @other_io.close unless @other_io.closed?
    rm_r @name, @other_name
  end

  it "resets the EOF status to false" do
    @io.eof?.should be_true
    @io.reopen @other_io
    @io.eof?.should be_false
  end
end

describe "IO#reopen with an IO" do
  before :each do
    @name = tmp("io_reopen.txt")
    @other_name = tmp("io_reopen_other.txt")
    touch(@other_name) do |f|
      f.puts "Line 1"
      f.puts "Line 2"
    end

    @io = new_io @name
    @other_io = new_io @other_name, "r"
  end

  after :each do
    @io.close unless @io.closed?
    @other_io.close unless @other_io.closed?
    rm_r @name, @other_name
  end

  it "does not call #to_io" do
    # Why do we not use #should_not_receive(:to_io) here? Because
    # MRI actually changes the class of @io in the call to #reopen
    # but does not preserve the existing singleton class of @io.
    def @io.to_io; flunk; end
    @io.reopen(@other_io).should be_an_instance_of(IO)
  end

  it "does not change the object_id" do
    obj_id = @io.object_id
    @io.reopen @other_io
    @io.object_id.should == obj_id
  end

  it "reads from the beginning if the other IO has not been read from" do
    @io.reopen @other_io
    @io.gets.should == "Line 1\n"
  end

  it "reads from the current position of the other IO's stream" do
    @other_io.gets.should == "Line 1\n"
    @io.reopen @other_io
    @io.gets.should == "Line 2\n"
  end
end

describe "IO#reopen with an IO" do
  before :each do
    @name = tmp("io_reopen.txt")
    @other_name = tmp("io_reopen_other.txt")

    @io = new_io @name
    @other_io = File.open @other_name, "w"
  end

  after :each do
    @io.close unless @io.closed?
    @other_io.close unless @other_io.closed?
    rm_r @name, @other_name
  end

  it "associates the IO instance with the other IO's stream" do
    File.read(@other_name).should == ""
    @io.reopen @other_io
    @io.print "io data"
    @io.flush
    File.read(@name).should == ""
    File.read(@other_name).should == "io data"
  end

  it "may change the class of the instance" do
    @io.reopen @other_io
    @io.should be_an_instance_of(File)
  end

  it "sets path equals to the other IO's path if other IO is File" do
    @io.reopen @other_io
    @io.path.should == @other_io.path
  end
end
