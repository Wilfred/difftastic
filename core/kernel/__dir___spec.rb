require File.expand_path('../../../spec_helper', __FILE__)

describe "Kernel#__dir__" do
  it "returns the real name of the directory containing the currently-executing file" do
    __dir__.should == File.realpath(File.dirname(__FILE__))
  end

  context "when used in eval with top level binding" do
    it "returns the real name of the directory containing the currently-executing file" do
      eval("__dir__", binding).should == File.realpath(File.dirname(__FILE__))
    end
  end
end
