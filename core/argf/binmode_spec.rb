require File.expand_path('../../../spec_helper', __FILE__)

describe "ARGF.binmode" do
  before :each do
    @file1    = fixture __FILE__, "file1.txt"
    @file2    = fixture __FILE__, "file2.txt"
    @bin_file = fixture __FILE__, "bin_file.txt"
  end

  it "returns self" do
    argf [@bin_file] do
      @argf.binmode.should equal @argf
    end
  end

  platform_is :windows do
    it "puts reading into binmode" do
      argf [@bin_file, @bin_file] do
        @argf.gets.should == "test\n"
        @argf.binmode
        @argf.gets.should == "test\r\n"
      end
    end

    it "puts alls subsequent stream reading through ARGF into binmode" do
      argf [@bin_file, @bin_file] do
        @argf.binmode
        @argf.gets.should == "test\r\n"
        @argf.gets.should == "test\r\n"
      end
    end
  end

  it "sets the file's encoding to ASCII-8BIT" do
    argf [@bin_file, @file1] do
      @argf.binmode
      @argf.binmode?.should == true
      @argf.gets.encoding.should == Encoding::ASCII_8BIT
      @argf.skip
      @argf.read.encoding.should == Encoding::ASCII_8BIT
    end
  end
end
