# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Array#pack" do
  it "ignores directives text from '#' to the first newline" do
    [1, 2, 3].pack("c#this is a comment\nc").should == "\x01\x02"
  end

  it "ignores directives text from '#' to the end if no newline is present" do
    [1, 2, 3].pack("c#this is a comment c").should == "\x01"
  end

  it "ignores comments at the start of the directives string" do
    [1, 2, 3].pack("#this is a comment\nc").should == "\x01"
  end

  it "ignores the entire directive string if it is a comment" do
    [1, 2, 3].pack("#this is a comment").should == ""
  end

  it "ignores multiple comments" do
    [1, 2, 3].pack("c#comment\nc#comment\nc#c").should == "\x01\x02\x03"
  end
end
