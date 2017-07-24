require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/gets', __FILE__)

describe "ARGF.readline" do
  it_behaves_like :argf_gets, :readline
end

describe "ARGF.readline" do
  it_behaves_like :argf_gets_inplace_edit, :readline
end

describe "ARGF.readline" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  it "raises an EOFError when reaching end of files" do
    argf [@file1, @file2] do
      lambda { while @argf.readline; end }.should raise_error(EOFError)
    end
  end
end
