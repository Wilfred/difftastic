require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)

describe "Range#eql?" do
  it_behaves_like(:range_eql, :eql?)

  it "returns false if the endpoints are not eql?" do
    (0..1).send(@method, 0..1.0).should == false
  end
end
