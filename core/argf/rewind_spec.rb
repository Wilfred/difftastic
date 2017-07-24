require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.rewind" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @file1 = File.readlines @file1_name
    @file2 = File.readlines @file2_name
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "goes back to beginning of current file" do
    argf [@file1_name, @file2_name] do
      @argf.gets
      @argf.rewind
      @argf.gets.should == @file1.first

      @argf.gets # finish reading file1

      @argf.gets
      @argf.rewind
      @argf.gets.should == @file2.first
    end
  end

  it "resets ARGF.lineno to 0" do
    script = fixture __FILE__, "rewind.rb"
    out = ruby_exe(script, args: [@file1_name, @file2_name])
    out.should == "0\n1\n0\n"
  end

  it "raises an ArgumentError when end of stream reached" do
    argf [@file1_name, @file2_name] do
      @argf.read
      lambda { @argf.rewind }.should raise_error(ArgumentError)
    end
  end
end
