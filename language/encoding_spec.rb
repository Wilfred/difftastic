# -*- encoding: us-ascii -*-
require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/coding_us_ascii', __FILE__)
require File.expand_path('../fixtures/coding_utf_8', __FILE__)

describe "The __ENCODING__ pseudo-variable" do
  it "is an instance of Encoding" do
    __ENCODING__.should be_kind_of(Encoding)
  end

  it "is US-ASCII by default" do
    __ENCODING__.should == Encoding::US_ASCII
  end

  it "is the evaluated strings's one inside an eval" do
    eval("__ENCODING__".force_encoding("US-ASCII")).should == Encoding::US_ASCII
    eval("__ENCODING__".force_encoding("ASCII-8BIT")).should == Encoding::ASCII_8BIT
  end

  it "is the encoding specified by a magic comment inside an eval" do
    code = "# encoding: ASCII-8BIT\n__ENCODING__".force_encoding("US-ASCII")
    eval(code).should == Encoding::ASCII_8BIT

    code = "# encoding: us-ascii\n__ENCODING__".force_encoding("ASCII-8BIT")
    eval(code).should == Encoding::US_ASCII
  end

  it "is the encoding specified by a magic comment in the file" do
    CodingUS_ASCII.encoding.should == Encoding::US_ASCII
    CodingUTF_8.encoding.should == Encoding::UTF_8
  end

  it "raises a SyntaxError if assigned to" do
    lambda { eval("__ENCODING__ = 1") }.should raise_error(SyntaxError)
  end
end
