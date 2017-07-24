describe :argf_fileno, shared: true do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "returns the current file number on each file" do
    argf [@file1, @file2] do
      result = []
      # returns first current file even when not yet open
      result << @argf.send(@method) while @argf.gets
      # returns last current file even when closed
      result.map { |d| d.class }.should == [Fixnum, Fixnum, Fixnum, Fixnum]
    end
  end

  it "raises an ArgumentError when called on a closed stream" do
    argf [@file1] do
      @argf.read
      lambda { @argf.send(@method) }.should raise_error(ArgumentError)
    end
  end
end
