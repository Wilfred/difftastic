describe :argf_filename, shared: true do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "returns the current file name on each file" do
    argf [@file1, @file2] do
      result = []
      # returns first current file even when not yet open
      result << @argf.send(@method)
      result << @argf.send(@method) while @argf.gets
      # returns last current file even when closed
      result << @argf.send(@method)

      result.map! { |f| File.expand_path(f) }
      result.should == [@file1, @file1, @file1, @file2, @file2, @file2]
    end
  end

  # NOTE: this test assumes that fixtures files have two lines each
  it "sets the $FILENAME global variable with the current file name on each file" do
    script = fixture __FILE__, "filename.rb"
    out = ruby_exe(script, args: [@file1, @file2])
    out.should == "#{@file1}\n#{@file1}\n#{@file2}\n#{@file2}\n#{@file2}\n"
  end
end
