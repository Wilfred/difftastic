# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#encoding" do
  it "returns an Encoding object" do
    /glar/.encoding.should be_an_instance_of(Encoding)
  end

  it "defaults to US-ASCII if the Regexp contains only US-ASCII character" do
    /ASCII/.encoding.should == Encoding::US_ASCII
  end

  it "returns US_ASCII if the 'n' modifier is supplied and only US-ASCII characters are present" do
    /ASCII/n.encoding.should == Encoding::US_ASCII
  end

  it "returns ASCII-8BIT if the 'n' modifier is supplied and non-US-ASCII characters are present" do
    /\xc2\xa1/n.encoding.should == Encoding::ASCII_8BIT
  end

  it "defaults to UTF-8 if \\u escapes appear" do
    /\u{9879}/.encoding.should == Encoding::UTF_8
  end

  it "defaults to UTF-8 if a literal UTF-8 character appears" do
    /¥/.encoding.should == Encoding::UTF_8
  end

  it "returns UTF-8 if the 'u' modifier is supplied" do
    /ASCII/u.encoding.should == Encoding::UTF_8
  end

  it "returns Windows-31J if the 's' modifier is supplied" do
    /ASCII/s.encoding.should == Encoding::Windows_31J
  end

  it "returns EUC_JP if the 'e' modifier is supplied" do
    /ASCII/e.encoding.should == Encoding::EUC_JP
  end

  it "upgrades the encoding to that of an embedded String" do
    str = "文字化け".encode('euc-jp')
    /#{str}/.encoding.should == Encoding::EUC_JP
  end

  it "ignores the encoding and uses US-ASCII if the string has only ASCII characters" do
    str = "abc".encode('euc-jp')
    str.encoding.should == Encoding::EUC_JP
    /#{str}/.encoding.should == Encoding::US_ASCII
  end

  it "ignores the default_internal encoding" do
    old_internal = Encoding.default_internal
    Encoding.default_internal = Encoding::EUC_JP
    /foo/.encoding.should_not == Encoding::EUC_JP
    Encoding.default_internal = old_internal
  end
end
