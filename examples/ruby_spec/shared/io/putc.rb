# -*- encoding: ascii-8bit -*-
describe :io_putc, shared: true do
  after :each do
    @io.close if @io && !@io.closed?
    @io_object = nil
    rm_r @name
  end

  describe "with a Fixnum argument" do
    it "writes one character as a String" do
      @io.should_receive(:write).with("A")
      @io_object.send(@method, 65).should == 65
    end

    it "writes the low byte as a String" do
      @io.should_receive(:write).with("A")
      @io_object.send(@method, 0x2441).should == 0x2441
    end
  end

  describe "with a String argument" do
    it "writes one character" do
      @io.should_receive(:write).with("B")
      @io_object.send(@method, "B").should == "B"
    end

    it "writes the first character" do
      @io.should_receive(:write).with("R")
      @io_object.send(@method, "Ruby").should == "Ruby"
    end
  end

  it "calls #to_int to convert an object to an Integer" do
    obj = mock("kernel putc")
    obj.should_receive(:to_int).and_return(65)

    @io.should_receive(:write).with("A")
    @io_object.send(@method, obj).should == obj
  end

  it "raises IOError on a closed stream" do
    @io.close
    lambda { @io_object.send(@method, "a") }.should raise_error(IOError)
  end

  it "raises a TypeError when passed nil" do
    lambda { @io_object.send(@method, nil) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed false" do
    lambda { @io_object.send(@method, false) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed true" do
    lambda { @io_object.send(@method, true) }.should raise_error(TypeError)
  end
end
