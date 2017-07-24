require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'
require File.expand_path('../shared/readchar', __FILE__)

describe "StringIO#readchar" do
  it_behaves_like :stringio_readchar, :readchar

  it "reads the next 8-bit byte from self's current position" do
    io = StringIO.new("example")

    io.send(@method).should == ?e

    io.pos = 4
    io.send(@method).should == ?p
  end
end

describe "StringIO#readchar when self is not readable" do
  it_behaves_like :stringio_readchar_not_readable, :readchar
end
