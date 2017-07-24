# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#getc" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "returns the next character from the stream" do
    @io.readline.should == "Voici la ligne une.\n"
    letters = @io.getc, @io.getc, @io.getc, @io.getc, @io.getc
    letters.should == ["Q", "u", "i", " ", "è"]
  end

  it "returns nil when invoked at the end of the stream" do
    @io.read
    @io.getc.should be_nil
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.getc }.should raise_error(IOError)
  end
end

describe "IO#getc" do
  before :each do
    @io = IOSpecs.io_fixture "empty.txt"
  end

  after :each do
    @io.close if @io
  end

  it "returns nil on empty stream" do
    @io.getc.should be_nil
  end
end
