require File.expand_path('../../../spec_helper', __FILE__)

describe "IO#inspect" do
  after :each do
    @r.close if @r && !@r.closed?
    @w.close if @w && !@w.closed?
  end

  it "contains the file descriptor number" do
    @r, @w = IO.pipe
    @r.inspect.should include("fd #{@r.fileno}")
  end

  it "contains \"(closed)\" if the stream is closed" do
    @r, @w = IO.pipe
    @r.close
    @r.inspect.should include("(closed)")
  end

  it "reports IO as its Method object's owner" do
    IO.instance_method(:inspect).owner.should == IO
  end
end
