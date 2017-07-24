# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "String#unicode_normalized?" do
  before :each do
    @nfc_normalized_str = "\u1e9b\u0323"
    @nfd_normalized_str = "\u017f\u0323\u0307"
    @nfkc_normalized_str = "\u1e69"
    @nfkd_normalized_str = "\u0073\u0323\u0307"
  end

  it "returns true if string is in the specified normalization form" do
    @nfc_normalized_str.unicode_normalized?(:nfc).should == true
    @nfd_normalized_str.unicode_normalized?(:nfd).should == true
    @nfkc_normalized_str.unicode_normalized?(:nfkc).should == true
    @nfkd_normalized_str.unicode_normalized?(:nfkd).should == true
  end

  it "returns false if string is not in the supplied normalization form" do
    @nfd_normalized_str.unicode_normalized?(:nfc).should == false
    @nfc_normalized_str.unicode_normalized?(:nfd).should == false
    @nfc_normalized_str.unicode_normalized?(:nfkc).should == false
    @nfc_normalized_str.unicode_normalized?(:nfkd).should == false
  end

  it "defaults to the nfc normalization form if no forms are specified" do
    @nfc_normalized_str.unicode_normalized?.should == true
    @nfd_normalized_str.unicode_normalized?.should == false
  end

  it "returns true if string is empty" do
    "".unicode_normalized?.should == true
  end

  it "returns true if string does not contain any unicode codepoints" do
    "abc".unicode_normalized?.should == true
  end

  it "raises an Encoding::CompatibilityError if the string is not in an unicode encoding" do
    lambda { @nfc_normalized_str.force_encoding("ISO-8859-1").unicode_normalized? }.should raise_error(Encoding::CompatibilityError)
  end

  it "raises an ArgumentError if the specified form is invalid" do
    lambda { @nfc_normalized_str.unicode_normalized?(:invalid_form) }.should raise_error(ArgumentError)
  end

  it "returns true if str is in Unicode normalization form (nfc)" do
    str = "a\u0300"
    str.unicode_normalized?(:nfc).should be_false
    str.unicode_normalize!(:nfc)
    str.unicode_normalized?(:nfc).should be_true
  end

  it "returns true if str is in Unicode normalization form (nfd)" do
    str = "a\u00E0"
    str.unicode_normalized?(:nfd).should be_false
    str.unicode_normalize!(:nfd)
    str.unicode_normalized?(:nfd).should be_true
  end

  it "returns true if str is in Unicode normalization form (nfkc)" do
    str = "a\u0300"
    str.unicode_normalized?(:nfkc).should be_false
    str.unicode_normalize!(:nfkc)
    str.unicode_normalized?(:nfkc).should be_true
  end

  it "returns true if str is in Unicode normalization form (nfkd)" do
    str = "a\u00E0"
    str.unicode_normalized?(:nfkd).should be_false
    str.unicode_normalize!(:nfkd)
    str.unicode_normalized?(:nfkd).should be_true
  end
end
