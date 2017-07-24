require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.file" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "returns the current file object on each file" do
    argf [@file1, @file2] do
      result = []
      # returns first current file even when not yet open
      result << @argf.file.path
      result << @argf.file.path while @argf.gets
      # returns last current file even when closed
      result << @argf.file.path
      result.should == [@file1, @file1, @file1, @file2, @file2, @file2]
    end
  end
end
