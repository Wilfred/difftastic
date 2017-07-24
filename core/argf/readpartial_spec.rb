require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/read', __FILE__)

describe "ARGF.readpartial" do
  it_behaves_like :argf_read, :readpartial

  before :each do
    @file1_name = fixture __FILE__, "file1.txt"
    @file2_name = fixture __FILE__, "file2.txt"
    @stdin_name = fixture __FILE__, "stdin.txt"

    @file1 = File.read @file1_name
    @file2 = File.read @file2_name
    @stdin = File.read @stdin_name
  end

  it "raises an ArgumentError if called without a maximum read length" do
    argf [@file1_name] do
      lambda { @argf.readpartial }.should raise_error(ArgumentError)
    end
  end

  it "reads maximum number of bytes from one file at a time" do
    argf [@file1_name, @file2_name] do
      len = @file1.size + @file2.size
      @argf.readpartial(len).should == @file1
    end
  end

  it "clears output buffer even if EOFError is raised because @argf is at end" do
    begin
      output = "to be cleared"

      argf [@file1_name] do
        @argf.read
        @argf.readpartial(1, output)
      end
    rescue EOFError
      output.should == ""
    end
  end

  it "reads maximum number of bytes from one file at a time" do
    argf [@file1_name, @file2_name] do
      len = @file1.size + @file2.size
      @argf.readpartial(len).should == @file1
    end
  end

  it "returns an empty string if EOFError is raised while reading any but the last file" do
    argf [@file1_name, @file2_name] do
      @argf.readpartial(@file1.size)
      @argf.readpartial(1).should == ""
    end
  end

  ruby_version_is "2.3" do
    it "raises an EOFError if the exception was raised while reading the last file" do
      argf [@file1_name, @file2_name] do
        @argf.readpartial(@file1.size)
        @argf.readpartial(1)
        @argf.readpartial(@file2.size)
        lambda { @argf.readpartial(1) }.should raise_error(EOFError)
        lambda { @argf.readpartial(1) }.should raise_error(EOFError)
      end
    end
  end

  it "raises an EOFError if the exception was raised while reading STDIN" do
    ruby_str = <<-STR
      print ARGF.readpartial(#{@stdin.size})
      ARGF.readpartial(1) rescue print $!.class
    STR
    stdin = ruby_exe(ruby_str, args: "< #{@stdin_name}", escape: true)
    stdin.should == @stdin + "EOFError"
  end
end
