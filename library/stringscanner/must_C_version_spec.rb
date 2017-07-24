require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner.must_C_version" do
  it "returns self" do
     StringScanner.must_C_version.should == StringScanner
  end
end
