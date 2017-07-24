describe :argf_getc, shared: true do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"

    @chars  = File.read @file1
    @chars += File.read @file2
  end

  it "reads each char of files" do
    argf [@file1, @file2] do
      chars = ""
      @chars.size.times { chars << @argf.send(@method) }
      chars.should == @chars
    end
  end
end
