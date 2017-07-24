require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.closed?" do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"
  end

  it "returns true if the current stream has been closed" do
    argf [@file1_name, @file2_name] do
      stream = @argf.to_io
      stream.close

      @argf.closed?.should be_true
      stream.reopen(@argf.filename, 'r')
    end
  end
end
