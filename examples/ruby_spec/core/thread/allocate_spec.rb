require File.expand_path('../../../spec_helper', __FILE__)

describe "Thread.allocate" do
  it "raises a TypeError" do
    lambda {
      Thread.allocate
    }.should raise_error(TypeError)
  end
end
