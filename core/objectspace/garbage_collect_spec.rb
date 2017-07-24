require File.expand_path('../../../spec_helper', __FILE__)

describe "ObjectSpace.garbage_collect" do

  it "can be invoked without any exceptions" do
    lambda { ObjectSpace.garbage_collect }.should_not raise_error
  end

  it "doesn't accept any arguments" do
    lambda { ObjectSpace.garbage_collect(1) }.should raise_error(ArgumentError)
  end

  it "ignores the supplied block" do
    lambda { ObjectSpace.garbage_collect {} }.should_not raise_error
  end

  it "always returns nil" do
    ObjectSpace.garbage_collect.should == nil
    ObjectSpace.garbage_collect.should == nil
  end

end
