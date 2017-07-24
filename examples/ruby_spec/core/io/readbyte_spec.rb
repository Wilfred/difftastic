require File.expand_path('../../../spec_helper', __FILE__)

describe "IO#readbyte" do
  before :each do
    @io = File.open(__FILE__, 'r')
  end

  after :each do
    @io.close
  end

  it "reads one byte from the stream" do
    byte = @io.readbyte
    byte.should == ?r.getbyte(0)
    @io.pos.should == 1
  end

  it "raises EOFError on EOF" do
    @io.seek(999999)
    lambda do
      @io.readbyte
    end.should raise_error EOFError
  end

  it "needs to be reviewed for spec completeness"
end
