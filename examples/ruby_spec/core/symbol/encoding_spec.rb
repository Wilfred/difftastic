# encoding: utf-8

require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol#encoding for ASCII symbols" do
  it "is US-ASCII" do
    :foo.encoding.name.should == "US-ASCII"
  end

  it "is US-ASCII after converting to string" do
    :foo.to_s.encoding.name.should == "US-ASCII"
  end
end

describe "Symbol#encoding for UTF-8 symbols" do
  it "is UTF-8" do
    :åäö.encoding.name.should == "UTF-8"
  end

  it "is UTF-8 after converting to string" do
    :åäö.to_s.encoding.name.should == "UTF-8"
  end
end
