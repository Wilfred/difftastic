require File.expand_path('../../../spec_helper', __FILE__)

describe "Signal.signame" do
  it "takes a signal name with a well known signal number" do
    Signal.signame(0).should == "EXIT"
  end

  ruby_version_is "2.0"..."2.3" do
    it "raises an ArgumentError if the argument is an invalid signal number" do
      lambda { Signal.signame(-1) }.should raise_error(ArgumentError)
    end
  end

  ruby_version_is "2.3" do
    it "returns nil if the argument is an invalid signal number" do
      Signal.signame(-1).should == nil
    end
  end

  it "raises a TypeError when the passed argument can't be coerced to Integer" do
    lambda { Signal.signame("hello") }.should raise_error(TypeError)
  end
end
