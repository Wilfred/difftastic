# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#source" do
  it "returns the original string of the pattern" do
    not_supported_on :opal do
      /ab+c/ix.source.should == "ab+c"
    end
    /x(.)xz/.source.should == "x(.)xz"
  end

  it "will remove escape characters" do
    /foo\/bar/.source.should == "foo/bar"
  end

  not_supported_on :opal do
    it "has US-ASCII encoding when created from an ASCII-only \\u{} literal" do
      re = /[\u{20}-\u{7E}]/
      re.source.encoding.should equal(Encoding::US_ASCII)
    end
  end

  not_supported_on :opal do
    it "has UTF-8 encoding when created from a non-ASCII-only \\u{} literal" do
      re = /[\u{20}-\u{7EE}]/
      re.source.encoding.should equal(Encoding::UTF_8)
    end
  end
end
