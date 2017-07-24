# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/pos', __FILE__)

describe "IO#seek" do
  it_behaves_like :io_set_pos, :seek
end

describe "IO#seek" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "moves the read position relative to the current position with SEEK_CUR" do
    lambda { @io.seek(-1) }.should raise_error(Errno::EINVAL)
    @io.seek(10, IO::SEEK_CUR)
    @io.readline.should == "igne une.\n"
    @io.seek(-5, IO::SEEK_CUR)
    @io.readline.should == "une.\n"
  end

  it "moves the read position relative to the start with SEEK_SET" do
    @io.seek(1)
    @io.pos.should == 1
    @io.rewind
    @io.seek(43, IO::SEEK_SET)
    @io.readline.should == "Aquí está la línea tres.\n"
    @io.seek(5, IO::SEEK_SET)
    @io.readline.should == " la ligne une.\n"
  end

  it "moves the read position relative to the end with SEEK_END" do
    @io.seek(0, IO::SEEK_END)
    @io.tell.should == 137
    @io.seek(-25, IO::SEEK_END)
    @io.readline.should == "cinco.\n"
  end

  it "moves the read position and clears EOF with SEEK_SET" do
    value = @io.read
    @io.seek(0, IO::SEEK_SET)
    @io.eof?.should == false
    value.should == @io.read
  end

  it "moves the read position and clears EOF with SEEK_CUR" do
    value = @io.read
    @io.seek(-1, IO::SEEK_CUR)
    @io.eof?.should == false
    value[-1].should == @io.read[0]
  end

  it "moves the read position and clears EOF with SEEK_END" do
    value = @io.read
    @io.seek(-1, IO::SEEK_END)
    @io.eof?.should == false
    value[-1].should == @io.read[0]
  end

  platform_is :darwin do
    it "supports seek offsets greater than 2^32" do
      begin
        zero = File.open('/dev/zero')
        offset = 2**33
        zero.seek(offset, File::SEEK_SET)
        pos = zero.pos

        pos.should == offset
      ensure
        zero.close rescue nil
      end
    end
  end
end
