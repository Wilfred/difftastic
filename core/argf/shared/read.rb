describe :argf_read, shared: true do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @stdin_name = fixture __FILE__, "stdin.txt"

    @file1 = File.read @file1_name
    @stdin = File.read @stdin_name
  end

  it "treats second nil argument as no output buffer" do
    argf [@file1_name] do
      @argf.send(@method, @file1.size, nil).should == @file1
    end
  end

  it "treats second argument as an output buffer" do
    argf [@file1_name] do
      buffer = ""
      @argf.send(@method, @file1.size, buffer)
      buffer.should == @file1
    end
  end

  it "clears output buffer before appending to it" do
    argf [@file1_name] do
      buffer = "to be cleared"
      @argf.send(@method, @file1.size, buffer)
      buffer.should == @file1
    end
  end

  it "reads a number of bytes from the first file" do
    argf [@file1_name] do
      @argf.send(@method, 5).should == @file1[0, 5]
    end
  end

  it "reads from a single file consecutively" do
    argf [@file1_name] do
      @argf.send(@method, 1).should == @file1[0, 1]
      @argf.send(@method, 2).should == @file1[1, 2]
      @argf.send(@method, 3).should == @file1[3, 3]
    end
  end

  it "reads a number of bytes from stdin" do
    stdin = ruby_exe("print ARGF.#{@method}(10)", :args => "< #{@stdin_name}")
    stdin.should == @stdin[0, 10]
  end

  platform_is_not :windows do
    it "reads the contents of a special device file" do
      argf ['/dev/zero'] do
        @argf.send(@method, 100).should == "\000" * 100
      end
    end
  end
end
