describe :argf_pos, shared: true do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  it "gives the correct position for each read operation" do
    argf [@file1, @file2] do
      size1 = File.size(@file1)
      size2 = File.size(@file2)

      @argf.read(2)
      @argf.send(@method).should == 2
      @argf.read(size1-2)
      @argf.send(@method).should == size1
      @argf.read(6)
      @argf.send(@method).should == 6
      @argf.rewind
      @argf.send(@method).should == 0
      @argf.read(size2)
      @argf.send(@method).should == size2
    end
  end

  it "raises an ArgumentError when called on a closed stream" do
    argf [@file1] do
      @argf.read
      lambda { @argf.send(@method) }.should raise_error(ArgumentError)
    end
  end
end
