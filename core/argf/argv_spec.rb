require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.argv" do
  before :each do
    @file1    = fixture __FILE__, "file1.txt"
    @file2    = fixture __FILE__, "file2.txt"
  end

  it "returns ARGV for the initial ARGF" do
    ARGF.argv.should equal ARGV
  end

  it "returns the remaining arguments to treat" do
    argf [@file1, @file2] do
      # @file1 is stored in current file
      @argf.argv.should == [@file2]
    end
  end
end
