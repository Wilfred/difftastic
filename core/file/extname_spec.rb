# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "File.extname" do
  it "returns the extension (the portion of file name in path after the period)." do
    File.extname("foo.rb").should == ".rb"
    File.extname("/foo/bar.rb").should == ".rb"
    File.extname("/foo.rb/bar.c").should == ".c"
    File.extname("bar").should == ""
    File.extname(".bashrc").should == ""
    File.extname("/foo.bar/baz").should == ""
    File.extname(".app.conf").should == ".conf"
  end

  it "returns the extension (the portion of file name in path after the period).(edge cases)" do
    File.extname("").should ==  ""
    File.extname(".").should ==  ""
    File.extname("/").should ==  ""
    File.extname("/.").should ==  ""
    File.extname("..").should ==  ""
    File.extname("...").should ==  ""
    File.extname("....").should ==  ""
    File.extname(".foo.").should ==  ""
    File.extname("foo.").should ==  ""
  end

  it "returns only the last extension of a file with several dots" do
    File.extname("a.b.c.d.e").should == ".e"
  end

  it "accepts an object that has a #to_path method" do
    File.extname(mock_to_path("a.b.c.d.e")).should == ".e"
  end

  it "raises a TypeError if not passed a String type" do
    lambda { File.extname(nil)   }.should raise_error(TypeError)
    lambda { File.extname(0)     }.should raise_error(TypeError)
    lambda { File.extname(true)  }.should raise_error(TypeError)
    lambda { File.extname(false) }.should raise_error(TypeError)
  end

  it "raises an ArgumentError if not passed one argument" do
    lambda { File.extname }.should raise_error(ArgumentError)
    lambda { File.extname("foo.bar", "foo.baz") }.should raise_error(ArgumentError)
  end

  with_feature :encoding do

    it "returns the extension for a multibyte filename" do
      File.extname('Имя.m4a').should == ".m4a"
    end

  end
end
