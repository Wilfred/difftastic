require File.expand_path('../../../spec_helper', __FILE__)

describe "IO#ungetbyte" do
  before :each do
    @name = tmp("io_ungetbyte")
    touch(@name) { |f| f.write "a" }
    @io = new_io @name, "r"
  end

  after :each do
    @io.close unless @io.closed?
    rm_r @name
  end

  it "does nothing when passed nil" do
    @io.ungetbyte(nil).should be_nil
    @io.getbyte.should == 97
  end

  it "puts back each byte in a String argument" do
    @io.ungetbyte("cat").should be_nil
    @io.getbyte.should == 99
    @io.getbyte.should == 97
    @io.getbyte.should == 116
    @io.getbyte.should == 97
  end

  it "calls #to_str to convert the argument" do
    str = mock("io ungetbyte")
    str.should_receive(:to_str).and_return("dog")

    @io.ungetbyte(str).should be_nil
    @io.getbyte.should == 100
    @io.getbyte.should == 111
    @io.getbyte.should == 103
    @io.getbyte.should == 97
  end

  it "puts back one byte for an Integer argument" do
    @io.ungetbyte(4095).should be_nil
    @io.getbyte.should == 255
  end

  it "raises an IOError if the IO is closed" do
    @io.close
    lambda { @io.ungetbyte(42) }.should raise_error(IOError)
  end
end
