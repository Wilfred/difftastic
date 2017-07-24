require File.expand_path('../../../../spec_helper', __FILE__)
require 'matrix'

describe "Vector#eql?" do
  before do
    @vector = Vector[1, 2, 3, 4, 5]
  end

  it "returns true for self" do
    @vector.eql?(@vector).should be_true
  end

  it "returns false when there are a pair corresponding elements which are not equal in the sense of Kernel#eql?" do
    @vector.eql?(Vector[1, 2, 3, 4, 5.0]).should be_false
  end
end
