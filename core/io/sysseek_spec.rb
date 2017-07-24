# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/pos', __FILE__)

describe "IO#sysseek" do
  it_behaves_like :io_set_pos, :seek
end

describe "IO#sysseek" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "moves the read position relative to the current position with SEEK_CUR" do
    @io.sysseek(10, IO::SEEK_CUR)
    @io.readline.should == "igne une.\n"
  end

  it "raises an error when called after buffered reads" do
    @io.readline
    lambda { @io.sysseek(-5, IO::SEEK_CUR) }.should raise_error(IOError)
  end

  it "moves the read position relative to the start with SEEK_SET" do
    @io.sysseek(43, IO::SEEK_SET)
    @io.readline.should == "Aquí está la línea tres.\n"
  end

  it "moves the read position relative to the end with SEEK_END" do
    @io.sysseek(1, IO::SEEK_END)

    # this is the safest way of checking the EOF when
    # sys-* methods are invoked
    lambda { @io.sysread(1) }.should raise_error(EOFError)

    @io.sysseek(-25, IO::SEEK_END)
    @io.sysread(7).should == "cinco.\n"
  end
end
