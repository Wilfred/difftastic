require File.expand_path('../../../spec_helper', __FILE__)

describe "SystemStackError" do
  it "is a subclass of Exception" do
    SystemStackError.superclass.should == Exception
  end
end
