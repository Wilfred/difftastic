require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.to_s" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  it "returns 'ARGF'" do
    argf [@file1, @file2] do
      @argf.to_s.should == "ARGF"
    end
  end
end
