# -*- encoding: utf-8 -*-
describe :stringio_codepoints, shared: true do
  before :each do
    @io = StringIO.new("∂φ/∂x = gaîté")
    @enum = @io.send(@method)
  end

  it "returns an Enumerator" do
    @enum.should be_an_instance_of(Enumerator)
  end

  it "yields each codepoint code in turn" do
    @enum.to_a.should == [8706, 966, 47, 8706, 120, 32, 61, 32, 103, 97, 238, 116, 233]
  end

  it "yields each codepoint starting from the current position" do
    @io.pos = 15
    @enum.to_a.should == [238, 116, 233]
  end

  it "raises an error if reading invalid sequence" do
    @io.pos = 1  # inside of a multibyte sequence
    lambda { @enum.first }.should raise_error(ArgumentError)
  end

  it "raises an IOError if not readable" do
    @io.close_read
    lambda { @enum.to_a }.should raise_error(IOError)

    io = StringIO.new("xyz", "w")
    lambda { io.send(@method).to_a }.should raise_error(IOError)
  end


  it "calls the given block" do
    r  = []
    @io.send(@method){|c| r << c }
    r.should == [8706, 966, 47, 8706, 120, 32, 61, 32, 103, 97, 238, 116, 233]
  end

  it "returns self" do
    @io.send(@method) {|l| l }.should equal(@io)
  end

end
