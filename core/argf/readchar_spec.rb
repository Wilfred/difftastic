require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/getc', __FILE__)

describe "ARGF.getc" do
  it_behaves_like :argf_getc, :readchar
end

describe "ARGF.readchar" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  it "raises EOFError when end of stream reached" do
    argf [@file1, @file2] do
      lambda { while @argf.readchar; end }.should raise_error(EOFError)
    end
  end
end
