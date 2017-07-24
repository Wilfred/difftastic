require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread.main" do
  it "returns the main thread" do
    Thread.new { @main = Thread.main ; @current = Thread.current}.join
    @main.should_not == @current
    @main.should == Thread.current
  end
end
