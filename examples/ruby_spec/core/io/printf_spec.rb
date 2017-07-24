require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#printf" do
  before :each do
    @name = tmp("io_printf.txt")
    @io = new_io @name
    @io.sync = true
  end

  after :each do
    @io.close if @io
    rm_r @name
  end

  it "calls #to_str to convert the format object to a String" do
    obj = mock("printf format")
    obj.should_receive(:to_str).and_return("%s")

    @io.printf obj, "printf"
    File.read(@name).should == "printf"
  end

  it "writes the #sprintf formatted string" do
    @io.printf "%d %s", 5, "cookies"
    File.read(@name).should == "5 cookies"
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.printf("stuff") }.should raise_error(IOError)
  end
end
