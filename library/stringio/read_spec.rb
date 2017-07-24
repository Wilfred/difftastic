require File.expand_path('../../../spec_helper', __FILE__)
require "stringio"
require File.expand_path('../shared/read', __FILE__)

describe "StringIO#read when passed length, buffer" do
  it_behaves_like :stringio_read, :read
end

describe "StringIO#read when passed [length]" do
  it_behaves_like :stringio_read_length, :read
end

describe "StringIO#read when passed no arguments" do
  it_behaves_like :stringio_read_no_arguments, :read

  it "returns an empty string if at EOF" do
    @io.read.should == "example"
    @io.read.should == ""
  end
end

describe "StringIO#read when passed nil" do
  it_behaves_like :stringio_read_nil, :read

  it "returns an empty string if at EOF" do
    @io.read(nil).should == "example"
    @io.read(nil).should == ""
  end
end

describe "StringIO#read when self is not readable" do
  it_behaves_like :stringio_read_not_readable, :read
end

describe "StringIO#read when passed [length]" do
  before :each do
    @io = StringIO.new("example")
  end

  it "returns nil when self's position is at the end" do
    @io.pos = 7
    @io.read(10).should be_nil
  end

  it "returns an empty String when length is 0" do
    @io.read(0).should == ""
  end
end

describe "StringIO#read when passed length and a buffer" do
  before :each do
    @io = StringIO.new("abcdefghijklmnopqrstuvwxyz")
  end

  it "reads [length] characters into the buffer" do
    buf = "foo"
    result = @io.read(10, buf)

    buf.should == "abcdefghij"
    result.should equal(buf)
  end
end
