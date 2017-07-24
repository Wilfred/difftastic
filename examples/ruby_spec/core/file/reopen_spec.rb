require File.expand_path('../../../spec_helper', __FILE__)

describe "File#reopen" do
  before :each do
    @name_a = tmp("file_reopen_a.txt")
    @name_b = tmp("file_reopen_b.txt")
    @content_a = "File#reopen a"
    @content_b = "File#reopen b"

    touch(@name_a) { |f| f.write @content_a }
    touch(@name_b) { |f| f.write @content_b }

    @file = nil
  end

  after :each do
    @file.close if @file and not @file.closed?
    rm_r @name_a, @name_b
  end

  it "resets the stream to a new file path" do
    file = File.new @name_a, "r"
    file.read.should == @content_a
    @file = file.reopen(@name_b, "r")
    @file.read.should == @content_b
  end

  it "calls #to_path to convern an Object" do
    @file = File.new(@name_a).reopen(mock_to_path(@name_b), "r")
    @file.read.should == @content_b
  end
end
