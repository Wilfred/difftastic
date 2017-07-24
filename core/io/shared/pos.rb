describe :io_pos, shared: true do
  before :each do
    @fname = tmp('test.txt')
    File.open(@fname, 'w') { |f| f.write "123" }
  end

  after :each do
    rm_r @fname
  end

  it "gets the offset" do
    File.open @fname do |f|
      f.send(@method).should == 0
      f.read 1
      f.send(@method).should == 1
      f.read 2
      f.send(@method).should == 3
    end
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.send(@method) }.should raise_error(IOError)
  end

  it "resets #eof?" do
    open @fname do |io|
      io.read 1
      io.read 1
      io.send(@method)
      io.eof?.should == false
    end
  end
end

describe :io_set_pos, shared: true do
  before :each do
    @fname = tmp('test.txt')
    File.open(@fname, 'w') { |f| f.write "123" }
  end

  after :each do
    rm_r @fname
  end

  it "sets the offset" do
    File.open @fname do |f|
      val1 = f.read 1
      f.send @method, 0
      f.read(1).should == val1
    end
  end

  it "converts arguments to Integers" do
    File.open @fname do |io|
      o = mock("o")
      o.should_receive(:to_int).and_return(1)

      io.send @method, o
      io.pos.should == 1
    end
  end

  it "does not accept Bignums that don't fit in a C long" do
    File.open @fname do |io|
      lambda { io.send @method, 2**128 }.should raise_error(RangeError)
    end
  end

  it "raises IOError on closed stream" do
    lambda { IOSpecs.closed_io.send @method, 0 }.should raise_error(IOError)
  end
end
