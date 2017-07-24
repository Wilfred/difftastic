require File.expand_path('../../../../spec_helper', __FILE__)
require 'rexml/document'

describe "REXML::Text#<=>" do
  before :each do
    @first = REXML::Text.new("abc")
    @last = REXML::Text.new("def")
  end

  it "returns -1 if lvalue is less than rvalue" do
    val = @first <=> @last
    val.should == -1
  end

  it "returns -1 if lvalue is greater than rvalue" do
    val = @last <=> @first
    val.should == 1
  end

  it "returns 0 if both values are equal" do
    tmp = REXML::Text.new("tmp")
    val = tmp <=> tmp
    val.should == 0
  end
end
