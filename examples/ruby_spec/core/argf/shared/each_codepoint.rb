describe :argf_each_codepoint, shared: true do
  before :each do
    file1_name = fixture __FILE__, "file1.txt"
    file2_name = fixture __FILE__, "file2.txt"
    @filenames = [file1_name, file2_name]

    @codepoints = File.read(file1_name).codepoints
    @codepoints.concat File.read(file2_name).codepoints
  end

  it "is a public method" do
    argf @filenames do
      @argf.public_methods(false).should include(@method)
    end
  end

  it "does not require arguments" do
    argf @filenames do
      @argf.method(@method).arity.should == 0
    end
  end

  it "returns self when passed a block" do
    argf @filenames do
      @argf.send(@method) {}.should equal(@argf)
    end
  end

  it "returns an Enumerator when passed no block" do
    argf @filenames do
      @argf.send(@method).should be_an_instance_of(Enumerator)
    end
  end

  it "yields each codepoint of all streams" do
    argf @filenames do
      @argf.send(@method).to_a.should == @codepoints
    end
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      argf @filenames do
        @argf.send(@method).should be_an_instance_of(Enumerator)
      end
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          argf @filenames do
            @argf.send(@method).size.should == nil
          end
        end
      end
    end
  end
end
