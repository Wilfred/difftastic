require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)

describe "Range#==" do
  it_behaves_like(:range_eql, :==)

  it "returns true if the endpoints are ==" do
    (0..1).send(@method, 0..1.0).should == true
  end
end
