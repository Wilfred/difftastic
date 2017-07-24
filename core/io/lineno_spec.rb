require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "IO#lineno" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "raises an IOError on a closed stream" do
    lambda { IOSpecs.closed_io.lineno }.should raise_error(IOError)
  end

  it "returns the current line number" do
    @io.lineno.should == 0

    count = 0
    while @io.gets
      @io.lineno.should == count += 1
    end

    @io.rewind
    @io.lineno.should == 0
  end
end

describe "IO#lineno=" do
  before :each do
    @io = IOSpecs.io_fixture "lines.txt"
  end

  after :each do
    @io.close if @io
  end

  it "raises an IOError on a closed stream" do
    lambda { IOSpecs.closed_io.lineno = 5 }.should raise_error(IOError)
  end

  it "calls #to_int on a non-numeric argument" do
    obj = mock('123')
    obj.should_receive(:to_int).and_return(123)

    @io.lineno = obj
    @io.lineno.should == 123
  end

  it "truncates a Float argument" do
    @io.lineno = 1.5
    @io.lineno.should == 1

    @io.lineno = 92233.72036854775808
    @io.lineno.should == 92233
  end

  it "raises TypeError on nil argument" do
    lambda { @io.lineno = nil }.should raise_error(TypeError)
  end

  it "sets the current line number to the given value" do
    @io.lineno = count = 500

    while @io.gets
      @io.lineno.should == count += 1
    end

    @io.rewind
    @io.lineno.should == 0
  end

  it "does not change $." do
    original_line = $.
    numbers = [-2**30, -2**16, -2**8, -100, -10, -1, 0, 1, 10, 2**8, 2**16, 2**30]
    numbers.each do |num|
      @io.lineno = num
      @io.lineno.should == num
      $..should == original_line
    end
  end

  it "does not change $. until next read" do
    $. = 0
    $..should == 0

    @io.lineno = count = 500
    $..should == 0

    while @io.gets
      $..should == count += 1
    end
  end
end
