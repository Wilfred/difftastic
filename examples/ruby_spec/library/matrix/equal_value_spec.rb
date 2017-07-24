require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)
require 'matrix'

describe "Matrix#==" do
  it_behaves_like(:equal, :==)

  it "returns true if some elements are == but not eql?" do
    Matrix[[1, 2],[3, 4]].should == Matrix[[1, 2],[3, 4.0]]
  end
end
