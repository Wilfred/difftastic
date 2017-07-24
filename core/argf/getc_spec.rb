require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/getc', __FILE__)

describe "ARGF.getc" do
  it_behaves_like :argf_getc, :getc
end

describe "ARGF.getc" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  it "returns nil when end of stream reached" do
    argf [@file1, @file2] do
      @argf.read
      @argf.getc.should == nil
    end
  end
end
