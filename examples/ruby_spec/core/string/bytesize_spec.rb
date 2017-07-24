# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

with_feature :encoding do
  describe "#String#bytesize" do
    it "needs to be reviewed for spec completeness"

    it "returns the length of self in bytes" do
      "hello".bytesize.should == 5
      " ".bytesize.should == 1
    end

    it "works with strings containing single UTF-8 characters" do
      "\u{6666}".bytesize.should == 3
    end

    it "works with pseudo-ASCII strings containing single UTF-8 characters" do
      "\u{6666}".force_encoding('ASCII').bytesize.should == 3
    end

    it "works with strings containing UTF-8 characters" do
      "c \u{6666}".force_encoding('UTF-8').bytesize.should == 5
      "c \u{6666}".bytesize.should == 5
    end

    it "works with pseudo-ASCII strings containing UTF-8 characters" do
      "c \u{6666}".force_encoding('ASCII').bytesize.should == 5
    end

    it "returns 0 for the empty string" do
      "".bytesize.should == 0
      "".force_encoding('ASCII').bytesize.should == 0
      "".force_encoding('UTF-8').bytesize.should == 0
    end
  end
end
