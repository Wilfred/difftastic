describe :argf_readlines, shared: true do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"

    @lines  = File.readlines(@file1)
    @lines += File.readlines(@file2)
  end

  it "reads all lines of all files" do
    argf [@file1, @file2] do
      @argf.send(@method).should == @lines
    end
  end

  it "returns an empty Array when end of stream reached" do
    argf [@file1, @file2] do
      @argf.read
      @argf.send(@method).should == []
    end
  end
end
