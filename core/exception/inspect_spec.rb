require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Exception#inspect" do
  it "returns '#<Exception: Exception>' when no message given" do
    Exception.new.inspect.should == "#<Exception: Exception>"
  end

  it "includes #to_s when the result is non-empty" do
    ExceptionSpecs::OverrideToS.new.inspect.should == "#<ExceptionSpecs::OverrideToS: this is from #to_s>"
  end

  it "returns the class name when #to_s returns an empty string" do
    ExceptionSpecs::EmptyToS.new.inspect.should == "ExceptionSpecs::EmptyToS"
  end

  it "returns the derived class name with a subclassed Exception" do
    ExceptionSpecs::UnExceptional.new.inspect.should == "#<ExceptionSpecs::UnExceptional: ExceptionSpecs::UnExceptional>"
  end
end
