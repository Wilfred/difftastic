require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.to_io" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "returns the IO of the current file" do
    argf [@file1, @file2] do
      result = []
      4.times do
        @argf.gets
        result << @argf.to_io
      end

      result.each { |io| io.should be_kind_of(IO) }
      result[0].should == result[1]
      result[2].should == result[3]
    end
  end
end
