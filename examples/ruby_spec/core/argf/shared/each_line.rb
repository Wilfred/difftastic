describe :argf_each_line, shared: true do
  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"

    @lines  = File.readlines @file1_name
    @lines += File.readlines @file2_name
  end

  it "is a public method" do
    argf [@file1_name, @file2_name] do
      @argf.public_methods(false).should include(@method)
    end
  end

  it "requires multiple arguments" do
    argf [@file1_name, @file2_name] do
      @argf.method(@method).arity.should < 0
    end
  end

  it "reads each line of files" do
    argf [@file1_name, @file2_name] do
      lines = []
      @argf.send(@method) { |b| lines << b }
      lines.should == @lines
    end
  end

  it "returns self when passed a block" do
    argf [@file1_name, @file2_name] do
      @argf.send(@method) {}.should equal(@argf)
    end
  end

  describe "with a separator" do
    it "yields each separated section of all streams" do
      argf [@file1_name, @file2_name] do
        @argf.send(@method, '.').to_a.should ==
          (File.readlines(@file1_name, '.') + File.readlines(@file2_name, '.'))
      end
    end
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      argf [@file1_name, @file2_name] do
        @argf.send(@method).should be_an_instance_of(Enumerator)
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
