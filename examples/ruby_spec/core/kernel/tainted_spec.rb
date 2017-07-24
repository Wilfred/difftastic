require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#tainted?" do
  it "returns true if Object is tainted" do
    o = mock('o')
    p = mock('p')
    p.taint
    o.tainted?.should == false
    p.tainted?.should == true
  end
end
