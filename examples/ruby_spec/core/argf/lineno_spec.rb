require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.lineno" do
  before :each do
    @file1 = fixture __FILE__, "file1.txt"
    @file2 = fixture __FILE__, "file2.txt"
  end

  # NOTE: this test assumes that fixtures files have two lines each
  # TODO: break this into four specs
  it "returns the current line number on each file" do
    argf [@file1, @file2] do
      @argf.lineno = 0
      @argf.gets
      @argf.lineno.should == 1
      @argf.gets
      @argf.lineno.should == 2
      @argf.gets
      @argf.lineno.should == 3
      @argf.gets
      @argf.lineno.should == 4
    end
  end

  it "aliases to $." do
    script = fixture __FILE__, "lineno.rb"
    out = ruby_exe(script, args: [@file1, @file2])
    out.should == "0\n1\n2\n"
  end
end
