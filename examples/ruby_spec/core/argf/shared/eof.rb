describe :argf_eof, shared: true do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "returns true when reaching the end of a file" do
    argf [@file1, @file2] do
      result = []
      while @argf.gets
        result << @argf.send(@method)
      end
      result.should == [false, true, false, true]
    end
  end

  it "raises IOError when called on a closed stream" do
    argf [@file1] do
      @argf.read
      lambda { @argf.send(@method) }.should raise_error(IOError)
    end
  end
end
