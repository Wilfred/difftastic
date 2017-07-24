require File.expand_path('../../../spec_helper', __FILE__)
require 'strscan'

describe "StringScanner#initialize" do
  before :each do
    @s = StringScanner.new("This is a test")
  end

  it "is a private method" do
    StringScanner.should have_private_instance_method(:initialize)
  end

  it "returns an instance of StringScanner" do
    @s.should be_kind_of(StringScanner)
    @s.tainted?.should be_false
    @s.eos?.should be_false
  end

  it "converts the argument into a string using #to_str" do
    m = mock(:str)

    s = "test"
    m.should_receive(:to_str).and_return(s)

    scan = StringScanner.new(m)
    scan.string.should == s
  end
end
