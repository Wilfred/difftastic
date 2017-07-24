require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#ceil" do
  it "converts self to a Float (using #to_f) and returns the #ceil'ed result" do
    o = mock_numeric("ceil")
    o.should_receive(:to_f).and_return(1 + TOLERANCE)
    o.ceil.should == 2

    o2 = mock_numeric("ceil")
    v = -1 - TOLERANCE
    o2.should_receive(:to_f).and_return(v)
    o2.ceil.should == -1
  end
end
