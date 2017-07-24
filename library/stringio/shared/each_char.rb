# -*- encoding: utf-8 -*-
describe :stringio_each_char, shared: true do
  before :each do
    @io = StringIO.new("xyz äöü")
  end

  it "yields each character code in turn" do
    seen = []
    @io.send(@method) { |c| seen << c }
    seen.should == ["x", "y", "z", " ", "ä", "ö", "ü"]
  end

  it "returns self" do
    @io.send(@method) {}.should equal(@io)
  end

  it "returns an Enumerator when passed no block" do
    enum = @io.send(@method)
    enum.instance_of?(Enumerator).should be_true

    seen = []
    enum.each { |c| seen << c }
    seen.should == ["x", "y", "z", " ", "ä", "ö", "ü"]
  end
end

describe :stringio_each_char_not_readable, shared: true do
  it "raises an IOError" do
    io = StringIO.new("xyz", "w")
    lambda { io.send(@method) { |b| b } }.should raise_error(IOError)

    io = StringIO.new("xyz")
    io.close_read
    lambda { io.send(@method) { |b| b } }.should raise_error(IOError)
  end
end
