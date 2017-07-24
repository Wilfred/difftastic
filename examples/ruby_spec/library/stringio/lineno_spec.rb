require File.expand_path('../../../spec_helper', __FILE__)
require "stringio"

describe "StringIO#lineno" do
  before :each do
    @io = StringIO.new("this\nis\nan\nexample")
  end

  it "returns the number of lines read" do
    @io.gets
    @io.gets
    @io.gets
    @io.lineno.should eql(3)
  end
end

describe "StringIO#lineno=" do
  before :each do
    @io = StringIO.new("this\nis\nan\nexample")
  end

  it "sets the current line number, but has no impact on the position" do
    @io.lineno = 3
    @io.pos.should eql(0)

    @io.gets.should == "this\n"
    @io.lineno.should eql(4)
    @io.pos.should eql(5)
  end
end
