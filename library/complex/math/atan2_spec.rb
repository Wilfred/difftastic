require File.expand_path('../../../../spec_helper', __FILE__)
require 'complex'
require File.expand_path('../shared/atan2', __FILE__)

describe "Math#atan2" do
  it_behaves_like :complex_math_atan2, :_, IncludesMath.new

  it "is a private instance method" do
    IncludesMath.should have_private_instance_method(:atan2)
  end
end

describe "Math.atan2" do
  it_behaves_like :complex_math_atan2, :_, CMath
end
