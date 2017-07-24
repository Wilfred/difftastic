require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#dup" do
  before :each do
    @string = "this is a test"
    @orig_s = StringScanner.new(@string)
  end

  it "copies the passed StringScanner's content to self" do
    s = @orig_s.dup
    s.string.should == @string
  end

  it "copies the passed StringSCanner's position to self" do
    @orig_s.pos = 5
    s = @orig_s.dup
    s.pos.should eql(5)
  end

  it "copies previous match state" do
    @orig_s.scan(/\w+/)
    @orig_s.scan(/\s/)

    @orig_s.pre_match.should == "this"

    s = @orig_s.dup
    s.pre_match.should == "this"

    s.unscan
    s.scan(/\s/).should == " "
  end

  it "copies the passed StringScanner scan pointer to self" do
    @orig_s.terminate
    s = @orig_s.dup
    s.eos?.should be_true
  end
end
