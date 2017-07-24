require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.seek" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @file1 = File.readlines @file1_name
    @file2 = File.readlines @file2_name
  end

  it "sets the absolute position relative to beginning of file" do
    argf [@file1_name, @file2_name] do
      @argf.seek 2
      @argf.gets.should == @file1.first[2..-1]
      @argf.seek @file1.first.size
      @argf.gets.should == @file1.last
      @argf.seek 0, IO::SEEK_END
      @argf.gets.should == @file2.first
    end
  end

  it "sets the position relative to current position in file" do
    argf [@file1_name, @file2_name] do
      @argf.seek(0, IO::SEEK_CUR)
      @argf.gets.should == @file1.first
      @argf.seek(-@file1.first.size+2, IO::SEEK_CUR)
      @argf.gets.should == @file1.first[2..-1]
      @argf.seek(1, IO::SEEK_CUR)
      @argf.gets.should == @file1.last[1..-1]
      @argf.seek(3, IO::SEEK_CUR)
      @argf.gets.should == @file2.first
      @argf.seek(@file1.last.size, IO::SEEK_CUR)
      @argf.gets.should == nil
    end
  end

  it "sets the absolute position relative to end of file" do
    argf [@file1_name, @file2_name] do
      @argf.seek(-@file1.first.size-@file1.last.size, IO::SEEK_END)
      @argf.gets.should == @file1.first
      @argf.seek(-6, IO::SEEK_END)
      @argf.gets.should == @file1.last[-6..-1]
      @argf.seek(-4, IO::SEEK_END)
      @argf.gets.should == @file1.last[4..-1]
      @argf.gets.should == @file2.first
      @argf.seek(-6, IO::SEEK_END)
      @argf.gets.should == @file2.last[-6..-1]
    end
  end
end

describe "ARGF.seek" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
  end

  it "takes at least one argument (offset)" do
    argf [@file1_name] do
      lambda { @argf.seek }.should raise_error(ArgumentError)
    end
  end
end
