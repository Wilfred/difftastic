# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#getbyte" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "returns the next byte from the stream" do
    @io.readline.should == "Voici la ligne une.\n"
    letters = @io.getbyte, @io.getbyte, @io.getbyte, @io.getbyte, @io.getbyte
    letters.should == [81, 117, 105, 32, 195]
  end

  it "returns nil when invoked at the end of the stream" do
    @io.read
    @io.getbyte.should == nil
  end

  it "raises an IOError on closed stream" do
    lambda { IOSpecs.closed_io.getbyte }.should raise_error(IOError)
  end
end

describe "IO#getbyte" do
  before :each do
    @io = IOSpecs.io_fixture "empty.txt"
  end

  after :each do
    @io.close if @io
  end

  it "returns nil on empty stream" do
    @io.getbyte.should == nil
  end
end
