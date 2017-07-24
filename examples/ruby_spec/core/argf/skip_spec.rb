require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.skip" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @file2 = File.readlines @file2_name
  end

  it "skips the current file" do
    argf [@file1_name, @file2_name] do
      @argf.read(1)
      @argf.skip
      @argf.gets.should == @file2.first
    end
  end

  it "has no effect when called twice in a row" do
    argf [@file1_name, @file2_name] do
      @argf.read(1)
      @argf.skip
      @argf.skip
      @argf.gets.should == @file2.first
    end
  end

  it "has no effect at end of stream" do
    argf [@file1_name, @file2_name] do
      @argf.read
      @argf.skip
      @argf.gets.should == nil
    end
  end

  # This bypasses argf helper because the helper will call argf.file
  # which as a side-effect calls argf.file which will initialize
  # internals of ARGF enough for this to work.
  it "has no effect when nothing has been processed yet" do
    lambda { ARGF.class.new(@file1_name).skip }.should_not raise_error
  end
end
