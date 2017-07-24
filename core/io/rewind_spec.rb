# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#rewind" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "positions the instance to the beginning of input" do
    @io.readline.should == "Voici la ligne une.\n"
    @io.readline.should == "Qui è la linea due.\n"
    @io.rewind
    @io.readline.should == "Voici la ligne une.\n"
  end

  it "positions the instance to the beginning of input and clears EOF" do
    value = @io.read
    @io.rewind
    @io.eof?.should == false
    value.should == @io.read
  end

  it "sets lineno to 0" do
    @io.readline.should == "Voici la ligne une.\n"
    @io.lineno.should == 1
    @io.rewind
    @io.lineno.should == 0
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.rewind }.should raise_error(IOError)
  end
end
