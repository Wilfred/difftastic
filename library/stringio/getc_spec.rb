require File.expand_path('../../../spec_helper', __FILE__)
require 'stringio'
require File.expand_path('../shared/getc', __FILE__)

describe "StringIO#getc" do
  it_behaves_like :stringio_getc, :getc

  it "returns the charactor at the current position" do
    io = StringIO.new("example")

    io.send(@method).should == ?e
    io.send(@method).should == ?x
    io.send(@method).should == ?a
  end
end

describe "StringIO#getc when self is not readable" do
  it_behaves_like :stringio_getc_not_readable, :getc
end
