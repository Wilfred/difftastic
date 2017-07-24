require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/pos', __FILE__)

describe "ARGF.pos" do
  it_behaves_like :argf_pos, :pos
end

describe "ARGF.pos=" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @file1 = File.readlines @file1_name
    @file2 = File.readlines @file2_name
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "sets the correct position in files" do
    argf [@file1_name, @file2_name] do
      @argf.pos = @file1.first.size
      @argf.gets.should == @file1.last
      @argf.pos = 0
      @argf.gets.should == @file1.first

      # finish reading file1
      @argf.gets

      @argf.gets
      @argf.pos = 1
      @argf.gets.should == @file2.first[1..-1]

      @argf.pos = @file2.first.size + @file2.last.size - 1
      @argf.gets.should == @file2.last[-1,1]
      @argf.pos = 1000
      @argf.read.should == ""
    end
  end
end
