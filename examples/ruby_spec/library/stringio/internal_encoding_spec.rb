require 'stringio'
require File.expand_path('../../../spec_helper', __FILE__)

describe "StringIO#internal_encoding" do
  it "returns nil" do
    io = StringIO.new
    io.set_encoding Encoding::UTF_8
    io.internal_encoding.should == nil
  end
end
