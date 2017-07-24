# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO.binread" do
  before :each do
    @internal = Encoding.default_internal

    @fname = tmp('io_read.txt')
    @contents = "1234567890"
    touch(@fname) { |f| f.write @contents }
  end

  after :each do
    rm_r @fname
    Encoding.default_internal = @internal
  end

  it "reads the contents of a file" do
    IO.binread(@fname).should == @contents
  end

  it "reads the contents of a file up to a certain size when specified" do
    IO.binread(@fname, 5).should == @contents.slice(0..4)
  end

  it "reads the contents of a file from an offset of a specific size when specified" do
    IO.binread(@fname, 5, 3).should == @contents.slice(3, 5)
  end

  it "returns a String in ASCII-8BIT encoding" do
    IO.binread(@fname).encoding.should == Encoding::ASCII_8BIT
  end

  it "returns a String in ASCII-8BIT encoding regardless of Encoding.default_internal" do
    Encoding.default_internal = Encoding::EUC_JP
    IO.binread(@fname).encoding.should == Encoding::ASCII_8BIT
  end

  it "raises an ArgumentError when not passed a valid length" do
    lambda { IO.binread @fname, -1 }.should raise_error(ArgumentError)
  end

  ruby_version_is "2.3" do # MRI leaks the fd on older versions
    it "raises an Errno::EINVAL when not passed a valid offset" do
      lambda { IO.binread @fname, 0, -1  }.should raise_error(Errno::EINVAL)
    end
  end
end
