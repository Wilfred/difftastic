require File.expand_path('../../../spec_helper', __FILE__)
require 'digest'

describe "Digest.hexencode" do
  before :each do
    @string   = 'sample string'
    @encoded  = "73616d706c6520737472696e67"
  end

  it "returns '' when passed an empty String" do
    Digest.hexencode('').should == ''
  end

  it "returns the hex-encoded value of a non-empty String" do
    Digest.hexencode(@string).should == @encoded
  end

  it "calls #to_str on an object and returns the hex-encoded value of the result" do
    obj = mock("to_str")
    obj.should_receive(:to_str).and_return(@string)
    Digest.hexencode(obj).should == @encoded
  end

  it "raises a TypeError when passed nil" do
    lambda { Digest.hexencode(nil) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a Fixnum" do
    lambda { Digest.hexencode(9001) }.should raise_error(TypeError)
  end
end
