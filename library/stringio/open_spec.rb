require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'

describe "StringIO.open when passed [Object, mode]" do
  it "uses the passed Object as the StringIO backend" do
    io = StringIO.open(str = "example", "r")
    io.string.should equal(str)
  end

  it "returns the blocks return value when yielding" do
    ret = StringIO.open("example", "r") { :test }
    ret.should equal(:test)
  end

  it "yields self to the passed block" do
    io = nil
    StringIO.open("example", "r") { |strio| io = strio }
    io.should be_kind_of(StringIO)
  end

  it "closes self after yielding" do
    io = nil
    StringIO.open("example", "r") { |strio| io = strio }
    io.closed?.should be_true
  end

  it "even closes self when an exception is raised while yielding" do
    io = nil
    begin
      StringIO.open("example", "r") do |strio|
        io = strio
        raise "Error"
      end
    rescue
    end
    io.closed?.should be_true
  end

  it "sets self's string to nil after yielding" do
    io = nil
    StringIO.open("example", "r") { |strio| io = strio }
    io.string.should be_nil
  end

  it "even sets self's string to nil when an exception is raised while yielding" do
    io = nil
    begin
      StringIO.open("example", "r") do |strio|
        io = strio
        raise "Error"
      end
    rescue
    end
    io.string.should be_nil
  end

  it "sets the mode based on the passed mode" do
    io = StringIO.open("example", "r")
    io.closed_read?.should be_false
    io.closed_write?.should be_true

    io = StringIO.open("example", "rb")
    io.closed_read?.should be_false
    io.closed_write?.should be_true

    io = StringIO.open("example", "r+")
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", "rb+")
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", "w")
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", "wb")
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", "w+")
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", "wb+")
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", "a")
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", "ab")
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", "a+")
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", "ab+")
    io.closed_read?.should be_false
    io.closed_write?.should be_false
  end

  it "allows passing the mode as an Integer" do
    io = StringIO.open("example", IO::RDONLY)
    io.closed_read?.should be_false
    io.closed_write?.should be_true

    io = StringIO.open("example", IO::RDWR)
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", IO::WRONLY)
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", IO::WRONLY | IO::TRUNC)
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", IO::RDWR | IO::TRUNC)
    io.closed_read?.should be_false
    io.closed_write?.should be_false

    io = StringIO.open("example", IO::WRONLY | IO::APPEND)
    io.closed_read?.should be_true
    io.closed_write?.should be_false

    io = StringIO.open("example", IO::RDWR | IO::APPEND)
    io.closed_read?.should be_false
    io.closed_write?.should be_false
  end

  it "raises a RuntimeError when passed a frozen String in truncate mode as StringIO backend" do
    lambda { StringIO.open("example".freeze, IO::TRUNC) }.should raise_error(RuntimeError)
  end

  it "tries to convert the passed mode to a String using #to_str" do
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return("r")
    io = StringIO.open("example", obj)

    io.closed_read?.should be_false
    io.closed_write?.should be_true
  end

  it "raises an Errno::EACCES error when passed a frozen string with a write-mode" do
    (str = "example").freeze
    lambda { StringIO.open(str, "r+") }.should raise_error(Errno::EACCES)
    lambda { StringIO.open(str, "w") }.should raise_error(Errno::EACCES)
    lambda { StringIO.open(str, "a") }.should raise_error(Errno::EACCES)
  end
end

describe "StringIO.open when passed [Object]" do
  it "uses the passed Object as the StringIO backend" do
    io = StringIO.open(str = "example")
    io.string.should equal(str)
  end

  it "yields self to the passed block" do
    io = nil
    ret = StringIO.open("example") { |strio| io = strio }
    io.should equal(ret)
  end

  it "sets the mode to read-write" do
    io = StringIO.open("example")
    io.closed_read?.should be_false
    io.closed_write?.should be_false
  end

  it "tries to convert the passed Object to a String using #to_str" do
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return("example")
    io = StringIO.open(obj)
    io.string.should == "example"
  end

  it "automatically sets the mode to read-only when passed a frozen string" do
    (str = "example").freeze
    io = StringIO.open(str)
    io.closed_read?.should be_false
    io.closed_write?.should be_true
  end
end

describe "StringIO.open when passed no arguments" do
  it "yields self to the passed block" do
    io = nil
    ret = StringIO.open { |strio| io = strio }
    io.should equal(ret)
  end

  it "sets the mode to read-write" do
    io = StringIO.open
    io.closed_read?.should be_false
    io.closed_write?.should be_false
  end

  it "uses an empty String as the StringIO backend" do
    StringIO.open.string.should == ""
  end
end

