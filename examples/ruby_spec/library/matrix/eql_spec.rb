require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/equal_value', __FILE__)
require 'matrix'

describe "Matrix#eql?" do
  it_behaves_like(:equal, :eql?)

  it "returns false if some elements are == but not eql?" do
    Matrix[[1, 2],[3, 4]].eql?(Matrix[[1, 2],[3, 4.0]]).should be_false
  end
end
