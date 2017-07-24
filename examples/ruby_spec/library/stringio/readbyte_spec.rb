require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'
require File.expand_path('../shared/readchar', __FILE__)

describe "StringIO#readbyte" do
  it_behaves_like :stringio_readchar, :readbyte

  it "reads the next 8-bit byte from self's current position" do
    io = StringIO.new("example")

    io.send(@method).should == 101

    io.pos = 4
    io.send(@method).should == 112
  end
end

describe "StringIO#readbyte when self is not readable" do
  it_behaves_like :stringio_readchar_not_readable, :readbyte
end
