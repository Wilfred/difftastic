# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "String#b" do
  with_feature :encoding do
    it "returns an ASCII-8BIT encoded string" do
      "Hello".b.should == "Hello".force_encoding(Encoding::ASCII_8BIT)
      "こんちには".b.should == "こんちには".force_encoding(Encoding::ASCII_8BIT)
    end

    it "returns new string without modifying self" do
      str = "こんちには"
      str.b.should_not equal(str)
      str.should == "こんちには"
    end

    it "copies own tainted/untrusted status to the returning value" do
      utf_8 = "こんちには".taint.untrust
      ret = utf_8.b
      ret.tainted?.should be_true
      ret.untrusted?.should be_true
    end
  end
end
