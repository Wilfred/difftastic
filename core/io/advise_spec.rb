# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#advise" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close unless @io.closed?
  end

  it "raises a TypeError if advise is not a Symbol" do
    lambda {
      @io.advise("normal")
    }.should raise_error(TypeError)
  end

  it "raises a TypeError if offsert cannot be coerced to an Integer" do
    lambda {
      @io.advise(:normal, "wat")
    }.should raise_error(TypeError)
  end

  it "raises a TypeError if len cannot be coerced to an Integer" do
    lambda {
      @io.advise(:normal, 0, "wat")
    }.should raise_error(TypeError)
  end

  it "raises a RangeError if offset is too big" do
    lambda {
      @io.advise(:normal, 10 ** 32)
    }.should raise_error(RangeError)
  end

  it "raises a RangeError if len is too big" do
    lambda {
      @io.advise(:normal, 0, 10 ** 32)
    }.should raise_error(RangeError)
  end

  it "raises a NotImplementedError if advise is not recognized" do
    lambda{
      @io.advise(:foo)
    }.should raise_error(NotImplementedError)
  end

  it "supports the normal advice type" do
    @io.advise(:normal).should be_nil
  end

  it "supports the sequential advice type" do
    @io.advise(:sequential).should be_nil
  end

  it "supports the random advice type" do
    @io.advise(:random).should be_nil
  end

  it "supports the dontneed advice type" do
    @io.advise(:dontneed).should be_nil
  end

  it "supports the noreuse advice type" do
    @io.advise(:noreuse).should be_nil
  end

  platform_is_not :linux do
    it "supports the willneed advice type" do
      @io.advise(:willneed).should be_nil
    end
  end

  platform_is :linux do
    it "supports the willneed advice type" do
      require 'etc'
      uname = if Etc.respond_to?(:uname)
                Etc.uname[:release]
              else
                `uname -r`.chomp
              end
      if (uname.split('.').map(&:to_i) <=> [3,6]) < 0
        # [ruby-core:65355] tmpfs is not supported
        1.should == 1
      else
        @io.advise(:willneed).should be_nil
      end
    end
  end

  it "raises an IOError if the stream is closed" do
    @io.close
    lambda { @io.advise(:normal) }.should raise_error(IOError)
  end
end
