# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol#swapcase" do
  it "returns a Symbol" do
    :glark.swapcase.should be_an_instance_of(Symbol)
  end

  it "converts lowercase ASCII characters to their uppercase equivalents" do
    :lower.swapcase.should == :LOWER
  end

  it "converts uppercase ASCII characters to their lowercase equivalents" do
    :UPPER.swapcase.should == :upper
  end

  it "works with both upper- and lowercase ASCII characters in the same Symbol" do
    :mIxEd.swapcase.should == :MiXeD
  end

  ruby_version_is ''...'2.4' do
    it "leaves uppercase Unicode characters as they were" do
      "\u{00DE}Bc".to_sym.swapcase.should == :"ÞbC"
    end

    it "leaves lowercase Unicode characters as they were" do
      "\u{00DF}Bc".to_sym.swapcase.should == :"ßbC"
    end
  end

  it "leaves non-alphabetic ASCII characters as they were" do
    "Glark?!?".to_sym.swapcase.should == :"gLARK?!?"
  end
end
