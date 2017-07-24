describe :argf_each_char, shared: true do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @chars = []
    File.read(@file1_name).each_char { |c| @chars << c }
    File.read(@file2_name).each_char { |c| @chars << c }
  end

  it "yields each char of all streams to the passed block" do
    argf [@file1_name, @file2_name] do
      chars = []
      @argf.send(@method) { |c| chars << c }
      chars.should == @chars
    end
  end

  it "returns self when passed a block" do
    argf [@file1_name, @file2_name] do
      @argf.send(@method) {}.should equal(@argf)
    end
  end

  it "returns an Enumerator when passed no block" do
    argf [@file1_name, @file2_name] do
      enum = @argf.send(@method)
      enum.should be_an_instance_of(Enumerator)

      chars = []
      enum.each { |c| chars << c }
      chars.should == @chars
    end
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      argf [@file1_name, @file2_name] do
        enum = @argf.send(@method)
        enum.should be_an_instance_of(Enumerator)

        chars = []
        enum.each { |c| chars << c }
        chars.should == @chars
      end
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          argf [@file1_name, @file2_name] do
            @argf.send(@method).size.should == nil
          end
        end
      end
    end
  end
end
